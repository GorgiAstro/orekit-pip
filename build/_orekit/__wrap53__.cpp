#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadataWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMetadataWriter::class$ = NULL;
            jmethodID *CdmMetadataWriter::mids$ = NULL;
            bool CdmMetadataWriter::live$ = false;

            jclass CdmMetadataWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMetadataWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_179cfd6b1c19aac6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;)V");
                mids$[mid_writeContent_05c6d36d73082fa6] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmMetadataWriter::CdmMetadataWriter(const ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata & a0) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_179cfd6b1c19aac6, a0.this$)) {}
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
            static PyObject *t_CdmMetadataWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadataWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmMetadataWriter_init_(t_CdmMetadataWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_CdmMetadataWriter__methods_[] = {
              DECLARE_METHOD(t_CdmMetadataWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMetadataWriter)[] = {
              { Py_tp_methods, t_CdmMetadataWriter__methods_ },
              { Py_tp_init, (void *) t_CdmMetadataWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMetadataWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(CdmMetadataWriter, t_CdmMetadataWriter, CdmMetadataWriter);

            void t_CdmMetadataWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMetadataWriter), &PY_TYPE_DEF(CdmMetadataWriter), module, "CdmMetadataWriter", 0);
            }

            void t_CdmMetadataWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataWriter), "class_", make_descriptor(CdmMetadataWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataWriter), "wrapfn_", make_descriptor(t_CdmMetadataWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmMetadataWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMetadataWriter::initializeClass, 1)))
                return NULL;
              return t_CdmMetadataWriter::wrap_Object(CdmMetadataWriter(((t_CdmMetadataWriter *) arg)->object.this$));
            }
            static PyObject *t_CdmMetadataWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMetadataWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmMetadataWriter_init_(t_CdmMetadataWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata a0((jobject) NULL);
              CdmMetadataWriter object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata::initializeClass, &a0))
              {
                INT_CALL(object = CdmMetadataWriter(a0));
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
#include "org/hipparchus/analysis/interpolation/TricubicInterpolator.h"
#include "org/hipparchus/analysis/interpolation/TrivariateGridInterpolator.h"
#include "org/hipparchus/analysis/interpolation/TricubicInterpolatingFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *TricubicInterpolator::class$ = NULL;
        jmethodID *TricubicInterpolator::mids$ = NULL;
        bool TricubicInterpolator::live$ = false;

        jclass TricubicInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/TricubicInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_e296d5f094372c97] = env->getMethodID(cls, "interpolate", "([D[D[D[[[D)Lorg/hipparchus/analysis/interpolation/TricubicInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TricubicInterpolator::TricubicInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::hipparchus::analysis::interpolation::TricubicInterpolatingFunction TricubicInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< JArray< jdouble > > > & a3) const
        {
          return ::org::hipparchus::analysis::interpolation::TricubicInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_e296d5f094372c97], a0.this$, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_TricubicInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TricubicInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TricubicInterpolator_init_(t_TricubicInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TricubicInterpolator_interpolate(t_TricubicInterpolator *self, PyObject *args);

        static PyMethodDef t_TricubicInterpolator__methods_[] = {
          DECLARE_METHOD(t_TricubicInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TricubicInterpolator)[] = {
          { Py_tp_methods, t_TricubicInterpolator__methods_ },
          { Py_tp_init, (void *) t_TricubicInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TricubicInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TricubicInterpolator, t_TricubicInterpolator, TricubicInterpolator);

        void t_TricubicInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(TricubicInterpolator), &PY_TYPE_DEF(TricubicInterpolator), module, "TricubicInterpolator", 0);
        }

        void t_TricubicInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolator), "class_", make_descriptor(TricubicInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolator), "wrapfn_", make_descriptor(t_TricubicInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TricubicInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TricubicInterpolator::initializeClass, 1)))
            return NULL;
          return t_TricubicInterpolator::wrap_Object(TricubicInterpolator(((t_TricubicInterpolator *) arg)->object.this$));
        }
        static PyObject *t_TricubicInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TricubicInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TricubicInterpolator_init_(t_TricubicInterpolator *self, PyObject *args, PyObject *kwds)
        {
          TricubicInterpolator object((jobject) NULL);

          INT_CALL(object = TricubicInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_TricubicInterpolator_interpolate(t_TricubicInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::TricubicInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[D[[[D", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2, a3));
            return ::org::hipparchus::analysis::interpolation::t_TricubicInterpolatingFunction::wrap_Object(result);
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
#include "org/orekit/errors/FrameAncestorException.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *FrameAncestorException::class$ = NULL;
      jmethodID *FrameAncestorException::mids$ = NULL;
      bool FrameAncestorException::live$ = false;

      jclass FrameAncestorException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/FrameAncestorException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2436a4119ba97d87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FrameAncestorException::FrameAncestorException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_2436a4119ba97d87, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_FrameAncestorException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FrameAncestorException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FrameAncestorException_init_(t_FrameAncestorException *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_FrameAncestorException__methods_[] = {
        DECLARE_METHOD(t_FrameAncestorException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAncestorException, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FrameAncestorException)[] = {
        { Py_tp_methods, t_FrameAncestorException__methods_ },
        { Py_tp_init, (void *) t_FrameAncestorException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FrameAncestorException)[] = {
        &PY_TYPE_DEF(::org::orekit::errors::OrekitException),
        NULL
      };

      DEFINE_TYPE(FrameAncestorException, t_FrameAncestorException, FrameAncestorException);

      void t_FrameAncestorException::install(PyObject *module)
      {
        installType(&PY_TYPE(FrameAncestorException), &PY_TYPE_DEF(FrameAncestorException), module, "FrameAncestorException", 0);
      }

      void t_FrameAncestorException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAncestorException), "class_", make_descriptor(FrameAncestorException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAncestorException), "wrapfn_", make_descriptor(t_FrameAncestorException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAncestorException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FrameAncestorException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FrameAncestorException::initializeClass, 1)))
          return NULL;
        return t_FrameAncestorException::wrap_Object(FrameAncestorException(((t_FrameAncestorException *) arg)->object.this$));
      }
      static PyObject *t_FrameAncestorException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FrameAncestorException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FrameAncestorException_init_(t_FrameAncestorException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        FrameAncestorException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = FrameAncestorException(a0, a1));
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
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldEventOccurrence::class$ = NULL;
        jmethodID *FieldEventOccurrence::mids$ = NULL;
        bool FieldEventOccurrence::live$ = false;

        jclass FieldEventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldEventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5a42f820f1d34a0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/Action;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getAction_e01ac4830bcfb38f] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_6770505ce94d89af] = env->getMethodID(cls, "getNewState", "()Lorg/hipparchus/ode/FieldODEState;");
            mids$[mid_getStopTime_08d37e3f77b7239d] = env->getMethodID(cls, "getStopTime", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventOccurrence::FieldEventOccurrence(const ::org::hipparchus::ode::events::Action & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5a42f820f1d34a0, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::ode::events::Action FieldEventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_e01ac4830bcfb38f]));
        }

        ::org::hipparchus::ode::FieldODEState FieldEventOccurrence::getNewState() const
        {
          return ::org::hipparchus::ode::FieldODEState(env->callObjectMethod(this$, mids$[mid_getNewState_6770505ce94d89af]));
        }

        ::org::hipparchus::CalculusFieldElement FieldEventOccurrence::getStopTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getStopTime_08d37e3f77b7239d]));
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
        static PyObject *t_FieldEventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventOccurrence_of_(t_FieldEventOccurrence *self, PyObject *args);
        static int t_FieldEventOccurrence_init_(t_FieldEventOccurrence *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventOccurrence_getAction(t_FieldEventOccurrence *self);
        static PyObject *t_FieldEventOccurrence_getNewState(t_FieldEventOccurrence *self);
        static PyObject *t_FieldEventOccurrence_getStopTime(t_FieldEventOccurrence *self);
        static PyObject *t_FieldEventOccurrence_get__action(t_FieldEventOccurrence *self, void *data);
        static PyObject *t_FieldEventOccurrence_get__newState(t_FieldEventOccurrence *self, void *data);
        static PyObject *t_FieldEventOccurrence_get__stopTime(t_FieldEventOccurrence *self, void *data);
        static PyObject *t_FieldEventOccurrence_get__parameters_(t_FieldEventOccurrence *self, void *data);
        static PyGetSetDef t_FieldEventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventOccurrence, action),
          DECLARE_GET_FIELD(t_FieldEventOccurrence, newState),
          DECLARE_GET_FIELD(t_FieldEventOccurrence, stopTime),
          DECLARE_GET_FIELD(t_FieldEventOccurrence, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventOccurrence__methods_[] = {
          DECLARE_METHOD(t_FieldEventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventOccurrence, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventOccurrence, getStopTime, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventOccurrence)[] = {
          { Py_tp_methods, t_FieldEventOccurrence__methods_ },
          { Py_tp_init, (void *) t_FieldEventOccurrence_init_ },
          { Py_tp_getset, t_FieldEventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventOccurrence, t_FieldEventOccurrence, FieldEventOccurrence);
        PyObject *t_FieldEventOccurrence::wrap_Object(const FieldEventOccurrence& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventOccurrence::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventOccurrence *self = (t_FieldEventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventOccurrence::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventOccurrence::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventOccurrence *self = (t_FieldEventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventOccurrence), &PY_TYPE_DEF(FieldEventOccurrence), module, "FieldEventOccurrence", 0);
        }

        void t_FieldEventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventOccurrence), "class_", make_descriptor(FieldEventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventOccurrence), "wrapfn_", make_descriptor(t_FieldEventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventOccurrence::initializeClass, 1)))
            return NULL;
          return t_FieldEventOccurrence::wrap_Object(FieldEventOccurrence(((t_FieldEventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_FieldEventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventOccurrence_of_(t_FieldEventOccurrence *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventOccurrence_init_(t_FieldEventOccurrence *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::Action a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          FieldEventOccurrence object((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::events::Action::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_Action::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = FieldEventOccurrence(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventOccurrence_getAction(t_FieldEventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_FieldEventOccurrence_getNewState(t_FieldEventOccurrence *self)
        {
          ::org::hipparchus::ode::FieldODEState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::hipparchus::ode::t_FieldODEState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventOccurrence_getStopTime(t_FieldEventOccurrence *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }
        static PyObject *t_FieldEventOccurrence_get__parameters_(t_FieldEventOccurrence *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventOccurrence_get__action(t_FieldEventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_FieldEventOccurrence_get__newState(t_FieldEventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::FieldODEState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::hipparchus::ode::t_FieldODEState::wrap_Object(value);
        }

        static PyObject *t_FieldEventOccurrence_get__stopTime(t_FieldEventOccurrence *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/PythonTimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *PythonTimeDerivativesEquations::class$ = NULL;
        jmethodID *PythonTimeDerivativesEquations::mids$ = NULL;
        bool PythonTimeDerivativesEquations::live$ = false;

        jclass PythonTimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/PythonTimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addKeplerContribution_1ad26e8c8c0cd65b] = env->getMethodID(cls, "addKeplerContribution", "(D)V");
            mids$[mid_addMassDerivative_1ad26e8c8c0cd65b] = env->getMethodID(cls, "addMassDerivative", "(D)V");
            mids$[mid_addNonKeplerianAcceleration_30f8886dfb88a63c] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonTimeDerivativesEquations::PythonTimeDerivativesEquations() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonTimeDerivativesEquations::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonTimeDerivativesEquations::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonTimeDerivativesEquations::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace numerical {
        static PyObject *t_PythonTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonTimeDerivativesEquations_init_(t_PythonTimeDerivativesEquations *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonTimeDerivativesEquations_finalize(t_PythonTimeDerivativesEquations *self);
        static PyObject *t_PythonTimeDerivativesEquations_pythonExtension(t_PythonTimeDerivativesEquations *self, PyObject *args);
        static void JNICALL t_PythonTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jdouble a0);
        static void JNICALL t_PythonTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jdouble a0);
        static void JNICALL t_PythonTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonTimeDerivativesEquations_get__self(t_PythonTimeDerivativesEquations *self, void *data);
        static PyGetSetDef t_PythonTimeDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_PythonTimeDerivativesEquations, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonTimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonTimeDerivativesEquations)[] = {
          { Py_tp_methods, t_PythonTimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) t_PythonTimeDerivativesEquations_init_ },
          { Py_tp_getset, t_PythonTimeDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonTimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonTimeDerivativesEquations, t_PythonTimeDerivativesEquations, PythonTimeDerivativesEquations);

        void t_PythonTimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonTimeDerivativesEquations), &PY_TYPE_DEF(PythonTimeDerivativesEquations), module, "PythonTimeDerivativesEquations", 1);
        }

        void t_PythonTimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeDerivativesEquations), "class_", make_descriptor(PythonTimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeDerivativesEquations), "wrapfn_", make_descriptor(t_PythonTimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonTimeDerivativesEquations::initializeClass);
          JNINativeMethod methods[] = {
            { "addKeplerContribution", "(D)V", (void *) t_PythonTimeDerivativesEquations_addKeplerContribution0 },
            { "addMassDerivative", "(D)V", (void *) t_PythonTimeDerivativesEquations_addMassDerivative1 },
            { "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V", (void *) t_PythonTimeDerivativesEquations_addNonKeplerianAcceleration2 },
            { "pythonDecRef", "()V", (void *) t_PythonTimeDerivativesEquations_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonTimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_PythonTimeDerivativesEquations::wrap_Object(PythonTimeDerivativesEquations(((t_PythonTimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_PythonTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonTimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonTimeDerivativesEquations_init_(t_PythonTimeDerivativesEquations *self, PyObject *args, PyObject *kwds)
        {
          PythonTimeDerivativesEquations object((jobject) NULL);

          INT_CALL(object = PythonTimeDerivativesEquations());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonTimeDerivativesEquations_finalize(t_PythonTimeDerivativesEquations *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonTimeDerivativesEquations_pythonExtension(t_PythonTimeDerivativesEquations *self, PyObject *args)
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

        static void JNICALL t_PythonTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "addKeplerContribution", "d", (double) a0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "addMassDerivative", "d", (double) a0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "addNonKeplerianAcceleration", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonTimeDerivativesEquations_get__self(t_PythonTimeDerivativesEquations *self, void *data)
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
#include "org/orekit/forces/maneuvers/trigger/PythonManeuverTriggers.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonManeuverTriggers::class$ = NULL;
          jmethodID *PythonManeuverTriggers::mids$ = NULL;
          bool PythonManeuverTriggers::live$ = false;

          jclass PythonManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addResetter_5392838e44623505] = env->getMethodID(cls, "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V");
              mids$[mid_addResetter_8b21453ce137761f] = env->getMethodID(cls, "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getEventDetectors_11e4ca8182c1933d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_d3db121d9deb0312] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_isFiring_8083fb6b6fb5ee99] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z");
              mids$[mid_isFiring_10e417873abbceb0] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonManeuverTriggers::PythonManeuverTriggers() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonManeuverTriggers::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonManeuverTriggers::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonManeuverTriggers::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          static PyObject *t_PythonManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonManeuverTriggers_init_(t_PythonManeuverTriggers *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonManeuverTriggers_finalize(t_PythonManeuverTriggers *self);
          static PyObject *t_PythonManeuverTriggers_pythonExtension(t_PythonManeuverTriggers *self, PyObject *args);
          static void JNICALL t_PythonManeuverTriggers_addResetter0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonManeuverTriggers_addResetter1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonManeuverTriggers_getEventDetectors2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonManeuverTriggers_getFieldEventDetectors3(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonManeuverTriggers_getParametersDrivers4(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonManeuverTriggers_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jboolean JNICALL t_PythonManeuverTriggers_isFiring6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jboolean JNICALL t_PythonManeuverTriggers_isFiring7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonManeuverTriggers_pythonDecRef8(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonManeuverTriggers_get__self(t_PythonManeuverTriggers *self, void *data);
          static PyGetSetDef t_PythonManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_PythonManeuverTriggers, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_PythonManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggers, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonManeuverTriggers, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonManeuverTriggers)[] = {
            { Py_tp_methods, t_PythonManeuverTriggers__methods_ },
            { Py_tp_init, (void *) t_PythonManeuverTriggers_init_ },
            { Py_tp_getset, t_PythonManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonManeuverTriggers)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonManeuverTriggers, t_PythonManeuverTriggers, PythonManeuverTriggers);

          void t_PythonManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonManeuverTriggers), &PY_TYPE_DEF(PythonManeuverTriggers), module, "PythonManeuverTriggers", 1);
          }

          void t_PythonManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggers), "class_", make_descriptor(PythonManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggers), "wrapfn_", make_descriptor(t_PythonManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggers), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonManeuverTriggers::initializeClass);
            JNINativeMethod methods[] = {
              { "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V", (void *) t_PythonManeuverTriggers_addResetter0 },
              { "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V", (void *) t_PythonManeuverTriggers_addResetter1 },
              { "getEventDetectors", "()Ljava/util/stream/Stream;", (void *) t_PythonManeuverTriggers_getEventDetectors2 },
              { "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;", (void *) t_PythonManeuverTriggers_getFieldEventDetectors3 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonManeuverTriggers_getParametersDrivers4 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonManeuverTriggers_init5 },
              { "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z", (void *) t_PythonManeuverTriggers_isFiring6 },
              { "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z", (void *) t_PythonManeuverTriggers_isFiring7 },
              { "pythonDecRef", "()V", (void *) t_PythonManeuverTriggers_pythonDecRef8 },
            };
            env->registerNatives(cls, methods, 9);
          }

          static PyObject *t_PythonManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_PythonManeuverTriggers::wrap_Object(PythonManeuverTriggers(((t_PythonManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_PythonManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonManeuverTriggers_init_(t_PythonManeuverTriggers *self, PyObject *args, PyObject *kwds)
          {
            PythonManeuverTriggers object((jobject) NULL);

            INT_CALL(object = PythonManeuverTriggers());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonManeuverTriggers_finalize(t_PythonManeuverTriggers *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonManeuverTriggers_pythonExtension(t_PythonManeuverTriggers *self, PyObject *args)
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

          static void JNICALL t_PythonManeuverTriggers_addResetter0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::forces::maneuvers::trigger::t_ManeuverTriggersResetter::wrap_Object(::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter(a0));
            PyObject *result = PyObject_CallMethod(obj, "addResetter", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonManeuverTriggers_addResetter1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::forces::maneuvers::trigger::t_FieldManeuverTriggersResetter::wrap_Object(::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter(a1));
            PyObject *result = PyObject_CallMethod(obj, "addResetter", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static jobject JNICALL t_PythonManeuverTriggers_getEventDetectors2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::stream::Stream value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getEventDetectors", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
            {
              throwTypeError("getEventDetectors", result);
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

          static jobject JNICALL t_PythonManeuverTriggers_getFieldEventDetectors3(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::stream::Stream value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getFieldEventDetectors", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
            {
              throwTypeError("getFieldEventDetectors", result);
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

          static jobject JNICALL t_PythonManeuverTriggers_getParametersDrivers4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_42c72b98e3c2e08a]);
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

          static void JNICALL t_PythonManeuverTriggers_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_42c72b98e3c2e08a]);
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

          static jboolean JNICALL t_PythonManeuverTriggers_isFiring6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "isFiring", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("isFiring", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static jboolean JNICALL t_PythonManeuverTriggers_isFiring7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "isFiring", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("isFiring", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonManeuverTriggers_pythonDecRef8(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonManeuverTriggers_get__self(t_PythonManeuverTriggers *self, void *data)
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
#include "org/orekit/data/PythonDataLoader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataLoader::class$ = NULL;
      jmethodID *PythonDataLoader::mids$ = NULL;
      bool PythonDataLoader::live$ = false;

      jclass PythonDataLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_stillAcceptsData_eee3de00fe971136] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataLoader::PythonDataLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonDataLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonDataLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonDataLoader::pythonExtension(jlong a0) const
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
    namespace data {
      static PyObject *t_PythonDataLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataLoader_init_(t_PythonDataLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataLoader_finalize(t_PythonDataLoader *self);
      static PyObject *t_PythonDataLoader_pythonExtension(t_PythonDataLoader *self, PyObject *args);
      static void JNICALL t_PythonDataLoader_loadData0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonDataLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static jboolean JNICALL t_PythonDataLoader_stillAcceptsData2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataLoader_get__self(t_PythonDataLoader *self, void *data);
      static PyGetSetDef t_PythonDataLoader__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataLoader, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataLoader__methods_[] = {
        DECLARE_METHOD(t_PythonDataLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataLoader, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataLoader, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataLoader)[] = {
        { Py_tp_methods, t_PythonDataLoader__methods_ },
        { Py_tp_init, (void *) t_PythonDataLoader_init_ },
        { Py_tp_getset, t_PythonDataLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataLoader, t_PythonDataLoader, PythonDataLoader);

      void t_PythonDataLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataLoader), &PY_TYPE_DEF(PythonDataLoader), module, "PythonDataLoader", 1);
      }

      void t_PythonDataLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataLoader), "class_", make_descriptor(PythonDataLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataLoader), "wrapfn_", make_descriptor(t_PythonDataLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataLoader), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataLoader::initializeClass);
        JNINativeMethod methods[] = {
          { "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V", (void *) t_PythonDataLoader_loadData0 },
          { "pythonDecRef", "()V", (void *) t_PythonDataLoader_pythonDecRef1 },
          { "stillAcceptsData", "()Z", (void *) t_PythonDataLoader_stillAcceptsData2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonDataLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataLoader::initializeClass, 1)))
          return NULL;
        return t_PythonDataLoader::wrap_Object(PythonDataLoader(((t_PythonDataLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonDataLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataLoader_init_(t_PythonDataLoader *self, PyObject *args, PyObject *kwds)
      {
        PythonDataLoader object((jobject) NULL);

        INT_CALL(object = PythonDataLoader());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataLoader_finalize(t_PythonDataLoader *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataLoader_pythonExtension(t_PythonDataLoader *self, PyObject *args)
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

      static void JNICALL t_PythonDataLoader_loadData0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::java::io::t_InputStream::wrap_Object(::java::io::InputStream(a0));
        PyObject *o1 = env->fromJString((jstring) a1, 0);
        PyObject *result = PyObject_CallMethod(obj, "loadData", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonDataLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jboolean JNICALL t_PythonDataLoader_stillAcceptsData2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataLoader::mids$[PythonDataLoader::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *result = PyObject_CallMethod(obj, "stillAcceptsData", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("stillAcceptsData", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static PyObject *t_PythonDataLoader_get__self(t_PythonDataLoader *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitPhysicalPropertiesKey::class$ = NULL;
              jmethodID *OrbitPhysicalPropertiesKey::mids$ = NULL;
              bool OrbitPhysicalPropertiesKey::live$ = false;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_INT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_MAX_FOR_PC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_MIN_FOR_PC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AREA_TYP_FOR_PC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_ACTUATOR_TYPE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_CONTROL = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_CONTROL_MODE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_KNOWLEDGE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::ATT_POINTING = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::AVG_MANEUVER_FREQ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::BUS_MODEL = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::COMMENT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DOCKED_WITH = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRAG_COEFF_NOM = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRAG_CONST_AREA = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRAG_UNCERTAINTY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DRY_MASS = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DV_BOL = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::DV_REMAINING = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::INITIAL_WET_MASS = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IXX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IXY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IXZ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IYY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IYZ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::IZZ = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::MANUFACTURER = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::MAX_THRUST = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_INT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME_EPOCH = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_Q1 = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_Q2 = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_Q3 = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::OEB_QC = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::RCS = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::RCS_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::RCS_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::REFLECTANCE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::SOLAR_RAD_COEFF = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::SOLAR_RAD_UNCERTAINTY = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::SRP_CONST_AREA = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_ABSOLUTE = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_APPARENT = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_APPARENT_MAX = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::VM_APPARENT_MIN = NULL;
              OrbitPhysicalPropertiesKey *OrbitPhysicalPropertiesKey::WET_MASS = NULL;

              jclass OrbitPhysicalPropertiesKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_bb00c7d6e4e3314d] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties;)Z");
                  mids$[mid_valueOf_d590ffb48ad781b8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;");
                  mids$[mid_values_22d7a6cf0d70cadc] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AREA_ALONG_OEB_INT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_INT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_ALONG_OEB_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_ALONG_OEB_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_ALONG_OEB_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_MAX_FOR_PC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_MAX_FOR_PC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_MIN_FOR_PC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_MIN_FOR_PC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AREA_TYP_FOR_PC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AREA_TYP_FOR_PC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_ACTUATOR_TYPE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_ACTUATOR_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_CONTROL = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_CONTROL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_CONTROL_MODE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_CONTROL_MODE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_KNOWLEDGE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_KNOWLEDGE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  ATT_POINTING = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "ATT_POINTING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  AVG_MANEUVER_FREQ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "AVG_MANEUVER_FREQ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  BUS_MODEL = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "BUS_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  COMMENT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DOCKED_WITH = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DOCKED_WITH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRAG_COEFF_NOM = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_COEFF_NOM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRAG_CONST_AREA = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_CONST_AREA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRAG_UNCERTAINTY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_UNCERTAINTY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DRY_MASS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DRY_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DV_BOL = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DV_BOL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  DV_REMAINING = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "DV_REMAINING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  INITIAL_WET_MASS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "INITIAL_WET_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IXX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IXX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IXY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IXY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IXZ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IXZ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IYY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IYY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IYZ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IYZ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  IZZ = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "IZZ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  MANUFACTURER = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "MANUFACTURER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  MAX_THRUST = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "MAX_THRUST", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_INT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_INT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_PARENT_FRAME = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_PARENT_FRAME_EPOCH = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_PARENT_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_Q1 = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_Q1", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_Q2 = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_Q2", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_Q3 = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_Q3", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  OEB_QC = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "OEB_QC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  RCS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "RCS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  RCS_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "RCS_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  RCS_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "RCS_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  REFLECTANCE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "REFLECTANCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  SOLAR_RAD_COEFF = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "SOLAR_RAD_COEFF", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  SOLAR_RAD_UNCERTAINTY = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "SOLAR_RAD_UNCERTAINTY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  SRP_CONST_AREA = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "SRP_CONST_AREA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_ABSOLUTE = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_ABSOLUTE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_APPARENT = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_APPARENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_APPARENT_MAX = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_APPARENT_MAX", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  VM_APPARENT_MIN = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "VM_APPARENT_MIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  WET_MASS = new OrbitPhysicalPropertiesKey(env->getStaticObjectField(cls, "WET_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitPhysicalPropertiesKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_bb00c7d6e4e3314d], a0.this$, a1.this$, a2.this$);
              }

              OrbitPhysicalPropertiesKey OrbitPhysicalPropertiesKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitPhysicalPropertiesKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d590ffb48ad781b8], a0.this$));
              }

              JArray< OrbitPhysicalPropertiesKey > OrbitPhysicalPropertiesKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitPhysicalPropertiesKey >(env->callStaticObjectMethod(cls, mids$[mid_values_22d7a6cf0d70cadc]));
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
              static PyObject *t_OrbitPhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitPhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitPhysicalPropertiesKey_of_(t_OrbitPhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_OrbitPhysicalPropertiesKey_process(t_OrbitPhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_OrbitPhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitPhysicalPropertiesKey_values(PyTypeObject *type);
              static PyObject *t_OrbitPhysicalPropertiesKey_get__parameters_(t_OrbitPhysicalPropertiesKey *self, void *data);
              static PyGetSetDef t_OrbitPhysicalPropertiesKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitPhysicalPropertiesKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitPhysicalPropertiesKey__methods_[] = {
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalPropertiesKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitPhysicalPropertiesKey)[] = {
                { Py_tp_methods, t_OrbitPhysicalPropertiesKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitPhysicalPropertiesKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitPhysicalPropertiesKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitPhysicalPropertiesKey, t_OrbitPhysicalPropertiesKey, OrbitPhysicalPropertiesKey);
              PyObject *t_OrbitPhysicalPropertiesKey::wrap_Object(const OrbitPhysicalPropertiesKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitPhysicalPropertiesKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitPhysicalPropertiesKey *self = (t_OrbitPhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitPhysicalPropertiesKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitPhysicalPropertiesKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitPhysicalPropertiesKey *self = (t_OrbitPhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitPhysicalPropertiesKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitPhysicalPropertiesKey), &PY_TYPE_DEF(OrbitPhysicalPropertiesKey), module, "OrbitPhysicalPropertiesKey", 0);
              }

              void t_OrbitPhysicalPropertiesKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "class_", make_descriptor(OrbitPhysicalPropertiesKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "wrapfn_", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitPhysicalPropertiesKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_ALONG_OEB_INT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_INT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_ALONG_OEB_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_ALONG_OEB_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_ALONG_OEB_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_MAX_FOR_PC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_MAX_FOR_PC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_MIN_FOR_PC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_MIN_FOR_PC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AREA_TYP_FOR_PC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AREA_TYP_FOR_PC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_ACTUATOR_TYPE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_ACTUATOR_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_CONTROL", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_CONTROL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_CONTROL_MODE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_CONTROL_MODE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_KNOWLEDGE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_KNOWLEDGE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "ATT_POINTING", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::ATT_POINTING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "AVG_MANEUVER_FREQ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::AVG_MANEUVER_FREQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "BUS_MODEL", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::BUS_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "COMMENT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DOCKED_WITH", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DOCKED_WITH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRAG_COEFF_NOM", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRAG_COEFF_NOM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRAG_CONST_AREA", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRAG_CONST_AREA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRAG_UNCERTAINTY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRAG_UNCERTAINTY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DRY_MASS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DRY_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DV_BOL", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DV_BOL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "DV_REMAINING", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::DV_REMAINING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "INITIAL_WET_MASS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::INITIAL_WET_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IXX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IXX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IXY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IXY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IXZ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IXZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IYY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IYY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IYZ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IYZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "IZZ", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::IZZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "MANUFACTURER", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::MANUFACTURER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "MAX_THRUST", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::MAX_THRUST)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_INT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_INT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_PARENT_FRAME", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_PARENT_FRAME_EPOCH", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_PARENT_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_Q1", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_Q1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_Q2", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_Q2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_Q3", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_Q3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "OEB_QC", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::OEB_QC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "RCS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::RCS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "RCS_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::RCS_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "RCS_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::RCS_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "REFLECTANCE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::REFLECTANCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "SOLAR_RAD_COEFF", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::SOLAR_RAD_COEFF)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "SOLAR_RAD_UNCERTAINTY", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::SOLAR_RAD_UNCERTAINTY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "SRP_CONST_AREA", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::SRP_CONST_AREA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_ABSOLUTE", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_ABSOLUTE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_APPARENT", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_APPARENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_APPARENT_MAX", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_APPARENT_MAX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "VM_APPARENT_MIN", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::VM_APPARENT_MIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalPropertiesKey), "WET_MASS", make_descriptor(t_OrbitPhysicalPropertiesKey::wrap_Object(*OrbitPhysicalPropertiesKey::WET_MASS)));
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitPhysicalPropertiesKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitPhysicalPropertiesKey::wrap_Object(OrbitPhysicalPropertiesKey(((t_OrbitPhysicalPropertiesKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitPhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitPhysicalPropertiesKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_of_(t_OrbitPhysicalPropertiesKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_process(t_OrbitPhysicalPropertiesKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitPhysicalPropertiesKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalPropertiesKey::valueOf(a0));
                  return t_OrbitPhysicalPropertiesKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitPhysicalPropertiesKey_values(PyTypeObject *type)
              {
                JArray< OrbitPhysicalPropertiesKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalPropertiesKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitPhysicalPropertiesKey::wrap_jobject);
              }
              static PyObject *t_OrbitPhysicalPropertiesKey_get__parameters_(t_OrbitPhysicalPropertiesKey *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *ShadowModel::class$ = NULL;
              jmethodID *ShadowModel::mids$ = NULL;
              bool ShadowModel::live$ = false;
              ShadowModel *ShadowModel::CONE = NULL;
              ShadowModel *ShadowModel::CYLINDRICAL = NULL;
              ShadowModel *ShadowModel::DUAL_CONE = NULL;
              ShadowModel *ShadowModel::NONE = NULL;

              jclass ShadowModel::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_b2d46c28a04d1cfd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;");
                  mids$[mid_values_6bc056b921233502] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CONE = new ShadowModel(env->getStaticObjectField(cls, "CONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  CYLINDRICAL = new ShadowModel(env->getStaticObjectField(cls, "CYLINDRICAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  DUAL_CONE = new ShadowModel(env->getStaticObjectField(cls, "DUAL_CONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  NONE = new ShadowModel(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ShadowModel ShadowModel::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ShadowModel(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b2d46c28a04d1cfd], a0.this$));
              }

              JArray< ShadowModel > ShadowModel::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ShadowModel >(env->callStaticObjectMethod(cls, mids$[mid_values_6bc056b921233502]));
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
              static PyObject *t_ShadowModel_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShadowModel_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShadowModel_of_(t_ShadowModel *self, PyObject *args);
              static PyObject *t_ShadowModel_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ShadowModel_values(PyTypeObject *type);
              static PyObject *t_ShadowModel_get__parameters_(t_ShadowModel *self, void *data);
              static PyGetSetDef t_ShadowModel__fields_[] = {
                DECLARE_GET_FIELD(t_ShadowModel, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ShadowModel__methods_[] = {
                DECLARE_METHOD(t_ShadowModel, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShadowModel, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShadowModel, of_, METH_VARARGS),
                DECLARE_METHOD(t_ShadowModel, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ShadowModel, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ShadowModel)[] = {
                { Py_tp_methods, t_ShadowModel__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ShadowModel__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ShadowModel)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ShadowModel, t_ShadowModel, ShadowModel);
              PyObject *t_ShadowModel::wrap_Object(const ShadowModel& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ShadowModel::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ShadowModel *self = (t_ShadowModel *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ShadowModel::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ShadowModel::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ShadowModel *self = (t_ShadowModel *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ShadowModel::install(PyObject *module)
              {
                installType(&PY_TYPE(ShadowModel), &PY_TYPE_DEF(ShadowModel), module, "ShadowModel", 0);
              }

              void t_ShadowModel::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "class_", make_descriptor(ShadowModel::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "wrapfn_", make_descriptor(t_ShadowModel::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "boxfn_", make_descriptor(boxObject));
                env->getClass(ShadowModel::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "CONE", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::CONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "CYLINDRICAL", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::CYLINDRICAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "DUAL_CONE", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::DUAL_CONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "NONE", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::NONE)));
              }

              static PyObject *t_ShadowModel_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ShadowModel::initializeClass, 1)))
                  return NULL;
                return t_ShadowModel::wrap_Object(ShadowModel(((t_ShadowModel *) arg)->object.this$));
              }
              static PyObject *t_ShadowModel_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ShadowModel::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ShadowModel_of_(t_ShadowModel *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ShadowModel_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ShadowModel result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::valueOf(a0));
                  return t_ShadowModel::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ShadowModel_values(PyTypeObject *type)
              {
                JArray< ShadowModel > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::values());
                return JArray<jobject>(result.this$).wrap(t_ShadowModel::wrap_jobject);
              }
              static PyObject *t_ShadowModel_get__parameters_(t_ShadowModel *self, void *data)
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
#include "org/orekit/frames/encounter/AbstractEncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *AbstractEncounterLOF::class$ = NULL;
        jmethodID *AbstractEncounterLOF::mids$ = NULL;
        bool AbstractEncounterLOF::live$ = false;

        jclass AbstractEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/AbstractEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFieldOther_aab2b71a889b2b8a] = env->getMethodID(cls, "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
            mids$[mid_getOther_78e01095d7eced90] = env->getMethodID(cls, "getOther", "()Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_rotationFromInertial_cc3fb55bcf18d696] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_5554d692f1f7262c] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::utils::FieldPVCoordinates AbstractEncounterLOF::getFieldOther(const ::org::hipparchus::Field & a0) const
        {
          return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getFieldOther_aab2b71a889b2b8a], a0.this$));
        }

        ::org::orekit::utils::PVCoordinates AbstractEncounterLOF::getOther() const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getOther_78e01095d7eced90]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation AbstractEncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_cc3fb55bcf18d696], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation AbstractEncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_5554d692f1f7262c], a0.this$, a1.this$));
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
    namespace frames {
      namespace encounter {
        static PyObject *t_AbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractEncounterLOF_getFieldOther(t_AbstractEncounterLOF *self, PyObject *arg);
        static PyObject *t_AbstractEncounterLOF_getOther(t_AbstractEncounterLOF *self);
        static PyObject *t_AbstractEncounterLOF_rotationFromInertial(t_AbstractEncounterLOF *self, PyObject *args);
        static PyObject *t_AbstractEncounterLOF_get__other(t_AbstractEncounterLOF *self, void *data);
        static PyGetSetDef t_AbstractEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractEncounterLOF, other),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_AbstractEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractEncounterLOF, getFieldOther, METH_O),
          DECLARE_METHOD(t_AbstractEncounterLOF, getOther, METH_NOARGS),
          DECLARE_METHOD(t_AbstractEncounterLOF, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractEncounterLOF)[] = {
          { Py_tp_methods, t_AbstractEncounterLOF__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractEncounterLOF)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractEncounterLOF, t_AbstractEncounterLOF, AbstractEncounterLOF);

        void t_AbstractEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractEncounterLOF), &PY_TYPE_DEF(AbstractEncounterLOF), module, "AbstractEncounterLOF", 0);
        }

        void t_AbstractEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncounterLOF), "class_", make_descriptor(AbstractEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncounterLOF), "wrapfn_", make_descriptor(t_AbstractEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEncounterLOF), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_AbstractEncounterLOF::wrap_Object(AbstractEncounterLOF(((t_AbstractEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_AbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractEncounterLOF_getFieldOther(t_AbstractEncounterLOF *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldOther(a0));
            return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldOther", arg);
          return NULL;
        }

        static PyObject *t_AbstractEncounterLOF_getOther(t_AbstractEncounterLOF *self)
        {
          ::org::orekit::utils::PVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getOther());
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        static PyObject *t_AbstractEncounterLOF_rotationFromInertial(t_AbstractEncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
          return NULL;
        }

        static PyObject *t_AbstractEncounterLOF_get__other(t_AbstractEncounterLOF *self, void *data)
        {
          ::org::orekit::utils::PVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getOther());
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"
#include "java/lang/Class.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDerivative::class$ = NULL;
        jmethodID *UnivariateDerivative::mids$ = NULL;
        bool UnivariateDerivative::live$ = false;

        jclass UnivariateDerivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDerivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getDerivative_ce4c02d583456bc9] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getFreeParameters_d6ab429752e7c267] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getPartialDerivative_7f744e43a2f098aa] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_toDerivativeStructure_ce114c5dd035d753] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateDerivative::UnivariateDerivative() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble UnivariateDerivative::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_ce4c02d583456bc9], a0);
        }

        jint UnivariateDerivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_d6ab429752e7c267]);
        }

        jdouble UnivariateDerivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_7f744e43a2f098aa], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure UnivariateDerivative::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_ce114c5dd035d753]));
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
        static PyObject *t_UnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDerivative_of_(t_UnivariateDerivative *self, PyObject *args);
        static int t_UnivariateDerivative_init_(t_UnivariateDerivative *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateDerivative_getDerivative(t_UnivariateDerivative *self, PyObject *arg);
        static PyObject *t_UnivariateDerivative_getFreeParameters(t_UnivariateDerivative *self);
        static PyObject *t_UnivariateDerivative_getPartialDerivative(t_UnivariateDerivative *self, PyObject *arg);
        static PyObject *t_UnivariateDerivative_toDerivativeStructure(t_UnivariateDerivative *self);
        static PyObject *t_UnivariateDerivative_get__freeParameters(t_UnivariateDerivative *self, void *data);
        static PyObject *t_UnivariateDerivative_get__parameters_(t_UnivariateDerivative *self, void *data);
        static PyGetSetDef t_UnivariateDerivative__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateDerivative, freeParameters),
          DECLARE_GET_FIELD(t_UnivariateDerivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateDerivative__methods_[] = {
          DECLARE_METHOD(t_UnivariateDerivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDerivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateDerivative, getDerivative, METH_O),
          DECLARE_METHOD(t_UnivariateDerivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateDerivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_UnivariateDerivative, toDerivativeStructure, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDerivative)[] = {
          { Py_tp_methods, t_UnivariateDerivative__methods_ },
          { Py_tp_init, (void *) t_UnivariateDerivative_init_ },
          { Py_tp_getset, t_UnivariateDerivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDerivative)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateDerivative, t_UnivariateDerivative, UnivariateDerivative);
        PyObject *t_UnivariateDerivative::wrap_Object(const UnivariateDerivative& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative *self = (t_UnivariateDerivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_UnivariateDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateDerivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateDerivative *self = (t_UnivariateDerivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_UnivariateDerivative::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDerivative), &PY_TYPE_DEF(UnivariateDerivative), module, "UnivariateDerivative", 0);
        }

        void t_UnivariateDerivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative), "class_", make_descriptor(UnivariateDerivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative), "wrapfn_", make_descriptor(t_UnivariateDerivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDerivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDerivative::initializeClass, 1)))
            return NULL;
          return t_UnivariateDerivative::wrap_Object(UnivariateDerivative(((t_UnivariateDerivative *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDerivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDerivative_of_(t_UnivariateDerivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_UnivariateDerivative_init_(t_UnivariateDerivative *self, PyObject *args, PyObject *kwds)
        {
          UnivariateDerivative object((jobject) NULL);

          INT_CALL(object = UnivariateDerivative());
          self->object = object;

          return 0;
        }

        static PyObject *t_UnivariateDerivative_getDerivative(t_UnivariateDerivative *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivative", arg);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative_getFreeParameters(t_UnivariateDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_UnivariateDerivative_getPartialDerivative(t_UnivariateDerivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_UnivariateDerivative_toDerivativeStructure(t_UnivariateDerivative *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }
        static PyObject *t_UnivariateDerivative_get__parameters_(t_UnivariateDerivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_UnivariateDerivative_get__freeParameters(t_UnivariateDerivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FieldPoleCorrection.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FieldPoleCorrection::class$ = NULL;
      jmethodID *FieldPoleCorrection::mids$ = NULL;
      bool FieldPoleCorrection::live$ = false;

      jclass FieldPoleCorrection::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FieldPoleCorrection");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bab44dcbad09a0fe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getXp_08d37e3f77b7239d] = env->getMethodID(cls, "getXp", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getYp_08d37e3f77b7239d] = env->getMethodID(cls, "getYp", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldPoleCorrection::FieldPoleCorrection(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bab44dcbad09a0fe, a0.this$, a1.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldPoleCorrection::getXp() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXp_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldPoleCorrection::getYp() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getYp_08d37e3f77b7239d]));
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
      static PyObject *t_FieldPoleCorrection_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPoleCorrection_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPoleCorrection_of_(t_FieldPoleCorrection *self, PyObject *args);
      static int t_FieldPoleCorrection_init_(t_FieldPoleCorrection *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldPoleCorrection_getXp(t_FieldPoleCorrection *self);
      static PyObject *t_FieldPoleCorrection_getYp(t_FieldPoleCorrection *self);
      static PyObject *t_FieldPoleCorrection_get__xp(t_FieldPoleCorrection *self, void *data);
      static PyObject *t_FieldPoleCorrection_get__yp(t_FieldPoleCorrection *self, void *data);
      static PyObject *t_FieldPoleCorrection_get__parameters_(t_FieldPoleCorrection *self, void *data);
      static PyGetSetDef t_FieldPoleCorrection__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPoleCorrection, xp),
        DECLARE_GET_FIELD(t_FieldPoleCorrection, yp),
        DECLARE_GET_FIELD(t_FieldPoleCorrection, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPoleCorrection__methods_[] = {
        DECLARE_METHOD(t_FieldPoleCorrection, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPoleCorrection, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPoleCorrection, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPoleCorrection, getXp, METH_NOARGS),
        DECLARE_METHOD(t_FieldPoleCorrection, getYp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPoleCorrection)[] = {
        { Py_tp_methods, t_FieldPoleCorrection__methods_ },
        { Py_tp_init, (void *) t_FieldPoleCorrection_init_ },
        { Py_tp_getset, t_FieldPoleCorrection__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPoleCorrection)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldPoleCorrection, t_FieldPoleCorrection, FieldPoleCorrection);
      PyObject *t_FieldPoleCorrection::wrap_Object(const FieldPoleCorrection& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPoleCorrection::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPoleCorrection *self = (t_FieldPoleCorrection *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPoleCorrection::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPoleCorrection::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPoleCorrection *self = (t_FieldPoleCorrection *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPoleCorrection::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPoleCorrection), &PY_TYPE_DEF(FieldPoleCorrection), module, "FieldPoleCorrection", 0);
      }

      void t_FieldPoleCorrection::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPoleCorrection), "class_", make_descriptor(FieldPoleCorrection::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPoleCorrection), "wrapfn_", make_descriptor(t_FieldPoleCorrection::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPoleCorrection), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldPoleCorrection_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPoleCorrection::initializeClass, 1)))
          return NULL;
        return t_FieldPoleCorrection::wrap_Object(FieldPoleCorrection(((t_FieldPoleCorrection *) arg)->object.this$));
      }
      static PyObject *t_FieldPoleCorrection_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPoleCorrection::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPoleCorrection_of_(t_FieldPoleCorrection *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldPoleCorrection_init_(t_FieldPoleCorrection *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        FieldPoleCorrection object((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldPoleCorrection(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldPoleCorrection_getXp(t_FieldPoleCorrection *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getXp());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldPoleCorrection_getYp(t_FieldPoleCorrection *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getYp());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldPoleCorrection_get__parameters_(t_FieldPoleCorrection *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldPoleCorrection_get__xp(t_FieldPoleCorrection *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getXp());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldPoleCorrection_get__yp(t_FieldPoleCorrection *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getYp());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *SpinStabilizedKey::class$ = NULL;
              jmethodID *SpinStabilizedKey::mids$ = NULL;
              bool SpinStabilizedKey::live$ = false;
              SpinStabilizedKey *SpinStabilizedKey::COMMENT = NULL;
              SpinStabilizedKey *SpinStabilizedKey::MOMENTUM_ALPHA = NULL;
              SpinStabilizedKey *SpinStabilizedKey::MOMENTUM_DELTA = NULL;
              SpinStabilizedKey *SpinStabilizedKey::NUTATION = NULL;
              SpinStabilizedKey *SpinStabilizedKey::NUTATION_PER = NULL;
              SpinStabilizedKey *SpinStabilizedKey::NUTATION_PHASE = NULL;
              SpinStabilizedKey *SpinStabilizedKey::NUTATION_VEL = NULL;
              SpinStabilizedKey *SpinStabilizedKey::REF_FRAME_A = NULL;
              SpinStabilizedKey *SpinStabilizedKey::REF_FRAME_B = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_ALPHA = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_ANGLE = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_ANGLE_VEL = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_DELTA = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_DIR = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_FRAME_A = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_FRAME_B = NULL;

              jclass SpinStabilizedKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_4b34acf6a35accc1] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilized;)Z");
                  mids$[mid_valueOf_74bf97f19c572a90] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;");
                  mids$[mid_values_d2551b559868ab07] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new SpinStabilizedKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  MOMENTUM_ALPHA = new SpinStabilizedKey(env->getStaticObjectField(cls, "MOMENTUM_ALPHA", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  MOMENTUM_DELTA = new SpinStabilizedKey(env->getStaticObjectField(cls, "MOMENTUM_DELTA", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  NUTATION = new SpinStabilizedKey(env->getStaticObjectField(cls, "NUTATION", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  NUTATION_PER = new SpinStabilizedKey(env->getStaticObjectField(cls, "NUTATION_PER", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  NUTATION_PHASE = new SpinStabilizedKey(env->getStaticObjectField(cls, "NUTATION_PHASE", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  NUTATION_VEL = new SpinStabilizedKey(env->getStaticObjectField(cls, "NUTATION_VEL", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  REF_FRAME_A = new SpinStabilizedKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  REF_FRAME_B = new SpinStabilizedKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_ALPHA = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_ALPHA", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_ANGLE = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_ANGLE_VEL = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_ANGLE_VEL", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_DELTA = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_DELTA", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_DIR = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_DIR", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_FRAME_A = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_FRAME_B = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean SpinStabilizedKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_4b34acf6a35accc1], a0.this$, a1.this$, a2.this$);
              }

              SpinStabilizedKey SpinStabilizedKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return SpinStabilizedKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_74bf97f19c572a90], a0.this$));
              }

              JArray< SpinStabilizedKey > SpinStabilizedKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< SpinStabilizedKey >(env->callStaticObjectMethod(cls, mids$[mid_values_d2551b559868ab07]));
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
              static PyObject *t_SpinStabilizedKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SpinStabilizedKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SpinStabilizedKey_of_(t_SpinStabilizedKey *self, PyObject *args);
              static PyObject *t_SpinStabilizedKey_process(t_SpinStabilizedKey *self, PyObject *args);
              static PyObject *t_SpinStabilizedKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_SpinStabilizedKey_values(PyTypeObject *type);
              static PyObject *t_SpinStabilizedKey_get__parameters_(t_SpinStabilizedKey *self, void *data);
              static PyGetSetDef t_SpinStabilizedKey__fields_[] = {
                DECLARE_GET_FIELD(t_SpinStabilizedKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SpinStabilizedKey__methods_[] = {
                DECLARE_METHOD(t_SpinStabilizedKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilizedKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilizedKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_SpinStabilizedKey, process, METH_VARARGS),
                DECLARE_METHOD(t_SpinStabilizedKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilizedKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SpinStabilizedKey)[] = {
                { Py_tp_methods, t_SpinStabilizedKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_SpinStabilizedKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SpinStabilizedKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(SpinStabilizedKey, t_SpinStabilizedKey, SpinStabilizedKey);
              PyObject *t_SpinStabilizedKey::wrap_Object(const SpinStabilizedKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_SpinStabilizedKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SpinStabilizedKey *self = (t_SpinStabilizedKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_SpinStabilizedKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_SpinStabilizedKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SpinStabilizedKey *self = (t_SpinStabilizedKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_SpinStabilizedKey::install(PyObject *module)
              {
                installType(&PY_TYPE(SpinStabilizedKey), &PY_TYPE_DEF(SpinStabilizedKey), module, "SpinStabilizedKey", 0);
              }

              void t_SpinStabilizedKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "class_", make_descriptor(SpinStabilizedKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "wrapfn_", make_descriptor(t_SpinStabilizedKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(SpinStabilizedKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "COMMENT", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "MOMENTUM_ALPHA", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::MOMENTUM_ALPHA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "MOMENTUM_DELTA", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::MOMENTUM_DELTA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "NUTATION", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::NUTATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "NUTATION_PER", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::NUTATION_PER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "NUTATION_PHASE", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::NUTATION_PHASE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "NUTATION_VEL", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::NUTATION_VEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "REF_FRAME_A", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "REF_FRAME_B", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_ALPHA", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_ALPHA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_ANGLE", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_ANGLE_VEL", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_ANGLE_VEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_DELTA", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_DELTA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_DIR", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_FRAME_A", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_FRAME_B", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_FRAME_B)));
              }

              static PyObject *t_SpinStabilizedKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SpinStabilizedKey::initializeClass, 1)))
                  return NULL;
                return t_SpinStabilizedKey::wrap_Object(SpinStabilizedKey(((t_SpinStabilizedKey *) arg)->object.this$));
              }
              static PyObject *t_SpinStabilizedKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SpinStabilizedKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SpinStabilizedKey_of_(t_SpinStabilizedKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_SpinStabilizedKey_process(t_SpinStabilizedKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_SpinStabilizedKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                SpinStabilizedKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilizedKey::valueOf(a0));
                  return t_SpinStabilizedKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_SpinStabilizedKey_values(PyTypeObject *type)
              {
                JArray< SpinStabilizedKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilizedKey::values());
                return JArray<jobject>(result.this$).wrap(t_SpinStabilizedKey::wrap_jobject);
              }
              static PyObject *t_SpinStabilizedKey_get__parameters_(t_SpinStabilizedKey *self, void *data)
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
#include "org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *AbstractConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *AbstractConstantThrustPropulsionModel::mids$ = NULL;
          bool AbstractConstantThrustPropulsionModel::live$ = false;

          jclass AbstractConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ddbb1762bed80b38] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
              mids$[mid_init$_33b1676e2cf06e6c] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_getControl3DVectorCostType_fc9abda16ef946e0] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getDirection_032312bdeb3f2f93] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getDirection_8b37cafaaf55a3a5] = env->getMethodID(cls, "getDirection", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getFlowRate_9981f74b2d109da6] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_a40ce4fdf6559ac0] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_c04968ee695d037c] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_b443ba1cc794b916] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_209f08246d708042] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getFlowRate_4222abdadde032f5] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getFlowRate_6c8e6cd5d59063ae] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getIsp_9981f74b2d109da6] = env->getMethodID(cls, "getIsp", "()D");
              mids$[mid_getIsp_209f08246d708042] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getThrustMagnitude_9981f74b2d109da6] = env->getMethodID(cls, "getThrustMagnitude", "()D");
              mids$[mid_getThrustMagnitude_209f08246d708042] = env->getMethodID(cls, "getThrustMagnitude", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getThrustVector_032312bdeb3f2f93] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_44a47ea31a9889e8] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_5e5894038af17774] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_38283c57554889c0] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_8b37cafaaf55a3a5] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_9816b8f76e94356a] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_5e147f44c28a35c9] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getInitialFlowRate_9981f74b2d109da6] = env->getMethodID(cls, "getInitialFlowRate", "()D");
              mids$[mid_getInitialThrustVector_032312bdeb3f2f93] = env->getMethodID(cls, "getInitialThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractConstantThrustPropulsionModel::AbstractConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ddbb1762bed80b38, a0, a1, a2.this$, a3.this$)) {}

          AbstractConstantThrustPropulsionModel::AbstractConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a3, const ::java::lang::String & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_33b1676e2cf06e6c, a0, a1, a2.this$, a3.this$, a4.this$)) {}

          ::org::orekit::forces::maneuvers::Control3DVectorCostType AbstractConstantThrustPropulsionModel::getControl3DVectorCostType() const
          {
            return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_fc9abda16ef946e0]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_032312bdeb3f2f93]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getDirection(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_8b37cafaaf55a3a5], a0.this$));
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_9981f74b2d109da6]);
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_a40ce4fdf6559ac0], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement AbstractConstantThrustPropulsionModel::getFlowRate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_c04968ee695d037c], a0.this$));
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_b443ba1cc794b916], a0.this$);
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_209f08246d708042], a0.this$);
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_4222abdadde032f5], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_6c8e6cd5d59063ae], a0.this$, a1.this$));
          }

          jdouble AbstractConstantThrustPropulsionModel::getIsp() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIsp_9981f74b2d109da6]);
          }

          jdouble AbstractConstantThrustPropulsionModel::getIsp(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIsp_209f08246d708042], a0.this$);
          }

          ::java::lang::String AbstractConstantThrustPropulsionModel::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
          }

          jdouble AbstractConstantThrustPropulsionModel::getThrustMagnitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_9981f74b2d109da6]);
          }

          jdouble AbstractConstantThrustPropulsionModel::getThrustMagnitude(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_209f08246d708042], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_032312bdeb3f2f93]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const JArray< jdouble > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_44a47ea31a9889e8], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D AbstractConstantThrustPropulsionModel::getThrustVector(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_5e5894038af17774], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_38283c57554889c0], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_8b37cafaaf55a3a5], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_9816b8f76e94356a], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_5e147f44c28a35c9], a0.this$, a1.this$));
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
          static PyObject *t_AbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractConstantThrustPropulsionModel_init_(t_AbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getControl3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getDirection(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getFlowRate(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getIsp(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getName(t_AbstractConstantThrustPropulsionModel *self);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustVector(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__control3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__direction(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__flowRate(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__isp(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__name(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustVector(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_AbstractConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, control3DVectorCostType),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, direction),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, flowRate),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, isp),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, name),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, thrustMagnitude),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, thrustVector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getControl3DVectorCostType, METH_NOARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getDirection, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getIsp, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getName, METH_NOARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getThrustMagnitude, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_AbstractConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_AbstractConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_AbstractConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractConstantThrustPropulsionModel, t_AbstractConstantThrustPropulsionModel, AbstractConstantThrustPropulsionModel);

          void t_AbstractConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractConstantThrustPropulsionModel), &PY_TYPE_DEF(AbstractConstantThrustPropulsionModel), module, "AbstractConstantThrustPropulsionModel", 0);
          }

          void t_AbstractConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstantThrustPropulsionModel), "class_", make_descriptor(AbstractConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_AbstractConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_AbstractConstantThrustPropulsionModel::wrap_Object(AbstractConstantThrustPropulsionModel(((t_AbstractConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_AbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractConstantThrustPropulsionModel_init_(t_AbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                AbstractConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDks", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = AbstractConstantThrustPropulsionModel(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::org::orekit::forces::maneuvers::Control3DVectorCostType a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                AbstractConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDkKs", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a4))
                {
                  INT_CALL(object = AbstractConstantThrustPropulsionModel(a0, a1, a2, a3, a4));
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

          static PyObject *t_AbstractConstantThrustPropulsionModel_getControl3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
            OBJ_CALL(result = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getDirection(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDirection());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getDirection(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDirection", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getFlowRate(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFlowRate());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getFlowRate", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getIsp(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getIsp());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getIsp(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getIsp", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getName(t_AbstractConstantThrustPropulsionModel *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustMagnitude());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustMagnitude(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustMagnitude", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustVector(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrustVector());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__control3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            OBJ_CALL(value = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__direction(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__flowRate(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlowRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__isp(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getIsp());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__name(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getThrustMagnitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustVector(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getThrustVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldTrapezoidIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldTrapezoidIntegrator::class$ = NULL;
        jmethodID *FieldTrapezoidIntegrator::mids$ = NULL;
        bool FieldTrapezoidIntegrator::live$ = false;
        jint FieldTrapezoidIntegrator::TRAPEZOID_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass FieldTrapezoidIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldTrapezoidIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a44abdd035f01345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_ddbf374219cf6329] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_119028fb2475d87b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_08d37e3f77b7239d] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRAPEZOID_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "TRAPEZOID_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldTrapezoidIntegrator::FieldTrapezoidIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a44abdd035f01345, a0.this$)) {}

        FieldTrapezoidIntegrator::FieldTrapezoidIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_ddbf374219cf6329, a0.this$, a1, a2)) {}

        FieldTrapezoidIntegrator::FieldTrapezoidIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_119028fb2475d87b, a0.this$, a1, a2, a3, a4)) {}
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
        static PyObject *t_FieldTrapezoidIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTrapezoidIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTrapezoidIntegrator_of_(t_FieldTrapezoidIntegrator *self, PyObject *args);
        static int t_FieldTrapezoidIntegrator_init_(t_FieldTrapezoidIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldTrapezoidIntegrator_get__parameters_(t_FieldTrapezoidIntegrator *self, void *data);
        static PyGetSetDef t_FieldTrapezoidIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldTrapezoidIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldTrapezoidIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldTrapezoidIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTrapezoidIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTrapezoidIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldTrapezoidIntegrator)[] = {
          { Py_tp_methods, t_FieldTrapezoidIntegrator__methods_ },
          { Py_tp_init, (void *) t_FieldTrapezoidIntegrator_init_ },
          { Py_tp_getset, t_FieldTrapezoidIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldTrapezoidIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(FieldTrapezoidIntegrator, t_FieldTrapezoidIntegrator, FieldTrapezoidIntegrator);
        PyObject *t_FieldTrapezoidIntegrator::wrap_Object(const FieldTrapezoidIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTrapezoidIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTrapezoidIntegrator *self = (t_FieldTrapezoidIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldTrapezoidIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTrapezoidIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTrapezoidIntegrator *self = (t_FieldTrapezoidIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldTrapezoidIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldTrapezoidIntegrator), &PY_TYPE_DEF(FieldTrapezoidIntegrator), module, "FieldTrapezoidIntegrator", 0);
        }

        void t_FieldTrapezoidIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrapezoidIntegrator), "class_", make_descriptor(FieldTrapezoidIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrapezoidIntegrator), "wrapfn_", make_descriptor(t_FieldTrapezoidIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrapezoidIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldTrapezoidIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrapezoidIntegrator), "TRAPEZOID_MAX_ITERATIONS_COUNT", make_descriptor(FieldTrapezoidIntegrator::TRAPEZOID_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_FieldTrapezoidIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldTrapezoidIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldTrapezoidIntegrator::wrap_Object(FieldTrapezoidIntegrator(((t_FieldTrapezoidIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldTrapezoidIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldTrapezoidIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldTrapezoidIntegrator_of_(t_FieldTrapezoidIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldTrapezoidIntegrator_init_(t_FieldTrapezoidIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              FieldTrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldTrapezoidIntegrator(a0));
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
              FieldTrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldTrapezoidIntegrator(a0, a1, a2));
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
              FieldTrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = FieldTrapezoidIntegrator(a0, a1, a2, a3, a4));
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
        static PyObject *t_FieldTrapezoidIntegrator_get__parameters_(t_FieldTrapezoidIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/AbstractListCrawler.h"
#include "java/util/List.h"
#include "org/orekit/data/DataProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *AbstractListCrawler::class$ = NULL;
      jmethodID *AbstractListCrawler::mids$ = NULL;
      bool AbstractListCrawler::live$ = false;

      jclass AbstractListCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/AbstractListCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addInput_83ee235bb1e64e94] = env->getMethodID(cls, "addInput", "(Ljava/lang/Object;)V");
          mids$[mid_getInputs_d751c1a57012b438] = env->getMethodID(cls, "getInputs", "()Ljava/util/List;");
          mids$[mid_getCompleteName_60ee6fc56bffa550] = env->getMethodID(cls, "getCompleteName", "(Ljava/lang/Object;)Ljava/lang/String;");
          mids$[mid_getBaseName_60ee6fc56bffa550] = env->getMethodID(cls, "getBaseName", "(Ljava/lang/Object;)Ljava/lang/String;");
          mids$[mid_getZipJarCrawler_fdb03dd4a838fc17] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/lang/Object;)Lorg/orekit/data/ZipJarCrawler;");
          mids$[mid_getStream_75cd29d23c885e7c] = env->getMethodID(cls, "getStream", "(Ljava/lang/Object;)Ljava/io/InputStream;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractListCrawler::addInput(const ::java::lang::Object & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addInput_83ee235bb1e64e94], a0.this$);
      }

      ::java::util::List AbstractListCrawler::getInputs() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getInputs_d751c1a57012b438]));
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
      static PyObject *t_AbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractListCrawler_of_(t_AbstractListCrawler *self, PyObject *args);
      static PyObject *t_AbstractListCrawler_addInput(t_AbstractListCrawler *self, PyObject *arg);
      static PyObject *t_AbstractListCrawler_getInputs(t_AbstractListCrawler *self);
      static PyObject *t_AbstractListCrawler_get__inputs(t_AbstractListCrawler *self, void *data);
      static PyObject *t_AbstractListCrawler_get__parameters_(t_AbstractListCrawler *self, void *data);
      static PyGetSetDef t_AbstractListCrawler__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractListCrawler, inputs),
        DECLARE_GET_FIELD(t_AbstractListCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractListCrawler__methods_[] = {
        DECLARE_METHOD(t_AbstractListCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractListCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractListCrawler, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractListCrawler, addInput, METH_O),
        DECLARE_METHOD(t_AbstractListCrawler, getInputs, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractListCrawler)[] = {
        { Py_tp_methods, t_AbstractListCrawler__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractListCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractListCrawler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractListCrawler, t_AbstractListCrawler, AbstractListCrawler);
      PyObject *t_AbstractListCrawler::wrap_Object(const AbstractListCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractListCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractListCrawler *self = (t_AbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractListCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractListCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractListCrawler *self = (t_AbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractListCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractListCrawler), &PY_TYPE_DEF(AbstractListCrawler), module, "AbstractListCrawler", 0);
      }

      void t_AbstractListCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractListCrawler), "class_", make_descriptor(AbstractListCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractListCrawler), "wrapfn_", make_descriptor(t_AbstractListCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractListCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractListCrawler::initializeClass, 1)))
          return NULL;
        return t_AbstractListCrawler::wrap_Object(AbstractListCrawler(((t_AbstractListCrawler *) arg)->object.this$));
      }
      static PyObject *t_AbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractListCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractListCrawler_of_(t_AbstractListCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractListCrawler_addInput(t_AbstractListCrawler *self, PyObject *arg)
      {
        ::java::lang::Object a0((jobject) NULL);

        if (!parseArg(arg, "O", self->parameters[0], &a0))
        {
          OBJ_CALL(self->object.addInput(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addInput", arg);
        return NULL;
      }

      static PyObject *t_AbstractListCrawler_getInputs(t_AbstractListCrawler *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getInputs());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_AbstractListCrawler_get__parameters_(t_AbstractListCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractListCrawler_get__inputs(t_AbstractListCrawler *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getInputs());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *Dipole::class$ = NULL;
          jmethodID *Dipole::mids$ = NULL;
          bool Dipole::live$ = false;
          Dipole *Dipole::CANONICAL_I_J = NULL;

          jclass Dipole::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/Dipole");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getPrimary_032312bdeb3f2f93] = env->getMethodID(cls, "getPrimary", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSecondary_032312bdeb3f2f93] = env->getMethodID(cls, "getSecondary", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CANONICAL_I_J = new Dipole(env->getStaticObjectField(cls, "CANONICAL_I_J", "Lorg/orekit/estimation/measurements/gnss/Dipole;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Dipole::getPrimary() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPrimary_032312bdeb3f2f93]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Dipole::getSecondary() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSecondary_032312bdeb3f2f93]));
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
          static PyObject *t_Dipole_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Dipole_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Dipole_getPrimary(t_Dipole *self);
          static PyObject *t_Dipole_getSecondary(t_Dipole *self);
          static PyObject *t_Dipole_get__primary(t_Dipole *self, void *data);
          static PyObject *t_Dipole_get__secondary(t_Dipole *self, void *data);
          static PyGetSetDef t_Dipole__fields_[] = {
            DECLARE_GET_FIELD(t_Dipole, primary),
            DECLARE_GET_FIELD(t_Dipole, secondary),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Dipole__methods_[] = {
            DECLARE_METHOD(t_Dipole, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Dipole, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Dipole, getPrimary, METH_NOARGS),
            DECLARE_METHOD(t_Dipole, getSecondary, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Dipole)[] = {
            { Py_tp_methods, t_Dipole__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Dipole__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Dipole)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Dipole, t_Dipole, Dipole);

          void t_Dipole::install(PyObject *module)
          {
            installType(&PY_TYPE(Dipole), &PY_TYPE_DEF(Dipole), module, "Dipole", 0);
          }

          void t_Dipole::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "class_", make_descriptor(Dipole::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "wrapfn_", make_descriptor(t_Dipole::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "boxfn_", make_descriptor(boxObject));
            env->getClass(Dipole::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Dipole), "CANONICAL_I_J", make_descriptor(t_Dipole::wrap_Object(*Dipole::CANONICAL_I_J)));
          }

          static PyObject *t_Dipole_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Dipole::initializeClass, 1)))
              return NULL;
            return t_Dipole::wrap_Object(Dipole(((t_Dipole *) arg)->object.this$));
          }
          static PyObject *t_Dipole_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Dipole::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Dipole_getPrimary(t_Dipole *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPrimary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Dipole_getSecondary(t_Dipole *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSecondary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Dipole_get__primary(t_Dipole *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getPrimary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Dipole_get__secondary(t_Dipole *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSecondary());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/AngleType.h"
#include "org/orekit/files/ccsds/ndm/tdm/AngleType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *AngleType::class$ = NULL;
            jmethodID *AngleType::mids$ = NULL;
            bool AngleType::live$ = false;
            AngleType *AngleType::AZEL = NULL;
            AngleType *AngleType::RADEC = NULL;
            AngleType *AngleType::XEYN = NULL;
            AngleType *AngleType::XSYE = NULL;

            jclass AngleType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/AngleType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_0b174540f4bb7778] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/AngleType;");
                mids$[mid_values_0e3cd1e9753e2a4e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/AngleType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                AZEL = new AngleType(env->getStaticObjectField(cls, "AZEL", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                RADEC = new AngleType(env->getStaticObjectField(cls, "RADEC", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                XEYN = new AngleType(env->getStaticObjectField(cls, "XEYN", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                XSYE = new AngleType(env->getStaticObjectField(cls, "XSYE", "Lorg/orekit/files/ccsds/ndm/tdm/AngleType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AngleType AngleType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AngleType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0b174540f4bb7778], a0.this$));
            }

            JArray< AngleType > AngleType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AngleType >(env->callStaticObjectMethod(cls, mids$[mid_values_0e3cd1e9753e2a4e]));
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
            static PyObject *t_AngleType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AngleType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AngleType_of_(t_AngleType *self, PyObject *args);
            static PyObject *t_AngleType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AngleType_values(PyTypeObject *type);
            static PyObject *t_AngleType_get__parameters_(t_AngleType *self, void *data);
            static PyGetSetDef t_AngleType__fields_[] = {
              DECLARE_GET_FIELD(t_AngleType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AngleType__methods_[] = {
              DECLARE_METHOD(t_AngleType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AngleType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AngleType, of_, METH_VARARGS),
              DECLARE_METHOD(t_AngleType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AngleType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AngleType)[] = {
              { Py_tp_methods, t_AngleType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AngleType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AngleType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AngleType, t_AngleType, AngleType);
            PyObject *t_AngleType::wrap_Object(const AngleType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AngleType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AngleType *self = (t_AngleType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AngleType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AngleType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AngleType *self = (t_AngleType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AngleType::install(PyObject *module)
            {
              installType(&PY_TYPE(AngleType), &PY_TYPE_DEF(AngleType), module, "AngleType", 0);
            }

            void t_AngleType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "class_", make_descriptor(AngleType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "wrapfn_", make_descriptor(t_AngleType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "boxfn_", make_descriptor(boxObject));
              env->getClass(AngleType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "AZEL", make_descriptor(t_AngleType::wrap_Object(*AngleType::AZEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "RADEC", make_descriptor(t_AngleType::wrap_Object(*AngleType::RADEC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "XEYN", make_descriptor(t_AngleType::wrap_Object(*AngleType::XEYN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AngleType), "XSYE", make_descriptor(t_AngleType::wrap_Object(*AngleType::XSYE)));
            }

            static PyObject *t_AngleType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AngleType::initializeClass, 1)))
                return NULL;
              return t_AngleType::wrap_Object(AngleType(((t_AngleType *) arg)->object.this$));
            }
            static PyObject *t_AngleType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AngleType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AngleType_of_(t_AngleType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AngleType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AngleType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::AngleType::valueOf(a0));
                return t_AngleType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AngleType_values(PyTypeObject *type)
            {
              JArray< AngleType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::AngleType::values());
              return JArray<jobject>(result.this$).wrap(t_AngleType::wrap_jobject);
            }
            static PyObject *t_AngleType_get__parameters_(t_AngleType *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldFixedNumberInterpolationGrid.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldFixedNumberInterpolationGrid::class$ = NULL;
            jmethodID *FieldFixedNumberInterpolationGrid::mids$ = NULL;
            bool FieldFixedNumberInterpolationGrid::live$ = false;

            jclass FieldFixedNumberInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldFixedNumberInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_399daf55ca8a95b8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
                mids$[mid_getGridPoints_0fb3037dbc9bf797] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldFixedNumberInterpolationGrid::FieldFixedNumberInterpolationGrid(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_399daf55ca8a95b8, a0.this$, a1)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > FieldFixedNumberInterpolationGrid::getGridPoints(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGridPoints_0fb3037dbc9bf797], a0.this$, a1.this$));
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
            static PyObject *t_FieldFixedNumberInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldFixedNumberInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldFixedNumberInterpolationGrid_of_(t_FieldFixedNumberInterpolationGrid *self, PyObject *args);
            static int t_FieldFixedNumberInterpolationGrid_init_(t_FieldFixedNumberInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldFixedNumberInterpolationGrid_getGridPoints(t_FieldFixedNumberInterpolationGrid *self, PyObject *args);
            static PyObject *t_FieldFixedNumberInterpolationGrid_get__parameters_(t_FieldFixedNumberInterpolationGrid *self, void *data);
            static PyGetSetDef t_FieldFixedNumberInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_FieldFixedNumberInterpolationGrid, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldFixedNumberInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_FieldFixedNumberInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldFixedNumberInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldFixedNumberInterpolationGrid, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldFixedNumberInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldFixedNumberInterpolationGrid)[] = {
              { Py_tp_methods, t_FieldFixedNumberInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_FieldFixedNumberInterpolationGrid_init_ },
              { Py_tp_getset, t_FieldFixedNumberInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldFixedNumberInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldFixedNumberInterpolationGrid, t_FieldFixedNumberInterpolationGrid, FieldFixedNumberInterpolationGrid);
            PyObject *t_FieldFixedNumberInterpolationGrid::wrap_Object(const FieldFixedNumberInterpolationGrid& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldFixedNumberInterpolationGrid::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldFixedNumberInterpolationGrid *self = (t_FieldFixedNumberInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldFixedNumberInterpolationGrid::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldFixedNumberInterpolationGrid::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldFixedNumberInterpolationGrid *self = (t_FieldFixedNumberInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldFixedNumberInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldFixedNumberInterpolationGrid), &PY_TYPE_DEF(FieldFixedNumberInterpolationGrid), module, "FieldFixedNumberInterpolationGrid", 0);
            }

            void t_FieldFixedNumberInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFixedNumberInterpolationGrid), "class_", make_descriptor(FieldFixedNumberInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFixedNumberInterpolationGrid), "wrapfn_", make_descriptor(t_FieldFixedNumberInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFixedNumberInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldFixedNumberInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldFixedNumberInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_FieldFixedNumberInterpolationGrid::wrap_Object(FieldFixedNumberInterpolationGrid(((t_FieldFixedNumberInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_FieldFixedNumberInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldFixedNumberInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldFixedNumberInterpolationGrid_of_(t_FieldFixedNumberInterpolationGrid *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldFixedNumberInterpolationGrid_init_(t_FieldFixedNumberInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              FieldFixedNumberInterpolationGrid object((jobject) NULL);

              if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
              {
                INT_CALL(object = FieldFixedNumberInterpolationGrid(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldFixedNumberInterpolationGrid_getGridPoints(t_FieldFixedNumberInterpolationGrid *self, PyObject *args)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
              return NULL;
            }
            static PyObject *t_FieldFixedNumberInterpolationGrid_get__parameters_(t_FieldFixedNumberInterpolationGrid *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/Apm.h"
#include "org/orekit/data/DataContext.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmData.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *Apm::class$ = NULL;
              jmethodID *Apm::mids$ = NULL;
              bool Apm::live$ = false;
              ::java::lang::String *Apm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Apm::ROOT = NULL;

              jclass Apm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/Apm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8e67c3c744d320a9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getAttitude_0a584a2048d30c01] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;)Lorg/orekit/attitudes/Attitude;");
                  mids$[mid_getData_564237b9f7cffd65] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmData;");
                  mids$[mid_getMetadata_0f813e4e37056264] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Apm::Apm(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_8e67c3c744d320a9, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::attitudes::Attitude Apm::getAttitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1) const
              {
                return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_0a584a2048d30c01], a0.this$, a1.this$));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::ApmData Apm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::ApmData(env->callObjectMethod(this$, mids$[mid_getData_564237b9f7cffd65]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata Apm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_0f813e4e37056264]));
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
              static PyObject *t_Apm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Apm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Apm_of_(t_Apm *self, PyObject *args);
              static int t_Apm_init_(t_Apm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Apm_getAttitude(t_Apm *self, PyObject *args);
              static PyObject *t_Apm_getData(t_Apm *self);
              static PyObject *t_Apm_getMetadata(t_Apm *self);
              static PyObject *t_Apm_get__data(t_Apm *self, void *data);
              static PyObject *t_Apm_get__metadata(t_Apm *self, void *data);
              static PyObject *t_Apm_get__parameters_(t_Apm *self, void *data);
              static PyGetSetDef t_Apm__fields_[] = {
                DECLARE_GET_FIELD(t_Apm, data),
                DECLARE_GET_FIELD(t_Apm, metadata),
                DECLARE_GET_FIELD(t_Apm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Apm__methods_[] = {
                DECLARE_METHOD(t_Apm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Apm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Apm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Apm, getAttitude, METH_VARARGS),
                DECLARE_METHOD(t_Apm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Apm, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Apm)[] = {
                { Py_tp_methods, t_Apm__methods_ },
                { Py_tp_init, (void *) t_Apm_init_ },
                { Py_tp_getset, t_Apm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Apm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Apm, t_Apm, Apm);
              PyObject *t_Apm::wrap_Object(const Apm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Apm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Apm *self = (t_Apm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Apm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Apm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Apm *self = (t_Apm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Apm::install(PyObject *module)
              {
                installType(&PY_TYPE(Apm), &PY_TYPE_DEF(Apm), module, "Apm", 0);
              }

              void t_Apm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "class_", make_descriptor(Apm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "wrapfn_", make_descriptor(t_Apm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Apm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Apm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "ROOT", make_descriptor(j2p(*Apm::ROOT)));
              }

              static PyObject *t_Apm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Apm::initializeClass, 1)))
                  return NULL;
                return t_Apm::wrap_Object(Apm(((t_Apm *) arg)->object.this$));
              }
              static PyObject *t_Apm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Apm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Apm_of_(t_Apm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Apm_init_(t_Apm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Apm object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Apm(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Apm_getAttitude(t_Apm *self, PyObject *args)
              {
                ::org::orekit::frames::Frame a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::attitudes::Attitude result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getAttitude(a0, a1));
                  return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
                return NULL;
              }

              static PyObject *t_Apm_getData(t_Apm *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmData::wrap_Object(result);
              }

              static PyObject *t_Apm_getMetadata(t_Apm *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmMetadata::wrap_Object(result);
              }
              static PyObject *t_Apm_get__parameters_(t_Apm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Apm_get__data(t_Apm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmData::wrap_Object(value);
              }

              static PyObject *t_Apm_get__metadata(t_Apm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmMetadata::wrap_Object(value);
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/SimplexOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *SimplexOptimizer::class$ = NULL;
            jmethodID *SimplexOptimizer::mids$ = NULL;
            bool SimplexOptimizer::live$ = false;

            jclass SimplexOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/SimplexOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3c3ab50d4a5913f8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_optimize_1912ae5ec9cd8a6c] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_parseOptimizationData_df324e640da2eeec] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
                mids$[mid_doOptimize_a812a1ba2cf9f7b4] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SimplexOptimizer::SimplexOptimizer(const ::org::hipparchus::optim::ConvergenceChecker & a0) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_3c3ab50d4a5913f8, a0.this$)) {}

            SimplexOptimizer::SimplexOptimizer(jdouble a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

            ::org::hipparchus::optim::PointValuePair SimplexOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_1912ae5ec9cd8a6c], a0.this$));
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
            static PyObject *t_SimplexOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SimplexOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SimplexOptimizer_of_(t_SimplexOptimizer *self, PyObject *args);
            static int t_SimplexOptimizer_init_(t_SimplexOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SimplexOptimizer_optimize(t_SimplexOptimizer *self, PyObject *args);
            static PyObject *t_SimplexOptimizer_get__parameters_(t_SimplexOptimizer *self, void *data);
            static PyGetSetDef t_SimplexOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_SimplexOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SimplexOptimizer__methods_[] = {
              DECLARE_METHOD(t_SimplexOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SimplexOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SimplexOptimizer, of_, METH_VARARGS),
              DECLARE_METHOD(t_SimplexOptimizer, optimize, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SimplexOptimizer)[] = {
              { Py_tp_methods, t_SimplexOptimizer__methods_ },
              { Py_tp_init, (void *) t_SimplexOptimizer_init_ },
              { Py_tp_getset, t_SimplexOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SimplexOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(SimplexOptimizer, t_SimplexOptimizer, SimplexOptimizer);
            PyObject *t_SimplexOptimizer::wrap_Object(const SimplexOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SimplexOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SimplexOptimizer *self = (t_SimplexOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_SimplexOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SimplexOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SimplexOptimizer *self = (t_SimplexOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_SimplexOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(SimplexOptimizer), &PY_TYPE_DEF(SimplexOptimizer), module, "SimplexOptimizer", 0);
            }

            void t_SimplexOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexOptimizer), "class_", make_descriptor(SimplexOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexOptimizer), "wrapfn_", make_descriptor(t_SimplexOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SimplexOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SimplexOptimizer::initializeClass, 1)))
                return NULL;
              return t_SimplexOptimizer::wrap_Object(SimplexOptimizer(((t_SimplexOptimizer *) arg)->object.this$));
            }
            static PyObject *t_SimplexOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SimplexOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SimplexOptimizer_of_(t_SimplexOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_SimplexOptimizer_init_(t_SimplexOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
                  PyTypeObject **p0;
                  SimplexOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = SimplexOptimizer(a0));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jdouble a0;
                  jdouble a1;
                  SimplexOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DD", &a0, &a1))
                  {
                    INT_CALL(object = SimplexOptimizer(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
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

            static PyObject *t_SimplexOptimizer_optimize(t_SimplexOptimizer *self, PyObject *args)
            {
              JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
              ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
              }

              return callSuper(PY_TYPE(SimplexOptimizer), (PyObject *) self, "optimize", args, 2);
            }
            static PyObject *t_SimplexOptimizer_get__parameters_(t_SimplexOptimizer *self, void *data)
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
#include "org/orekit/files/rinex/navigation/SbasId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/navigation/SbasId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *SbasId::class$ = NULL;
          jmethodID *SbasId::mids$ = NULL;
          bool SbasId::live$ = false;
          SbasId *SbasId::A_SBAS = NULL;
          SbasId *SbasId::BDSBAS = NULL;
          SbasId *SbasId::EGNOS = NULL;
          SbasId *SbasId::GAGAN = NULL;
          SbasId *SbasId::KASS = NULL;
          SbasId *SbasId::MSAS = NULL;
          SbasId *SbasId::SACCSA = NULL;
          SbasId *SbasId::SDCM = NULL;
          SbasId *SbasId::SPAN = NULL;
          SbasId *SbasId::WAAS = NULL;

          jclass SbasId::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/SbasId");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_7672e12250138acd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/SbasId;");
              mids$[mid_values_bfe20c000a51e66d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/SbasId;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              A_SBAS = new SbasId(env->getStaticObjectField(cls, "A_SBAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              BDSBAS = new SbasId(env->getStaticObjectField(cls, "BDSBAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              EGNOS = new SbasId(env->getStaticObjectField(cls, "EGNOS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              GAGAN = new SbasId(env->getStaticObjectField(cls, "GAGAN", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              KASS = new SbasId(env->getStaticObjectField(cls, "KASS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              MSAS = new SbasId(env->getStaticObjectField(cls, "MSAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              SACCSA = new SbasId(env->getStaticObjectField(cls, "SACCSA", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              SDCM = new SbasId(env->getStaticObjectField(cls, "SDCM", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              SPAN = new SbasId(env->getStaticObjectField(cls, "SPAN", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              WAAS = new SbasId(env->getStaticObjectField(cls, "WAAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SbasId SbasId::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SbasId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7672e12250138acd], a0.this$));
          }

          JArray< SbasId > SbasId::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SbasId >(env->callStaticObjectMethod(cls, mids$[mid_values_bfe20c000a51e66d]));
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
        namespace navigation {
          static PyObject *t_SbasId_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SbasId_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SbasId_of_(t_SbasId *self, PyObject *args);
          static PyObject *t_SbasId_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SbasId_values(PyTypeObject *type);
          static PyObject *t_SbasId_get__parameters_(t_SbasId *self, void *data);
          static PyGetSetDef t_SbasId__fields_[] = {
            DECLARE_GET_FIELD(t_SbasId, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SbasId__methods_[] = {
            DECLARE_METHOD(t_SbasId, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SbasId, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SbasId, of_, METH_VARARGS),
            DECLARE_METHOD(t_SbasId, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SbasId, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SbasId)[] = {
            { Py_tp_methods, t_SbasId__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SbasId__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SbasId)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SbasId, t_SbasId, SbasId);
          PyObject *t_SbasId::wrap_Object(const SbasId& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SbasId::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SbasId *self = (t_SbasId *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SbasId::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SbasId::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SbasId *self = (t_SbasId *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SbasId::install(PyObject *module)
          {
            installType(&PY_TYPE(SbasId), &PY_TYPE_DEF(SbasId), module, "SbasId", 0);
          }

          void t_SbasId::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "class_", make_descriptor(SbasId::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "wrapfn_", make_descriptor(t_SbasId::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "boxfn_", make_descriptor(boxObject));
            env->getClass(SbasId::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "A_SBAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::A_SBAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "BDSBAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::BDSBAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "EGNOS", make_descriptor(t_SbasId::wrap_Object(*SbasId::EGNOS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "GAGAN", make_descriptor(t_SbasId::wrap_Object(*SbasId::GAGAN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "KASS", make_descriptor(t_SbasId::wrap_Object(*SbasId::KASS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "MSAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::MSAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "SACCSA", make_descriptor(t_SbasId::wrap_Object(*SbasId::SACCSA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "SDCM", make_descriptor(t_SbasId::wrap_Object(*SbasId::SDCM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "SPAN", make_descriptor(t_SbasId::wrap_Object(*SbasId::SPAN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "WAAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::WAAS)));
          }

          static PyObject *t_SbasId_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SbasId::initializeClass, 1)))
              return NULL;
            return t_SbasId::wrap_Object(SbasId(((t_SbasId *) arg)->object.this$));
          }
          static PyObject *t_SbasId_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SbasId::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SbasId_of_(t_SbasId *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SbasId_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SbasId result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::SbasId::valueOf(a0));
              return t_SbasId::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SbasId_values(PyTypeObject *type)
          {
            JArray< SbasId > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::SbasId::values());
            return JArray<jobject>(result.this$).wrap(t_SbasId::wrap_jobject);
          }
          static PyObject *t_SbasId_get__parameters_(t_SbasId *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/Generator.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *Generator::class$ = NULL;
          jmethodID *Generator::mids$ = NULL;
          bool Generator::live$ = false;

          jclass Generator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/Generator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addPropagator_24da3534b19b4622] = env->getMethodID(cls, "addPropagator", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_addScheduler_4c82e772d674afd6] = env->getMethodID(cls, "addScheduler", "(Lorg/orekit/estimation/measurements/generation/Scheduler;)V");
              mids$[mid_addSubscriber_b237d6053fe0e3ed] = env->getMethodID(cls, "addSubscriber", "(Lorg/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber;)V");
              mids$[mid_generate_ce7d94fe97fdcf55] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_getPropagator_bc6ccfd343befb27] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/estimation/measurements/ObservableSatellite;)Lorg/orekit/propagation/Propagator;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Generator::Generator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::org::orekit::estimation::measurements::ObservableSatellite Generator::addPropagator(const ::org::orekit::propagation::Propagator & a0) const
          {
            return ::org::orekit::estimation::measurements::ObservableSatellite(env->callObjectMethod(this$, mids$[mid_addPropagator_24da3534b19b4622], a0.this$));
          }

          void Generator::addScheduler(const ::org::orekit::estimation::measurements::generation::Scheduler & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addScheduler_4c82e772d674afd6], a0.this$);
          }

          void Generator::addSubscriber(const ::org::orekit::estimation::measurements::generation::GeneratedMeasurementSubscriber & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSubscriber_b237d6053fe0e3ed], a0.this$);
          }

          void Generator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_generate_ce7d94fe97fdcf55], a0.this$, a1.this$);
          }

          ::org::orekit::propagation::Propagator Generator::getPropagator(const ::org::orekit::estimation::measurements::ObservableSatellite & a0) const
          {
            return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_getPropagator_bc6ccfd343befb27], a0.this$));
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
          static PyObject *t_Generator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Generator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Generator_init_(t_Generator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Generator_addPropagator(t_Generator *self, PyObject *arg);
          static PyObject *t_Generator_addScheduler(t_Generator *self, PyObject *arg);
          static PyObject *t_Generator_addSubscriber(t_Generator *self, PyObject *arg);
          static PyObject *t_Generator_generate(t_Generator *self, PyObject *args);
          static PyObject *t_Generator_getPropagator(t_Generator *self, PyObject *arg);

          static PyMethodDef t_Generator__methods_[] = {
            DECLARE_METHOD(t_Generator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Generator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Generator, addPropagator, METH_O),
            DECLARE_METHOD(t_Generator, addScheduler, METH_O),
            DECLARE_METHOD(t_Generator, addSubscriber, METH_O),
            DECLARE_METHOD(t_Generator, generate, METH_VARARGS),
            DECLARE_METHOD(t_Generator, getPropagator, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Generator)[] = {
            { Py_tp_methods, t_Generator__methods_ },
            { Py_tp_init, (void *) t_Generator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Generator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Generator, t_Generator, Generator);

          void t_Generator::install(PyObject *module)
          {
            installType(&PY_TYPE(Generator), &PY_TYPE_DEF(Generator), module, "Generator", 0);
          }

          void t_Generator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "class_", make_descriptor(Generator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "wrapfn_", make_descriptor(t_Generator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Generator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Generator::initializeClass, 1)))
              return NULL;
            return t_Generator::wrap_Object(Generator(((t_Generator *) arg)->object.this$));
          }
          static PyObject *t_Generator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Generator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Generator_init_(t_Generator *self, PyObject *args, PyObject *kwds)
          {
            Generator object((jobject) NULL);

            INT_CALL(object = Generator());
            self->object = object;

            return 0;
          }

          static PyObject *t_Generator_addPropagator(t_Generator *self, PyObject *arg)
          {
            ::org::orekit::propagation::Propagator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.addPropagator(a0));
              return ::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addPropagator", arg);
            return NULL;
          }

          static PyObject *t_Generator_addScheduler(t_Generator *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::generation::Scheduler a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::generation::Scheduler::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::generation::t_Scheduler::parameters_))
            {
              OBJ_CALL(self->object.addScheduler(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addScheduler", arg);
            return NULL;
          }

          static PyObject *t_Generator_addSubscriber(t_Generator *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::generation::GeneratedMeasurementSubscriber a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::estimation::measurements::generation::GeneratedMeasurementSubscriber::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addSubscriber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSubscriber", arg);
            return NULL;
          }

          static PyObject *t_Generator_generate(t_Generator *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.generate(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "generate", args);
            return NULL;
          }

          static PyObject *t_Generator_getPropagator(t_Generator *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::ObservableSatellite a0((jobject) NULL);
            ::org::orekit::propagation::Propagator result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPropagator(a0));
              return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPropagator", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/DormandPrince54Integrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *DormandPrince54Integrator::class$ = NULL;
        jmethodID *DormandPrince54Integrator::mids$ = NULL;
        bool DormandPrince54Integrator::live$ = false;

        jclass DormandPrince54Integrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/DormandPrince54Integrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e3195482263a60ce] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_cd5724127cc72e96] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getA_eda3f19b8225f78f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_be783177b060994b] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_be783177b060994b] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_getOrder_d6ab429752e7c267] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_f204142554add7d0] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince54StateInterpolator;");
            mids$[mid_estimateError_8c458726c8da3a78] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54Integrator::DormandPrince54Integrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_e3195482263a60ce, a0, a1, a2.this$, a3.this$)) {}

        DormandPrince54Integrator::DormandPrince54Integrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_cd5724127cc72e96, a0, a1, a2, a3)) {}

        JArray< JArray< jdouble > > DormandPrince54Integrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_eda3f19b8225f78f]));
        }

        JArray< jdouble > DormandPrince54Integrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_be783177b060994b]));
        }

        JArray< jdouble > DormandPrince54Integrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_be783177b060994b]));
        }

        jint DormandPrince54Integrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_d6ab429752e7c267]);
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
        static PyObject *t_DormandPrince54Integrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54Integrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince54Integrator_init_(t_DormandPrince54Integrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince54Integrator_getA(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_getB(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_getC(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_getOrder(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_get__a(t_DormandPrince54Integrator *self, void *data);
        static PyObject *t_DormandPrince54Integrator_get__b(t_DormandPrince54Integrator *self, void *data);
        static PyObject *t_DormandPrince54Integrator_get__c(t_DormandPrince54Integrator *self, void *data);
        static PyObject *t_DormandPrince54Integrator_get__order(t_DormandPrince54Integrator *self, void *data);
        static PyGetSetDef t_DormandPrince54Integrator__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, a),
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, b),
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, c),
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, order),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince54Integrator__methods_[] = {
          DECLARE_METHOD(t_DormandPrince54Integrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54Integrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince54Integrator)[] = {
          { Py_tp_methods, t_DormandPrince54Integrator__methods_ },
          { Py_tp_init, (void *) t_DormandPrince54Integrator_init_ },
          { Py_tp_getset, t_DormandPrince54Integrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince54Integrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(DormandPrince54Integrator, t_DormandPrince54Integrator, DormandPrince54Integrator);

        void t_DormandPrince54Integrator::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince54Integrator), &PY_TYPE_DEF(DormandPrince54Integrator), module, "DormandPrince54Integrator", 0);
        }

        void t_DormandPrince54Integrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54Integrator), "class_", make_descriptor(DormandPrince54Integrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54Integrator), "wrapfn_", make_descriptor(t_DormandPrince54Integrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54Integrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince54Integrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince54Integrator::initializeClass, 1)))
            return NULL;
          return t_DormandPrince54Integrator::wrap_Object(DormandPrince54Integrator(((t_DormandPrince54Integrator *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince54Integrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince54Integrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince54Integrator_init_(t_DormandPrince54Integrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              DormandPrince54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince54Integrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              DormandPrince54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince54Integrator(a0, a1, a2, a3));
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

        static PyObject *t_DormandPrince54Integrator_getA(t_DormandPrince54Integrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_getB(t_DormandPrince54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_getC(t_DormandPrince54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_getOrder(t_DormandPrince54Integrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_get__a(t_DormandPrince54Integrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_DormandPrince54Integrator_get__b(t_DormandPrince54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_DormandPrince54Integrator_get__c(t_DormandPrince54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }

        static PyObject *t_DormandPrince54Integrator_get__order(t_DormandPrince54Integrator *self, void *data)
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
#include "org/orekit/gnss/DOPComputer.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ElevationMask.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/gnss/DOPComputer.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/gnss/DOP.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *DOPComputer::class$ = NULL;
      jmethodID *DOPComputer::mids$ = NULL;
      bool DOPComputer::live$ = false;
      jdouble DOPComputer::DOP_MIN_ELEVATION = (jdouble) 0;

      jclass DOPComputer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/DOPComputer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compute_46cd4086e16ddba4] = env->getMethodID(cls, "compute", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/List;)Lorg/orekit/gnss/DOP;");
          mids$[mid_create_c9d116723f4a2a31] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/gnss/DOPComputer;");
          mids$[mid_getElevationMask_6e01f84e52d7314a] = env->getMethodID(cls, "getElevationMask", "()Lorg/orekit/utils/ElevationMask;");
          mids$[mid_getMinElevation_9981f74b2d109da6] = env->getMethodID(cls, "getMinElevation", "()D");
          mids$[mid_withElevationMask_39869f1f4c689943] = env->getMethodID(cls, "withElevationMask", "(Lorg/orekit/utils/ElevationMask;)Lorg/orekit/gnss/DOPComputer;");
          mids$[mid_withMinElevation_3c85f30646426402] = env->getMethodID(cls, "withMinElevation", "(D)Lorg/orekit/gnss/DOPComputer;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DOP_MIN_ELEVATION = env->getStaticDoubleField(cls, "DOP_MIN_ELEVATION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::gnss::DOP DOPComputer::compute(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::List & a1) const
      {
        return ::org::orekit::gnss::DOP(env->callObjectMethod(this$, mids$[mid_compute_46cd4086e16ddba4], a0.this$, a1.this$));
      }

      DOPComputer DOPComputer::create(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::bodies::GeodeticPoint & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return DOPComputer(env->callStaticObjectMethod(cls, mids$[mid_create_c9d116723f4a2a31], a0.this$, a1.this$));
      }

      ::org::orekit::utils::ElevationMask DOPComputer::getElevationMask() const
      {
        return ::org::orekit::utils::ElevationMask(env->callObjectMethod(this$, mids$[mid_getElevationMask_6e01f84e52d7314a]));
      }

      jdouble DOPComputer::getMinElevation() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinElevation_9981f74b2d109da6]);
      }

      DOPComputer DOPComputer::withElevationMask(const ::org::orekit::utils::ElevationMask & a0) const
      {
        return DOPComputer(env->callObjectMethod(this$, mids$[mid_withElevationMask_39869f1f4c689943], a0.this$));
      }

      DOPComputer DOPComputer::withMinElevation(jdouble a0) const
      {
        return DOPComputer(env->callObjectMethod(this$, mids$[mid_withMinElevation_3c85f30646426402], a0));
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
      static PyObject *t_DOPComputer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DOPComputer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DOPComputer_compute(t_DOPComputer *self, PyObject *args);
      static PyObject *t_DOPComputer_create(PyTypeObject *type, PyObject *args);
      static PyObject *t_DOPComputer_getElevationMask(t_DOPComputer *self);
      static PyObject *t_DOPComputer_getMinElevation(t_DOPComputer *self);
      static PyObject *t_DOPComputer_withElevationMask(t_DOPComputer *self, PyObject *arg);
      static PyObject *t_DOPComputer_withMinElevation(t_DOPComputer *self, PyObject *arg);
      static PyObject *t_DOPComputer_get__elevationMask(t_DOPComputer *self, void *data);
      static PyObject *t_DOPComputer_get__minElevation(t_DOPComputer *self, void *data);
      static PyGetSetDef t_DOPComputer__fields_[] = {
        DECLARE_GET_FIELD(t_DOPComputer, elevationMask),
        DECLARE_GET_FIELD(t_DOPComputer, minElevation),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DOPComputer__methods_[] = {
        DECLARE_METHOD(t_DOPComputer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DOPComputer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DOPComputer, compute, METH_VARARGS),
        DECLARE_METHOD(t_DOPComputer, create, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DOPComputer, getElevationMask, METH_NOARGS),
        DECLARE_METHOD(t_DOPComputer, getMinElevation, METH_NOARGS),
        DECLARE_METHOD(t_DOPComputer, withElevationMask, METH_O),
        DECLARE_METHOD(t_DOPComputer, withMinElevation, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DOPComputer)[] = {
        { Py_tp_methods, t_DOPComputer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DOPComputer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DOPComputer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DOPComputer, t_DOPComputer, DOPComputer);

      void t_DOPComputer::install(PyObject *module)
      {
        installType(&PY_TYPE(DOPComputer), &PY_TYPE_DEF(DOPComputer), module, "DOPComputer", 0);
      }

      void t_DOPComputer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOPComputer), "class_", make_descriptor(DOPComputer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOPComputer), "wrapfn_", make_descriptor(t_DOPComputer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOPComputer), "boxfn_", make_descriptor(boxObject));
        env->getClass(DOPComputer::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOPComputer), "DOP_MIN_ELEVATION", make_descriptor(DOPComputer::DOP_MIN_ELEVATION));
      }

      static PyObject *t_DOPComputer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DOPComputer::initializeClass, 1)))
          return NULL;
        return t_DOPComputer::wrap_Object(DOPComputer(((t_DOPComputer *) arg)->object.this$));
      }
      static PyObject *t_DOPComputer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DOPComputer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DOPComputer_compute(t_DOPComputer *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::List a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::gnss::DOP result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(result = self->object.compute(a0, a1));
          return ::org::orekit::gnss::t_DOP::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "compute", args);
        return NULL;
      }

      static PyObject *t_DOPComputer_create(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
        DOPComputer result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::gnss::DOPComputer::create(a0, a1));
          return t_DOPComputer::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", args);
        return NULL;
      }

      static PyObject *t_DOPComputer_getElevationMask(t_DOPComputer *self)
      {
        ::org::orekit::utils::ElevationMask result((jobject) NULL);
        OBJ_CALL(result = self->object.getElevationMask());
        return ::org::orekit::utils::t_ElevationMask::wrap_Object(result);
      }

      static PyObject *t_DOPComputer_getMinElevation(t_DOPComputer *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinElevation());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOPComputer_withElevationMask(t_DOPComputer *self, PyObject *arg)
      {
        ::org::orekit::utils::ElevationMask a0((jobject) NULL);
        DOPComputer result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ElevationMask::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withElevationMask(a0));
          return t_DOPComputer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withElevationMask", arg);
        return NULL;
      }

      static PyObject *t_DOPComputer_withMinElevation(t_DOPComputer *self, PyObject *arg)
      {
        jdouble a0;
        DOPComputer result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.withMinElevation(a0));
          return t_DOPComputer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMinElevation", arg);
        return NULL;
      }

      static PyObject *t_DOPComputer_get__elevationMask(t_DOPComputer *self, void *data)
      {
        ::org::orekit::utils::ElevationMask value((jobject) NULL);
        OBJ_CALL(value = self->object.getElevationMask());
        return ::org::orekit::utils::t_ElevationMask::wrap_Object(value);
      }

      static PyObject *t_DOPComputer_get__minElevation(t_DOPComputer *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinElevation());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonFieldOrekitStepInterpolator.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonFieldOrekitStepInterpolator::class$ = NULL;
        jmethodID *PythonFieldOrekitStepInterpolator::mids$ = NULL;
        bool PythonFieldOrekitStepInterpolator::live$ = false;

        jclass PythonFieldOrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonFieldOrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getCurrentState_a74be2e38786f3b6] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getInterpolatedState_fb689a9c0f30b938] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getPreviousState_a74be2e38786f3b6] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_isForward_eee3de00fe971136] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_restrictStep_accb7476fa222284] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOrekitStepInterpolator::PythonFieldOrekitStepInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonFieldOrekitStepInterpolator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonFieldOrekitStepInterpolator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonFieldOrekitStepInterpolator::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace sampling {
        static PyObject *t_PythonFieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepInterpolator_of_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args);
        static int t_PythonFieldOrekitStepInterpolator_init_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOrekitStepInterpolator_finalize(t_PythonFieldOrekitStepInterpolator *self);
        static PyObject *t_PythonFieldOrekitStepInterpolator_pythonExtension(t_PythonFieldOrekitStepInterpolator *self, PyObject *args);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getCurrentState0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getInterpolatedState1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getPreviousState2(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonFieldOrekitStepInterpolator_isForward3(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldOrekitStepInterpolator_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_restrictStep5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonFieldOrekitStepInterpolator_get__self(t_PythonFieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_PythonFieldOrekitStepInterpolator_get__parameters_(t_PythonFieldOrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_PythonFieldOrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepInterpolator, self),
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOrekitStepInterpolator)[] = {
          { Py_tp_methods, t_PythonFieldOrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOrekitStepInterpolator_init_ },
          { Py_tp_getset, t_PythonFieldOrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOrekitStepInterpolator, t_PythonFieldOrekitStepInterpolator, PythonFieldOrekitStepInterpolator);
        PyObject *t_PythonFieldOrekitStepInterpolator::wrap_Object(const PythonFieldOrekitStepInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepInterpolator *self = (t_PythonFieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldOrekitStepInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepInterpolator *self = (t_PythonFieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldOrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOrekitStepInterpolator), &PY_TYPE_DEF(PythonFieldOrekitStepInterpolator), module, "PythonFieldOrekitStepInterpolator", 1);
        }

        void t_PythonFieldOrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepInterpolator), "class_", make_descriptor(PythonFieldOrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepInterpolator), "wrapfn_", make_descriptor(t_PythonFieldOrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOrekitStepInterpolator::initializeClass);
          JNINativeMethod methods[] = {
            { "getCurrentState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldOrekitStepInterpolator_getCurrentState0 },
            { "getInterpolatedState", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldOrekitStepInterpolator_getInterpolatedState1 },
            { "getPreviousState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldOrekitStepInterpolator_getPreviousState2 },
            { "isForward", "()Z", (void *) t_PythonFieldOrekitStepInterpolator_isForward3 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOrekitStepInterpolator_pythonDecRef4 },
            { "restrictStep", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;", (void *) t_PythonFieldOrekitStepInterpolator_restrictStep5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOrekitStepInterpolator::wrap_Object(PythonFieldOrekitStepInterpolator(((t_PythonFieldOrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_of_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldOrekitStepInterpolator_init_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOrekitStepInterpolator object((jobject) NULL);

          INT_CALL(object = PythonFieldOrekitStepInterpolator());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_finalize(t_PythonFieldOrekitStepInterpolator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_pythonExtension(t_PythonFieldOrekitStepInterpolator *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getCurrentState0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCurrentState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("getCurrentState", result);
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

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getInterpolatedState1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getInterpolatedState", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("getInterpolatedState", result);
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

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getPreviousState2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPreviousState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("getPreviousState", result);
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

        static jboolean JNICALL t_PythonFieldOrekitStepInterpolator_isForward3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isForward", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isForward", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonFieldOrekitStepInterpolator_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_restrictStep5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a1));
          PyObject *result = PyObject_CallMethod(obj, "restrictStep", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &value))
          {
            throwTypeError("restrictStep", result);
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

        static PyObject *t_PythonFieldOrekitStepInterpolator_get__self(t_PythonFieldOrekitStepInterpolator *self, void *data)
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
        static PyObject *t_PythonFieldOrekitStepInterpolator_get__parameters_(t_PythonFieldOrekitStepInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/YawSteering.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *YawSteering::class$ = NULL;
      jmethodID *YawSteering::mids$ = NULL;
      bool YawSteering::live$ = false;

      jclass YawSteering::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/YawSteering");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3c77f1da360eeb39] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/attitudes/GroundPointing;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getBaseState_a02177519e1b6a45] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getBaseState_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getTargetPV_11bfbaf3cce3e66c] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getTargetPV_19719ebf0495cd86] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getUnderlyingAttitudeProvider_2f73d1f4460b8d6c] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      YawSteering::YawSteering(const ::org::orekit::frames::Frame & a0, const ::org::orekit::attitudes::GroundPointing & a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_3c77f1da360eeb39, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::orekit::attitudes::Attitude YawSteering::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude YawSteering::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude YawSteering::getBaseState(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getBaseState_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude YawSteering::getBaseState(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getBaseState_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates YawSteering::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_11bfbaf3cce3e66c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates YawSteering::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_19719ebf0495cd86], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider YawSteering::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_2f73d1f4460b8d6c]));
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
      static PyObject *t_YawSteering_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_YawSteering_instance_(PyTypeObject *type, PyObject *arg);
      static int t_YawSteering_init_(t_YawSteering *self, PyObject *args, PyObject *kwds);
      static PyObject *t_YawSteering_getAttitude(t_YawSteering *self, PyObject *args);
      static PyObject *t_YawSteering_getBaseState(t_YawSteering *self, PyObject *args);
      static PyObject *t_YawSteering_getTargetPV(t_YawSteering *self, PyObject *args);
      static PyObject *t_YawSteering_getUnderlyingAttitudeProvider(t_YawSteering *self);
      static PyObject *t_YawSteering_get__underlyingAttitudeProvider(t_YawSteering *self, void *data);
      static PyGetSetDef t_YawSteering__fields_[] = {
        DECLARE_GET_FIELD(t_YawSteering, underlyingAttitudeProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_YawSteering__methods_[] = {
        DECLARE_METHOD(t_YawSteering, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawSteering, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawSteering, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_YawSteering, getBaseState, METH_VARARGS),
        DECLARE_METHOD(t_YawSteering, getTargetPV, METH_VARARGS),
        DECLARE_METHOD(t_YawSteering, getUnderlyingAttitudeProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(YawSteering)[] = {
        { Py_tp_methods, t_YawSteering__methods_ },
        { Py_tp_init, (void *) t_YawSteering_init_ },
        { Py_tp_getset, t_YawSteering__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(YawSteering)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(YawSteering, t_YawSteering, YawSteering);

      void t_YawSteering::install(PyObject *module)
      {
        installType(&PY_TYPE(YawSteering), &PY_TYPE_DEF(YawSteering), module, "YawSteering", 0);
      }

      void t_YawSteering::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawSteering), "class_", make_descriptor(YawSteering::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawSteering), "wrapfn_", make_descriptor(t_YawSteering::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawSteering), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_YawSteering_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, YawSteering::initializeClass, 1)))
          return NULL;
        return t_YawSteering::wrap_Object(YawSteering(((t_YawSteering *) arg)->object.this$));
      }
      static PyObject *t_YawSteering_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, YawSteering::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_YawSteering_init_(t_YawSteering *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::attitudes::GroundPointing a1((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        YawSteering object((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::attitudes::GroundPointing::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = YawSteering(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_YawSteering_getAttitude(t_YawSteering *self, PyObject *args)
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

        return callSuper(PY_TYPE(YawSteering), (PyObject *) self, "getAttitude", args, 2);
      }

      static PyObject *t_YawSteering_getBaseState(t_YawSteering *self, PyObject *args)
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
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
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
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getBaseState", args);
        return NULL;
      }

      static PyObject *t_YawSteering_getTargetPV(t_YawSteering *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }

      static PyObject *t_YawSteering_getUnderlyingAttitudeProvider(t_YawSteering *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_YawSteering_get__underlyingAttitudeProvider(t_YawSteering *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *ManeuverTriggers::class$ = NULL;
          jmethodID *ManeuverTriggers::mids$ = NULL;
          bool ManeuverTriggers::live$ = false;

          jclass ManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/ManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addResetter_5392838e44623505] = env->getMethodID(cls, "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V");
              mids$[mid_addResetter_8b21453ce137761f] = env->getMethodID(cls, "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_isFiring_8083fb6b6fb5ee99] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z");
              mids$[mid_isFiring_10e417873abbceb0] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void ManeuverTriggers::addResetter(const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_5392838e44623505], a0.this$);
          }

          void ManeuverTriggers::addResetter(const ::org::hipparchus::Field & a0, const ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addResetter_8b21453ce137761f], a0.this$, a1.this$);
          }

          ::java::lang::String ManeuverTriggers::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
          }

          void ManeuverTriggers::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
          }

          void ManeuverTriggers::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
          }

          jboolean ManeuverTriggers::isFiring(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_8083fb6b6fb5ee99], a0.this$, a1.this$);
          }

          jboolean ManeuverTriggers::isFiring(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isFiring_10e417873abbceb0], a0.this$, a1.this$);
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
          static PyObject *t_ManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ManeuverTriggers_addResetter(t_ManeuverTriggers *self, PyObject *args);
          static PyObject *t_ManeuverTriggers_getName(t_ManeuverTriggers *self);
          static PyObject *t_ManeuverTriggers_init(t_ManeuverTriggers *self, PyObject *args);
          static PyObject *t_ManeuverTriggers_isFiring(t_ManeuverTriggers *self, PyObject *args);
          static PyObject *t_ManeuverTriggers_get__name(t_ManeuverTriggers *self, void *data);
          static PyGetSetDef t_ManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_ManeuverTriggers, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_ManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ManeuverTriggers, addResetter, METH_VARARGS),
            DECLARE_METHOD(t_ManeuverTriggers, getName, METH_NOARGS),
            DECLARE_METHOD(t_ManeuverTriggers, init, METH_VARARGS),
            DECLARE_METHOD(t_ManeuverTriggers, isFiring, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ManeuverTriggers)[] = {
            { Py_tp_methods, t_ManeuverTriggers__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ManeuverTriggers)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(ManeuverTriggers, t_ManeuverTriggers, ManeuverTriggers);

          void t_ManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(ManeuverTriggers), &PY_TYPE_DEF(ManeuverTriggers), module, "ManeuverTriggers", 0);
          }

          void t_ManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggers), "class_", make_descriptor(ManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggers), "wrapfn_", make_descriptor(t_ManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverTriggers), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_ManeuverTriggers::wrap_Object(ManeuverTriggers(((t_ManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_ManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ManeuverTriggers_addResetter(t_ManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addResetter(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::forces::maneuvers::trigger::t_FieldManeuverTriggersResetter::parameters_))
                {
                  OBJ_CALL(self->object.addResetter(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addResetter", args);
            return NULL;
          }

          static PyObject *t_ManeuverTriggers_getName(t_ManeuverTriggers *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_ManeuverTriggers_init(t_ManeuverTriggers *self, PyObject *args)
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

          static PyObject *t_ManeuverTriggers_isFiring(t_ManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.isFiring(a0, a1));
                  Py_RETURN_BOOL(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "isFiring", args);
            return NULL;
          }

          static PyObject *t_ManeuverTriggers_get__name(t_ManeuverTriggers *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$CRDDataBlock.h"
#include "org/orekit/files/ilrs/CRDHeader.h"
#include "org/orekit/files/ilrs/CRDConfiguration.h"
#include "java/util/List.h"
#include "org/orekit/files/ilrs/CRD$RangeMeasurement.h"
#include "org/orekit/files/ilrs/CRD$SessionStatistics.h"
#include "org/orekit/files/ilrs/CRD$RangeSupplement.h"
#include "org/orekit/files/ilrs/CRD$Calibration.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRD$Meteo.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "org/orekit/files/ilrs/CRD$CalibrationDetail.h"
#include "org/orekit/files/ilrs/CRD$AnglesMeasurement.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$CRDDataBlock::class$ = NULL;
        jmethodID *CRD$CRDDataBlock::mids$ = NULL;
        bool CRD$CRDDataBlock::live$ = false;

        jclass CRD$CRDDataBlock::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$CRDDataBlock");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addAnglesData_f2bfac9037809054] = env->getMethodID(cls, "addAnglesData", "(Lorg/orekit/files/ilrs/CRD$AnglesMeasurement;)V");
            mids$[mid_addCalibrationData_6e0dd2e157f1601a] = env->getMethodID(cls, "addCalibrationData", "(Lorg/orekit/files/ilrs/CRD$Calibration;)V");
            mids$[mid_addCalibrationDetailData_9b13cbecc6b3c8a9] = env->getMethodID(cls, "addCalibrationDetailData", "(Lorg/orekit/files/ilrs/CRD$CalibrationDetail;)V");
            mids$[mid_addMeteoData_a1ca9231f470ea62] = env->getMethodID(cls, "addMeteoData", "(Lorg/orekit/files/ilrs/CRD$MeteorologicalMeasurement;)V");
            mids$[mid_addRangeData_9ce32cf0c78fd5bf] = env->getMethodID(cls, "addRangeData", "(Lorg/orekit/files/ilrs/CRD$RangeMeasurement;)V");
            mids$[mid_addRangeSupplementData_9233cb8f8891c1ab] = env->getMethodID(cls, "addRangeSupplementData", "(Lorg/orekit/files/ilrs/CRD$RangeSupplement;)V");
            mids$[mid_addSessionStatisticsData_c254e9fe3de7546e] = env->getMethodID(cls, "addSessionStatisticsData", "(Lorg/orekit/files/ilrs/CRD$SessionStatistics;)V");
            mids$[mid_getAnglesData_d751c1a57012b438] = env->getMethodID(cls, "getAnglesData", "()Ljava/util/List;");
            mids$[mid_getCalibrationData_d751c1a57012b438] = env->getMethodID(cls, "getCalibrationData", "()Ljava/util/List;");
            mids$[mid_getCalibrationDetailData_d751c1a57012b438] = env->getMethodID(cls, "getCalibrationDetailData", "()Ljava/util/List;");
            mids$[mid_getCalibrationDetailRecords_d751c1a57012b438] = env->getMethodID(cls, "getCalibrationDetailRecords", "()Ljava/util/List;");
            mids$[mid_getCalibrationDetailRecords_7a823e7285fdf3d6] = env->getMethodID(cls, "getCalibrationDetailRecords", "(Ljava/lang/String;)Ljava/util/List;");
            mids$[mid_getCalibrationRecords_d751c1a57012b438] = env->getMethodID(cls, "getCalibrationRecords", "()Ljava/util/List;");
            mids$[mid_getCalibrationRecords_7a823e7285fdf3d6] = env->getMethodID(cls, "getCalibrationRecords", "(Ljava/lang/String;)Ljava/util/List;");
            mids$[mid_getConfigurationRecords_6e32e8b866334f5e] = env->getMethodID(cls, "getConfigurationRecords", "()Lorg/orekit/files/ilrs/CRDConfiguration;");
            mids$[mid_getHeader_d0b4695981cdbc10] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ilrs/CRDHeader;");
            mids$[mid_getMeteoData_a2084375ef6ad5f8] = env->getMethodID(cls, "getMeteoData", "()Lorg/orekit/files/ilrs/CRD$Meteo;");
            mids$[mid_getRangeData_d751c1a57012b438] = env->getMethodID(cls, "getRangeData", "()Ljava/util/List;");
            mids$[mid_getRangeSupplementData_d751c1a57012b438] = env->getMethodID(cls, "getRangeSupplementData", "()Ljava/util/List;");
            mids$[mid_getSessionStatisticsData_d751c1a57012b438] = env->getMethodID(cls, "getSessionStatisticsData", "()Ljava/util/List;");
            mids$[mid_getSessionStatisticsRecord_5326ab78ce7f8b48] = env->getMethodID(cls, "getSessionStatisticsRecord", "()Lorg/orekit/files/ilrs/CRD$SessionStatistics;");
            mids$[mid_getSessionStatisticsRecord_3b6d4cff27a39031] = env->getMethodID(cls, "getSessionStatisticsRecord", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRD$SessionStatistics;");
            mids$[mid_getWavelength_3cf80904f47a50fa] = env->getMethodID(cls, "getWavelength", "(Lorg/orekit/files/ilrs/CRD$RangeMeasurement;)D");
            mids$[mid_setConfigurationRecords_ad84646f4832598c] = env->getMethodID(cls, "setConfigurationRecords", "(Lorg/orekit/files/ilrs/CRDConfiguration;)V");
            mids$[mid_setHeader_6708e6c1ee816130] = env->getMethodID(cls, "setHeader", "(Lorg/orekit/files/ilrs/CRDHeader;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$CRDDataBlock::CRD$CRDDataBlock() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void CRD$CRDDataBlock::addAnglesData(const ::org::orekit::files::ilrs::CRD$AnglesMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAnglesData_f2bfac9037809054], a0.this$);
        }

        void CRD$CRDDataBlock::addCalibrationData(const ::org::orekit::files::ilrs::CRD$Calibration & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addCalibrationData_6e0dd2e157f1601a], a0.this$);
        }

        void CRD$CRDDataBlock::addCalibrationDetailData(const ::org::orekit::files::ilrs::CRD$CalibrationDetail & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addCalibrationDetailData_9b13cbecc6b3c8a9], a0.this$);
        }

        void CRD$CRDDataBlock::addMeteoData(const ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMeteoData_a1ca9231f470ea62], a0.this$);
        }

        void CRD$CRDDataBlock::addRangeData(const ::org::orekit::files::ilrs::CRD$RangeMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addRangeData_9ce32cf0c78fd5bf], a0.this$);
        }

        void CRD$CRDDataBlock::addRangeSupplementData(const ::org::orekit::files::ilrs::CRD$RangeSupplement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addRangeSupplementData_9233cb8f8891c1ab], a0.this$);
        }

        void CRD$CRDDataBlock::addSessionStatisticsData(const ::org::orekit::files::ilrs::CRD$SessionStatistics & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addSessionStatisticsData_c254e9fe3de7546e], a0.this$);
        }

        ::java::util::List CRD$CRDDataBlock::getAnglesData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAnglesData_d751c1a57012b438]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationData_d751c1a57012b438]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationDetailData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationDetailData_d751c1a57012b438]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationDetailRecords() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationDetailRecords_d751c1a57012b438]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationDetailRecords(const ::java::lang::String & a0) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationDetailRecords_7a823e7285fdf3d6], a0.this$));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationRecords() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationRecords_d751c1a57012b438]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationRecords(const ::java::lang::String & a0) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationRecords_7a823e7285fdf3d6], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration CRD$CRDDataBlock::getConfigurationRecords() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration(env->callObjectMethod(this$, mids$[mid_getConfigurationRecords_6e32e8b866334f5e]));
        }

        ::org::orekit::files::ilrs::CRDHeader CRD$CRDDataBlock::getHeader() const
        {
          return ::org::orekit::files::ilrs::CRDHeader(env->callObjectMethod(this$, mids$[mid_getHeader_d0b4695981cdbc10]));
        }

        ::org::orekit::files::ilrs::CRD$Meteo CRD$CRDDataBlock::getMeteoData() const
        {
          return ::org::orekit::files::ilrs::CRD$Meteo(env->callObjectMethod(this$, mids$[mid_getMeteoData_a2084375ef6ad5f8]));
        }

        ::java::util::List CRD$CRDDataBlock::getRangeData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRangeData_d751c1a57012b438]));
        }

        ::java::util::List CRD$CRDDataBlock::getRangeSupplementData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRangeSupplementData_d751c1a57012b438]));
        }

        ::java::util::List CRD$CRDDataBlock::getSessionStatisticsData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSessionStatisticsData_d751c1a57012b438]));
        }

        ::org::orekit::files::ilrs::CRD$SessionStatistics CRD$CRDDataBlock::getSessionStatisticsRecord() const
        {
          return ::org::orekit::files::ilrs::CRD$SessionStatistics(env->callObjectMethod(this$, mids$[mid_getSessionStatisticsRecord_5326ab78ce7f8b48]));
        }

        ::org::orekit::files::ilrs::CRD$SessionStatistics CRD$CRDDataBlock::getSessionStatisticsRecord(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::ilrs::CRD$SessionStatistics(env->callObjectMethod(this$, mids$[mid_getSessionStatisticsRecord_3b6d4cff27a39031], a0.this$));
        }

        jdouble CRD$CRDDataBlock::getWavelength(const ::org::orekit::files::ilrs::CRD$RangeMeasurement & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getWavelength_3cf80904f47a50fa], a0.this$);
        }

        void CRD$CRDDataBlock::setConfigurationRecords(const ::org::orekit::files::ilrs::CRDConfiguration & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setConfigurationRecords_ad84646f4832598c], a0.this$);
        }

        void CRD$CRDDataBlock::setHeader(const ::org::orekit::files::ilrs::CRDHeader & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHeader_6708e6c1ee816130], a0.this$);
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
        static PyObject *t_CRD$CRDDataBlock_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$CRDDataBlock_init_(t_CRD$CRDDataBlock *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$CRDDataBlock_addAnglesData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addCalibrationData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addCalibrationDetailData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addMeteoData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addRangeData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addRangeSupplementData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addSessionStatisticsData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_getAnglesData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailRecords(t_CRD$CRDDataBlock *self, PyObject *args);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationRecords(t_CRD$CRDDataBlock *self, PyObject *args);
        static PyObject *t_CRD$CRDDataBlock_getConfigurationRecords(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getHeader(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getMeteoData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getRangeData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getRangeSupplementData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsRecord(t_CRD$CRDDataBlock *self, PyObject *args);
        static PyObject *t_CRD$CRDDataBlock_getWavelength(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_setConfigurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_setHeader(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_get__anglesData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailRecords(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationRecords(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__configurationRecords(t_CRD$CRDDataBlock *self, void *data);
        static int t_CRD$CRDDataBlock_set__configurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__header(t_CRD$CRDDataBlock *self, void *data);
        static int t_CRD$CRDDataBlock_set__header(t_CRD$CRDDataBlock *self, PyObject *arg, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__meteoData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__rangeData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__rangeSupplementData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsRecord(t_CRD$CRDDataBlock *self, void *data);
        static PyGetSetDef t_CRD$CRDDataBlock__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, anglesData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationDetailData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationDetailRecords),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationRecords),
          DECLARE_GETSET_FIELD(t_CRD$CRDDataBlock, configurationRecords),
          DECLARE_GETSET_FIELD(t_CRD$CRDDataBlock, header),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, meteoData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, rangeData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, rangeSupplementData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, sessionStatisticsData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, sessionStatisticsRecord),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$CRDDataBlock__methods_[] = {
          DECLARE_METHOD(t_CRD$CRDDataBlock, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addAnglesData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addCalibrationData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addCalibrationDetailData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addMeteoData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addRangeData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addRangeSupplementData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addSessionStatisticsData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getAnglesData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationDetailData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationDetailRecords, METH_VARARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationRecords, METH_VARARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getConfigurationRecords, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getHeader, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getMeteoData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getRangeData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getRangeSupplementData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getSessionStatisticsData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getSessionStatisticsRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getWavelength, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, setConfigurationRecords, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, setHeader, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$CRDDataBlock)[] = {
          { Py_tp_methods, t_CRD$CRDDataBlock__methods_ },
          { Py_tp_init, (void *) t_CRD$CRDDataBlock_init_ },
          { Py_tp_getset, t_CRD$CRDDataBlock__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$CRDDataBlock)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$CRDDataBlock, t_CRD$CRDDataBlock, CRD$CRDDataBlock);

        void t_CRD$CRDDataBlock::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$CRDDataBlock), &PY_TYPE_DEF(CRD$CRDDataBlock), module, "CRD$CRDDataBlock", 0);
        }

        void t_CRD$CRDDataBlock::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CRDDataBlock), "class_", make_descriptor(CRD$CRDDataBlock::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CRDDataBlock), "wrapfn_", make_descriptor(t_CRD$CRDDataBlock::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CRDDataBlock), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$CRDDataBlock_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$CRDDataBlock::initializeClass, 1)))
            return NULL;
          return t_CRD$CRDDataBlock::wrap_Object(CRD$CRDDataBlock(((t_CRD$CRDDataBlock *) arg)->object.this$));
        }
        static PyObject *t_CRD$CRDDataBlock_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$CRDDataBlock::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$CRDDataBlock_init_(t_CRD$CRDDataBlock *self, PyObject *args, PyObject *kwds)
        {
          CRD$CRDDataBlock object((jobject) NULL);

          INT_CALL(object = CRD$CRDDataBlock());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRD$CRDDataBlock_addAnglesData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$AnglesMeasurement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$AnglesMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addAnglesData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAnglesData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addCalibrationData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$Calibration a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$Calibration::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addCalibrationData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCalibrationData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addCalibrationDetailData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$CalibrationDetail a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$CalibrationDetail::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addCalibrationDetailData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCalibrationDetailData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addMeteoData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addMeteoData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMeteoData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addRangeData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$RangeMeasurement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$RangeMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addRangeData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addRangeData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addRangeSupplementData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$RangeSupplement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$RangeSupplement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addRangeSupplementData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addRangeSupplementData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addSessionStatisticsData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$SessionStatistics a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$SessionStatistics::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addSessionStatisticsData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSessionStatisticsData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getAnglesData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAnglesData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$AnglesMeasurement));
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCalibrationData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$Calibration));
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCalibrationDetailData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CalibrationDetail));
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailRecords(t_CRD$CRDDataBlock *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getCalibrationDetailRecords());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CalibrationDetail));
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getCalibrationDetailRecords(a0));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CalibrationDetail));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getCalibrationDetailRecords", args);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationRecords(t_CRD$CRDDataBlock *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getCalibrationRecords());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$Calibration));
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getCalibrationRecords(a0));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$Calibration));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getCalibrationRecords", args);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getConfigurationRecords(t_CRD$CRDDataBlock *self)
        {
          ::org::orekit::files::ilrs::CRDConfiguration result((jobject) NULL);
          OBJ_CALL(result = self->object.getConfigurationRecords());
          return ::org::orekit::files::ilrs::t_CRDConfiguration::wrap_Object(result);
        }

        static PyObject *t_CRD$CRDDataBlock_getHeader(t_CRD$CRDDataBlock *self)
        {
          ::org::orekit::files::ilrs::CRDHeader result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CRDHeader::wrap_Object(result);
        }

        static PyObject *t_CRD$CRDDataBlock_getMeteoData(t_CRD$CRDDataBlock *self)
        {
          ::org::orekit::files::ilrs::CRD$Meteo result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeteoData());
          return ::org::orekit::files::ilrs::t_CRD$Meteo::wrap_Object(result);
        }

        static PyObject *t_CRD$CRDDataBlock_getRangeData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRangeData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$RangeMeasurement));
        }

        static PyObject *t_CRD$CRDDataBlock_getRangeSupplementData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRangeSupplementData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$RangeSupplement));
        }

        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSessionStatisticsData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$SessionStatistics));
        }

        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsRecord(t_CRD$CRDDataBlock *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRD$SessionStatistics result((jobject) NULL);
              OBJ_CALL(result = self->object.getSessionStatisticsRecord());
              return ::org::orekit::files::ilrs::t_CRD$SessionStatistics::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRD$SessionStatistics result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getSessionStatisticsRecord(a0));
                return ::org::orekit::files::ilrs::t_CRD$SessionStatistics::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSessionStatisticsRecord", args);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getWavelength(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$RangeMeasurement a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$RangeMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getWavelength(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_setConfigurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRDConfiguration a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDConfiguration::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setConfigurationRecords(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setConfigurationRecords", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_setHeader(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRDHeader a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDHeader::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setHeader(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHeader", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_get__anglesData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAnglesData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationDetailData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailRecords(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationDetailRecords());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationRecords(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationRecords());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__configurationRecords(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getConfigurationRecords());
          return ::org::orekit::files::ilrs::t_CRDConfiguration::wrap_Object(value);
        }
        static int t_CRD$CRDDataBlock_set__configurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::ilrs::CRDConfiguration value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDConfiguration::initializeClass, &value))
            {
              INT_CALL(self->object.setConfigurationRecords(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "configurationRecords", arg);
          return -1;
        }

        static PyObject *t_CRD$CRDDataBlock_get__header(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDHeader value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CRDHeader::wrap_Object(value);
        }
        static int t_CRD$CRDDataBlock_set__header(t_CRD$CRDDataBlock *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::ilrs::CRDHeader value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDHeader::initializeClass, &value))
            {
              INT_CALL(self->object.setHeader(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "header", arg);
          return -1;
        }

        static PyObject *t_CRD$CRDDataBlock_get__meteoData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRD$Meteo value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeteoData());
          return ::org::orekit::files::ilrs::t_CRD$Meteo::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__rangeData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRangeData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__rangeSupplementData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRangeSupplementData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSessionStatisticsData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsRecord(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRD$SessionStatistics value((jobject) NULL);
          OBJ_CALL(value = self->object.getSessionStatisticsRecord());
          return ::org::orekit::files::ilrs::t_CRD$SessionStatistics::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/BodyRotatingFrameId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/api/BodyRotatingFrameId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *BodyRotatingFrameId::class$ = NULL;
        jmethodID *BodyRotatingFrameId::mids$ = NULL;
        bool BodyRotatingFrameId::live$ = false;
        BodyRotatingFrameId *BodyRotatingFrameId::GTOD = NULL;
        BodyRotatingFrameId *BodyRotatingFrameId::ITRF = NULL;
        BodyRotatingFrameId *BodyRotatingFrameId::ITRF_EQUINOX = NULL;

        jclass BodyRotatingFrameId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/BodyRotatingFrameId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_825d3d907e6d7304] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/BodyRotatingFrameId;");
            mids$[mid_values_18c872a780fcfa14] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/BodyRotatingFrameId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GTOD = new BodyRotatingFrameId(env->getStaticObjectField(cls, "GTOD", "Lorg/orekit/rugged/api/BodyRotatingFrameId;"));
            ITRF = new BodyRotatingFrameId(env->getStaticObjectField(cls, "ITRF", "Lorg/orekit/rugged/api/BodyRotatingFrameId;"));
            ITRF_EQUINOX = new BodyRotatingFrameId(env->getStaticObjectField(cls, "ITRF_EQUINOX", "Lorg/orekit/rugged/api/BodyRotatingFrameId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BodyRotatingFrameId BodyRotatingFrameId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BodyRotatingFrameId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_825d3d907e6d7304], a0.this$));
        }

        JArray< BodyRotatingFrameId > BodyRotatingFrameId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< BodyRotatingFrameId >(env->callStaticObjectMethod(cls, mids$[mid_values_18c872a780fcfa14]));
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
      namespace api {
        static PyObject *t_BodyRotatingFrameId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BodyRotatingFrameId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BodyRotatingFrameId_of_(t_BodyRotatingFrameId *self, PyObject *args);
        static PyObject *t_BodyRotatingFrameId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_BodyRotatingFrameId_values(PyTypeObject *type);
        static PyObject *t_BodyRotatingFrameId_get__parameters_(t_BodyRotatingFrameId *self, void *data);
        static PyGetSetDef t_BodyRotatingFrameId__fields_[] = {
          DECLARE_GET_FIELD(t_BodyRotatingFrameId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BodyRotatingFrameId__methods_[] = {
          DECLARE_METHOD(t_BodyRotatingFrameId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BodyRotatingFrameId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BodyRotatingFrameId, of_, METH_VARARGS),
          DECLARE_METHOD(t_BodyRotatingFrameId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BodyRotatingFrameId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BodyRotatingFrameId)[] = {
          { Py_tp_methods, t_BodyRotatingFrameId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BodyRotatingFrameId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BodyRotatingFrameId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(BodyRotatingFrameId, t_BodyRotatingFrameId, BodyRotatingFrameId);
        PyObject *t_BodyRotatingFrameId::wrap_Object(const BodyRotatingFrameId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BodyRotatingFrameId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BodyRotatingFrameId *self = (t_BodyRotatingFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BodyRotatingFrameId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BodyRotatingFrameId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BodyRotatingFrameId *self = (t_BodyRotatingFrameId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BodyRotatingFrameId::install(PyObject *module)
        {
          installType(&PY_TYPE(BodyRotatingFrameId), &PY_TYPE_DEF(BodyRotatingFrameId), module, "BodyRotatingFrameId", 0);
        }

        void t_BodyRotatingFrameId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "class_", make_descriptor(BodyRotatingFrameId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "wrapfn_", make_descriptor(t_BodyRotatingFrameId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "boxfn_", make_descriptor(boxObject));
          env->getClass(BodyRotatingFrameId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "GTOD", make_descriptor(t_BodyRotatingFrameId::wrap_Object(*BodyRotatingFrameId::GTOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "ITRF", make_descriptor(t_BodyRotatingFrameId::wrap_Object(*BodyRotatingFrameId::ITRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BodyRotatingFrameId), "ITRF_EQUINOX", make_descriptor(t_BodyRotatingFrameId::wrap_Object(*BodyRotatingFrameId::ITRF_EQUINOX)));
        }

        static PyObject *t_BodyRotatingFrameId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BodyRotatingFrameId::initializeClass, 1)))
            return NULL;
          return t_BodyRotatingFrameId::wrap_Object(BodyRotatingFrameId(((t_BodyRotatingFrameId *) arg)->object.this$));
        }
        static PyObject *t_BodyRotatingFrameId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BodyRotatingFrameId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BodyRotatingFrameId_of_(t_BodyRotatingFrameId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BodyRotatingFrameId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          BodyRotatingFrameId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::BodyRotatingFrameId::valueOf(a0));
            return t_BodyRotatingFrameId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_BodyRotatingFrameId_values(PyTypeObject *type)
        {
          JArray< BodyRotatingFrameId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::BodyRotatingFrameId::values());
          return JArray<jobject>(result.this$).wrap(t_BodyRotatingFrameId::wrap_jobject);
        }
        static PyObject *t_BodyRotatingFrameId_get__parameters_(t_BodyRotatingFrameId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/SecantSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *SecantSolver::class$ = NULL;
        jmethodID *SecantSolver::mids$ = NULL;
        bool SecantSolver::live$ = false;

        jclass SecantSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/SecantSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_9981f74b2d109da6] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SecantSolver::SecantSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        SecantSolver::SecantSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        SecantSolver::SecantSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}
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
        static PyObject *t_SecantSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SecantSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SecantSolver_of_(t_SecantSolver *self, PyObject *args);
        static int t_SecantSolver_init_(t_SecantSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SecantSolver_get__parameters_(t_SecantSolver *self, void *data);
        static PyGetSetDef t_SecantSolver__fields_[] = {
          DECLARE_GET_FIELD(t_SecantSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SecantSolver__methods_[] = {
          DECLARE_METHOD(t_SecantSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SecantSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SecantSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SecantSolver)[] = {
          { Py_tp_methods, t_SecantSolver__methods_ },
          { Py_tp_init, (void *) t_SecantSolver_init_ },
          { Py_tp_getset, t_SecantSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SecantSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(SecantSolver, t_SecantSolver, SecantSolver);
        PyObject *t_SecantSolver::wrap_Object(const SecantSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SecantSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SecantSolver *self = (t_SecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SecantSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SecantSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SecantSolver *self = (t_SecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SecantSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(SecantSolver), &PY_TYPE_DEF(SecantSolver), module, "SecantSolver", 0);
        }

        void t_SecantSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SecantSolver), "class_", make_descriptor(SecantSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SecantSolver), "wrapfn_", make_descriptor(t_SecantSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SecantSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SecantSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SecantSolver::initializeClass, 1)))
            return NULL;
          return t_SecantSolver::wrap_Object(SecantSolver(((t_SecantSolver *) arg)->object.this$));
        }
        static PyObject *t_SecantSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SecantSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SecantSolver_of_(t_SecantSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SecantSolver_init_(t_SecantSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SecantSolver object((jobject) NULL);

              INT_CALL(object = SecantSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              SecantSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = SecantSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              SecantSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = SecantSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_SecantSolver_get__parameters_(t_SecantSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TTScale::class$ = NULL;
      jmethodID *TTScale::mids$ = NULL;
      bool TTScale::live$ = false;

      jclass TTScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TTScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_209f08246d708042] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_cf010978f3c5a913] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_50aa1fdea9b81950] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TTScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      jdouble TTScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TTScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_cf010978f3c5a913], a0.this$));
      }

      jdouble TTScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_50aa1fdea9b81950], a0.this$, a1.this$);
      }

      ::java::lang::String TTScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      static PyObject *t_TTScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TTScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TTScale_getName(t_TTScale *self);
      static PyObject *t_TTScale_offsetFromTAI(t_TTScale *self, PyObject *args);
      static PyObject *t_TTScale_offsetToTAI(t_TTScale *self, PyObject *args);
      static PyObject *t_TTScale_toString(t_TTScale *self, PyObject *args);
      static PyObject *t_TTScale_get__name(t_TTScale *self, void *data);
      static PyGetSetDef t_TTScale__fields_[] = {
        DECLARE_GET_FIELD(t_TTScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TTScale__methods_[] = {
        DECLARE_METHOD(t_TTScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TTScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TTScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TTScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TTScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_TTScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TTScale)[] = {
        { Py_tp_methods, t_TTScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TTScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TTScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TTScale, t_TTScale, TTScale);

      void t_TTScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TTScale), &PY_TYPE_DEF(TTScale), module, "TTScale", 0);
      }

      void t_TTScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TTScale), "class_", make_descriptor(TTScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TTScale), "wrapfn_", make_descriptor(t_TTScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TTScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TTScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TTScale::initializeClass, 1)))
          return NULL;
        return t_TTScale::wrap_Object(TTScale(((t_TTScale *) arg)->object.this$));
      }
      static PyObject *t_TTScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TTScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TTScale_getName(t_TTScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TTScale_offsetFromTAI(t_TTScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_TTScale_offsetToTAI(t_TTScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_TTScale_toString(t_TTScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TTScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TTScale_get__name(t_TTScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
