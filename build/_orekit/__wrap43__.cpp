#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarC.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarC::class$ = NULL;
          jmethodID *FieldCopolarC::mids$ = NULL;
          bool FieldCopolarC::live$ = false;

          jclass FieldCopolarC::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarC");

              mids$ = new jmethodID[max_mid];
              mids$[mid_dc_81520b552cb3fa26] = env->getMethodID(cls, "dc", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_nc_81520b552cb3fa26] = env->getMethodID(cls, "nc", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_sc_81520b552cb3fa26] = env->getMethodID(cls, "sc", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarC::dc() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dc_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarC::nc() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_nc_81520b552cb3fa26]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarC::sc() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_sc_81520b552cb3fa26]));
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
          static PyObject *t_FieldCopolarC_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarC_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarC_of_(t_FieldCopolarC *self, PyObject *args);
          static PyObject *t_FieldCopolarC_dc(t_FieldCopolarC *self);
          static PyObject *t_FieldCopolarC_nc(t_FieldCopolarC *self);
          static PyObject *t_FieldCopolarC_sc(t_FieldCopolarC *self);
          static PyObject *t_FieldCopolarC_get__parameters_(t_FieldCopolarC *self, void *data);
          static PyGetSetDef t_FieldCopolarC__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarC, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarC__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarC, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarC, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarC, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarC, dc, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarC, nc, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarC, sc, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarC)[] = {
            { Py_tp_methods, t_FieldCopolarC__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarC__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarC)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarC, t_FieldCopolarC, FieldCopolarC);
          PyObject *t_FieldCopolarC::wrap_Object(const FieldCopolarC& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarC::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarC *self = (t_FieldCopolarC *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarC::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarC::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarC *self = (t_FieldCopolarC *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarC::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarC), &PY_TYPE_DEF(FieldCopolarC), module, "FieldCopolarC", 0);
          }

          void t_FieldCopolarC::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarC), "class_", make_descriptor(FieldCopolarC::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarC), "wrapfn_", make_descriptor(t_FieldCopolarC::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarC), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarC_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarC::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarC::wrap_Object(FieldCopolarC(((t_FieldCopolarC *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarC_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarC::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarC_of_(t_FieldCopolarC *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarC_dc(t_FieldCopolarC *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.dc());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarC_nc(t_FieldCopolarC *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.nc());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarC_sc(t_FieldCopolarC *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.sc());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarC_get__parameters_(t_FieldCopolarC *self, void *data)
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
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GNSSAttitudeProvider::class$ = NULL;
        jmethodID *GNSSAttitudeProvider::mids$ = NULL;
        bool GNSSAttitudeProvider::live$ = false;

        jclass GNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_validityEnd_c325492395d89b24] = env->getMethodID(cls, "validityEnd", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_validityStart_c325492395d89b24] = env->getMethodID(cls, "validityStart", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate GNSSAttitudeProvider::validityEnd() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityEnd_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate GNSSAttitudeProvider::validityStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityStart_c325492395d89b24]));
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
      namespace attitude {
        static PyObject *t_GNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GNSSAttitudeProvider_validityEnd(t_GNSSAttitudeProvider *self);
        static PyObject *t_GNSSAttitudeProvider_validityStart(t_GNSSAttitudeProvider *self);

        static PyMethodDef t_GNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_GNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GNSSAttitudeProvider, validityEnd, METH_NOARGS),
          DECLARE_METHOD(t_GNSSAttitudeProvider, validityStart, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_GNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::org::orekit::attitudes::AttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GNSSAttitudeProvider, t_GNSSAttitudeProvider, GNSSAttitudeProvider);

        void t_GNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(GNSSAttitudeProvider), &PY_TYPE_DEF(GNSSAttitudeProvider), module, "GNSSAttitudeProvider", 0);
        }

        void t_GNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSAttitudeProvider), "class_", make_descriptor(GNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSAttitudeProvider), "wrapfn_", make_descriptor(t_GNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_GNSSAttitudeProvider::wrap_Object(GNSSAttitudeProvider(((t_GNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_GNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GNSSAttitudeProvider_validityEnd(t_GNSSAttitudeProvider *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.validityEnd());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_GNSSAttitudeProvider_validityStart(t_GNSSAttitudeProvider *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.validityStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
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
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
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
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_add_3c714d0cca30d176] = env->getMethodID(cls, "add", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");
            mids$[mid_add_6e0fc70b103d8967] = env->getMethodID(cls, "add", "(DLorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
            mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_finish_280c3390961e0a50] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getHandlers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getHandlers", "()Ljava/util/List;");
            mids$[mid_handleStep_13c351c10f00bcd7] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_remove_65541bbc9078acc7] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
            mids$[mid_remove_3c714d0cca30d176] = env->getMethodID(cls, "remove", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepHandlerMultiplexer::StepHandlerMultiplexer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void StepHandlerMultiplexer::add(const ::org::orekit::propagation::sampling::OrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_add_3c714d0cca30d176], a0.this$);
        }

        void StepHandlerMultiplexer::add(jdouble a0, const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_add_6e0fc70b103d8967], a0, a1.this$);
        }

        void StepHandlerMultiplexer::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
        }

        void StepHandlerMultiplexer::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_280c3390961e0a50], a0.this$);
        }

        ::java::util::List StepHandlerMultiplexer::getHandlers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getHandlers_e62d3bb06d56d7e3]));
        }

        void StepHandlerMultiplexer::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_13c351c10f00bcd7], a0.this$);
        }

        void StepHandlerMultiplexer::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
        }

        void StepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_65541bbc9078acc7], a0.this$);
        }

        void StepHandlerMultiplexer::remove(const ::org::orekit::propagation::sampling::OrekitStepHandler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_remove_3c714d0cca30d176], a0.this$);
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
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *AggregatableStatistic::class$ = NULL;
        jmethodID *AggregatableStatistic::mids$ = NULL;
        bool AggregatableStatistic::live$ = false;

        jclass AggregatableStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/AggregatableStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_aggregate_55e8d43de8149236] = env->getMethodID(cls, "aggregate", "([Ljava/lang/Object;)V");
            mids$[mid_aggregate_bc29b133e9ea6ed1] = env->getMethodID(cls, "aggregate", "(Ljava/lang/Iterable;)V");
            mids$[mid_aggregate_55f3c894852c27a3] = env->getMethodID(cls, "aggregate", "(Ljava/lang/Object;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AggregatableStatistic::aggregate(const JArray< ::java::lang::Object > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_55e8d43de8149236], a0.this$);
        }

        void AggregatableStatistic::aggregate(const ::java::lang::Iterable & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_bc29b133e9ea6ed1], a0.this$);
        }

        void AggregatableStatistic::aggregate(const ::java::lang::Object & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_55f3c894852c27a3], a0.this$);
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
        static PyObject *t_AggregatableStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AggregatableStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AggregatableStatistic_of_(t_AggregatableStatistic *self, PyObject *args);
        static PyObject *t_AggregatableStatistic_aggregate(t_AggregatableStatistic *self, PyObject *args);
        static PyObject *t_AggregatableStatistic_get__parameters_(t_AggregatableStatistic *self, void *data);
        static PyGetSetDef t_AggregatableStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_AggregatableStatistic, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AggregatableStatistic__methods_[] = {
          DECLARE_METHOD(t_AggregatableStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregatableStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregatableStatistic, of_, METH_VARARGS),
          DECLARE_METHOD(t_AggregatableStatistic, aggregate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AggregatableStatistic)[] = {
          { Py_tp_methods, t_AggregatableStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AggregatableStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AggregatableStatistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AggregatableStatistic, t_AggregatableStatistic, AggregatableStatistic);
        PyObject *t_AggregatableStatistic::wrap_Object(const AggregatableStatistic& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AggregatableStatistic::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AggregatableStatistic *self = (t_AggregatableStatistic *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AggregatableStatistic::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AggregatableStatistic::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AggregatableStatistic *self = (t_AggregatableStatistic *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AggregatableStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(AggregatableStatistic), &PY_TYPE_DEF(AggregatableStatistic), module, "AggregatableStatistic", 0);
        }

        void t_AggregatableStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatableStatistic), "class_", make_descriptor(AggregatableStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatableStatistic), "wrapfn_", make_descriptor(t_AggregatableStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatableStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AggregatableStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AggregatableStatistic::initializeClass, 1)))
            return NULL;
          return t_AggregatableStatistic::wrap_Object(AggregatableStatistic(((t_AggregatableStatistic *) arg)->object.this$));
        }
        static PyObject *t_AggregatableStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AggregatableStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AggregatableStatistic_of_(t_AggregatableStatistic *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AggregatableStatistic_aggregate(t_AggregatableStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::java::lang::Object > a0((jobject) NULL);

              if (!parseArgs(args, "[o", &a0))
              {
                OBJ_CALL(self->object.aggregate(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Iterable a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
              {
                OBJ_CALL(self->object.aggregate(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Object a0((jobject) NULL);

              if (!parseArgs(args, "O", self->parameters[0], &a0))
              {
                OBJ_CALL(self->object.aggregate(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "aggregate", args);
          return NULL;
        }
        static PyObject *t_AggregatableStatistic_get__parameters_(t_AggregatableStatistic *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsBashforthFieldIntegrator.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsBashforthFieldIntegrator::class$ = NULL;
        jmethodID *AdamsBashforthFieldIntegrator::mids$ = NULL;
        bool AdamsBashforthFieldIntegrator::live$ = false;

        jclass AdamsBashforthFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsBashforthFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e901ecf0331569ba] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDD[D[D)V");
            mids$[mid_init$_b37354c6de25af2c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDDDD)V");
            mids$[mid_errorEstimation_f9ae7f7ac73655c8] = env->getMethodID(cls, "errorEstimation", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/FieldMatrix;)D");
            mids$[mid_finalizeStep_b4c879a61b350879] = env->getMethodID(cls, "finalizeStep", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthFieldIntegrator::AdamsBashforthFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_e901ecf0331569ba, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        AdamsBashforthFieldIntegrator::AdamsBashforthFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b37354c6de25af2c, a0.this$, a1, a2, a3, a4, a5)) {}
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
        static PyObject *t_AdamsBashforthFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthFieldIntegrator_of_(t_AdamsBashforthFieldIntegrator *self, PyObject *args);
        static int t_AdamsBashforthFieldIntegrator_init_(t_AdamsBashforthFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsBashforthFieldIntegrator_get__parameters_(t_AdamsBashforthFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdamsBashforthFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsBashforthFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsBashforthFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthFieldIntegrator)[] = {
          { Py_tp_methods, t_AdamsBashforthFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthFieldIntegrator_init_ },
          { Py_tp_getset, t_AdamsBashforthFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthFieldIntegrator, t_AdamsBashforthFieldIntegrator, AdamsBashforthFieldIntegrator);
        PyObject *t_AdamsBashforthFieldIntegrator::wrap_Object(const AdamsBashforthFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsBashforthFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsBashforthFieldIntegrator *self = (t_AdamsBashforthFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsBashforthFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsBashforthFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsBashforthFieldIntegrator *self = (t_AdamsBashforthFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsBashforthFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthFieldIntegrator), &PY_TYPE_DEF(AdamsBashforthFieldIntegrator), module, "AdamsBashforthFieldIntegrator", 0);
        }

        void t_AdamsBashforthFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegrator), "class_", make_descriptor(AdamsBashforthFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegrator), "wrapfn_", make_descriptor(t_AdamsBashforthFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthFieldIntegrator::wrap_Object(AdamsBashforthFieldIntegrator(((t_AdamsBashforthFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsBashforthFieldIntegrator_of_(t_AdamsBashforthFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsBashforthFieldIntegrator_init_(t_AdamsBashforthFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              AdamsBashforthFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsBashforthFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              AdamsBashforthFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsBashforthFieldIntegrator(a0, a1, a2, a3, a4, a5));
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
        static PyObject *t_AdamsBashforthFieldIntegrator_get__parameters_(t_AdamsBashforthFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeDeterminationSensor::class$ = NULL;
              jmethodID *AttitudeDeterminationSensor::mids$ = NULL;
              bool AttitudeDeterminationSensor::live$ = false;

              jclass AttitudeDeterminationSensor::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getNbSensorNoiseCovariance_55546ef6a647f39b] = env->getMethodID(cls, "getNbSensorNoiseCovariance", "()I");
                  mids$[mid_getSensorFrequency_b74f83833fdad017] = env->getMethodID(cls, "getSensorFrequency", "()D");
                  mids$[mid_getSensorNoiseCovariance_25e1757a36c4dde2] = env->getMethodID(cls, "getSensorNoiseCovariance", "()[D");
                  mids$[mid_getSensorNumber_55546ef6a647f39b] = env->getMethodID(cls, "getSensorNumber", "()I");
                  mids$[mid_getSensorUsed_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSensorUsed", "()Ljava/lang/String;");
                  mids$[mid_setNbSensorNoiseCovariance_44ed599e93e8a30c] = env->getMethodID(cls, "setNbSensorNoiseCovariance", "(I)V");
                  mids$[mid_setSensorFrequency_8ba9fe7a847cecad] = env->getMethodID(cls, "setSensorFrequency", "(D)V");
                  mids$[mid_setSensorNoiseCovariance_ab69da052b88f50c] = env->getMethodID(cls, "setSensorNoiseCovariance", "([D)V");
                  mids$[mid_setSensorNumber_44ed599e93e8a30c] = env->getMethodID(cls, "setSensorNumber", "(I)V");
                  mids$[mid_setSensorUsed_734b91ac30d5f9b4] = env->getMethodID(cls, "setSensorUsed", "(Ljava/lang/String;)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeDeterminationSensor::AttitudeDeterminationSensor() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jint AttitudeDeterminationSensor::getNbSensorNoiseCovariance() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbSensorNoiseCovariance_55546ef6a647f39b]);
              }

              jdouble AttitudeDeterminationSensor::getSensorFrequency() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSensorFrequency_b74f83833fdad017]);
              }

              JArray< jdouble > AttitudeDeterminationSensor::getSensorNoiseCovariance() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSensorNoiseCovariance_25e1757a36c4dde2]));
              }

              jint AttitudeDeterminationSensor::getSensorNumber() const
              {
                return env->callIntMethod(this$, mids$[mid_getSensorNumber_55546ef6a647f39b]);
              }

              ::java::lang::String AttitudeDeterminationSensor::getSensorUsed() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorUsed_1c1fa1e935d6cdcf]));
              }

              void AttitudeDeterminationSensor::setNbSensorNoiseCovariance(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNbSensorNoiseCovariance_44ed599e93e8a30c], a0);
              }

              void AttitudeDeterminationSensor::setSensorFrequency(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorFrequency_8ba9fe7a847cecad], a0);
              }

              void AttitudeDeterminationSensor::setSensorNoiseCovariance(const JArray< jdouble > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorNoiseCovariance_ab69da052b88f50c], a0.this$);
              }

              void AttitudeDeterminationSensor::setSensorNumber(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorNumber_44ed599e93e8a30c], a0);
              }

              void AttitudeDeterminationSensor::setSensorUsed(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSensorUsed_734b91ac30d5f9b4], a0.this$);
              }

              void AttitudeDeterminationSensor::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
              static PyObject *t_AttitudeDeterminationSensor_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensor_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeDeterminationSensor_init_(t_AttitudeDeterminationSensor *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeDeterminationSensor_getNbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self);
              static PyObject *t_AttitudeDeterminationSensor_getSensorFrequency(t_AttitudeDeterminationSensor *self);
              static PyObject *t_AttitudeDeterminationSensor_getSensorNoiseCovariance(t_AttitudeDeterminationSensor *self);
              static PyObject *t_AttitudeDeterminationSensor_getSensorNumber(t_AttitudeDeterminationSensor *self);
              static PyObject *t_AttitudeDeterminationSensor_getSensorUsed(t_AttitudeDeterminationSensor *self);
              static PyObject *t_AttitudeDeterminationSensor_setNbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensor_setSensorFrequency(t_AttitudeDeterminationSensor *self, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensor_setSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensor_setSensorNumber(t_AttitudeDeterminationSensor *self, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensor_setSensorUsed(t_AttitudeDeterminationSensor *self, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensor_validate(t_AttitudeDeterminationSensor *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationSensor_get__nbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, void *data);
              static int t_AttitudeDeterminationSensor_set__nbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDeterminationSensor_get__sensorFrequency(t_AttitudeDeterminationSensor *self, void *data);
              static int t_AttitudeDeterminationSensor_set__sensorFrequency(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDeterminationSensor_get__sensorNoiseCovariance(t_AttitudeDeterminationSensor *self, void *data);
              static int t_AttitudeDeterminationSensor_set__sensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDeterminationSensor_get__sensorNumber(t_AttitudeDeterminationSensor *self, void *data);
              static int t_AttitudeDeterminationSensor_set__sensorNumber(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDeterminationSensor_get__sensorUsed(t_AttitudeDeterminationSensor *self, void *data);
              static int t_AttitudeDeterminationSensor_set__sensorUsed(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeDeterminationSensor__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeDeterminationSensor, nbSensorNoiseCovariance),
                DECLARE_GETSET_FIELD(t_AttitudeDeterminationSensor, sensorFrequency),
                DECLARE_GETSET_FIELD(t_AttitudeDeterminationSensor, sensorNoiseCovariance),
                DECLARE_GETSET_FIELD(t_AttitudeDeterminationSensor, sensorNumber),
                DECLARE_GETSET_FIELD(t_AttitudeDeterminationSensor, sensorUsed),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeDeterminationSensor__methods_[] = {
                DECLARE_METHOD(t_AttitudeDeterminationSensor, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, getNbSensorNoiseCovariance, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, getSensorFrequency, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, getSensorNoiseCovariance, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, getSensorNumber, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, getSensorUsed, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, setNbSensorNoiseCovariance, METH_O),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, setSensorFrequency, METH_O),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, setSensorNoiseCovariance, METH_O),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, setSensorNumber, METH_O),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, setSensorUsed, METH_O),
                DECLARE_METHOD(t_AttitudeDeterminationSensor, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeDeterminationSensor)[] = {
                { Py_tp_methods, t_AttitudeDeterminationSensor__methods_ },
                { Py_tp_init, (void *) t_AttitudeDeterminationSensor_init_ },
                { Py_tp_getset, t_AttitudeDeterminationSensor__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeDeterminationSensor)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeDeterminationSensor, t_AttitudeDeterminationSensor, AttitudeDeterminationSensor);

              void t_AttitudeDeterminationSensor::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeDeterminationSensor), &PY_TYPE_DEF(AttitudeDeterminationSensor), module, "AttitudeDeterminationSensor", 0);
              }

              void t_AttitudeDeterminationSensor::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensor), "class_", make_descriptor(AttitudeDeterminationSensor::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensor), "wrapfn_", make_descriptor(t_AttitudeDeterminationSensor::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensor), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeDeterminationSensor_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeDeterminationSensor::initializeClass, 1)))
                  return NULL;
                return t_AttitudeDeterminationSensor::wrap_Object(AttitudeDeterminationSensor(((t_AttitudeDeterminationSensor *) arg)->object.this$));
              }
              static PyObject *t_AttitudeDeterminationSensor_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeDeterminationSensor::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeDeterminationSensor_init_(t_AttitudeDeterminationSensor *self, PyObject *args, PyObject *kwds)
              {
                AttitudeDeterminationSensor object((jobject) NULL);

                INT_CALL(object = AttitudeDeterminationSensor());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeDeterminationSensor_getNbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbSensorNoiseCovariance());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeDeterminationSensor_getSensorFrequency(t_AttitudeDeterminationSensor *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSensorFrequency());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeDeterminationSensor_getSensorNoiseCovariance(t_AttitudeDeterminationSensor *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getSensorNoiseCovariance());
                return result.wrap();
              }

              static PyObject *t_AttitudeDeterminationSensor_getSensorNumber(t_AttitudeDeterminationSensor *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSensorNumber());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeDeterminationSensor_getSensorUsed(t_AttitudeDeterminationSensor *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSensorUsed());
                return j2p(result);
              }

              static PyObject *t_AttitudeDeterminationSensor_setNbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNbSensorNoiseCovariance(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNbSensorNoiseCovariance", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensor_setSensorFrequency(t_AttitudeDeterminationSensor *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSensorFrequency(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensorFrequency", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensor_setSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg)
              {
                JArray< jdouble > a0((jobject) NULL);

                if (!parseArg(arg, "[D", &a0))
                {
                  OBJ_CALL(self->object.setSensorNoiseCovariance(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensorNoiseCovariance", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensor_setSensorNumber(t_AttitudeDeterminationSensor *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSensorNumber(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensorNumber", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensor_setSensorUsed(t_AttitudeDeterminationSensor *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSensorUsed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSensorUsed", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensor_validate(t_AttitudeDeterminationSensor *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeDeterminationSensor), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeDeterminationSensor_get__nbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbSensorNoiseCovariance());
                return PyLong_FromLong((long) value);
              }
              static int t_AttitudeDeterminationSensor_set__nbSensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNbSensorNoiseCovariance(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nbSensorNoiseCovariance", arg);
                return -1;
              }

              static PyObject *t_AttitudeDeterminationSensor_get__sensorFrequency(t_AttitudeDeterminationSensor *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSensorFrequency());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeDeterminationSensor_set__sensorFrequency(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSensorFrequency(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensorFrequency", arg);
                return -1;
              }

              static PyObject *t_AttitudeDeterminationSensor_get__sensorNoiseCovariance(t_AttitudeDeterminationSensor *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getSensorNoiseCovariance());
                return value.wrap();
              }
              static int t_AttitudeDeterminationSensor_set__sensorNoiseCovariance(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data)
              {
                {
                  JArray< jdouble > value((jobject) NULL);
                  if (!parseArg(arg, "[D", &value))
                  {
                    INT_CALL(self->object.setSensorNoiseCovariance(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensorNoiseCovariance", arg);
                return -1;
              }

              static PyObject *t_AttitudeDeterminationSensor_get__sensorNumber(t_AttitudeDeterminationSensor *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSensorNumber());
                return PyLong_FromLong((long) value);
              }
              static int t_AttitudeDeterminationSensor_set__sensorNumber(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSensorNumber(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensorNumber", arg);
                return -1;
              }

              static PyObject *t_AttitudeDeterminationSensor_get__sensorUsed(t_AttitudeDeterminationSensor *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSensorUsed());
                return j2p(value);
              }
              static int t_AttitudeDeterminationSensor_set__sensorUsed(t_AttitudeDeterminationSensor *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSensorUsed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sensorUsed", arg);
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
#include "org/hipparchus/analysis/integration/gauss/GaussIntegrator.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *GaussIntegrator::class$ = NULL;
          jmethodID *GaussIntegrator::mids$ = NULL;
          bool GaussIntegrator::live$ = false;

          jclass GaussIntegrator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/GaussIntegrator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_24d37c4bbd61d20e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_b15baa0161a4e9c7] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_getNumberOfPoints_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfPoints", "()I");
              mids$[mid_getPoint_2afcbc21f4e57ab2] = env->getMethodID(cls, "getPoint", "(I)D");
              mids$[mid_getWeight_2afcbc21f4e57ab2] = env->getMethodID(cls, "getWeight", "(I)D");
              mids$[mid_integrate_6bcb3ad6aa509267] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/UnivariateFunction;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GaussIntegrator::GaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_24d37c4bbd61d20e, a0.this$)) {}

          GaussIntegrator::GaussIntegrator(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b15baa0161a4e9c7, a0.this$, a1.this$)) {}

          jint GaussIntegrator::getNumberOfPoints() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfPoints_55546ef6a647f39b]);
          }

          jdouble GaussIntegrator::getPoint(jint a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPoint_2afcbc21f4e57ab2], a0);
          }

          jdouble GaussIntegrator::getWeight(jint a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWeight_2afcbc21f4e57ab2], a0);
          }

          jdouble GaussIntegrator::integrate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_integrate_6bcb3ad6aa509267], a0.this$);
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_GaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GaussIntegrator_init_(t_GaussIntegrator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GaussIntegrator_getNumberOfPoints(t_GaussIntegrator *self);
          static PyObject *t_GaussIntegrator_getPoint(t_GaussIntegrator *self, PyObject *arg);
          static PyObject *t_GaussIntegrator_getWeight(t_GaussIntegrator *self, PyObject *arg);
          static PyObject *t_GaussIntegrator_integrate(t_GaussIntegrator *self, PyObject *arg);
          static PyObject *t_GaussIntegrator_get__numberOfPoints(t_GaussIntegrator *self, void *data);
          static PyGetSetDef t_GaussIntegrator__fields_[] = {
            DECLARE_GET_FIELD(t_GaussIntegrator, numberOfPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GaussIntegrator__methods_[] = {
            DECLARE_METHOD(t_GaussIntegrator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GaussIntegrator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GaussIntegrator, getNumberOfPoints, METH_NOARGS),
            DECLARE_METHOD(t_GaussIntegrator, getPoint, METH_O),
            DECLARE_METHOD(t_GaussIntegrator, getWeight, METH_O),
            DECLARE_METHOD(t_GaussIntegrator, integrate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GaussIntegrator)[] = {
            { Py_tp_methods, t_GaussIntegrator__methods_ },
            { Py_tp_init, (void *) t_GaussIntegrator_init_ },
            { Py_tp_getset, t_GaussIntegrator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GaussIntegrator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GaussIntegrator, t_GaussIntegrator, GaussIntegrator);

          void t_GaussIntegrator::install(PyObject *module)
          {
            installType(&PY_TYPE(GaussIntegrator), &PY_TYPE_DEF(GaussIntegrator), module, "GaussIntegrator", 0);
          }

          void t_GaussIntegrator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegrator), "class_", make_descriptor(GaussIntegrator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegrator), "wrapfn_", make_descriptor(t_GaussIntegrator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegrator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GaussIntegrator::initializeClass, 1)))
              return NULL;
            return t_GaussIntegrator::wrap_Object(GaussIntegrator(((t_GaussIntegrator *) arg)->object.this$));
          }
          static PyObject *t_GaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GaussIntegrator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GaussIntegrator_init_(t_GaussIntegrator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::util::Pair a0((jobject) NULL);
                PyTypeObject **p0;
                GaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::util::Pair::initializeClass, &a0, &p0, ::org::hipparchus::util::t_Pair::parameters_))
                {
                  INT_CALL(object = GaussIntegrator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                GaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = GaussIntegrator(a0, a1));
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

          static PyObject *t_GaussIntegrator_getNumberOfPoints(t_GaussIntegrator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfPoints());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_GaussIntegrator_getPoint(t_GaussIntegrator *self, PyObject *arg)
          {
            jint a0;
            jdouble result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getPoint(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPoint", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegrator_getWeight(t_GaussIntegrator *self, PyObject *arg)
          {
            jint a0;
            jdouble result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getWeight(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWeight", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegrator_integrate(t_GaussIntegrator *self, PyObject *arg)
          {
            ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.integrate(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "integrate", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegrator_get__numberOfPoints(t_GaussIntegrator *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfPoints());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldODEEventHandler.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
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
            mids$[mid_eventOccurred_f1dbd383a31b3ed3] = env->getMethodID(cls, "eventOccurred", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/events/FieldODEEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
            mids$[mid_init_8dc7bea9703d6e01] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
            mids$[mid_resetState_c6c237e7ee1f70c4] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/FieldODEState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action FieldODEEventHandler::eventOccurred(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::ode::events::FieldODEEventDetector & a1, jboolean a2) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_f1dbd383a31b3ed3], a0.this$, a1.this$, a2));
        }

        void FieldODEEventHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::ode::events::FieldODEEventDetector & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8dc7bea9703d6e01], a0.this$, a1.this$, a2.this$);
        }

        ::org::hipparchus::ode::FieldODEState FieldODEEventHandler::resetState(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0, const ::org::hipparchus::ode::FieldODEStateAndDerivative & a1) const
        {
          return ::org::hipparchus::ode::FieldODEState(env->callObjectMethod(this$, mids$[mid_resetState_c6c237e7ee1f70c4], a0.this$, a1.this$));
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
#include "org/hipparchus/optim/BaseOptimizer.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *BaseOptimizer::class$ = NULL;
      jmethodID *BaseOptimizer::mids$ = NULL;
      bool BaseOptimizer::live$ = false;

      jclass BaseOptimizer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/BaseOptimizer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConvergenceChecker_cae0efb5080a73b8] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
          mids$[mid_getEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getIterations_55546ef6a647f39b] = env->getMethodID(cls, "getIterations", "()I");
          mids$[mid_getMaxEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getMaxIterations_55546ef6a647f39b] = env->getMethodID(cls, "getMaxIterations", "()I");
          mids$[mid_optimize_541690f9ee81d3ad] = env->getMethodID(cls, "optimize", "()Ljava/lang/Object;");
          mids$[mid_optimize_91381cab165160dc] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Ljava/lang/Object;");
          mids$[mid_parseOptimizationData_14193ddbce7a2cc0] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
          mids$[mid_doOptimize_541690f9ee81d3ad] = env->getMethodID(cls, "doOptimize", "()Ljava/lang/Object;");
          mids$[mid_incrementEvaluationCount_a1fa5dae97ea5ed2] = env->getMethodID(cls, "incrementEvaluationCount", "()V");
          mids$[mid_incrementIterationCount_a1fa5dae97ea5ed2] = env->getMethodID(cls, "incrementIterationCount", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::optim::ConvergenceChecker BaseOptimizer::getConvergenceChecker() const
      {
        return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_cae0efb5080a73b8]));
      }

      jint BaseOptimizer::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_55546ef6a647f39b]);
      }

      jint BaseOptimizer::getIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getIterations_55546ef6a647f39b]);
      }

      jint BaseOptimizer::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_55546ef6a647f39b]);
      }

      jint BaseOptimizer::getMaxIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIterations_55546ef6a647f39b]);
      }

      ::java::lang::Object BaseOptimizer::optimize() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_541690f9ee81d3ad]));
      }

      ::java::lang::Object BaseOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_91381cab165160dc], a0.this$));
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
      static PyObject *t_BaseOptimizer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseOptimizer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseOptimizer_of_(t_BaseOptimizer *self, PyObject *args);
      static PyObject *t_BaseOptimizer_getConvergenceChecker(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getEvaluations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getIterations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getMaxEvaluations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getMaxIterations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_optimize(t_BaseOptimizer *self, PyObject *args);
      static PyObject *t_BaseOptimizer_get__convergenceChecker(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__evaluations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__iterations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__maxEvaluations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__maxIterations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__parameters_(t_BaseOptimizer *self, void *data);
      static PyGetSetDef t_BaseOptimizer__fields_[] = {
        DECLARE_GET_FIELD(t_BaseOptimizer, convergenceChecker),
        DECLARE_GET_FIELD(t_BaseOptimizer, evaluations),
        DECLARE_GET_FIELD(t_BaseOptimizer, iterations),
        DECLARE_GET_FIELD(t_BaseOptimizer, maxEvaluations),
        DECLARE_GET_FIELD(t_BaseOptimizer, maxIterations),
        DECLARE_GET_FIELD(t_BaseOptimizer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BaseOptimizer__methods_[] = {
        DECLARE_METHOD(t_BaseOptimizer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseOptimizer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseOptimizer, of_, METH_VARARGS),
        DECLARE_METHOD(t_BaseOptimizer, getConvergenceChecker, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getIterations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getMaxIterations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, optimize, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BaseOptimizer)[] = {
        { Py_tp_methods, t_BaseOptimizer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BaseOptimizer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BaseOptimizer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BaseOptimizer, t_BaseOptimizer, BaseOptimizer);
      PyObject *t_BaseOptimizer::wrap_Object(const BaseOptimizer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseOptimizer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseOptimizer *self = (t_BaseOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_BaseOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseOptimizer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseOptimizer *self = (t_BaseOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_BaseOptimizer::install(PyObject *module)
      {
        installType(&PY_TYPE(BaseOptimizer), &PY_TYPE_DEF(BaseOptimizer), module, "BaseOptimizer", 0);
      }

      void t_BaseOptimizer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseOptimizer), "class_", make_descriptor(BaseOptimizer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseOptimizer), "wrapfn_", make_descriptor(t_BaseOptimizer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseOptimizer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BaseOptimizer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BaseOptimizer::initializeClass, 1)))
          return NULL;
        return t_BaseOptimizer::wrap_Object(BaseOptimizer(((t_BaseOptimizer *) arg)->object.this$));
      }
      static PyObject *t_BaseOptimizer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BaseOptimizer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BaseOptimizer_of_(t_BaseOptimizer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_BaseOptimizer_getConvergenceChecker(t_BaseOptimizer *self)
      {
        ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);
        OBJ_CALL(result = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_BaseOptimizer_getEvaluations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_getIterations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_getMaxEvaluations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_getMaxIterations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_optimize(t_BaseOptimizer *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::Object result((jobject) NULL);
            OBJ_CALL(result = self->object.optimize());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
          break;
         case 1:
          {
            JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
            ::java::lang::Object result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.optimize(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "optimize", args);
        return NULL;
      }
      static PyObject *t_BaseOptimizer_get__parameters_(t_BaseOptimizer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_BaseOptimizer_get__convergenceChecker(t_BaseOptimizer *self, void *data)
      {
        ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
        OBJ_CALL(value = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(value);
      }

      static PyObject *t_BaseOptimizer_get__evaluations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BaseOptimizer_get__iterations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIterations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BaseOptimizer_get__maxEvaluations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BaseOptimizer_get__maxIterations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIterations());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckTransformer.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckTransformer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsNordsieckTransformer::class$ = NULL;
        jmethodID *AdamsNordsieckTransformer::mids$ = NULL;
        bool AdamsNordsieckTransformer::live$ = false;

        jclass AdamsNordsieckTransformer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsNordsieckTransformer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_3e8cb6cdee7a33cf] = env->getStaticMethodID(cls, "getInstance", "(I)Lorg/hipparchus/ode/nonstiff/AdamsNordsieckTransformer;");
            mids$[mid_initializeHighOrderDerivatives_0830b1db869546c8] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(D[D[[D[[D)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase1_f7e2a664bf09ba0b] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_6416fb10fa003d60] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([D[DLorg/hipparchus/linear/Array2DRowRealMatrix;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsNordsieckTransformer AdamsNordsieckTransformer::getInstance(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AdamsNordsieckTransformer(env->callStaticObjectMethod(cls, mids$[mid_getInstance_3e8cb6cdee7a33cf], a0));
        }

        ::org::hipparchus::linear::Array2DRowRealMatrix AdamsNordsieckTransformer::initializeHighOrderDerivatives(jdouble a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2, const JArray< JArray< jdouble > > & a3) const
        {
          return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_initializeHighOrderDerivatives_0830b1db869546c8], a0, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::linear::Array2DRowRealMatrix AdamsNordsieckTransformer::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowRealMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_f7e2a664bf09ba0b], a0.this$));
        }

        void AdamsNordsieckTransformer::updateHighOrderDerivativesPhase2(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::hipparchus::linear::Array2DRowRealMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_6416fb10fa003d60], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsNordsieckTransformer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_getInstance(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckTransformer *self, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckTransformer *self, PyObject *args);

        static PyMethodDef t_AdamsNordsieckTransformer__methods_[] = {
          DECLARE_METHOD(t_AdamsNordsieckTransformer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, getInstance, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, initializeHighOrderDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsNordsieckTransformer)[] = {
          { Py_tp_methods, t_AdamsNordsieckTransformer__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsNordsieckTransformer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsNordsieckTransformer, t_AdamsNordsieckTransformer, AdamsNordsieckTransformer);

        void t_AdamsNordsieckTransformer::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsNordsieckTransformer), &PY_TYPE_DEF(AdamsNordsieckTransformer), module, "AdamsNordsieckTransformer", 0);
        }

        void t_AdamsNordsieckTransformer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckTransformer), "class_", make_descriptor(AdamsNordsieckTransformer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckTransformer), "wrapfn_", make_descriptor(t_AdamsNordsieckTransformer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckTransformer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsNordsieckTransformer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsNordsieckTransformer::initializeClass, 1)))
            return NULL;
          return t_AdamsNordsieckTransformer::wrap_Object(AdamsNordsieckTransformer(((t_AdamsNordsieckTransformer *) arg)->object.this$));
        }
        static PyObject *t_AdamsNordsieckTransformer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsNordsieckTransformer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsNordsieckTransformer_getInstance(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          AdamsNordsieckTransformer result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::nonstiff::AdamsNordsieckTransformer::getInstance(a0));
            return t_AdamsNordsieckTransformer::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getInstance", arg);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckTransformer *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          JArray< JArray< jdouble > > a3((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

          if (!parseArgs(args, "D[D[[D[[D", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.initializeHighOrderDerivatives(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeHighOrderDerivatives", args);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckTransformer *self, PyObject *arg)
        {
          ::org::hipparchus::linear::Array2DRowRealMatrix a0((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::Array2DRowRealMatrix::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.updateHighOrderDerivativesPhase1(a0));
            return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase1", arg);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckTransformer *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix a2((jobject) NULL);

          if (!parseArgs(args, "[D[Dk", ::org::hipparchus::linear::Array2DRowRealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.updateHighOrderDerivativesPhase2(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase2", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldGradientField.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/FieldGradientField.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldGradientField::class$ = NULL;
        jmethodID *FieldGradientField::mids$ = NULL;
        bool FieldGradientField::live$ = false;

        jclass FieldGradientField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldGradientField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getField_93f57fcb2194069f] = env->getStaticMethodID(cls, "getField", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/analysis/differentiation/FieldGradientField;");
            mids$[mid_getOne_f418c9d91aa473ef] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_getRuntimeClass_1aeb0737a960d371] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_f418c9d91aa473ef] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldGradientField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        FieldGradientField FieldGradientField::getField(const ::org::hipparchus::Field & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradientField(env->callStaticObjectMethod(cls, mids$[mid_getField_93f57fcb2194069f], a0.this$, a1));
        }

        ::org::hipparchus::analysis::differentiation::FieldGradient FieldGradientField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldGradient(env->callObjectMethod(this$, mids$[mid_getOne_f418c9d91aa473ef]));
        }

        ::java::lang::Class FieldGradientField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_1aeb0737a960d371]));
        }

        ::org::hipparchus::analysis::differentiation::FieldGradient FieldGradientField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldGradient(env->callObjectMethod(this$, mids$[mid_getZero_f418c9d91aa473ef]));
        }

        jint FieldGradientField::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
        static PyObject *t_FieldGradientField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldGradientField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldGradientField_of_(t_FieldGradientField *self, PyObject *args);
        static PyObject *t_FieldGradientField_equals(t_FieldGradientField *self, PyObject *args);
        static PyObject *t_FieldGradientField_getField(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldGradientField_getOne(t_FieldGradientField *self);
        static PyObject *t_FieldGradientField_getRuntimeClass(t_FieldGradientField *self);
        static PyObject *t_FieldGradientField_getZero(t_FieldGradientField *self);
        static PyObject *t_FieldGradientField_hashCode(t_FieldGradientField *self, PyObject *args);
        static PyObject *t_FieldGradientField_get__one(t_FieldGradientField *self, void *data);
        static PyObject *t_FieldGradientField_get__runtimeClass(t_FieldGradientField *self, void *data);
        static PyObject *t_FieldGradientField_get__zero(t_FieldGradientField *self, void *data);
        static PyObject *t_FieldGradientField_get__parameters_(t_FieldGradientField *self, void *data);
        static PyGetSetDef t_FieldGradientField__fields_[] = {
          DECLARE_GET_FIELD(t_FieldGradientField, one),
          DECLARE_GET_FIELD(t_FieldGradientField, runtimeClass),
          DECLARE_GET_FIELD(t_FieldGradientField, zero),
          DECLARE_GET_FIELD(t_FieldGradientField, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldGradientField__methods_[] = {
          DECLARE_METHOD(t_FieldGradientField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldGradientField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldGradientField, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradientField, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradientField, getField, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldGradientField, getOne, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradientField, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradientField, getZero, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradientField, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldGradientField)[] = {
          { Py_tp_methods, t_FieldGradientField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldGradientField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldGradientField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldGradientField, t_FieldGradientField, FieldGradientField);
        PyObject *t_FieldGradientField::wrap_Object(const FieldGradientField& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldGradientField::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldGradientField *self = (t_FieldGradientField *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldGradientField::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldGradientField::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldGradientField *self = (t_FieldGradientField *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldGradientField::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldGradientField), &PY_TYPE_DEF(FieldGradientField), module, "FieldGradientField", 0);
        }

        void t_FieldGradientField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradientField), "class_", make_descriptor(FieldGradientField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradientField), "wrapfn_", make_descriptor(t_FieldGradientField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradientField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldGradientField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldGradientField::initializeClass, 1)))
            return NULL;
          return t_FieldGradientField::wrap_Object(FieldGradientField(((t_FieldGradientField *) arg)->object.this$));
        }
        static PyObject *t_FieldGradientField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldGradientField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldGradientField_of_(t_FieldGradientField *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldGradientField_equals(t_FieldGradientField *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldGradientField), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldGradientField_getField(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          FieldGradientField result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldGradientField::getField(a0, a1));
            return t_FieldGradientField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getField", args);
          return NULL;
        }

        static PyObject *t_FieldGradientField_getOne(t_FieldGradientField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradientField_getRuntimeClass(t_FieldGradientField *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result);
        }

        static PyObject *t_FieldGradientField_getZero(t_FieldGradientField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradientField_hashCode(t_FieldGradientField *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldGradientField), (PyObject *) self, "hashCode", args, 2);
        }
        static PyObject *t_FieldGradientField_get__parameters_(t_FieldGradientField *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldGradientField_get__one(t_FieldGradientField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradient::wrap_Object(value);
        }

        static PyObject *t_FieldGradientField_get__runtimeClass(t_FieldGradientField *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_FieldGradientField_get__zero(t_FieldGradientField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradient::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonFieldAdditionalStateProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldAdditionalStateProvider::class$ = NULL;
      jmethodID *PythonFieldAdditionalStateProvider::mids$ = NULL;
      bool PythonFieldAdditionalStateProvider::live$ = false;

      jclass PythonFieldAdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldAdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalState_eaf6bc2191c5b1b4] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_yield_e6d9e841ca2e035c] = env->getMethodID(cls, "yield", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
          mids$[mid_yield__e6d9e841ca2e035c] = env->getMethodID(cls, "yield_", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldAdditionalStateProvider::PythonFieldAdditionalStateProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonFieldAdditionalStateProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonFieldAdditionalStateProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonFieldAdditionalStateProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }

      jboolean PythonFieldAdditionalStateProvider::yield(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yield_e6d9e841ca2e035c], a0.this$);
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
      static PyObject *t_PythonFieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAdditionalStateProvider_of_(t_PythonFieldAdditionalStateProvider *self, PyObject *args);
      static int t_PythonFieldAdditionalStateProvider_init_(t_PythonFieldAdditionalStateProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldAdditionalStateProvider_finalize(t_PythonFieldAdditionalStateProvider *self);
      static PyObject *t_PythonFieldAdditionalStateProvider_pythonExtension(t_PythonFieldAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_PythonFieldAdditionalStateProvider_yield(t_PythonFieldAdditionalStateProvider *self, PyObject *arg);
      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static jboolean JNICALL t_PythonFieldAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldAdditionalStateProvider_get__self(t_PythonFieldAdditionalStateProvider *self, void *data);
      static PyObject *t_PythonFieldAdditionalStateProvider_get__parameters_(t_PythonFieldAdditionalStateProvider *self, void *data);
      static PyGetSetDef t_PythonFieldAdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldAdditionalStateProvider, self),
        DECLARE_GET_FIELD(t_PythonFieldAdditionalStateProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldAdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, pythonExtension, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, yield, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldAdditionalStateProvider)[] = {
        { Py_tp_methods, t_PythonFieldAdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) t_PythonFieldAdditionalStateProvider_init_ },
        { Py_tp_getset, t_PythonFieldAdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldAdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldAdditionalStateProvider, t_PythonFieldAdditionalStateProvider, PythonFieldAdditionalStateProvider);
      PyObject *t_PythonFieldAdditionalStateProvider::wrap_Object(const PythonFieldAdditionalStateProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAdditionalStateProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAdditionalStateProvider *self = (t_PythonFieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldAdditionalStateProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAdditionalStateProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAdditionalStateProvider *self = (t_PythonFieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldAdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldAdditionalStateProvider), &PY_TYPE_DEF(PythonFieldAdditionalStateProvider), module, "PythonFieldAdditionalStateProvider", 1);
      }

      void t_PythonFieldAdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalStateProvider), "class_", make_descriptor(PythonFieldAdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalStateProvider), "wrapfn_", make_descriptor(t_PythonFieldAdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldAdditionalStateProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAdditionalState", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldAdditionalStateProvider_getAdditionalState0 },
          { "getName", "()Ljava/lang/String;", (void *) t_PythonFieldAdditionalStateProvider_getName1 },
          { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldAdditionalStateProvider_init2 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldAdditionalStateProvider_pythonDecRef3 },
          { "yield_", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z", (void *) t_PythonFieldAdditionalStateProvider_yield_4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldAdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_PythonFieldAdditionalStateProvider::wrap_Object(PythonFieldAdditionalStateProvider(((t_PythonFieldAdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldAdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_of_(t_PythonFieldAdditionalStateProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldAdditionalStateProvider_init_(t_PythonFieldAdditionalStateProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldAdditionalStateProvider object((jobject) NULL);

        INT_CALL(object = PythonFieldAdditionalStateProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_finalize(t_PythonFieldAdditionalStateProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_pythonExtension(t_PythonFieldAdditionalStateProvider *self, PyObject *args)
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

      static PyObject *t_PythonFieldAdditionalStateProvider_yield(t_PythonFieldAdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(result = self->object.yield(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "yield", arg);
        return NULL;
      }

      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("getAdditionalState", result);
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

      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getName", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getName", result);
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

      static void JNICALL t_PythonFieldAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static void JNICALL t_PythonFieldAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jboolean JNICALL t_PythonFieldAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "yield_", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("yield_", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_get__self(t_PythonFieldAdditionalStateProvider *self, void *data)
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
      static PyObject *t_PythonFieldAdditionalStateProvider_get__parameters_(t_PythonFieldAdditionalStateProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeStamped::class$ = NULL;
      jmethodID *FieldTimeStamped::mids$ = NULL;
      bool FieldTimeStamped::live$ = false;

      jclass FieldTimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_durationFrom_c22d3b6894667603] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/FieldTimeStamped;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement FieldTimeStamped::durationFrom(const FieldTimeStamped & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_durationFrom_c22d3b6894667603], a0.this$));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldTimeStamped::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_fa23a4301b9c83e7]));
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
      static PyObject *t_FieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStamped_of_(t_FieldTimeStamped *self, PyObject *args);
      static PyObject *t_FieldTimeStamped_durationFrom(t_FieldTimeStamped *self, PyObject *arg);
      static PyObject *t_FieldTimeStamped_getDate(t_FieldTimeStamped *self);
      static PyObject *t_FieldTimeStamped_get__date(t_FieldTimeStamped *self, void *data);
      static PyObject *t_FieldTimeStamped_get__parameters_(t_FieldTimeStamped *self, void *data);
      static PyGetSetDef t_FieldTimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeStamped, date),
        DECLARE_GET_FIELD(t_FieldTimeStamped, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeStamped__methods_[] = {
        DECLARE_METHOD(t_FieldTimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStamped, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeStamped, durationFrom, METH_O),
        DECLARE_METHOD(t_FieldTimeStamped, getDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeStamped)[] = {
        { Py_tp_methods, t_FieldTimeStamped__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeStamped, t_FieldTimeStamped, FieldTimeStamped);
      PyObject *t_FieldTimeStamped::wrap_Object(const FieldTimeStamped& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTimeStamped::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStamped *self = (t_FieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTimeStamped::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTimeStamped::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStamped *self = (t_FieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeStamped), &PY_TYPE_DEF(FieldTimeStamped), module, "FieldTimeStamped", 0);
      }

      void t_FieldTimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStamped), "class_", make_descriptor(FieldTimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStamped), "wrapfn_", make_descriptor(t_FieldTimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStamped), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeStamped::initializeClass, 1)))
          return NULL;
        return t_FieldTimeStamped::wrap_Object(FieldTimeStamped(((t_FieldTimeStamped *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeStamped_of_(t_FieldTimeStamped *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeStamped_durationFrom(t_FieldTimeStamped *self, PyObject *arg)
      {
        FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", FieldTimeStamped::initializeClass, &a0, &p0, t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.durationFrom(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", arg);
        return NULL;
      }

      static PyObject *t_FieldTimeStamped_getDate(t_FieldTimeStamped *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldTimeStamped_get__parameters_(t_FieldTimeStamped *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeStamped_get__date(t_FieldTimeStamped *self, void *data)
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
#include "org/orekit/files/ilrs/CRD$Meteo.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/SortedSet.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
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
            mids$[mid_init$_fdbe1a9b1da328d7] = env->getMethodID(cls, "<init>", "(Ljava/util/SortedSet;)V");
            mids$[mid_getData_e62d3bb06d56d7e3] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
            mids$[mid_getMeteo_11b3f892af329032] = env->getMethodID(cls, "getMeteo", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/files/ilrs/CRD$MeteorologicalMeasurement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$Meteo::CRD$Meteo(const ::java::util::SortedSet & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fdbe1a9b1da328d7, a0.this$)) {}

        ::java::util::List CRD$Meteo::getData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_e62d3bb06d56d7e3]));
        }

        ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement CRD$Meteo::getMeteo(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement(env->callObjectMethod(this$, mids$[mid_getMeteo_11b3f892af329032], a0.this$));
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
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GLONASSScale::class$ = NULL;
      jmethodID *GLONASSScale::mids$ = NULL;
      bool GLONASSScale::live$ = false;

      jclass GLONASSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GLONASSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLeap_fd347811007a6ba3] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLeap_140b8964300ddedf] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_insideLeap_a35647bda2901f54] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/AbsoluteDate;)Z");
          mids$[mid_insideLeap_42be643fd1505244] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Z");
          mids$[mid_minuteDuration_b977b1a10a6965aa] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_minuteDuration_e6b8e60343f2c829] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_offsetFromTAI_fd347811007a6ba3] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_140b8964300ddedf] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e7a49f02c43fd893] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble GLONASSScale::getLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GLONASSScale::getLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeap_140b8964300ddedf], a0.this$));
      }

      ::java::lang::String GLONASSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      jboolean GLONASSScale::insideLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_a35647bda2901f54], a0.this$);
      }

      jboolean GLONASSScale::insideLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_42be643fd1505244], a0.this$);
      }

      jint GLONASSScale::minuteDuration(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_b977b1a10a6965aa], a0.this$);
      }

      jint GLONASSScale::minuteDuration(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_e6b8e60343f2c829], a0.this$);
      }

      jdouble GLONASSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GLONASSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_140b8964300ddedf], a0.this$));
      }

      jdouble GLONASSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e7a49f02c43fd893], a0.this$, a1.this$);
      }

      ::java::lang::String GLONASSScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
      static PyObject *t_GLONASSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GLONASSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GLONASSScale_getLeap(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_getName(t_GLONASSScale *self);
      static PyObject *t_GLONASSScale_insideLeap(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_minuteDuration(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_offsetFromTAI(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_offsetToTAI(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_toString(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_get__name(t_GLONASSScale *self, void *data);
      static PyGetSetDef t_GLONASSScale__fields_[] = {
        DECLARE_GET_FIELD(t_GLONASSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GLONASSScale__methods_[] = {
        DECLARE_METHOD(t_GLONASSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GLONASSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GLONASSScale, getLeap, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSScale, insideLeap, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, minuteDuration, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GLONASSScale)[] = {
        { Py_tp_methods, t_GLONASSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GLONASSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GLONASSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GLONASSScale, t_GLONASSScale, GLONASSScale);

      void t_GLONASSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GLONASSScale), &PY_TYPE_DEF(GLONASSScale), module, "GLONASSScale", 0);
      }

      void t_GLONASSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSScale), "class_", make_descriptor(GLONASSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSScale), "wrapfn_", make_descriptor(t_GLONASSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GLONASSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GLONASSScale::initializeClass, 1)))
          return NULL;
        return t_GLONASSScale::wrap_Object(GLONASSScale(((t_GLONASSScale *) arg)->object.this$));
      }
      static PyObject *t_GLONASSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GLONASSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GLONASSScale_getLeap(t_GLONASSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getLeap", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_getName(t_GLONASSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GLONASSScale_insideLeap(t_GLONASSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "insideLeap", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_minuteDuration(t_GLONASSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jint result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "minuteDuration", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_offsetFromTAI(t_GLONASSScale *self, PyObject *args)
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

      static PyObject *t_GLONASSScale_offsetToTAI(t_GLONASSScale *self, PyObject *args)
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

      static PyObject *t_GLONASSScale_toString(t_GLONASSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GLONASSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GLONASSScale_get__name(t_GLONASSScale *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/PythonCycleSlipDetectors.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectors.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonCycleSlipDetectors::class$ = NULL;
          jmethodID *PythonCycleSlipDetectors::mids$ = NULL;
          bool PythonCycleSlipDetectors::live$ = false;

          jclass PythonCycleSlipDetectors::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonCycleSlipDetectors");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_detect_d1fc3c05f458e1a3] = env->getMethodID(cls, "detect", "(Ljava/util/List;)Ljava/util/List;");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonCycleSlipDetectors::PythonCycleSlipDetectors() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonCycleSlipDetectors::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonCycleSlipDetectors::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonCycleSlipDetectors::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          static PyObject *t_PythonCycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonCycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonCycleSlipDetectors_init_(t_PythonCycleSlipDetectors *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonCycleSlipDetectors_finalize(t_PythonCycleSlipDetectors *self);
          static PyObject *t_PythonCycleSlipDetectors_pythonExtension(t_PythonCycleSlipDetectors *self, PyObject *args);
          static jobject JNICALL t_PythonCycleSlipDetectors_detect0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonCycleSlipDetectors_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonCycleSlipDetectors_get__self(t_PythonCycleSlipDetectors *self, void *data);
          static PyGetSetDef t_PythonCycleSlipDetectors__fields_[] = {
            DECLARE_GET_FIELD(t_PythonCycleSlipDetectors, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonCycleSlipDetectors__methods_[] = {
            DECLARE_METHOD(t_PythonCycleSlipDetectors, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonCycleSlipDetectors, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonCycleSlipDetectors, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonCycleSlipDetectors, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonCycleSlipDetectors)[] = {
            { Py_tp_methods, t_PythonCycleSlipDetectors__methods_ },
            { Py_tp_init, (void *) t_PythonCycleSlipDetectors_init_ },
            { Py_tp_getset, t_PythonCycleSlipDetectors__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonCycleSlipDetectors)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonCycleSlipDetectors, t_PythonCycleSlipDetectors, PythonCycleSlipDetectors);

          void t_PythonCycleSlipDetectors::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonCycleSlipDetectors), &PY_TYPE_DEF(PythonCycleSlipDetectors), module, "PythonCycleSlipDetectors", 1);
          }

          void t_PythonCycleSlipDetectors::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCycleSlipDetectors), "class_", make_descriptor(PythonCycleSlipDetectors::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCycleSlipDetectors), "wrapfn_", make_descriptor(t_PythonCycleSlipDetectors::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCycleSlipDetectors), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonCycleSlipDetectors::initializeClass);
            JNINativeMethod methods[] = {
              { "detect", "(Ljava/util/List;)Ljava/util/List;", (void *) t_PythonCycleSlipDetectors_detect0 },
              { "pythonDecRef", "()V", (void *) t_PythonCycleSlipDetectors_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonCycleSlipDetectors_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonCycleSlipDetectors::initializeClass, 1)))
              return NULL;
            return t_PythonCycleSlipDetectors::wrap_Object(PythonCycleSlipDetectors(((t_PythonCycleSlipDetectors *) arg)->object.this$));
          }
          static PyObject *t_PythonCycleSlipDetectors_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonCycleSlipDetectors::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonCycleSlipDetectors_init_(t_PythonCycleSlipDetectors *self, PyObject *args, PyObject *kwds)
          {
            PythonCycleSlipDetectors object((jobject) NULL);

            INT_CALL(object = PythonCycleSlipDetectors());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonCycleSlipDetectors_finalize(t_PythonCycleSlipDetectors *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonCycleSlipDetectors_pythonExtension(t_PythonCycleSlipDetectors *self, PyObject *args)
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

          static jobject JNICALL t_PythonCycleSlipDetectors_detect0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonCycleSlipDetectors::mids$[PythonCycleSlipDetectors::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
            PyObject *result = PyObject_CallMethod(obj, "detect", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("detect", result);
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

          static void JNICALL t_PythonCycleSlipDetectors_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonCycleSlipDetectors::mids$[PythonCycleSlipDetectors::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonCycleSlipDetectors::mids$[PythonCycleSlipDetectors::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonCycleSlipDetectors_get__self(t_PythonCycleSlipDetectors *self, void *data)
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
#include "org/orekit/files/ccsds/section/KvnStructureProcessingState.h"
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

          ::java::lang::Class *KvnStructureProcessingState::class$ = NULL;
          jmethodID *KvnStructureProcessingState::mids$ = NULL;
          bool KvnStructureProcessingState::live$ = false;

          jclass KvnStructureProcessingState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/KvnStructureProcessingState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_118972c51270c52e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)V");
              mids$[mid_processToken_5949d4df22f33350] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          KvnStructureProcessingState::KvnStructureProcessingState(const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_118972c51270c52e, a0.this$)) {}

          jboolean KvnStructureProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_processToken_5949d4df22f33350], a0.this$);
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
          static PyObject *t_KvnStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KvnStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_KvnStructureProcessingState_init_(t_KvnStructureProcessingState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_KvnStructureProcessingState_processToken(t_KvnStructureProcessingState *self, PyObject *arg);

          static PyMethodDef t_KvnStructureProcessingState__methods_[] = {
            DECLARE_METHOD(t_KvnStructureProcessingState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureProcessingState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureProcessingState, processToken, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(KvnStructureProcessingState)[] = {
            { Py_tp_methods, t_KvnStructureProcessingState__methods_ },
            { Py_tp_init, (void *) t_KvnStructureProcessingState_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(KvnStructureProcessingState)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(KvnStructureProcessingState, t_KvnStructureProcessingState, KvnStructureProcessingState);

          void t_KvnStructureProcessingState::install(PyObject *module)
          {
            installType(&PY_TYPE(KvnStructureProcessingState), &PY_TYPE_DEF(KvnStructureProcessingState), module, "KvnStructureProcessingState", 0);
          }

          void t_KvnStructureProcessingState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureProcessingState), "class_", make_descriptor(KvnStructureProcessingState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureProcessingState), "wrapfn_", make_descriptor(t_KvnStructureProcessingState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureProcessingState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_KvnStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, KvnStructureProcessingState::initializeClass, 1)))
              return NULL;
            return t_KvnStructureProcessingState::wrap_Object(KvnStructureProcessingState(((t_KvnStructureProcessingState *) arg)->object.this$));
          }
          static PyObject *t_KvnStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, KvnStructureProcessingState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_KvnStructureProcessingState_init_(t_KvnStructureProcessingState *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a0((jobject) NULL);
            PyTypeObject **p0;
            KvnStructureProcessingState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              INT_CALL(object = KvnStructureProcessingState(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_KvnStructureProcessingState_processToken(t_KvnStructureProcessingState *self, PyObject *arg)
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
#include "org/hipparchus/analysis/PythonUnivariateFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *PythonUnivariateFunction::class$ = NULL;
      jmethodID *PythonUnivariateFunction::mids$ = NULL;
      bool PythonUnivariateFunction::live$ = false;

      jclass PythonUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/PythonUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonUnivariateFunction::PythonUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonUnivariateFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
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
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *OrbitType::class$ = NULL;
      jmethodID *OrbitType::mids$ = NULL;
      bool OrbitType::live$ = false;
      ::java::lang::String *OrbitType::A = NULL;
      OrbitType *OrbitType::CARTESIAN = NULL;
      OrbitType *OrbitType::CIRCULAR = NULL;
      ::java::lang::String *OrbitType::ECC = NULL;
      ::java::lang::String *OrbitType::ECC_ANOM = NULL;
      ::java::lang::String *OrbitType::ECC_LAT_ARG = NULL;
      ::java::lang::String *OrbitType::ECC_LON_ARG = NULL;
      OrbitType *OrbitType::EQUINOCTIAL = NULL;
      ::java::lang::String *OrbitType::E_X = NULL;
      ::java::lang::String *OrbitType::E_Y = NULL;
      ::java::lang::String *OrbitType::H_X = NULL;
      ::java::lang::String *OrbitType::H_Y = NULL;
      ::java::lang::String *OrbitType::INC = NULL;
      OrbitType *OrbitType::KEPLERIAN = NULL;
      ::java::lang::String *OrbitType::MEAN_ANOM = NULL;
      ::java::lang::String *OrbitType::MEAN_LAT_ARG = NULL;
      ::java::lang::String *OrbitType::MEAN_LON_ARG = NULL;
      ::java::lang::String *OrbitType::PA = NULL;
      ::java::lang::String *OrbitType::POS_X = NULL;
      ::java::lang::String *OrbitType::POS_Y = NULL;
      ::java::lang::String *OrbitType::POS_Z = NULL;
      ::java::lang::String *OrbitType::RAAN = NULL;
      ::java::lang::String *OrbitType::TRUE_ANOM = NULL;
      ::java::lang::String *OrbitType::TRUE_LAT_ARG = NULL;
      ::java::lang::String *OrbitType::TRUE_LON_ARG = NULL;
      ::java::lang::String *OrbitType::VEL_X = NULL;
      ::java::lang::String *OrbitType::VEL_Y = NULL;
      ::java::lang::String *OrbitType::VEL_Z = NULL;

      jclass OrbitType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/OrbitType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_convertToFieldOrbit_9b0122682636b413] = env->getMethodID(cls, "convertToFieldOrbit", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_convertType_fc86977d2ef95d47] = env->getMethodID(cls, "convertType", "(Lorg/orekit/orbits/FieldOrbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_convertType_17366d6f28f0e9a3] = env->getMethodID(cls, "convertType", "(Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_getDrivers_a90b7a96bd02cc69] = env->getMethodID(cls, "getDrivers", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/utils/ParameterDriversList;");
          mids$[mid_isPositionAngleBased_9ab94ac1dc23b105] = env->getMethodID(cls, "isPositionAngleBased", "()Z");
          mids$[mid_mapArrayToOrbit_f8e2268a540708cf] = env->getMethodID(cls, "mapArrayToOrbit", "([D[DLorg/orekit/orbits/PositionAngleType;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/frames/Frame;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_mapArrayToOrbit_3a36966952a8c249] = env->getMethodID(cls, "mapArrayToOrbit", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_mapOrbitToArray_cdbe0480fba9da5e] = env->getMethodID(cls, "mapOrbitToArray", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/PositionAngleType;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_mapOrbitToArray_dd1f1433d867eeb8] = env->getMethodID(cls, "mapOrbitToArray", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;[D[D)V");
          mids$[mid_normalize_44e06ea15412cf58] = env->getMethodID(cls, "normalize", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/FieldOrbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_normalize_4b9fe4c623440067] = env->getMethodID(cls, "normalize", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
          mids$[mid_valueOf_669d078c7e4c9b0b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/OrbitType;");
          mids$[mid_values_edeedd4e4e0b4870] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/OrbitType;");
          mids$[mid_scale_8734a085c2c31141] = env->getMethodID(cls, "scale", "(DLorg/orekit/orbits/Orbit;)[D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          A = new ::java::lang::String(env->getStaticObjectField(cls, "A", "Ljava/lang/String;"));
          CARTESIAN = new OrbitType(env->getStaticObjectField(cls, "CARTESIAN", "Lorg/orekit/orbits/OrbitType;"));
          CIRCULAR = new OrbitType(env->getStaticObjectField(cls, "CIRCULAR", "Lorg/orekit/orbits/OrbitType;"));
          ECC = new ::java::lang::String(env->getStaticObjectField(cls, "ECC", "Ljava/lang/String;"));
          ECC_ANOM = new ::java::lang::String(env->getStaticObjectField(cls, "ECC_ANOM", "Ljava/lang/String;"));
          ECC_LAT_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "ECC_LAT_ARG", "Ljava/lang/String;"));
          ECC_LON_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "ECC_LON_ARG", "Ljava/lang/String;"));
          EQUINOCTIAL = new OrbitType(env->getStaticObjectField(cls, "EQUINOCTIAL", "Lorg/orekit/orbits/OrbitType;"));
          E_X = new ::java::lang::String(env->getStaticObjectField(cls, "E_X", "Ljava/lang/String;"));
          E_Y = new ::java::lang::String(env->getStaticObjectField(cls, "E_Y", "Ljava/lang/String;"));
          H_X = new ::java::lang::String(env->getStaticObjectField(cls, "H_X", "Ljava/lang/String;"));
          H_Y = new ::java::lang::String(env->getStaticObjectField(cls, "H_Y", "Ljava/lang/String;"));
          INC = new ::java::lang::String(env->getStaticObjectField(cls, "INC", "Ljava/lang/String;"));
          KEPLERIAN = new OrbitType(env->getStaticObjectField(cls, "KEPLERIAN", "Lorg/orekit/orbits/OrbitType;"));
          MEAN_ANOM = new ::java::lang::String(env->getStaticObjectField(cls, "MEAN_ANOM", "Ljava/lang/String;"));
          MEAN_LAT_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "MEAN_LAT_ARG", "Ljava/lang/String;"));
          MEAN_LON_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "MEAN_LON_ARG", "Ljava/lang/String;"));
          PA = new ::java::lang::String(env->getStaticObjectField(cls, "PA", "Ljava/lang/String;"));
          POS_X = new ::java::lang::String(env->getStaticObjectField(cls, "POS_X", "Ljava/lang/String;"));
          POS_Y = new ::java::lang::String(env->getStaticObjectField(cls, "POS_Y", "Ljava/lang/String;"));
          POS_Z = new ::java::lang::String(env->getStaticObjectField(cls, "POS_Z", "Ljava/lang/String;"));
          RAAN = new ::java::lang::String(env->getStaticObjectField(cls, "RAAN", "Ljava/lang/String;"));
          TRUE_ANOM = new ::java::lang::String(env->getStaticObjectField(cls, "TRUE_ANOM", "Ljava/lang/String;"));
          TRUE_LAT_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "TRUE_LAT_ARG", "Ljava/lang/String;"));
          TRUE_LON_ARG = new ::java::lang::String(env->getStaticObjectField(cls, "TRUE_LON_ARG", "Ljava/lang/String;"));
          VEL_X = new ::java::lang::String(env->getStaticObjectField(cls, "VEL_X", "Ljava/lang/String;"));
          VEL_Y = new ::java::lang::String(env->getStaticObjectField(cls, "VEL_Y", "Ljava/lang/String;"));
          VEL_Z = new ::java::lang::String(env->getStaticObjectField(cls, "VEL_Z", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::convertToFieldOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_convertToFieldOrbit_9b0122682636b413], a0.this$, a1.this$));
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::convertType(const ::org::orekit::orbits::FieldOrbit & a0) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_convertType_fc86977d2ef95d47], a0.this$));
      }

      ::org::orekit::orbits::Orbit OrbitType::convertType(const ::org::orekit::orbits::Orbit & a0) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_convertType_17366d6f28f0e9a3], a0.this$));
      }

      ::org::orekit::utils::ParameterDriversList OrbitType::getDrivers(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getDrivers_a90b7a96bd02cc69], a0, a1.this$, a2.this$));
      }

      jboolean OrbitType::isPositionAngleBased() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isPositionAngleBased_9ab94ac1dc23b105]);
      }

      ::org::orekit::orbits::Orbit OrbitType::mapArrayToOrbit(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::orbits::PositionAngleType & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, const ::org::orekit::frames::Frame & a5) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_mapArrayToOrbit_f8e2268a540708cf], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$));
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::mapArrayToOrbit(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::orbits::PositionAngleType & a2, const ::org::orekit::time::FieldAbsoluteDate & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::frames::Frame & a5) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_mapArrayToOrbit_3a36966952a8c249], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      void OrbitType::mapOrbitToArray(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_mapOrbitToArray_cdbe0480fba9da5e], a0.this$, a1.this$, a2.this$, a3.this$);
      }

      void OrbitType::mapOrbitToArray(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_mapOrbitToArray_dd1f1433d867eeb8], a0.this$, a1.this$, a2.this$, a3.this$);
      }

      ::org::orekit::orbits::FieldOrbit OrbitType::normalize(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::FieldOrbit & a1) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_normalize_44e06ea15412cf58], a0.this$, a1.this$));
      }

      ::org::orekit::orbits::Orbit OrbitType::normalize(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::Orbit & a1) const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_normalize_4b9fe4c623440067], a0.this$, a1.this$));
      }

      OrbitType OrbitType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return OrbitType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_669d078c7e4c9b0b], a0.this$));
      }

      JArray< OrbitType > OrbitType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< OrbitType >(env->callStaticObjectMethod(cls, mids$[mid_values_edeedd4e4e0b4870]));
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
      static PyObject *t_OrbitType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitType_of_(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_convertToFieldOrbit(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_convertType(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_getDrivers(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_isPositionAngleBased(t_OrbitType *self);
      static PyObject *t_OrbitType_mapArrayToOrbit(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_mapOrbitToArray(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_normalize(t_OrbitType *self, PyObject *args);
      static PyObject *t_OrbitType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_OrbitType_values(PyTypeObject *type);
      static PyObject *t_OrbitType_get__positionAngleBased(t_OrbitType *self, void *data);
      static PyObject *t_OrbitType_get__parameters_(t_OrbitType *self, void *data);
      static PyGetSetDef t_OrbitType__fields_[] = {
        DECLARE_GET_FIELD(t_OrbitType, positionAngleBased),
        DECLARE_GET_FIELD(t_OrbitType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrbitType__methods_[] = {
        DECLARE_METHOD(t_OrbitType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitType, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, convertToFieldOrbit, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, convertType, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, getDrivers, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, isPositionAngleBased, METH_NOARGS),
        DECLARE_METHOD(t_OrbitType, mapArrayToOrbit, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, mapOrbitToArray, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, normalize, METH_VARARGS),
        DECLARE_METHOD(t_OrbitType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_OrbitType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrbitType)[] = {
        { Py_tp_methods, t_OrbitType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrbitType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrbitType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(OrbitType, t_OrbitType, OrbitType);
      PyObject *t_OrbitType::wrap_Object(const OrbitType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitType *self = (t_OrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrbitType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitType *self = (t_OrbitType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrbitType::install(PyObject *module)
      {
        installType(&PY_TYPE(OrbitType), &PY_TYPE_DEF(OrbitType), module, "OrbitType", 0);
      }

      void t_OrbitType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "class_", make_descriptor(OrbitType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "wrapfn_", make_descriptor(t_OrbitType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "boxfn_", make_descriptor(boxObject));
        env->getClass(OrbitType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "A", make_descriptor(j2p(*OrbitType::A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "CARTESIAN", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::CARTESIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "CIRCULAR", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::CIRCULAR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC", make_descriptor(j2p(*OrbitType::ECC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC_ANOM", make_descriptor(j2p(*OrbitType::ECC_ANOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC_LAT_ARG", make_descriptor(j2p(*OrbitType::ECC_LAT_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "ECC_LON_ARG", make_descriptor(j2p(*OrbitType::ECC_LON_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "EQUINOCTIAL", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::EQUINOCTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "E_X", make_descriptor(j2p(*OrbitType::E_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "E_Y", make_descriptor(j2p(*OrbitType::E_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "H_X", make_descriptor(j2p(*OrbitType::H_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "H_Y", make_descriptor(j2p(*OrbitType::H_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "INC", make_descriptor(j2p(*OrbitType::INC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "KEPLERIAN", make_descriptor(t_OrbitType::wrap_Object(*OrbitType::KEPLERIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "MEAN_ANOM", make_descriptor(j2p(*OrbitType::MEAN_ANOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "MEAN_LAT_ARG", make_descriptor(j2p(*OrbitType::MEAN_LAT_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "MEAN_LON_ARG", make_descriptor(j2p(*OrbitType::MEAN_LON_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "PA", make_descriptor(j2p(*OrbitType::PA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "POS_X", make_descriptor(j2p(*OrbitType::POS_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "POS_Y", make_descriptor(j2p(*OrbitType::POS_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "POS_Z", make_descriptor(j2p(*OrbitType::POS_Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "RAAN", make_descriptor(j2p(*OrbitType::RAAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "TRUE_ANOM", make_descriptor(j2p(*OrbitType::TRUE_ANOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "TRUE_LAT_ARG", make_descriptor(j2p(*OrbitType::TRUE_LAT_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "TRUE_LON_ARG", make_descriptor(j2p(*OrbitType::TRUE_LON_ARG)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "VEL_X", make_descriptor(j2p(*OrbitType::VEL_X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "VEL_Y", make_descriptor(j2p(*OrbitType::VEL_Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitType), "VEL_Z", make_descriptor(j2p(*OrbitType::VEL_Z)));
      }

      static PyObject *t_OrbitType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrbitType::initializeClass, 1)))
          return NULL;
        return t_OrbitType::wrap_Object(OrbitType(((t_OrbitType *) arg)->object.this$));
      }
      static PyObject *t_OrbitType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrbitType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrbitType_of_(t_OrbitType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OrbitType_convertToFieldOrbit(t_OrbitType *self, PyObject *args)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::orbits::Orbit a1((jobject) NULL);
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.convertToFieldOrbit(a0, a1));
          return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convertToFieldOrbit", args);
        return NULL;
      }

      static PyObject *t_OrbitType_convertType(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              OBJ_CALL(result = self->object.convertType(a0));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::orbits::Orbit result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.convertType(a0));
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "convertType", args);
        return NULL;
      }

      static PyObject *t_OrbitType_getDrivers(t_OrbitType *self, PyObject *args)
      {
        jdouble a0;
        ::org::orekit::orbits::Orbit a1((jobject) NULL);
        ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

        if (!parseArgs(args, "DkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getDrivers(a0, a1, a2));
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getDrivers", args);
        return NULL;
      }

      static PyObject *t_OrbitType_isPositionAngleBased(t_OrbitType *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isPositionAngleBased());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_OrbitType_mapArrayToOrbit(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 6:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            jdouble a4;
            ::org::orekit::frames::Frame a5((jobject) NULL);
            ::org::orekit::orbits::Orbit result((jobject) NULL);

            if (!parseArgs(args, "[D[DKkDk", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.mapArrayToOrbit(a0, a1, a2, a3, a4, a5));
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::frames::Frame a5((jobject) NULL);
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "[K[KKKKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
            {
              OBJ_CALL(result = self->object.mapArrayToOrbit(a0, a1, a2, a3, a4, a5));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "mapArrayToOrbit", args);
        return NULL;
      }

      static PyObject *t_OrbitType_mapOrbitToArray(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< jdouble > a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);

            if (!parseArgs(args, "kK[D[D", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
            {
              OBJ_CALL(self->object.mapOrbitToArray(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
            PyTypeObject **p3;

            if (!parseArgs(args, "KK[K[K", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.mapOrbitToArray(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "mapOrbitToArray", args);
        return NULL;
      }

      static PyObject *t_OrbitType_normalize(t_OrbitType *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              OBJ_CALL(result = self->object.normalize(a0, a1));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            ::org::orekit::orbits::Orbit result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.normalize(a0, a1));
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "normalize", args);
        return NULL;
      }

      static PyObject *t_OrbitType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        OrbitType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::OrbitType::valueOf(a0));
          return t_OrbitType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_OrbitType_values(PyTypeObject *type)
      {
        JArray< OrbitType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::OrbitType::values());
        return JArray<jobject>(result.this$).wrap(t_OrbitType::wrap_jobject);
      }
      static PyObject *t_OrbitType_get__parameters_(t_OrbitType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OrbitType_get__positionAngleBased(t_OrbitType *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isPositionAngleBased());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedDouble.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedDouble::class$ = NULL;
      jmethodID *TimeStampedDouble::mids$ = NULL;
      bool TimeStampedDouble::live$ = false;

      jclass TimeStampedDouble::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedDouble");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_98ef3c02384a4218] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getValue_b74f83833fdad017] = env->getMethodID(cls, "getValue", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedDouble::TimeStampedDouble(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_98ef3c02384a4218, a0, a1.this$)) {}

      ::org::orekit::time::AbsoluteDate TimeStampedDouble::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      jdouble TimeStampedDouble::getValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_b74f83833fdad017]);
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
      static PyObject *t_TimeStampedDouble_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedDouble_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeStampedDouble_init_(t_TimeStampedDouble *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedDouble_getDate(t_TimeStampedDouble *self);
      static PyObject *t_TimeStampedDouble_getValue(t_TimeStampedDouble *self);
      static PyObject *t_TimeStampedDouble_get__date(t_TimeStampedDouble *self, void *data);
      static PyObject *t_TimeStampedDouble_get__value(t_TimeStampedDouble *self, void *data);
      static PyGetSetDef t_TimeStampedDouble__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedDouble, date),
        DECLARE_GET_FIELD(t_TimeStampedDouble, value),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedDouble__methods_[] = {
        DECLARE_METHOD(t_TimeStampedDouble, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedDouble, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedDouble, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedDouble, getValue, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedDouble)[] = {
        { Py_tp_methods, t_TimeStampedDouble__methods_ },
        { Py_tp_init, (void *) t_TimeStampedDouble_init_ },
        { Py_tp_getset, t_TimeStampedDouble__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedDouble)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedDouble, t_TimeStampedDouble, TimeStampedDouble);

      void t_TimeStampedDouble::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedDouble), &PY_TYPE_DEF(TimeStampedDouble), module, "TimeStampedDouble", 0);
      }

      void t_TimeStampedDouble::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDouble), "class_", make_descriptor(TimeStampedDouble::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDouble), "wrapfn_", make_descriptor(t_TimeStampedDouble::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedDouble), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedDouble_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedDouble::initializeClass, 1)))
          return NULL;
        return t_TimeStampedDouble::wrap_Object(TimeStampedDouble(((t_TimeStampedDouble *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedDouble_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedDouble::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeStampedDouble_init_(t_TimeStampedDouble *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        TimeStampedDouble object((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          INT_CALL(object = TimeStampedDouble(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TimeStampedDouble_getDate(t_TimeStampedDouble *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStampedDouble_getValue(t_TimeStampedDouble *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeStampedDouble_get__date(t_TimeStampedDouble *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeStampedDouble_get__value(t_TimeStampedDouble *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getValue());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *SpacecraftParameters::class$ = NULL;
            jmethodID *SpacecraftParameters::mids$ = NULL;
            bool SpacecraftParameters::live$ = false;

            jclass SpacecraftParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/SpacecraftParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getDragArea_b74f83833fdad017] = env->getMethodID(cls, "getDragArea", "()D");
                mids$[mid_getDragCoeff_b74f83833fdad017] = env->getMethodID(cls, "getDragCoeff", "()D");
                mids$[mid_getMass_b74f83833fdad017] = env->getMethodID(cls, "getMass", "()D");
                mids$[mid_getSolarRadArea_b74f83833fdad017] = env->getMethodID(cls, "getSolarRadArea", "()D");
                mids$[mid_getSolarRadCoeff_b74f83833fdad017] = env->getMethodID(cls, "getSolarRadCoeff", "()D");
                mids$[mid_setDragArea_8ba9fe7a847cecad] = env->getMethodID(cls, "setDragArea", "(D)V");
                mids$[mid_setDragCoeff_8ba9fe7a847cecad] = env->getMethodID(cls, "setDragCoeff", "(D)V");
                mids$[mid_setMass_8ba9fe7a847cecad] = env->getMethodID(cls, "setMass", "(D)V");
                mids$[mid_setSolarRadArea_8ba9fe7a847cecad] = env->getMethodID(cls, "setSolarRadArea", "(D)V");
                mids$[mid_setSolarRadCoeff_8ba9fe7a847cecad] = env->getMethodID(cls, "setSolarRadCoeff", "(D)V");
                mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SpacecraftParameters::SpacecraftParameters() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            jdouble SpacecraftParameters::getDragArea() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDragArea_b74f83833fdad017]);
            }

            jdouble SpacecraftParameters::getDragCoeff() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDragCoeff_b74f83833fdad017]);
            }

            jdouble SpacecraftParameters::getMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMass_b74f83833fdad017]);
            }

            jdouble SpacecraftParameters::getSolarRadArea() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSolarRadArea_b74f83833fdad017]);
            }

            jdouble SpacecraftParameters::getSolarRadCoeff() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSolarRadCoeff_b74f83833fdad017]);
            }

            void SpacecraftParameters::setDragArea(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDragArea_8ba9fe7a847cecad], a0);
            }

            void SpacecraftParameters::setDragCoeff(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDragCoeff_8ba9fe7a847cecad], a0);
            }

            void SpacecraftParameters::setMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMass_8ba9fe7a847cecad], a0);
            }

            void SpacecraftParameters::setSolarRadArea(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSolarRadArea_8ba9fe7a847cecad], a0);
            }

            void SpacecraftParameters::setSolarRadCoeff(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSolarRadCoeff_8ba9fe7a847cecad], a0);
            }

            void SpacecraftParameters::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
            static PyObject *t_SpacecraftParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SpacecraftParameters_init_(t_SpacecraftParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SpacecraftParameters_getDragArea(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getDragCoeff(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getMass(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getSolarRadArea(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getSolarRadCoeff(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_setDragArea(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setDragCoeff(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setMass(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setSolarRadArea(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setSolarRadCoeff(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_validate(t_SpacecraftParameters *self, PyObject *args);
            static PyObject *t_SpacecraftParameters_get__dragArea(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__dragArea(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__dragCoeff(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__dragCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__mass(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__mass(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__solarRadArea(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__solarRadArea(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__solarRadCoeff(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__solarRadCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyGetSetDef t_SpacecraftParameters__fields_[] = {
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, dragArea),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, dragCoeff),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, mass),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, solarRadArea),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, solarRadCoeff),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SpacecraftParameters__methods_[] = {
              DECLARE_METHOD(t_SpacecraftParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParameters, getDragArea, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getDragCoeff, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getMass, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getSolarRadArea, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getSolarRadCoeff, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, setDragArea, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setDragCoeff, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setMass, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setSolarRadArea, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setSolarRadCoeff, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SpacecraftParameters)[] = {
              { Py_tp_methods, t_SpacecraftParameters__methods_ },
              { Py_tp_init, (void *) t_SpacecraftParameters_init_ },
              { Py_tp_getset, t_SpacecraftParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SpacecraftParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(SpacecraftParameters, t_SpacecraftParameters, SpacecraftParameters);

            void t_SpacecraftParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(SpacecraftParameters), &PY_TYPE_DEF(SpacecraftParameters), module, "SpacecraftParameters", 0);
            }

            void t_SpacecraftParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParameters), "class_", make_descriptor(SpacecraftParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParameters), "wrapfn_", make_descriptor(t_SpacecraftParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SpacecraftParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SpacecraftParameters::initializeClass, 1)))
                return NULL;
              return t_SpacecraftParameters::wrap_Object(SpacecraftParameters(((t_SpacecraftParameters *) arg)->object.this$));
            }
            static PyObject *t_SpacecraftParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SpacecraftParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SpacecraftParameters_init_(t_SpacecraftParameters *self, PyObject *args, PyObject *kwds)
            {
              SpacecraftParameters object((jobject) NULL);

              INT_CALL(object = SpacecraftParameters());
              self->object = object;

              return 0;
            }

            static PyObject *t_SpacecraftParameters_getDragArea(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDragArea());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getDragCoeff(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDragCoeff());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getMass(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getSolarRadArea(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSolarRadArea());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getSolarRadCoeff(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSolarRadCoeff());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_setDragArea(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDragArea(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDragArea", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_setDragCoeff(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDragCoeff(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDragCoeff", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_setMass(t_SpacecraftParameters *self, PyObject *arg)
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

            static PyObject *t_SpacecraftParameters_setSolarRadArea(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSolarRadArea(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSolarRadArea", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_setSolarRadCoeff(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSolarRadCoeff(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSolarRadCoeff", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_validate(t_SpacecraftParameters *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(SpacecraftParameters), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_SpacecraftParameters_get__dragArea(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDragArea());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__dragArea(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDragArea(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dragArea", arg);
              return -1;
            }

            static PyObject *t_SpacecraftParameters_get__dragCoeff(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDragCoeff());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__dragCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDragCoeff(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dragCoeff", arg);
              return -1;
            }

            static PyObject *t_SpacecraftParameters_get__mass(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__mass(t_SpacecraftParameters *self, PyObject *arg, void *data)
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

            static PyObject *t_SpacecraftParameters_get__solarRadArea(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSolarRadArea());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__solarRadArea(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSolarRadArea(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "solarRadArea", arg);
              return -1;
            }

            static PyObject *t_SpacecraftParameters_get__solarRadCoeff(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSolarRadCoeff());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__solarRadCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSolarRadCoeff(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "solarRadCoeff", arg);
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
#include "org/hipparchus/ode/events/FieldDetectorBasedEventState.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/events/FieldEventState.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldDetectorBasedEventState::class$ = NULL;
        jmethodID *FieldDetectorBasedEventState::mids$ = NULL;
        bool FieldDetectorBasedEventState::live$ = false;

        jclass FieldDetectorBasedEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldDetectorBasedEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7d036dd73a796a18] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
            mids$[mid_doEvent_0f4d16424f907056] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/events/FieldEventOccurrence;");
            mids$[mid_evaluateStep_ebd2aaa9f3eddd1a] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");
            mids$[mid_getEventDetector_12e77528668ead99] = env->getMethodID(cls, "getEventDetector", "()Lorg/hipparchus/ode/events/FieldODEEventDetector;");
            mids$[mid_getEventTime_81520b552cb3fa26] = env->getMethodID(cls, "getEventTime", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_55fdeef582303a99] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_reinitializeBegin_bd804f650c074774] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
            mids$[mid_tryAdvance_9830f84dd6c34f32] = env->getMethodID(cls, "tryAdvance", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldDetectorBasedEventState::FieldDetectorBasedEventState(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7d036dd73a796a18, a0.this$)) {}

        ::org::hipparchus::ode::events::FieldEventOccurrence FieldDetectorBasedEventState::doEvent(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::FieldEventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_0f4d16424f907056], a0.this$));
        }

        jboolean FieldDetectorBasedEventState::evaluateStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_ebd2aaa9f3eddd1a], a0.this$);
        }

        ::org::hipparchus::ode::events::FieldODEEventDetector FieldDetectorBasedEventState::getEventDetector() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_12e77528668ead99]));
        }

        ::org::hipparchus::CalculusFieldElement FieldDetectorBasedEventState::getEventTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEventTime_81520b552cb3fa26]));
        }

        void FieldDetectorBasedEventState::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_55fdeef582303a99], a0.this$, a1.this$);
        }

        void FieldDetectorBasedEventState::reinitializeBegin(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_bd804f650c074774], a0.this$);
        }

        jboolean FieldDetectorBasedEventState::tryAdvance(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_9830f84dd6c34f32], a0.this$, a1.this$);
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
        static PyObject *t_FieldDetectorBasedEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_of_(t_FieldDetectorBasedEventState *self, PyObject *args);
        static int t_FieldDetectorBasedEventState_init_(t_FieldDetectorBasedEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldDetectorBasedEventState_doEvent(t_FieldDetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_evaluateStep(t_FieldDetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_getEventDetector(t_FieldDetectorBasedEventState *self);
        static PyObject *t_FieldDetectorBasedEventState_getEventTime(t_FieldDetectorBasedEventState *self);
        static PyObject *t_FieldDetectorBasedEventState_init(t_FieldDetectorBasedEventState *self, PyObject *args);
        static PyObject *t_FieldDetectorBasedEventState_reinitializeBegin(t_FieldDetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_tryAdvance(t_FieldDetectorBasedEventState *self, PyObject *args);
        static PyObject *t_FieldDetectorBasedEventState_get__eventDetector(t_FieldDetectorBasedEventState *self, void *data);
        static PyObject *t_FieldDetectorBasedEventState_get__eventTime(t_FieldDetectorBasedEventState *self, void *data);
        static PyObject *t_FieldDetectorBasedEventState_get__parameters_(t_FieldDetectorBasedEventState *self, void *data);
        static PyGetSetDef t_FieldDetectorBasedEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDetectorBasedEventState, eventDetector),
          DECLARE_GET_FIELD(t_FieldDetectorBasedEventState, eventTime),
          DECLARE_GET_FIELD(t_FieldDetectorBasedEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDetectorBasedEventState__methods_[] = {
          DECLARE_METHOD(t_FieldDetectorBasedEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, reinitializeBegin, METH_O),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, tryAdvance, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDetectorBasedEventState)[] = {
          { Py_tp_methods, t_FieldDetectorBasedEventState__methods_ },
          { Py_tp_init, (void *) t_FieldDetectorBasedEventState_init_ },
          { Py_tp_getset, t_FieldDetectorBasedEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDetectorBasedEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldDetectorBasedEventState, t_FieldDetectorBasedEventState, FieldDetectorBasedEventState);
        PyObject *t_FieldDetectorBasedEventState::wrap_Object(const FieldDetectorBasedEventState& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDetectorBasedEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDetectorBasedEventState *self = (t_FieldDetectorBasedEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldDetectorBasedEventState::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDetectorBasedEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDetectorBasedEventState *self = (t_FieldDetectorBasedEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldDetectorBasedEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDetectorBasedEventState), &PY_TYPE_DEF(FieldDetectorBasedEventState), module, "FieldDetectorBasedEventState", 0);
        }

        void t_FieldDetectorBasedEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDetectorBasedEventState), "class_", make_descriptor(FieldDetectorBasedEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDetectorBasedEventState), "wrapfn_", make_descriptor(t_FieldDetectorBasedEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDetectorBasedEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldDetectorBasedEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDetectorBasedEventState::initializeClass, 1)))
            return NULL;
          return t_FieldDetectorBasedEventState::wrap_Object(FieldDetectorBasedEventState(((t_FieldDetectorBasedEventState *) arg)->object.this$));
        }
        static PyObject *t_FieldDetectorBasedEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDetectorBasedEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDetectorBasedEventState_of_(t_FieldDetectorBasedEventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldDetectorBasedEventState_init_(t_FieldDetectorBasedEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDetectorBasedEventState object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_))
          {
            INT_CALL(object = FieldDetectorBasedEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldDetectorBasedEventState_doEvent(t_FieldDetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldEventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_FieldEventOccurrence::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_FieldDetectorBasedEventState_evaluateStep(t_FieldDetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_FieldDetectorBasedEventState_getEventDetector(t_FieldDetectorBasedEventState *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDetectorBasedEventState_getEventTime(t_FieldDetectorBasedEventState *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldDetectorBasedEventState_init(t_FieldDetectorBasedEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldDetectorBasedEventState_reinitializeBegin(t_FieldDetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(self->object.reinitializeBegin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reinitializeBegin", arg);
          return NULL;
        }

        static PyObject *t_FieldDetectorBasedEventState_tryAdvance(t_FieldDetectorBasedEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.tryAdvance(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "tryAdvance", args);
          return NULL;
        }
        static PyObject *t_FieldDetectorBasedEventState_get__parameters_(t_FieldDetectorBasedEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDetectorBasedEventState_get__eventDetector(t_FieldDetectorBasedEventState *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldDetectorBasedEventState_get__eventTime(t_FieldDetectorBasedEventState *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
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
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGnssIod_55546ef6a647f39b] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_da9c9656f83ca27e] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setGnssIod_44ed599e93e8a30c] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_b2cd6b761acba879] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmOrbitCorrectionData::RtcmOrbitCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jint RtcmOrbitCorrectionData::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_55546ef6a647f39b]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection RtcmOrbitCorrectionData::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_da9c9656f83ca27e]));
              }

              void RtcmOrbitCorrectionData::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_44ed599e93e8a30c], a0);
              }

              void RtcmOrbitCorrectionData::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCorrection_b2cd6b761acba879], a0.this$);
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
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/frames/Predefined.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FactoryManagedFrame::class$ = NULL;
      jmethodID *FactoryManagedFrame::mids$ = NULL;
      bool FactoryManagedFrame::live$ = false;

      jclass FactoryManagedFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FactoryManagedFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7d49ab6d45ab1740] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;ZLorg/orekit/frames/Predefined;)V");
          mids$[mid_getFactoryKey_7015323f485a7303] = env->getMethodID(cls, "getFactoryKey", "()Lorg/orekit/frames/Predefined;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FactoryManagedFrame::FactoryManagedFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::TransformProvider & a1, jboolean a2, const ::org::orekit::frames::Predefined & a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_7d49ab6d45ab1740, a0.this$, a1.this$, a2, a3.this$)) {}

      ::org::orekit::frames::Predefined FactoryManagedFrame::getFactoryKey() const
      {
        return ::org::orekit::frames::Predefined(env->callObjectMethod(this$, mids$[mid_getFactoryKey_7015323f485a7303]));
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
      static PyObject *t_FactoryManagedFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FactoryManagedFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FactoryManagedFrame_init_(t_FactoryManagedFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FactoryManagedFrame_getFactoryKey(t_FactoryManagedFrame *self);
      static PyObject *t_FactoryManagedFrame_get__factoryKey(t_FactoryManagedFrame *self, void *data);
      static PyGetSetDef t_FactoryManagedFrame__fields_[] = {
        DECLARE_GET_FIELD(t_FactoryManagedFrame, factoryKey),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FactoryManagedFrame__methods_[] = {
        DECLARE_METHOD(t_FactoryManagedFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FactoryManagedFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FactoryManagedFrame, getFactoryKey, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FactoryManagedFrame)[] = {
        { Py_tp_methods, t_FactoryManagedFrame__methods_ },
        { Py_tp_init, (void *) t_FactoryManagedFrame_init_ },
        { Py_tp_getset, t_FactoryManagedFrame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FactoryManagedFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(FactoryManagedFrame, t_FactoryManagedFrame, FactoryManagedFrame);

      void t_FactoryManagedFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(FactoryManagedFrame), &PY_TYPE_DEF(FactoryManagedFrame), module, "FactoryManagedFrame", 0);
      }

      void t_FactoryManagedFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FactoryManagedFrame), "class_", make_descriptor(FactoryManagedFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FactoryManagedFrame), "wrapfn_", make_descriptor(t_FactoryManagedFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FactoryManagedFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FactoryManagedFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FactoryManagedFrame::initializeClass, 1)))
          return NULL;
        return t_FactoryManagedFrame::wrap_Object(FactoryManagedFrame(((t_FactoryManagedFrame *) arg)->object.this$));
      }
      static PyObject *t_FactoryManagedFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FactoryManagedFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FactoryManagedFrame_init_(t_FactoryManagedFrame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::TransformProvider a1((jobject) NULL);
        jboolean a2;
        ::org::orekit::frames::Predefined a3((jobject) NULL);
        PyTypeObject **p3;
        FactoryManagedFrame object((jobject) NULL);

        if (!parseArgs(args, "kkZK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, ::org::orekit::frames::Predefined::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::frames::t_Predefined::parameters_))
        {
          INT_CALL(object = FactoryManagedFrame(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FactoryManagedFrame_getFactoryKey(t_FactoryManagedFrame *self)
      {
        ::org::orekit::frames::Predefined result((jobject) NULL);
        OBJ_CALL(result = self->object.getFactoryKey());
        return ::org::orekit::frames::t_Predefined::wrap_Object(result);
      }

      static PyObject *t_FactoryManagedFrame_get__factoryKey(t_FactoryManagedFrame *self, void *data)
      {
        ::org::orekit::frames::Predefined value((jobject) NULL);
        OBJ_CALL(value = self->object.getFactoryKey());
        return ::org::orekit::frames::t_Predefined::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/stream/DoubleStream.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/util/function/Supplier.h"
#include "java/util/OptionalDouble.h"
#include "java/util/DoubleSummaryStatistics.h"
#include "java/lang/Double.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/util/PrimitiveIterator$OfDouble.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "java/util/stream/DoubleStream.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace stream {

      ::java::lang::Class *DoubleStream::class$ = NULL;
      jmethodID *DoubleStream::mids$ = NULL;
      bool DoubleStream::live$ = false;

      jclass DoubleStream::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/stream/DoubleStream");

          mids$ = new jmethodID[max_mid];
          mids$[mid_average_a58140050545434b] = env->getMethodID(cls, "average", "()Ljava/util/OptionalDouble;");
          mids$[mid_boxed_14e21bf777ff0ccf] = env->getMethodID(cls, "boxed", "()Ljava/util/stream/Stream;");
          mids$[mid_concat_bd58ff8c56bbc3be] = env->getStaticMethodID(cls, "concat", "(Ljava/util/stream/DoubleStream;Ljava/util/stream/DoubleStream;)Ljava/util/stream/DoubleStream;");
          mids$[mid_count_6c0ce7e438e5ded4] = env->getMethodID(cls, "count", "()J");
          mids$[mid_distinct_48a8801871033f9c] = env->getMethodID(cls, "distinct", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_empty_48a8801871033f9c] = env->getStaticMethodID(cls, "empty", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_findAny_a58140050545434b] = env->getMethodID(cls, "findAny", "()Ljava/util/OptionalDouble;");
          mids$[mid_findFirst_a58140050545434b] = env->getMethodID(cls, "findFirst", "()Ljava/util/OptionalDouble;");
          mids$[mid_forEach_85691ac11e338ac3] = env->getMethodID(cls, "forEach", "(Ljava/util/function/DoubleConsumer;)V");
          mids$[mid_forEachOrdered_85691ac11e338ac3] = env->getMethodID(cls, "forEachOrdered", "(Ljava/util/function/DoubleConsumer;)V");
          mids$[mid_iterator_a3a18fbc64c0382f] = env->getMethodID(cls, "iterator", "()Ljava/util/PrimitiveIterator$OfDouble;");
          mids$[mid_limit_99f9dfe38cac6ad9] = env->getMethodID(cls, "limit", "(J)Ljava/util/stream/DoubleStream;");
          mids$[mid_max_a58140050545434b] = env->getMethodID(cls, "max", "()Ljava/util/OptionalDouble;");
          mids$[mid_min_a58140050545434b] = env->getMethodID(cls, "min", "()Ljava/util/OptionalDouble;");
          mids$[mid_of_969b847f93a58e14] = env->getStaticMethodID(cls, "of", "([D)Ljava/util/stream/DoubleStream;");
          mids$[mid_of_2d5ffbd866d95bb1] = env->getStaticMethodID(cls, "of", "(D)Ljava/util/stream/DoubleStream;");
          mids$[mid_parallel_48a8801871033f9c] = env->getMethodID(cls, "parallel", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_peek_b9194c52ae4a498c] = env->getMethodID(cls, "peek", "(Ljava/util/function/DoubleConsumer;)Ljava/util/stream/DoubleStream;");
          mids$[mid_sequential_48a8801871033f9c] = env->getMethodID(cls, "sequential", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_skip_99f9dfe38cac6ad9] = env->getMethodID(cls, "skip", "(J)Ljava/util/stream/DoubleStream;");
          mids$[mid_sorted_48a8801871033f9c] = env->getMethodID(cls, "sorted", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_spliterator_6bd048c33c1b01f9] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator$OfDouble;");
          mids$[mid_sum_b74f83833fdad017] = env->getMethodID(cls, "sum", "()D");
          mids$[mid_summaryStatistics_2007d1a2094827e7] = env->getMethodID(cls, "summaryStatistics", "()Ljava/util/DoubleSummaryStatistics;");
          mids$[mid_toArray_25e1757a36c4dde2] = env->getMethodID(cls, "toArray", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::OptionalDouble DoubleStream::average() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_average_a58140050545434b]));
      }

      ::java::util::stream::Stream DoubleStream::boxed() const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_boxed_14e21bf777ff0ccf]));
      }

      DoubleStream DoubleStream::concat(const DoubleStream & a0, const DoubleStream & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_concat_bd58ff8c56bbc3be], a0.this$, a1.this$));
      }

      jlong DoubleStream::count() const
      {
        return env->callLongMethod(this$, mids$[mid_count_6c0ce7e438e5ded4]);
      }

      DoubleStream DoubleStream::distinct() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_distinct_48a8801871033f9c]));
      }

      DoubleStream DoubleStream::empty()
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_empty_48a8801871033f9c]));
      }

      ::java::util::OptionalDouble DoubleStream::findAny() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_findAny_a58140050545434b]));
      }

      ::java::util::OptionalDouble DoubleStream::findFirst() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_findFirst_a58140050545434b]));
      }

      void DoubleStream::forEach(const ::java::util::function::DoubleConsumer & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_forEach_85691ac11e338ac3], a0.this$);
      }

      void DoubleStream::forEachOrdered(const ::java::util::function::DoubleConsumer & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_forEachOrdered_85691ac11e338ac3], a0.this$);
      }

      ::java::util::PrimitiveIterator$OfDouble DoubleStream::iterator() const
      {
        return ::java::util::PrimitiveIterator$OfDouble(env->callObjectMethod(this$, mids$[mid_iterator_a3a18fbc64c0382f]));
      }

      DoubleStream DoubleStream::limit(jlong a0) const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_limit_99f9dfe38cac6ad9], a0));
      }

      ::java::util::OptionalDouble DoubleStream::max$() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_max_a58140050545434b]));
      }

      ::java::util::OptionalDouble DoubleStream::min$() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_min_a58140050545434b]));
      }

      DoubleStream DoubleStream::of(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_of_969b847f93a58e14], a0.this$));
      }

      DoubleStream DoubleStream::of(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_of_2d5ffbd866d95bb1], a0));
      }

      DoubleStream DoubleStream::parallel() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_parallel_48a8801871033f9c]));
      }

      DoubleStream DoubleStream::peek(const ::java::util::function::DoubleConsumer & a0) const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_peek_b9194c52ae4a498c], a0.this$));
      }

      DoubleStream DoubleStream::sequential() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_sequential_48a8801871033f9c]));
      }

      DoubleStream DoubleStream::skip(jlong a0) const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_skip_99f9dfe38cac6ad9], a0));
      }

      DoubleStream DoubleStream::sorted() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_sorted_48a8801871033f9c]));
      }

      ::java::util::Spliterator$OfDouble DoubleStream::spliterator() const
      {
        return ::java::util::Spliterator$OfDouble(env->callObjectMethod(this$, mids$[mid_spliterator_6bd048c33c1b01f9]));
      }

      jdouble DoubleStream::sum() const
      {
        return env->callDoubleMethod(this$, mids$[mid_sum_b74f83833fdad017]);
      }

      ::java::util::DoubleSummaryStatistics DoubleStream::summaryStatistics() const
      {
        return ::java::util::DoubleSummaryStatistics(env->callObjectMethod(this$, mids$[mid_summaryStatistics_2007d1a2094827e7]));
      }

      JArray< jdouble > DoubleStream::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_25e1757a36c4dde2]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace stream {
      static PyObject *t_DoubleStream_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleStream_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleStream_average(t_DoubleStream *self);
      static PyObject *t_DoubleStream_boxed(t_DoubleStream *self);
      static PyObject *t_DoubleStream_concat(PyTypeObject *type, PyObject *args);
      static PyObject *t_DoubleStream_count(t_DoubleStream *self);
      static PyObject *t_DoubleStream_distinct(t_DoubleStream *self);
      static PyObject *t_DoubleStream_empty(PyTypeObject *type);
      static PyObject *t_DoubleStream_findAny(t_DoubleStream *self);
      static PyObject *t_DoubleStream_findFirst(t_DoubleStream *self);
      static PyObject *t_DoubleStream_forEach(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_forEachOrdered(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_iterator(t_DoubleStream *self);
      static PyObject *t_DoubleStream_limit(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_max(t_DoubleStream *self);
      static PyObject *t_DoubleStream_min(t_DoubleStream *self);
      static PyObject *t_DoubleStream_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_DoubleStream_parallel(t_DoubleStream *self);
      static PyObject *t_DoubleStream_peek(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_sequential(t_DoubleStream *self);
      static PyObject *t_DoubleStream_skip(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_sorted(t_DoubleStream *self);
      static PyObject *t_DoubleStream_spliterator(t_DoubleStream *self);
      static PyObject *t_DoubleStream_sum(t_DoubleStream *self);
      static PyObject *t_DoubleStream_summaryStatistics(t_DoubleStream *self);
      static PyObject *t_DoubleStream_toArray(t_DoubleStream *self);

      static PyMethodDef t_DoubleStream__methods_[] = {
        DECLARE_METHOD(t_DoubleStream, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, average, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, boxed, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, concat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, count, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, distinct, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, empty, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, findAny, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, findFirst, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, forEach, METH_O),
        DECLARE_METHOD(t_DoubleStream, forEachOrdered, METH_O),
        DECLARE_METHOD(t_DoubleStream, iterator, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, limit, METH_O),
        DECLARE_METHOD(t_DoubleStream, max, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, min, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, of, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, parallel, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, peek, METH_O),
        DECLARE_METHOD(t_DoubleStream, sequential, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, skip, METH_O),
        DECLARE_METHOD(t_DoubleStream, sorted, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, spliterator, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, sum, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, summaryStatistics, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, toArray, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DoubleStream)[] = {
        { Py_tp_methods, t_DoubleStream__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DoubleStream)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DoubleStream, t_DoubleStream, DoubleStream);

      void t_DoubleStream::install(PyObject *module)
      {
        installType(&PY_TYPE(DoubleStream), &PY_TYPE_DEF(DoubleStream), module, "DoubleStream", 0);
      }

      void t_DoubleStream::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleStream), "class_", make_descriptor(DoubleStream::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleStream), "wrapfn_", make_descriptor(t_DoubleStream::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleStream), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DoubleStream_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DoubleStream::initializeClass, 1)))
          return NULL;
        return t_DoubleStream::wrap_Object(DoubleStream(((t_DoubleStream *) arg)->object.this$));
      }
      static PyObject *t_DoubleStream_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DoubleStream::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DoubleStream_average(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.average());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_boxed(t_DoubleStream *self)
      {
        ::java::util::stream::Stream result((jobject) NULL);
        OBJ_CALL(result = self->object.boxed());
        return ::java::util::stream::t_Stream::wrap_Object(result, ::java::lang::PY_TYPE(Double));
      }

      static PyObject *t_DoubleStream_concat(PyTypeObject *type, PyObject *args)
      {
        DoubleStream a0((jobject) NULL);
        DoubleStream a1((jobject) NULL);
        DoubleStream result((jobject) NULL);

        if (!parseArgs(args, "kk", DoubleStream::initializeClass, DoubleStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::java::util::stream::DoubleStream::concat(a0, a1));
          return t_DoubleStream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "concat", args);
        return NULL;
      }

      static PyObject *t_DoubleStream_count(t_DoubleStream *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.count());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_DoubleStream_distinct(t_DoubleStream *self)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = self->object.distinct());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_empty(PyTypeObject *type)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = ::java::util::stream::DoubleStream::empty());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_findAny(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.findAny());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_findFirst(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.findFirst());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_forEach(t_DoubleStream *self, PyObject *arg)
      {
        ::java::util::function::DoubleConsumer a0((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::function::DoubleConsumer::initializeClass, &a0))
        {
          OBJ_CALL(self->object.forEach(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "forEach", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_forEachOrdered(t_DoubleStream *self, PyObject *arg)
      {
        ::java::util::function::DoubleConsumer a0((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::function::DoubleConsumer::initializeClass, &a0))
        {
          OBJ_CALL(self->object.forEachOrdered(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "forEachOrdered", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_iterator(t_DoubleStream *self)
      {
        ::java::util::PrimitiveIterator$OfDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_PrimitiveIterator$OfDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_limit(t_DoubleStream *self, PyObject *arg)
      {
        jlong a0;
        DoubleStream result((jobject) NULL);

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.limit(a0));
          return t_DoubleStream::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "limit", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_max(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.max$());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_min(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.min$());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            DoubleStream result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::java::util::stream::DoubleStream::of(a0));
              return t_DoubleStream::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            DoubleStream result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::java::util::stream::DoubleStream::of(a0));
              return t_DoubleStream::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_DoubleStream_parallel(t_DoubleStream *self)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = self->object.parallel());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_peek(t_DoubleStream *self, PyObject *arg)
      {
        ::java::util::function::DoubleConsumer a0((jobject) NULL);
        DoubleStream result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::function::DoubleConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.peek(a0));
          return t_DoubleStream::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "peek", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_sequential(t_DoubleStream *self)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = self->object.sequential());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_skip(t_DoubleStream *self, PyObject *arg)
      {
        jlong a0;
        DoubleStream result((jobject) NULL);

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.skip(a0));
          return t_DoubleStream::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "skip", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_sorted(t_DoubleStream *self)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = self->object.sorted());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_spliterator(t_DoubleStream *self)
      {
        ::java::util::Spliterator$OfDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator$OfDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_sum(t_DoubleStream *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.sum());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DoubleStream_summaryStatistics(t_DoubleStream *self)
      {
        ::java::util::DoubleSummaryStatistics result((jobject) NULL);
        OBJ_CALL(result = self->object.summaryStatistics());
        return ::java::util::t_DoubleSummaryStatistics::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_toArray(t_DoubleStream *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/KvnLexicalAnalyzer.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *KvnLexicalAnalyzer::class$ = NULL;
            jmethodID *KvnLexicalAnalyzer::mids$ = NULL;
            bool KvnLexicalAnalyzer::live$ = false;

            jclass KvnLexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/KvnLexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_4345325324782fee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
                mids$[mid_accept_315581e8824888b8] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            KvnLexicalAnalyzer::KvnLexicalAnalyzer(const ::org::orekit::data::DataSource & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4345325324782fee, a0.this$)) {}

            ::java::lang::Object KvnLexicalAnalyzer::accept(const ::org::orekit::files::ccsds::utils::lexical::MessageParser & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_accept_315581e8824888b8], a0.this$));
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
            static PyObject *t_KvnLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KvnLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_KvnLexicalAnalyzer_init_(t_KvnLexicalAnalyzer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_KvnLexicalAnalyzer_accept(t_KvnLexicalAnalyzer *self, PyObject *arg);

            static PyMethodDef t_KvnLexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_KvnLexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnLexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnLexicalAnalyzer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KvnLexicalAnalyzer)[] = {
              { Py_tp_methods, t_KvnLexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) t_KvnLexicalAnalyzer_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KvnLexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(KvnLexicalAnalyzer, t_KvnLexicalAnalyzer, KvnLexicalAnalyzer);

            void t_KvnLexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(KvnLexicalAnalyzer), &PY_TYPE_DEF(KvnLexicalAnalyzer), module, "KvnLexicalAnalyzer", 0);
            }

            void t_KvnLexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnLexicalAnalyzer), "class_", make_descriptor(KvnLexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnLexicalAnalyzer), "wrapfn_", make_descriptor(t_KvnLexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnLexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_KvnLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KvnLexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_KvnLexicalAnalyzer::wrap_Object(KvnLexicalAnalyzer(((t_KvnLexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_KvnLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KvnLexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_KvnLexicalAnalyzer_init_(t_KvnLexicalAnalyzer *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              KvnLexicalAnalyzer object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                INT_CALL(object = KvnLexicalAnalyzer(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_KvnLexicalAnalyzer_accept(t_KvnLexicalAnalyzer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::MessageParser a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::utils::lexical::MessageParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::lexical::t_MessageParser::parameters_))
              {
                OBJ_CALL(result = self->object.accept(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {

          ::java::lang::Class *ParsedMessage::class$ = NULL;
          jmethodID *ParsedMessage::mids$ = NULL;
          bool ParsedMessage::live$ = false;

          jclass ParsedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ParsedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getTypeCode_55546ef6a647f39b] = env->getMethodID(cls, "getTypeCode", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint ParsedMessage::getTypeCode() const
          {
            return env->callIntMethod(this$, mids$[mid_getTypeCode_55546ef6a647f39b]);
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
          static PyObject *t_ParsedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParsedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParsedMessage_getTypeCode(t_ParsedMessage *self);
          static PyObject *t_ParsedMessage_get__typeCode(t_ParsedMessage *self, void *data);
          static PyGetSetDef t_ParsedMessage__fields_[] = {
            DECLARE_GET_FIELD(t_ParsedMessage, typeCode),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ParsedMessage__methods_[] = {
            DECLARE_METHOD(t_ParsedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParsedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParsedMessage, getTypeCode, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ParsedMessage)[] = {
            { Py_tp_methods, t_ParsedMessage__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ParsedMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ParsedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ParsedMessage, t_ParsedMessage, ParsedMessage);

          void t_ParsedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(ParsedMessage), &PY_TYPE_DEF(ParsedMessage), module, "ParsedMessage", 0);
          }

          void t_ParsedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedMessage), "class_", make_descriptor(ParsedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedMessage), "wrapfn_", make_descriptor(t_ParsedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ParsedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ParsedMessage::initializeClass, 1)))
              return NULL;
            return t_ParsedMessage::wrap_Object(ParsedMessage(((t_ParsedMessage *) arg)->object.this$));
          }
          static PyObject *t_ParsedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ParsedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ParsedMessage_getTypeCode(t_ParsedMessage *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTypeCode());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ParsedMessage_get__typeCode(t_ParsedMessage *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTypeCode());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/MetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/section/MetadataKey.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Metadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *MetadataKey::class$ = NULL;
          jmethodID *MetadataKey::mids$ = NULL;
          bool MetadataKey::live$ = false;
          MetadataKey *MetadataKey::COMMENT = NULL;
          MetadataKey *MetadataKey::TIME_SYSTEM = NULL;

          jclass MetadataKey::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/MetadataKey");

              mids$ = new jmethodID[max_mid];
              mids$[mid_process_6e1cbf265f95fa8c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/section/Metadata;)Z");
              mids$[mid_valueOf_d9c9d3d33db5e28f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/MetadataKey;");
              mids$[mid_values_bb1f82657412de2c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/MetadataKey;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              COMMENT = new MetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/section/MetadataKey;"));
              TIME_SYSTEM = new MetadataKey(env->getStaticObjectField(cls, "TIME_SYSTEM", "Lorg/orekit/files/ccsds/section/MetadataKey;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean MetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::section::Metadata & a2) const
          {
            return env->callBooleanMethod(this$, mids$[mid_process_6e1cbf265f95fa8c], a0.this$, a1.this$, a2.this$);
          }

          MetadataKey MetadataKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return MetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d9c9d3d33db5e28f], a0.this$));
          }

          JArray< MetadataKey > MetadataKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< MetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_bb1f82657412de2c]));
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
          static PyObject *t_MetadataKey_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MetadataKey_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MetadataKey_of_(t_MetadataKey *self, PyObject *args);
          static PyObject *t_MetadataKey_process(t_MetadataKey *self, PyObject *args);
          static PyObject *t_MetadataKey_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_MetadataKey_values(PyTypeObject *type);
          static PyObject *t_MetadataKey_get__parameters_(t_MetadataKey *self, void *data);
          static PyGetSetDef t_MetadataKey__fields_[] = {
            DECLARE_GET_FIELD(t_MetadataKey, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MetadataKey__methods_[] = {
            DECLARE_METHOD(t_MetadataKey, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MetadataKey, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MetadataKey, of_, METH_VARARGS),
            DECLARE_METHOD(t_MetadataKey, process, METH_VARARGS),
            DECLARE_METHOD(t_MetadataKey, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_MetadataKey, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MetadataKey)[] = {
            { Py_tp_methods, t_MetadataKey__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MetadataKey__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MetadataKey)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(MetadataKey, t_MetadataKey, MetadataKey);
          PyObject *t_MetadataKey::wrap_Object(const MetadataKey& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MetadataKey::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MetadataKey *self = (t_MetadataKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MetadataKey::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MetadataKey *self = (t_MetadataKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MetadataKey::install(PyObject *module)
          {
            installType(&PY_TYPE(MetadataKey), &PY_TYPE_DEF(MetadataKey), module, "MetadataKey", 0);
          }

          void t_MetadataKey::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "class_", make_descriptor(MetadataKey::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "wrapfn_", make_descriptor(t_MetadataKey::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "boxfn_", make_descriptor(boxObject));
            env->getClass(MetadataKey::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "COMMENT", make_descriptor(t_MetadataKey::wrap_Object(*MetadataKey::COMMENT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MetadataKey), "TIME_SYSTEM", make_descriptor(t_MetadataKey::wrap_Object(*MetadataKey::TIME_SYSTEM)));
          }

          static PyObject *t_MetadataKey_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MetadataKey::initializeClass, 1)))
              return NULL;
            return t_MetadataKey::wrap_Object(MetadataKey(((t_MetadataKey *) arg)->object.this$));
          }
          static PyObject *t_MetadataKey_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MetadataKey::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MetadataKey_of_(t_MetadataKey *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_MetadataKey_process(t_MetadataKey *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
            ::org::orekit::files::ccsds::section::Metadata a2((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::section::Metadata::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.process(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "process", args);
            return NULL;
          }

          static PyObject *t_MetadataKey_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            MetadataKey result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::section::MetadataKey::valueOf(a0));
              return t_MetadataKey::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_MetadataKey_values(PyTypeObject *type)
          {
            JArray< MetadataKey > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::section::MetadataKey::values());
            return JArray<jobject>(result.this$).wrap(t_MetadataKey::wrap_jobject);
          }
          static PyObject *t_MetadataKey_get__parameters_(t_MetadataKey *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/AbstractRelativisticJ2ClockModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractRelativisticJ2ClockModifier::class$ = NULL;
          jmethodID *AbstractRelativisticJ2ClockModifier::mids$ = NULL;
          bool AbstractRelativisticJ2ClockModifier::live$ = false;

          jclass AbstractRelativisticJ2ClockModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractRelativisticJ2ClockModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_relativisticJ2Correction_2fa6405c70ee6844] = env->getMethodID(cls, "relativisticJ2Correction", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractRelativisticJ2ClockModifier::AbstractRelativisticJ2ClockModifier(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}
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
          static PyObject *t_AbstractRelativisticJ2ClockModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractRelativisticJ2ClockModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractRelativisticJ2ClockModifier_init_(t_AbstractRelativisticJ2ClockModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractRelativisticJ2ClockModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractRelativisticJ2ClockModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRelativisticJ2ClockModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractRelativisticJ2ClockModifier)[] = {
            { Py_tp_methods, t_AbstractRelativisticJ2ClockModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractRelativisticJ2ClockModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractRelativisticJ2ClockModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractRelativisticJ2ClockModifier, t_AbstractRelativisticJ2ClockModifier, AbstractRelativisticJ2ClockModifier);

          void t_AbstractRelativisticJ2ClockModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractRelativisticJ2ClockModifier), &PY_TYPE_DEF(AbstractRelativisticJ2ClockModifier), module, "AbstractRelativisticJ2ClockModifier", 0);
          }

          void t_AbstractRelativisticJ2ClockModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticJ2ClockModifier), "class_", make_descriptor(AbstractRelativisticJ2ClockModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticJ2ClockModifier), "wrapfn_", make_descriptor(t_AbstractRelativisticJ2ClockModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticJ2ClockModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractRelativisticJ2ClockModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractRelativisticJ2ClockModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractRelativisticJ2ClockModifier::wrap_Object(AbstractRelativisticJ2ClockModifier(((t_AbstractRelativisticJ2ClockModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractRelativisticJ2ClockModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractRelativisticJ2ClockModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractRelativisticJ2ClockModifier_init_(t_AbstractRelativisticJ2ClockModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            AbstractRelativisticJ2ClockModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = AbstractRelativisticJ2ClockModifier(a0, a1, a2));
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockOneWayGNSSPhaseModifier::mids$ = NULL;
          bool RelativisticJ2ClockOneWayGNSSPhaseModifier::live$ = false;

          jclass RelativisticJ2ClockOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockOneWayGNSSPhaseModifier::RelativisticJ2ClockOneWayGNSSPhaseModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void RelativisticJ2ClockOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockOneWayGNSSPhaseModifier_init_(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier, t_RelativisticJ2ClockOneWayGNSSPhaseModifier, RelativisticJ2ClockOneWayGNSSPhaseModifier);

          void t_RelativisticJ2ClockOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier), &PY_TYPE_DEF(RelativisticJ2ClockOneWayGNSSPhaseModifier), module, "RelativisticJ2ClockOneWayGNSSPhaseModifier", 0);
          }

          void t_RelativisticJ2ClockOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier), "class_", make_descriptor(RelativisticJ2ClockOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockOneWayGNSSPhaseModifier::wrap_Object(RelativisticJ2ClockOneWayGNSSPhaseModifier(((t_RelativisticJ2ClockOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockOneWayGNSSPhaseModifier_init_(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockOneWayGNSSPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockOneWayGNSSPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockOneWayGNSSPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockOneWayGNSSPhaseModifier *self, void *data)
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
#include "org/orekit/orbits/CR3BPDifferentialCorrection.h"
#include "org/orekit/orbits/LibrationOrbitType.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *CR3BPDifferentialCorrection::class$ = NULL;
      jmethodID *CR3BPDifferentialCorrection::mids$ = NULL;
      bool CR3BPDifferentialCorrection::live$ = false;

      jclass CR3BPDifferentialCorrection::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/CR3BPDifferentialCorrection");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ca22d3696294da25] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/bodies/CR3BPSystem;D)V");
          mids$[mid_compute_36376aefc9347e81] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/LibrationOrbitType;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_computeLyapunov_180fb117720acb76] = env->getMethodID(cls, "computeLyapunov", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getOrbitalPeriod_b74f83833fdad017] = env->getMethodID(cls, "getOrbitalPeriod", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CR3BPDifferentialCorrection::CR3BPDifferentialCorrection(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::bodies::CR3BPSystem & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ca22d3696294da25, a0.this$, a1.this$, a2)) {}

      ::org::orekit::utils::PVCoordinates CR3BPDifferentialCorrection::compute(const ::org::orekit::orbits::LibrationOrbitType & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_compute_36376aefc9347e81], a0.this$));
      }

      ::org::orekit::utils::PVCoordinates CR3BPDifferentialCorrection::computeLyapunov() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeLyapunov_180fb117720acb76]));
      }

      jdouble CR3BPDifferentialCorrection::getOrbitalPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOrbitalPeriod_b74f83833fdad017]);
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
      static PyObject *t_CR3BPDifferentialCorrection_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPDifferentialCorrection_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CR3BPDifferentialCorrection_init_(t_CR3BPDifferentialCorrection *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CR3BPDifferentialCorrection_compute(t_CR3BPDifferentialCorrection *self, PyObject *arg);
      static PyObject *t_CR3BPDifferentialCorrection_computeLyapunov(t_CR3BPDifferentialCorrection *self);
      static PyObject *t_CR3BPDifferentialCorrection_getOrbitalPeriod(t_CR3BPDifferentialCorrection *self);
      static PyObject *t_CR3BPDifferentialCorrection_get__orbitalPeriod(t_CR3BPDifferentialCorrection *self, void *data);
      static PyGetSetDef t_CR3BPDifferentialCorrection__fields_[] = {
        DECLARE_GET_FIELD(t_CR3BPDifferentialCorrection, orbitalPeriod),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CR3BPDifferentialCorrection__methods_[] = {
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, compute, METH_O),
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, computeLyapunov, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, getOrbitalPeriod, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPDifferentialCorrection)[] = {
        { Py_tp_methods, t_CR3BPDifferentialCorrection__methods_ },
        { Py_tp_init, (void *) t_CR3BPDifferentialCorrection_init_ },
        { Py_tp_getset, t_CR3BPDifferentialCorrection__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPDifferentialCorrection)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CR3BPDifferentialCorrection, t_CR3BPDifferentialCorrection, CR3BPDifferentialCorrection);

      void t_CR3BPDifferentialCorrection::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPDifferentialCorrection), &PY_TYPE_DEF(CR3BPDifferentialCorrection), module, "CR3BPDifferentialCorrection", 0);
      }

      void t_CR3BPDifferentialCorrection::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPDifferentialCorrection), "class_", make_descriptor(CR3BPDifferentialCorrection::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPDifferentialCorrection), "wrapfn_", make_descriptor(t_CR3BPDifferentialCorrection::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPDifferentialCorrection), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPDifferentialCorrection_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPDifferentialCorrection::initializeClass, 1)))
          return NULL;
        return t_CR3BPDifferentialCorrection::wrap_Object(CR3BPDifferentialCorrection(((t_CR3BPDifferentialCorrection *) arg)->object.this$));
      }
      static PyObject *t_CR3BPDifferentialCorrection_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPDifferentialCorrection::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CR3BPDifferentialCorrection_init_(t_CR3BPDifferentialCorrection *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
        ::org::orekit::bodies::CR3BPSystem a1((jobject) NULL);
        jdouble a2;
        CR3BPDifferentialCorrection object((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::bodies::CR3BPSystem::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = CR3BPDifferentialCorrection(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CR3BPDifferentialCorrection_compute(t_CR3BPDifferentialCorrection *self, PyObject *arg)
      {
        ::org::orekit::orbits::LibrationOrbitType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::LibrationOrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_LibrationOrbitType::parameters_))
        {
          OBJ_CALL(result = self->object.compute(a0));
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "compute", arg);
        return NULL;
      }

      static PyObject *t_CR3BPDifferentialCorrection_computeLyapunov(t_CR3BPDifferentialCorrection *self)
      {
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.computeLyapunov());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_CR3BPDifferentialCorrection_getOrbitalPeriod(t_CR3BPDifferentialCorrection *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOrbitalPeriod());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPDifferentialCorrection_get__orbitalPeriod(t_CR3BPDifferentialCorrection *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOrbitalPeriod());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmMetadataKey::class$ = NULL;
            jmethodID *AdmMetadataKey::mids$ = NULL;
            bool AdmMetadataKey::live$ = false;
            AdmMetadataKey *AdmMetadataKey::CENTER_NAME = NULL;
            AdmMetadataKey *AdmMetadataKey::OBJECT_NAME = NULL;

            jclass AdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_4c13edf1d74f1440] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;)Z");
                mids$[mid_valueOf_b4b69c47f5e21fec] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;");
                mids$[mid_values_8841ccfed51a69b7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CENTER_NAME = new AdmMetadataKey(env->getStaticObjectField(cls, "CENTER_NAME", "Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;"));
                OBJECT_NAME = new AdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_NAME", "Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::AdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_4c13edf1d74f1440], a0.this$, a1.this$, a2.this$);
            }

            AdmMetadataKey AdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b4b69c47f5e21fec], a0.this$));
            }

            JArray< AdmMetadataKey > AdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_8841ccfed51a69b7]));
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
            static PyObject *t_AdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmMetadataKey_of_(t_AdmMetadataKey *self, PyObject *args);
            static PyObject *t_AdmMetadataKey_process(t_AdmMetadataKey *self, PyObject *args);
            static PyObject *t_AdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_AdmMetadataKey_get__parameters_(t_AdmMetadataKey *self, void *data);
            static PyGetSetDef t_AdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_AdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmMetadataKey)[] = {
              { Py_tp_methods, t_AdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdmMetadataKey, t_AdmMetadataKey, AdmMetadataKey);
            PyObject *t_AdmMetadataKey::wrap_Object(const AdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmMetadataKey *self = (t_AdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmMetadataKey *self = (t_AdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmMetadataKey), &PY_TYPE_DEF(AdmMetadataKey), module, "AdmMetadataKey", 0);
            }

            void t_AdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "class_", make_descriptor(AdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "wrapfn_", make_descriptor(t_AdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "CENTER_NAME", make_descriptor(t_AdmMetadataKey::wrap_Object(*AdmMetadataKey::CENTER_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "OBJECT_NAME", make_descriptor(t_AdmMetadataKey::wrap_Object(*AdmMetadataKey::OBJECT_NAME)));
            }

            static PyObject *t_AdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_AdmMetadataKey::wrap_Object(AdmMetadataKey(((t_AdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_AdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdmMetadataKey_of_(t_AdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdmMetadataKey_process(t_AdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AdmMetadataKey::valueOf(a0));
                return t_AdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< AdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_AdmMetadataKey_get__parameters_(t_AdmMetadataKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
