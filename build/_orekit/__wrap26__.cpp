#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldUnivariateFunction::class$ = NULL;
      jmethodID *CalculusFieldUnivariateFunction::mids$ = NULL;
      bool CalculusFieldUnivariateFunction::live$ = false;

      jclass CalculusFieldUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_a3b854adede8eaaa] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement CalculusFieldUnivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_a3b854adede8eaaa], a0.this$));
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
      static PyObject *t_CalculusFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateFunction_of_(t_CalculusFieldUnivariateFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldUnivariateFunction_value(t_CalculusFieldUnivariateFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateFunction_get__parameters_(t_CalculusFieldUnivariateFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldUnivariateFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldUnivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldUnivariateFunction)[] = {
        { Py_tp_methods, t_CalculusFieldUnivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldUnivariateFunction, t_CalculusFieldUnivariateFunction, CalculusFieldUnivariateFunction);
      PyObject *t_CalculusFieldUnivariateFunction::wrap_Object(const CalculusFieldUnivariateFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateFunction *self = (t_CalculusFieldUnivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldUnivariateFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateFunction *self = (t_CalculusFieldUnivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldUnivariateFunction), &PY_TYPE_DEF(CalculusFieldUnivariateFunction), module, "CalculusFieldUnivariateFunction", 0);
      }

      void t_CalculusFieldUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateFunction), "class_", make_descriptor(CalculusFieldUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateFunction), "wrapfn_", make_descriptor(t_CalculusFieldUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldUnivariateFunction::wrap_Object(CalculusFieldUnivariateFunction(((t_CalculusFieldUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldUnivariateFunction_of_(t_CalculusFieldUnivariateFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldUnivariateFunction_value(t_CalculusFieldUnivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldUnivariateFunction_get__parameters_(t_CalculusFieldUnivariateFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventState$EventOccurrence.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventState$EventOccurrence::class$ = NULL;
        jmethodID *FieldEventState$EventOccurrence::mids$ = NULL;
        bool FieldEventState$EventOccurrence::live$ = false;

        jclass FieldEventState$EventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventState$EventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAction_e01ac4830bcfb38f] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_a74be2e38786f3b6] = env->getMethodID(cls, "getNewState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getStopDate_1fea28374011eef5] = env->getMethodID(cls, "getStopDate", "()Lorg/orekit/time/FieldAbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action FieldEventState$EventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_e01ac4830bcfb38f]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldEventState$EventOccurrence::getNewState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getNewState_a74be2e38786f3b6]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldEventState$EventOccurrence::getStopDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopDate_1fea28374011eef5]));
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
        static PyObject *t_FieldEventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState$EventOccurrence_of_(t_FieldEventState$EventOccurrence *self, PyObject *args);
        static PyObject *t_FieldEventState$EventOccurrence_getAction(t_FieldEventState$EventOccurrence *self);
        static PyObject *t_FieldEventState$EventOccurrence_getNewState(t_FieldEventState$EventOccurrence *self);
        static PyObject *t_FieldEventState$EventOccurrence_getStopDate(t_FieldEventState$EventOccurrence *self);
        static PyObject *t_FieldEventState$EventOccurrence_get__action(t_FieldEventState$EventOccurrence *self, void *data);
        static PyObject *t_FieldEventState$EventOccurrence_get__newState(t_FieldEventState$EventOccurrence *self, void *data);
        static PyObject *t_FieldEventState$EventOccurrence_get__stopDate(t_FieldEventState$EventOccurrence *self, void *data);
        static PyObject *t_FieldEventState$EventOccurrence_get__parameters_(t_FieldEventState$EventOccurrence *self, void *data);
        static PyGetSetDef t_FieldEventState$EventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, action),
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, newState),
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, stopDate),
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventState$EventOccurrence__methods_[] = {
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, getStopDate, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventState$EventOccurrence)[] = {
          { Py_tp_methods, t_FieldEventState$EventOccurrence__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventState$EventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventState$EventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventState$EventOccurrence, t_FieldEventState$EventOccurrence, FieldEventState$EventOccurrence);
        PyObject *t_FieldEventState$EventOccurrence::wrap_Object(const FieldEventState$EventOccurrence& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState$EventOccurrence::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState$EventOccurrence *self = (t_FieldEventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventState$EventOccurrence::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState$EventOccurrence::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState$EventOccurrence *self = (t_FieldEventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventState$EventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventState$EventOccurrence), &PY_TYPE_DEF(FieldEventState$EventOccurrence), module, "FieldEventState$EventOccurrence", 0);
        }

        void t_FieldEventState$EventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState$EventOccurrence), "class_", make_descriptor(FieldEventState$EventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState$EventOccurrence), "wrapfn_", make_descriptor(t_FieldEventState$EventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState$EventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventState$EventOccurrence::initializeClass, 1)))
            return NULL;
          return t_FieldEventState$EventOccurrence::wrap_Object(FieldEventState$EventOccurrence(((t_FieldEventState$EventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_FieldEventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventState$EventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventState$EventOccurrence_of_(t_FieldEventState$EventOccurrence *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventState$EventOccurrence_getAction(t_FieldEventState$EventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_FieldEventState$EventOccurrence_getNewState(t_FieldEventState$EventOccurrence *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventState$EventOccurrence_getStopDate(t_FieldEventState$EventOccurrence *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldEventState$EventOccurrence_get__parameters_(t_FieldEventState$EventOccurrence *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventState$EventOccurrence_get__action(t_FieldEventState$EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_FieldEventState$EventOccurrence_get__newState(t_FieldEventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }

        static PyObject *t_FieldEventState$EventOccurrence_get__stopDate(t_FieldEventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeScalesFactory.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/TTScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/GMSTScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeScalesFactory::class$ = NULL;
      jmethodID *TimeScalesFactory::mids$ = NULL;
      bool TimeScalesFactory::live$ = false;

      jclass TimeScalesFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeScalesFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addDefaultUTCTAIOffsetsLoaders_ff7cb6c242604316] = env->getStaticMethodID(cls, "addDefaultUTCTAIOffsetsLoaders", "()V");
          mids$[mid_addUTCTAIOffsetsLoader_87c1680ac97bbb89] = env->getStaticMethodID(cls, "addUTCTAIOffsetsLoader", "(Lorg/orekit/time/UTCTAIOffsetsLoader;)V");
          mids$[mid_clearUTCTAIOffsetsLoaders_ff7cb6c242604316] = env->getStaticMethodID(cls, "clearUTCTAIOffsetsLoaders", "()V");
          mids$[mid_getBDT_9d93fd70217d9218] = env->getStaticMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getGLONASS_98a4c7e041a431de] = env->getStaticMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_3a2e75d759160885] = env->getStaticMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_bfc706ac1880dab6] = env->getStaticMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_03bea9e4eca66482] = env->getStaticMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getIRNSS_4011a9310ce86043] = env->getStaticMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getQZSS_af6710830d0f02e7] = env->getStaticMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getTAI_617450d859ecaf8d] = env->getStaticMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_0a0f63c3aa49765d] = env->getStaticMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_d96035eea3611111] = env->getStaticMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_cfeb575714faef31] = env->getStaticMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_3b674fc7b42c8f62] = env->getStaticMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getTimeScales_0dcddb8d5df4bba7] = env->getStaticMethodID(cls, "getTimeScales", "()Lorg/orekit/time/LazyLoadedTimeScales;");
          mids$[mid_getUT1_0287466dc96c535a] = env->getStaticMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUT1_ff99e037ad2c3870] = env->getStaticMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_bdbc31f45ed399a7] = env->getStaticMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void TimeScalesFactory::addDefaultUTCTAIOffsetsLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultUTCTAIOffsetsLoaders_ff7cb6c242604316]);
      }

      void TimeScalesFactory::addUTCTAIOffsetsLoader(const ::org::orekit::time::UTCTAIOffsetsLoader & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addUTCTAIOffsetsLoader_87c1680ac97bbb89], a0.this$);
      }

      void TimeScalesFactory::clearUTCTAIOffsetsLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearUTCTAIOffsetsLoaders_ff7cb6c242604316]);
      }

      ::org::orekit::time::BDTScale TimeScalesFactory::getBDT()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::BDTScale(env->callStaticObjectMethod(cls, mids$[mid_getBDT_9d93fd70217d9218]));
      }

      ::org::orekit::time::GLONASSScale TimeScalesFactory::getGLONASS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GLONASSScale(env->callStaticObjectMethod(cls, mids$[mid_getGLONASS_98a4c7e041a431de]));
      }

      ::org::orekit::time::GMSTScale TimeScalesFactory::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GMSTScale(env->callStaticObjectMethod(cls, mids$[mid_getGMST_3a2e75d759160885], a0.this$, a1));
      }

      ::org::orekit::time::GPSScale TimeScalesFactory::getGPS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GPSScale(env->callStaticObjectMethod(cls, mids$[mid_getGPS_bfc706ac1880dab6]));
      }

      ::org::orekit::time::GalileoScale TimeScalesFactory::getGST()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GalileoScale(env->callStaticObjectMethod(cls, mids$[mid_getGST_03bea9e4eca66482]));
      }

      ::org::orekit::time::IRNSSScale TimeScalesFactory::getIRNSS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::IRNSSScale(env->callStaticObjectMethod(cls, mids$[mid_getIRNSS_4011a9310ce86043]));
      }

      ::org::orekit::time::QZSSScale TimeScalesFactory::getQZSS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::QZSSScale(env->callStaticObjectMethod(cls, mids$[mid_getQZSS_af6710830d0f02e7]));
      }

      ::org::orekit::time::TAIScale TimeScalesFactory::getTAI()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TAIScale(env->callStaticObjectMethod(cls, mids$[mid_getTAI_617450d859ecaf8d]));
      }

      ::org::orekit::time::TCBScale TimeScalesFactory::getTCB()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TCBScale(env->callStaticObjectMethod(cls, mids$[mid_getTCB_0a0f63c3aa49765d]));
      }

      ::org::orekit::time::TCGScale TimeScalesFactory::getTCG()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TCGScale(env->callStaticObjectMethod(cls, mids$[mid_getTCG_d96035eea3611111]));
      }

      ::org::orekit::time::TDBScale TimeScalesFactory::getTDB()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TDBScale(env->callStaticObjectMethod(cls, mids$[mid_getTDB_cfeb575714faef31]));
      }

      ::org::orekit::time::TTScale TimeScalesFactory::getTT()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TTScale(env->callStaticObjectMethod(cls, mids$[mid_getTT_3b674fc7b42c8f62]));
      }

      ::org::orekit::time::LazyLoadedTimeScales TimeScalesFactory::getTimeScales()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::LazyLoadedTimeScales(env->callStaticObjectMethod(cls, mids$[mid_getTimeScales_0dcddb8d5df4bba7]));
      }

      ::org::orekit::time::UT1Scale TimeScalesFactory::getUT1(const ::org::orekit::frames::EOPHistory & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::UT1Scale(env->callStaticObjectMethod(cls, mids$[mid_getUT1_0287466dc96c535a], a0.this$));
      }

      ::org::orekit::time::UT1Scale TimeScalesFactory::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::UT1Scale(env->callStaticObjectMethod(cls, mids$[mid_getUT1_ff99e037ad2c3870], a0.this$, a1));
      }

      ::org::orekit::time::UTCScale TimeScalesFactory::getUTC()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::UTCScale(env->callStaticObjectMethod(cls, mids$[mid_getUTC_bdbc31f45ed399a7]));
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
      static PyObject *t_TimeScalesFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalesFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalesFactory_addDefaultUTCTAIOffsetsLoaders(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_addUTCTAIOffsetsLoader(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalesFactory_clearUTCTAIOffsetsLoaders(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getBDT(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getGLONASS(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getGMST(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeScalesFactory_getGPS(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getGST(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getIRNSS(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getQZSS(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTAI(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTCB(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTCG(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTDB(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTT(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTimeScales(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getUT1(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeScalesFactory_getUTC(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_get__bDT(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__gLONASS(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__gPS(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__gST(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__iRNSS(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__qZSS(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tAI(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tCB(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tCG(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tDB(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tT(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__timeScales(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__uTC(t_TimeScalesFactory *self, void *data);
      static PyGetSetDef t_TimeScalesFactory__fields_[] = {
        DECLARE_GET_FIELD(t_TimeScalesFactory, bDT),
        DECLARE_GET_FIELD(t_TimeScalesFactory, gLONASS),
        DECLARE_GET_FIELD(t_TimeScalesFactory, gPS),
        DECLARE_GET_FIELD(t_TimeScalesFactory, gST),
        DECLARE_GET_FIELD(t_TimeScalesFactory, iRNSS),
        DECLARE_GET_FIELD(t_TimeScalesFactory, qZSS),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tAI),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tCB),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tCG),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tDB),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tT),
        DECLARE_GET_FIELD(t_TimeScalesFactory, timeScales),
        DECLARE_GET_FIELD(t_TimeScalesFactory, uTC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeScalesFactory__methods_[] = {
        DECLARE_METHOD(t_TimeScalesFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, addDefaultUTCTAIOffsetsLoaders, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, addUTCTAIOffsetsLoader, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, clearUTCTAIOffsetsLoaders, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getBDT, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getGLONASS, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getGMST, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getGPS, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getGST, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getIRNSS, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getQZSS, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTAI, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTCB, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTCG, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTDB, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTT, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTimeScales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getUT1, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getUTC, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeScalesFactory)[] = {
        { Py_tp_methods, t_TimeScalesFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeScalesFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeScalesFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeScalesFactory, t_TimeScalesFactory, TimeScalesFactory);

      void t_TimeScalesFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeScalesFactory), &PY_TYPE_DEF(TimeScalesFactory), module, "TimeScalesFactory", 0);
      }

      void t_TimeScalesFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalesFactory), "class_", make_descriptor(TimeScalesFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalesFactory), "wrapfn_", make_descriptor(t_TimeScalesFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalesFactory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeScalesFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeScalesFactory::initializeClass, 1)))
          return NULL;
        return t_TimeScalesFactory::wrap_Object(TimeScalesFactory(((t_TimeScalesFactory *) arg)->object.this$));
      }
      static PyObject *t_TimeScalesFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeScalesFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeScalesFactory_addDefaultUTCTAIOffsetsLoaders(PyTypeObject *type)
      {
        OBJ_CALL(::org::orekit::time::TimeScalesFactory::addDefaultUTCTAIOffsetsLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_TimeScalesFactory_addUTCTAIOffsetsLoader(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::time::UTCTAIOffsetsLoader a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::UTCTAIOffsetsLoader::initializeClass, &a0))
        {
          OBJ_CALL(::org::orekit::time::TimeScalesFactory::addUTCTAIOffsetsLoader(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addUTCTAIOffsetsLoader", arg);
        return NULL;
      }

      static PyObject *t_TimeScalesFactory_clearUTCTAIOffsetsLoaders(PyTypeObject *type)
      {
        OBJ_CALL(::org::orekit::time::TimeScalesFactory::clearUTCTAIOffsetsLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_TimeScalesFactory_getBDT(PyTypeObject *type)
      {
        ::org::orekit::time::BDTScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getGLONASS(PyTypeObject *type)
      {
        ::org::orekit::time::GLONASSScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getGMST(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::GMSTScale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getGMST(a0, a1));
          return ::org::orekit::time::t_GMSTScale::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getGMST", args);
        return NULL;
      }

      static PyObject *t_TimeScalesFactory_getGPS(PyTypeObject *type)
      {
        ::org::orekit::time::GPSScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getGST(PyTypeObject *type)
      {
        ::org::orekit::time::GalileoScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getIRNSS(PyTypeObject *type)
      {
        ::org::orekit::time::IRNSSScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getQZSS(PyTypeObject *type)
      {
        ::org::orekit::time::QZSSScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTAI(PyTypeObject *type)
      {
        ::org::orekit::time::TAIScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTCB(PyTypeObject *type)
      {
        ::org::orekit::time::TCBScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTCG(PyTypeObject *type)
      {
        ::org::orekit::time::TCGScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTDB(PyTypeObject *type)
      {
        ::org::orekit::time::TDBScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTT(PyTypeObject *type)
      {
        ::org::orekit::time::TTScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTimeScales(PyTypeObject *type)
      {
        ::org::orekit::time::LazyLoadedTimeScales result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getUT1(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::EOPHistory a0((jobject) NULL);
            ::org::orekit::time::UT1Scale result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getUT1(a0));
              return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::time::UT1Scale result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getUT1(a0, a1));
              return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getUT1", args);
        return NULL;
      }

      static PyObject *t_TimeScalesFactory_getUTC(PyTypeObject *type)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_get__bDT(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::BDTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__gLONASS(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__gPS(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::GPSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__gST(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__iRNSS(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__qZSS(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tAI(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TAIScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tCB(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TCBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tCG(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TCGScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tDB(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TDBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tT(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__timeScales(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::LazyLoadedTimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__uTC(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::UTCScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(value);
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
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getBeamDivergence_9981f74b2d109da6] = env->getMethodID(cls, "getBeamDivergence", "()D");
            mids$[mid_getLaserId_d2c8eb4129821f0e] = env->getMethodID(cls, "getLaserId", "()Ljava/lang/String;");
            mids$[mid_getLaserType_d2c8eb4129821f0e] = env->getMethodID(cls, "getLaserType", "()Ljava/lang/String;");
            mids$[mid_getNominalFireRate_9981f74b2d109da6] = env->getMethodID(cls, "getNominalFireRate", "()D");
            mids$[mid_getPrimaryWavelength_9981f74b2d109da6] = env->getMethodID(cls, "getPrimaryWavelength", "()D");
            mids$[mid_getPulseEnergy_9981f74b2d109da6] = env->getMethodID(cls, "getPulseEnergy", "()D");
            mids$[mid_getPulseInOutgoingSemiTrain_d6ab429752e7c267] = env->getMethodID(cls, "getPulseInOutgoingSemiTrain", "()I");
            mids$[mid_getPulseWidth_9981f74b2d109da6] = env->getMethodID(cls, "getPulseWidth", "()D");
            mids$[mid_setBeamDivergence_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setBeamDivergence", "(D)V");
            mids$[mid_setLaserId_105e1eadb709d9ac] = env->getMethodID(cls, "setLaserId", "(Ljava/lang/String;)V");
            mids$[mid_setLaserType_105e1eadb709d9ac] = env->getMethodID(cls, "setLaserType", "(Ljava/lang/String;)V");
            mids$[mid_setNominalFireRate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setNominalFireRate", "(D)V");
            mids$[mid_setPrimaryWavelength_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setPrimaryWavelength", "(D)V");
            mids$[mid_setPulseEnergy_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setPulseEnergy", "(D)V");
            mids$[mid_setPulseInOutgoingSemiTrain_8fd427ab23829bf5] = env->getMethodID(cls, "setPulseInOutgoingSemiTrain", "(I)V");
            mids$[mid_setPulseWidth_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setPulseWidth", "(D)V");
            mids$[mid_toCrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$LaserConfiguration::CRDConfiguration$LaserConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble CRDConfiguration$LaserConfiguration::getBeamDivergence() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBeamDivergence_9981f74b2d109da6]);
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::getLaserId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaserId_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::getLaserType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaserType_d2c8eb4129821f0e]));
        }

        jdouble CRDConfiguration$LaserConfiguration::getNominalFireRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNominalFireRate_9981f74b2d109da6]);
        }

        jdouble CRDConfiguration$LaserConfiguration::getPrimaryWavelength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPrimaryWavelength_9981f74b2d109da6]);
        }

        jdouble CRDConfiguration$LaserConfiguration::getPulseEnergy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPulseEnergy_9981f74b2d109da6]);
        }

        jint CRDConfiguration$LaserConfiguration::getPulseInOutgoingSemiTrain() const
        {
          return env->callIntMethod(this$, mids$[mid_getPulseInOutgoingSemiTrain_d6ab429752e7c267]);
        }

        jdouble CRDConfiguration$LaserConfiguration::getPulseWidth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPulseWidth_9981f74b2d109da6]);
        }

        void CRDConfiguration$LaserConfiguration::setBeamDivergence(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setBeamDivergence_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$LaserConfiguration::setLaserId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLaserId_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$LaserConfiguration::setLaserType(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLaserType_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$LaserConfiguration::setNominalFireRate(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNominalFireRate_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPrimaryWavelength(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPrimaryWavelength_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPulseEnergy(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseEnergy_1ad26e8c8c0cd65b], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPulseInOutgoingSemiTrain(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseInOutgoingSemiTrain_8fd427ab23829bf5], a0);
        }

        void CRDConfiguration$LaserConfiguration::setPulseWidth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseWidth_1ad26e8c8c0cd65b], a0);
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$LaserConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
#include "org/orekit/estimation/measurements/modifiers/RangeIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeIonosphericDelayModifier::class$ = NULL;
          jmethodID *RangeIonosphericDelayModifier::mids$ = NULL;
          bool RangeIonosphericDelayModifier::live$ = false;

          jclass RangeIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b73781b754e339ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeIonosphericDelayModifier::RangeIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_b73781b754e339ce, a0.this$, a1)) {}

          void RangeIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void RangeIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
          static PyObject *t_RangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeIonosphericDelayModifier_init_(t_RangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeIonosphericDelayModifier_modify(t_RangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeIonosphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_RangeIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeIonosphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeIonosphericDelayModifier, t_RangeIonosphericDelayModifier, RangeIonosphericDelayModifier);

          void t_RangeIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeIonosphericDelayModifier), &PY_TYPE_DEF(RangeIonosphericDelayModifier), module, "RangeIonosphericDelayModifier", 0);
          }

          void t_RangeIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeIonosphericDelayModifier), "class_", make_descriptor(RangeIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeIonosphericDelayModifier), "wrapfn_", make_descriptor(t_RangeIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeIonosphericDelayModifier::wrap_Object(RangeIonosphericDelayModifier(((t_RangeIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeIonosphericDelayModifier_init_(t_RangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            RangeIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RangeIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeIonosphericDelayModifier_modify(t_RangeIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_RangeIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeIonosphericDelayModifier *self, PyObject *arg)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedDouble.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
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
          mids$[mid_init$_281401e03841f11f] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getValue_9981f74b2d109da6] = env->getMethodID(cls, "getValue", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedDouble::TimeStampedDouble(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_281401e03841f11f, a0, a1.this$)) {}

      ::org::orekit::time::AbsoluteDate TimeStampedDouble::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      jdouble TimeStampedDouble::getValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_9981f74b2d109da6]);
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
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *MappingFunction::class$ = NULL;
          jmethodID *MappingFunction::mids$ = NULL;
          bool MappingFunction::live$ = false;

          jclass MappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/MappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_mappingFactors_090b631fda469acd] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_7d2717f150c68a9f] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< ::org::hipparchus::CalculusFieldElement > MappingFunction::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_090b631fda469acd], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > MappingFunction::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_7d2717f150c68a9f], a0, a1.this$, a2.this$));
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
          static PyObject *t_MappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MappingFunction_mappingFactors(t_MappingFunction *self, PyObject *args);

          static PyMethodDef t_MappingFunction__methods_[] = {
            DECLARE_METHOD(t_MappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MappingFunction, mappingFactors, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MappingFunction)[] = {
            { Py_tp_methods, t_MappingFunction__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MappingFunction, t_MappingFunction, MappingFunction);

          void t_MappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(MappingFunction), &PY_TYPE_DEF(MappingFunction), module, "MappingFunction", 0);
          }

          void t_MappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MappingFunction), "class_", make_descriptor(MappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MappingFunction), "wrapfn_", make_descriptor(t_MappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MappingFunction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MappingFunction::initializeClass, 1)))
              return NULL;
            return t_MappingFunction::wrap_Object(MappingFunction(((t_MappingFunction *) arg)->object.this$));
          }
          static PyObject *t_MappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MappingFunction_mappingFactors(t_MappingFunction *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarN.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarN::class$ = NULL;
          jmethodID *FieldCopolarN::mids$ = NULL;
          bool FieldCopolarN::live$ = false;

          jclass FieldCopolarN::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarN");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cn_08d37e3f77b7239d] = env->getMethodID(cls, "cn", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dn_08d37e3f77b7239d] = env->getMethodID(cls, "dn", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_sn_08d37e3f77b7239d] = env->getMethodID(cls, "sn", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarN::cn() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_cn_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarN::dn() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dn_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarN::sn() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_sn_08d37e3f77b7239d]));
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
          static PyObject *t_FieldCopolarN_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarN_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarN_of_(t_FieldCopolarN *self, PyObject *args);
          static PyObject *t_FieldCopolarN_cn(t_FieldCopolarN *self);
          static PyObject *t_FieldCopolarN_dn(t_FieldCopolarN *self);
          static PyObject *t_FieldCopolarN_sn(t_FieldCopolarN *self);
          static PyObject *t_FieldCopolarN_get__parameters_(t_FieldCopolarN *self, void *data);
          static PyGetSetDef t_FieldCopolarN__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarN, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarN__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarN, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarN, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarN, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarN, cn, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarN, dn, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarN, sn, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarN)[] = {
            { Py_tp_methods, t_FieldCopolarN__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarN__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarN)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarN, t_FieldCopolarN, FieldCopolarN);
          PyObject *t_FieldCopolarN::wrap_Object(const FieldCopolarN& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarN::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarN *self = (t_FieldCopolarN *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarN::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarN::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarN *self = (t_FieldCopolarN *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarN::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarN), &PY_TYPE_DEF(FieldCopolarN), module, "FieldCopolarN", 0);
          }

          void t_FieldCopolarN::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarN), "class_", make_descriptor(FieldCopolarN::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarN), "wrapfn_", make_descriptor(t_FieldCopolarN::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarN), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarN_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarN::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarN::wrap_Object(FieldCopolarN(((t_FieldCopolarN *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarN_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarN::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarN_of_(t_FieldCopolarN *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarN_cn(t_FieldCopolarN *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.cn());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarN_dn(t_FieldCopolarN *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.dn());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarN_sn(t_FieldCopolarN *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.sn());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarN_get__parameters_(t_FieldCopolarN *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovarianceHistoryMetadataKey::class$ = NULL;
              jmethodID *AttitudeCovarianceHistoryMetadataKey::mids$ = NULL;
              bool AttitudeCovarianceHistoryMetadataKey::live$ = false;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COMMENT = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_BASIS = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_BASIS_ID = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_ID = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_PREV_ID = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_REF_FRAME = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_TYPE = NULL;

              jclass AttitudeCovarianceHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_1f1fbacba6da77e2] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata;)Z");
                  mids$[mid_valueOf_9fc6548b11f261cc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;");
                  mids$[mid_values_b54a02921be8c5bd] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_BASIS = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_BASIS_ID = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_ID = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_PREV_ID = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_REF_FRAME = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_TYPE = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeCovarianceHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_1f1fbacba6da77e2], a0.this$, a1.this$, a2.this$);
              }

              AttitudeCovarianceHistoryMetadataKey AttitudeCovarianceHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeCovarianceHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9fc6548b11f261cc], a0.this$));
              }

              JArray< AttitudeCovarianceHistoryMetadataKey > AttitudeCovarianceHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeCovarianceHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_b54a02921be8c5bd]));
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
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_of_(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_process(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_get__parameters_(t_AttitudeCovarianceHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_AttitudeCovarianceHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovarianceHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceHistoryMetadataKey)[] = {
                { Py_tp_methods, t_AttitudeCovarianceHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeCovarianceHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceHistoryMetadataKey, t_AttitudeCovarianceHistoryMetadataKey, AttitudeCovarianceHistoryMetadataKey);
              PyObject *t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(const AttitudeCovarianceHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceHistoryMetadataKey *self = (t_AttitudeCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceHistoryMetadataKey *self = (t_AttitudeCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeCovarianceHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceHistoryMetadataKey), &PY_TYPE_DEF(AttitudeCovarianceHistoryMetadataKey), module, "AttitudeCovarianceHistoryMetadataKey", 0);
              }

              void t_AttitudeCovarianceHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "class_", make_descriptor(AttitudeCovarianceHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "wrapfn_", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeCovarianceHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COMMENT", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_BASIS", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_BASIS_ID", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_ID", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_PREV_ID", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_REF_FRAME", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_TYPE", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_TYPE)));
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(AttitudeCovarianceHistoryMetadataKey(((t_AttitudeCovarianceHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_of_(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_process(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeCovarianceHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadataKey::valueOf(a0));
                  return t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< AttitudeCovarianceHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_get__parameters_(t_AttitudeCovarianceHistoryMetadataKey *self, void *data)
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
#include "org/hipparchus/ode/ODEState.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ODEState::class$ = NULL;
      jmethodID *ODEState::mids$ = NULL;
      bool ODEState::live$ = false;

      jclass ODEState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ODEState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bb630ae4b8ab9248] = env->getMethodID(cls, "<init>", "(D[D)V");
          mids$[mid_init$_0da919a2686ce213] = env->getMethodID(cls, "<init>", "(D[D[[D)V");
          mids$[mid_getCompleteState_be783177b060994b] = env->getMethodID(cls, "getCompleteState", "()[D");
          mids$[mid_getCompleteStateDimension_d6ab429752e7c267] = env->getMethodID(cls, "getCompleteStateDimension", "()I");
          mids$[mid_getNumberOfSecondaryStates_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfSecondaryStates", "()I");
          mids$[mid_getPrimaryState_be783177b060994b] = env->getMethodID(cls, "getPrimaryState", "()[D");
          mids$[mid_getPrimaryStateDimension_d6ab429752e7c267] = env->getMethodID(cls, "getPrimaryStateDimension", "()I");
          mids$[mid_getSecondaryState_81add9fc9d78d5b9] = env->getMethodID(cls, "getSecondaryState", "(I)[D");
          mids$[mid_getSecondaryStateDimension_d938fc64e8c6df2d] = env->getMethodID(cls, "getSecondaryStateDimension", "(I)I");
          mids$[mid_getTime_9981f74b2d109da6] = env->getMethodID(cls, "getTime", "()D");
          mids$[mid_copy_d9fb07d4cbf99fb5] = env->getMethodID(cls, "copy", "([[D)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ODEState::ODEState(jdouble a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb630ae4b8ab9248, a0, a1.this$)) {}

      ODEState::ODEState(jdouble a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0da919a2686ce213, a0, a1.this$, a2.this$)) {}

      JArray< jdouble > ODEState::getCompleteState() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCompleteState_be783177b060994b]));
      }

      jint ODEState::getCompleteStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getCompleteStateDimension_d6ab429752e7c267]);
      }

      jint ODEState::getNumberOfSecondaryStates() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfSecondaryStates_d6ab429752e7c267]);
      }

      JArray< jdouble > ODEState::getPrimaryState() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPrimaryState_be783177b060994b]));
      }

      jint ODEState::getPrimaryStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getPrimaryStateDimension_d6ab429752e7c267]);
      }

      JArray< jdouble > ODEState::getSecondaryState(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSecondaryState_81add9fc9d78d5b9], a0));
      }

      jint ODEState::getSecondaryStateDimension(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getSecondaryStateDimension_d938fc64e8c6df2d], a0);
      }

      jdouble ODEState::getTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTime_9981f74b2d109da6]);
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
      static PyObject *t_ODEState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEState_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ODEState_init_(t_ODEState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ODEState_getCompleteState(t_ODEState *self);
      static PyObject *t_ODEState_getCompleteStateDimension(t_ODEState *self);
      static PyObject *t_ODEState_getNumberOfSecondaryStates(t_ODEState *self);
      static PyObject *t_ODEState_getPrimaryState(t_ODEState *self);
      static PyObject *t_ODEState_getPrimaryStateDimension(t_ODEState *self);
      static PyObject *t_ODEState_getSecondaryState(t_ODEState *self, PyObject *arg);
      static PyObject *t_ODEState_getSecondaryStateDimension(t_ODEState *self, PyObject *arg);
      static PyObject *t_ODEState_getTime(t_ODEState *self);
      static PyObject *t_ODEState_get__completeState(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__completeStateDimension(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__numberOfSecondaryStates(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__primaryState(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__primaryStateDimension(t_ODEState *self, void *data);
      static PyObject *t_ODEState_get__time(t_ODEState *self, void *data);
      static PyGetSetDef t_ODEState__fields_[] = {
        DECLARE_GET_FIELD(t_ODEState, completeState),
        DECLARE_GET_FIELD(t_ODEState, completeStateDimension),
        DECLARE_GET_FIELD(t_ODEState, numberOfSecondaryStates),
        DECLARE_GET_FIELD(t_ODEState, primaryState),
        DECLARE_GET_FIELD(t_ODEState, primaryStateDimension),
        DECLARE_GET_FIELD(t_ODEState, time),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ODEState__methods_[] = {
        DECLARE_METHOD(t_ODEState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEState, getCompleteState, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getCompleteStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getNumberOfSecondaryStates, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getPrimaryState, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getPrimaryStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ODEState, getSecondaryState, METH_O),
        DECLARE_METHOD(t_ODEState, getSecondaryStateDimension, METH_O),
        DECLARE_METHOD(t_ODEState, getTime, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ODEState)[] = {
        { Py_tp_methods, t_ODEState__methods_ },
        { Py_tp_init, (void *) t_ODEState_init_ },
        { Py_tp_getset, t_ODEState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ODEState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ODEState, t_ODEState, ODEState);

      void t_ODEState::install(PyObject *module)
      {
        installType(&PY_TYPE(ODEState), &PY_TYPE_DEF(ODEState), module, "ODEState", 0);
      }

      void t_ODEState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEState), "class_", make_descriptor(ODEState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEState), "wrapfn_", make_descriptor(t_ODEState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ODEState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ODEState::initializeClass, 1)))
          return NULL;
        return t_ODEState::wrap_Object(ODEState(((t_ODEState *) arg)->object.this$));
      }
      static PyObject *t_ODEState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ODEState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ODEState_init_(t_ODEState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            ODEState object((jobject) NULL);

            if (!parseArgs(args, "D[D", &a0, &a1))
            {
              INT_CALL(object = ODEState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< JArray< jdouble > > a2((jobject) NULL);
            ODEState object((jobject) NULL);

            if (!parseArgs(args, "D[D[[D", &a0, &a1, &a2))
            {
              INT_CALL(object = ODEState(a0, a1, a2));
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

      static PyObject *t_ODEState_getCompleteState(t_ODEState *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteState());
        return result.wrap();
      }

      static PyObject *t_ODEState_getCompleteStateDimension(t_ODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEState_getNumberOfSecondaryStates(t_ODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEState_getPrimaryState(t_ODEState *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryState());
        return result.wrap();
      }

      static PyObject *t_ODEState_getPrimaryStateDimension(t_ODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEState_getSecondaryState(t_ODEState *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryState(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryState", arg);
        return NULL;
      }

      static PyObject *t_ODEState_getSecondaryStateDimension(t_ODEState *self, PyObject *arg)
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

      static PyObject *t_ODEState_getTime(t_ODEState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ODEState_get__completeState(t_ODEState *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteState());
        return value.wrap();
      }

      static PyObject *t_ODEState_get__completeStateDimension(t_ODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEState_get__numberOfSecondaryStates(t_ODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEState_get__primaryState(t_ODEState *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryState());
        return value.wrap();
      }

      static PyObject *t_ODEState_get__primaryStateDimension(t_ODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEState_get__time(t_ODEState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTime());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/SequentialBatchLSEstimator.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *SequentialBatchLSEstimator::class$ = NULL;
        jmethodID *SequentialBatchLSEstimator::mids$ = NULL;
        bool SequentialBatchLSEstimator::live$ = false;

        jclass SequentialBatchLSEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/SequentialBatchLSEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f25705761b8af5a0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;[Lorg/orekit/propagation/conversion/PropagatorBuilder;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SequentialBatchLSEstimator::SequentialBatchLSEstimator(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::SequentialGaussNewtonOptimizer & a0, const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a1) : ::org::orekit::estimation::leastsquares::BatchLSEstimator(env->newObject(initializeClass, &mids$, mid_init$_f25705761b8af5a0, a0.this$, a1.this$)) {}
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
      namespace leastsquares {
        static PyObject *t_SequentialBatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SequentialBatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SequentialBatchLSEstimator_init_(t_SequentialBatchLSEstimator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_SequentialBatchLSEstimator__methods_[] = {
          DECLARE_METHOD(t_SequentialBatchLSEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SequentialBatchLSEstimator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SequentialBatchLSEstimator)[] = {
          { Py_tp_methods, t_SequentialBatchLSEstimator__methods_ },
          { Py_tp_init, (void *) t_SequentialBatchLSEstimator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SequentialBatchLSEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::BatchLSEstimator),
          NULL
        };

        DEFINE_TYPE(SequentialBatchLSEstimator, t_SequentialBatchLSEstimator, SequentialBatchLSEstimator);

        void t_SequentialBatchLSEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(SequentialBatchLSEstimator), &PY_TYPE_DEF(SequentialBatchLSEstimator), module, "SequentialBatchLSEstimator", 0);
        }

        void t_SequentialBatchLSEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialBatchLSEstimator), "class_", make_descriptor(SequentialBatchLSEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialBatchLSEstimator), "wrapfn_", make_descriptor(t_SequentialBatchLSEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialBatchLSEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SequentialBatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SequentialBatchLSEstimator::initializeClass, 1)))
            return NULL;
          return t_SequentialBatchLSEstimator::wrap_Object(SequentialBatchLSEstimator(((t_SequentialBatchLSEstimator *) arg)->object.this$));
        }
        static PyObject *t_SequentialBatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SequentialBatchLSEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SequentialBatchLSEstimator_init_(t_SequentialBatchLSEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::SequentialGaussNewtonOptimizer a0((jobject) NULL);
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a1((jobject) NULL);
          SequentialBatchLSEstimator object((jobject) NULL);

          if (!parseArgs(args, "k[k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::SequentialGaussNewtonOptimizer::initializeClass, ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1))
          {
            INT_CALL(object = SequentialBatchLSEstimator(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTreeVisitor$Order::class$ = NULL;
        jmethodID *BSPTreeVisitor$Order::mids$ = NULL;
        bool BSPTreeVisitor$Order::live$ = false;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::MINUS_PLUS_SUB = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::MINUS_SUB_PLUS = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::PLUS_MINUS_SUB = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::PLUS_SUB_MINUS = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::SUB_MINUS_PLUS = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::SUB_PLUS_MINUS = NULL;

        jclass BSPTreeVisitor$Order::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_31b3b217d61e5164] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;");
            mids$[mid_values_919ca06965817550] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MINUS_PLUS_SUB = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "MINUS_PLUS_SUB", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            MINUS_SUB_PLUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "MINUS_SUB_PLUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            PLUS_MINUS_SUB = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "PLUS_MINUS_SUB", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            PLUS_SUB_MINUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "PLUS_SUB_MINUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            SUB_MINUS_PLUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "SUB_MINUS_PLUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            SUB_PLUS_MINUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "SUB_PLUS_MINUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BSPTreeVisitor$Order BSPTreeVisitor$Order::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BSPTreeVisitor$Order(env->callStaticObjectMethod(cls, mids$[mid_valueOf_31b3b217d61e5164], a0.this$));
        }

        JArray< BSPTreeVisitor$Order > BSPTreeVisitor$Order::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< BSPTreeVisitor$Order >(env->callStaticObjectMethod(cls, mids$[mid_values_919ca06965817550]));
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
        static PyObject *t_BSPTreeVisitor$Order_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTreeVisitor$Order_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTreeVisitor$Order_of_(t_BSPTreeVisitor$Order *self, PyObject *args);
        static PyObject *t_BSPTreeVisitor$Order_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_BSPTreeVisitor$Order_values(PyTypeObject *type);
        static PyObject *t_BSPTreeVisitor$Order_get__parameters_(t_BSPTreeVisitor$Order *self, void *data);
        static PyGetSetDef t_BSPTreeVisitor$Order__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTreeVisitor$Order, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTreeVisitor$Order__methods_[] = {
          DECLARE_METHOD(t_BSPTreeVisitor$Order, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTreeVisitor$Order)[] = {
          { Py_tp_methods, t_BSPTreeVisitor$Order__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTreeVisitor$Order__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTreeVisitor$Order)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(BSPTreeVisitor$Order, t_BSPTreeVisitor$Order, BSPTreeVisitor$Order);
        PyObject *t_BSPTreeVisitor$Order::wrap_Object(const BSPTreeVisitor$Order& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTreeVisitor$Order::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTreeVisitor$Order *self = (t_BSPTreeVisitor$Order *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTreeVisitor$Order::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTreeVisitor$Order::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTreeVisitor$Order *self = (t_BSPTreeVisitor$Order *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTreeVisitor$Order::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTreeVisitor$Order), &PY_TYPE_DEF(BSPTreeVisitor$Order), module, "BSPTreeVisitor$Order", 0);
        }

        void t_BSPTreeVisitor$Order::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "class_", make_descriptor(BSPTreeVisitor$Order::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "wrapfn_", make_descriptor(t_BSPTreeVisitor$Order::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "boxfn_", make_descriptor(boxObject));
          env->getClass(BSPTreeVisitor$Order::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "MINUS_PLUS_SUB", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::MINUS_PLUS_SUB)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "MINUS_SUB_PLUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::MINUS_SUB_PLUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "PLUS_MINUS_SUB", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::PLUS_MINUS_SUB)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "PLUS_SUB_MINUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::PLUS_SUB_MINUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "SUB_MINUS_PLUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::SUB_MINUS_PLUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "SUB_PLUS_MINUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::SUB_PLUS_MINUS)));
        }

        static PyObject *t_BSPTreeVisitor$Order_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTreeVisitor$Order::initializeClass, 1)))
            return NULL;
          return t_BSPTreeVisitor$Order::wrap_Object(BSPTreeVisitor$Order(((t_BSPTreeVisitor$Order *) arg)->object.this$));
        }
        static PyObject *t_BSPTreeVisitor$Order_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTreeVisitor$Order::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTreeVisitor$Order_of_(t_BSPTreeVisitor$Order *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTreeVisitor$Order_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          BSPTreeVisitor$Order result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order::valueOf(a0));
            return t_BSPTreeVisitor$Order::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_BSPTreeVisitor$Order_values(PyTypeObject *type)
        {
          JArray< BSPTreeVisitor$Order > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order::values());
          return JArray<jobject>(result.this$).wrap(t_BSPTreeVisitor$Order::wrap_jobject);
        }
        static PyObject *t_BSPTreeVisitor$Order_get__parameters_(t_BSPTreeVisitor$Order *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AdamsBashforthIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AdamsBashforthIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsBashforthIntegratorBuilder::mids$ = NULL;
        bool AdamsBashforthIntegratorBuilder::live$ = false;

        jclass AdamsBashforthIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsBashforthIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2baad0ec229f7c27] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_31c1ebb8b9cbaedc] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthIntegratorBuilder::AdamsBashforthIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2baad0ec229f7c27, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractIntegrator AdamsBashforthIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_31c1ebb8b9cbaedc], a0.this$, a1.this$));
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
        static PyObject *t_AdamsBashforthIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsBashforthIntegratorBuilder_init_(t_AdamsBashforthIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsBashforthIntegratorBuilder_buildIntegrator(t_AdamsBashforthIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_AdamsBashforthIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsBashforthIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthIntegratorBuilder, t_AdamsBashforthIntegratorBuilder, AdamsBashforthIntegratorBuilder);

        void t_AdamsBashforthIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthIntegratorBuilder), &PY_TYPE_DEF(AdamsBashforthIntegratorBuilder), module, "AdamsBashforthIntegratorBuilder", 0);
        }

        void t_AdamsBashforthIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegratorBuilder), "class_", make_descriptor(AdamsBashforthIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsBashforthIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthIntegratorBuilder::wrap_Object(AdamsBashforthIntegratorBuilder(((t_AdamsBashforthIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsBashforthIntegratorBuilder_init_(t_AdamsBashforthIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsBashforthIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsBashforthIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsBashforthIntegratorBuilder_buildIntegrator(t_AdamsBashforthIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/AbstractMatricesHarvester.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AbstractMatricesHarvester::class$ = NULL;
      jmethodID *AbstractMatricesHarvester::mids$ = NULL;
      bool AbstractMatricesHarvester::live$ = false;
      jint AbstractMatricesHarvester::STATE_DIMENSION = (jint) 0;

      jclass AbstractMatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AbstractMatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_freezeColumnsNames_ff7cb6c242604316] = env->getMethodID(cls, "freezeColumnsNames", "()V");
          mids$[mid_getInitialJacobianColumn_4bbf10387b1a6128] = env->getMethodID(cls, "getInitialJacobianColumn", "(Ljava/lang/String;)[D");
          mids$[mid_getInitialStateTransitionMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getInitialStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getParametersJacobian_011bf64ebaa4e018] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getStateTransitionMatrix_011bf64ebaa4e018] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getStmName_d2c8eb4129821f0e] = env->getMethodID(cls, "getStmName", "()Ljava/lang/String;");
          mids$[mid_setReferenceState_72b846eb87f3af9a] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_getConversionJacobian_9f1f355491808400] = env->getMethodID(cls, "getConversionJacobian", "(Lorg/orekit/propagation/SpacecraftState;)[[D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          STATE_DIMENSION = env->getStaticIntField(cls, "STATE_DIMENSION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractMatricesHarvester::freezeColumnsNames() const
      {
        env->callVoidMethod(this$, mids$[mid_freezeColumnsNames_ff7cb6c242604316]);
      }

      JArray< jdouble > AbstractMatricesHarvester::getInitialJacobianColumn(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInitialJacobianColumn_4bbf10387b1a6128], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractMatricesHarvester::getInitialStateTransitionMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInitialStateTransitionMatrix_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix AbstractMatricesHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_011bf64ebaa4e018], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractMatricesHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_011bf64ebaa4e018], a0.this$));
      }

      ::java::lang::String AbstractMatricesHarvester::getStmName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStmName_d2c8eb4129821f0e]));
      }

      void AbstractMatricesHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceState_72b846eb87f3af9a], a0.this$);
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
      static PyObject *t_AbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_freezeColumnsNames(t_AbstractMatricesHarvester *self);
      static PyObject *t_AbstractMatricesHarvester_getInitialJacobianColumn(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_getInitialStateTransitionMatrix(t_AbstractMatricesHarvester *self);
      static PyObject *t_AbstractMatricesHarvester_getParametersJacobian(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_getStateTransitionMatrix(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_getStmName(t_AbstractMatricesHarvester *self);
      static PyObject *t_AbstractMatricesHarvester_setReferenceState(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_get__initialStateTransitionMatrix(t_AbstractMatricesHarvester *self, void *data);
      static int t_AbstractMatricesHarvester_set__referenceState(t_AbstractMatricesHarvester *self, PyObject *arg, void *data);
      static PyObject *t_AbstractMatricesHarvester_get__stmName(t_AbstractMatricesHarvester *self, void *data);
      static PyGetSetDef t_AbstractMatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractMatricesHarvester, initialStateTransitionMatrix),
        DECLARE_SET_FIELD(t_AbstractMatricesHarvester, referenceState),
        DECLARE_GET_FIELD(t_AbstractMatricesHarvester, stmName),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractMatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_AbstractMatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, freezeColumnsNames, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getInitialJacobianColumn, METH_O),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getInitialStateTransitionMatrix, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getParametersJacobian, METH_O),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getStateTransitionMatrix, METH_O),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getStmName, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, setReferenceState, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractMatricesHarvester)[] = {
        { Py_tp_methods, t_AbstractMatricesHarvester__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractMatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractMatricesHarvester)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractMatricesHarvester, t_AbstractMatricesHarvester, AbstractMatricesHarvester);

      void t_AbstractMatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractMatricesHarvester), &PY_TYPE_DEF(AbstractMatricesHarvester), module, "AbstractMatricesHarvester", 0);
      }

      void t_AbstractMatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "class_", make_descriptor(AbstractMatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "wrapfn_", make_descriptor(t_AbstractMatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractMatricesHarvester::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "STATE_DIMENSION", make_descriptor(AbstractMatricesHarvester::STATE_DIMENSION));
      }

      static PyObject *t_AbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractMatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_AbstractMatricesHarvester::wrap_Object(AbstractMatricesHarvester(((t_AbstractMatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_AbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractMatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractMatricesHarvester_freezeColumnsNames(t_AbstractMatricesHarvester *self)
      {
        OBJ_CALL(self->object.freezeColumnsNames());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractMatricesHarvester_getInitialJacobianColumn(t_AbstractMatricesHarvester *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getInitialJacobianColumn(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getInitialJacobianColumn", arg);
        return NULL;
      }

      static PyObject *t_AbstractMatricesHarvester_getInitialStateTransitionMatrix(t_AbstractMatricesHarvester *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialStateTransitionMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_AbstractMatricesHarvester_getParametersJacobian(t_AbstractMatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getParametersJacobian(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getParametersJacobian", arg);
        return NULL;
      }

      static PyObject *t_AbstractMatricesHarvester_getStateTransitionMatrix(t_AbstractMatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getStateTransitionMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractMatricesHarvester_getStmName(t_AbstractMatricesHarvester *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getStmName());
        return j2p(result);
      }

      static PyObject *t_AbstractMatricesHarvester_setReferenceState(t_AbstractMatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setReferenceState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setReferenceState", arg);
        return NULL;
      }

      static PyObject *t_AbstractMatricesHarvester_get__initialStateTransitionMatrix(t_AbstractMatricesHarvester *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialStateTransitionMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static int t_AbstractMatricesHarvester_set__referenceState(t_AbstractMatricesHarvester *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            INT_CALL(self->object.setReferenceState(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "referenceState", arg);
        return -1;
      }

      static PyObject *t_AbstractMatricesHarvester_get__stmName(t_AbstractMatricesHarvester *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getStmName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm07Header::class$ = NULL;
              jmethodID *SsrIgm07Header::mids$ = NULL;
              bool SsrIgm07Header::live$ = false;

              jclass SsrIgm07Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm07Header::SsrIgm07Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
              static PyObject *t_SsrIgm07Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm07Header_init_(t_SsrIgm07Header *self, PyObject *args, PyObject *kwds);

              static PyMethodDef t_SsrIgm07Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm07Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07Header, instance_, METH_O | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm07Header)[] = {
                { Py_tp_methods, t_SsrIgm07Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm07Header_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm07Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm07Header, t_SsrIgm07Header, SsrIgm07Header);

              void t_SsrIgm07Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm07Header), &PY_TYPE_DEF(SsrIgm07Header), module, "SsrIgm07Header", 0);
              }

              void t_SsrIgm07Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Header), "class_", make_descriptor(SsrIgm07Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Header), "wrapfn_", make_descriptor(t_SsrIgm07Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm07Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm07Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm07Header::wrap_Object(SsrIgm07Header(((t_SsrIgm07Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm07Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm07Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm07Header_init_(t_SsrIgm07Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm07Header object((jobject) NULL);

                INT_CALL(object = SsrIgm07Header());
                self->object = object;

                return 0;
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$DateConsumer::class$ = NULL;
            jmethodID *ParseToken$DateConsumer::mids$ = NULL;
            bool ParseToken$DateConsumer::live$ = false;

            jclass ParseToken$DateConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_8497861b879c83f7] = env->getMethodID(cls, "accept", "(Lorg/orekit/time/AbsoluteDate;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DateConsumer::accept(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_8497861b879c83f7], a0.this$);
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
            static PyObject *t_ParseToken$DateConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DateConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DateConsumer_accept(t_ParseToken$DateConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$DateConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$DateConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DateConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DateConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$DateConsumer)[] = {
              { Py_tp_methods, t_ParseToken$DateConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$DateConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$DateConsumer, t_ParseToken$DateConsumer, ParseToken$DateConsumer);

            void t_ParseToken$DateConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$DateConsumer), &PY_TYPE_DEF(ParseToken$DateConsumer), module, "ParseToken$DateConsumer", 0);
            }

            void t_ParseToken$DateConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DateConsumer), "class_", make_descriptor(ParseToken$DateConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DateConsumer), "wrapfn_", make_descriptor(t_ParseToken$DateConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DateConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$DateConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$DateConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$DateConsumer::wrap_Object(ParseToken$DateConsumer(((t_ParseToken$DateConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$DateConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$DateConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$DateConsumer_accept(t_ParseToken$DateConsumer *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
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
#include "org/hipparchus/stat/descriptive/summary/SumOfSquares.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfSquares.h"
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
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_842542e96ffb19d8] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/SumOfSquares;)V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_0a2f4c2bb5c7c756] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/SumOfSquares;");
              mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_9981f74b2d109da6] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_1ad26e8c8c0cd65b] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SumOfSquares::SumOfSquares() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void SumOfSquares::aggregate(const SumOfSquares & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_842542e96ffb19d8], a0.this$);
          }

          void SumOfSquares::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          SumOfSquares SumOfSquares::copy() const
          {
            return SumOfSquares(env->callObjectMethod(this$, mids$[mid_copy_0a2f4c2bb5c7c756]));
          }

          jdouble SumOfSquares::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
          }

          jlong SumOfSquares::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
          }

          jdouble SumOfSquares::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_9981f74b2d109da6]);
          }

          void SumOfSquares::increment(jdouble a0) const
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenThirdBodyLinear.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *FieldHansenThirdBodyLinear::class$ = NULL;
              jmethodID *FieldHansenThirdBodyLinear::mids$ = NULL;
              bool FieldHansenThirdBodyLinear::live$ = false;

              jclass FieldHansenThirdBodyLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenThirdBodyLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_3214cb148b0221a6] = env->getMethodID(cls, "<init>", "(IILorg/hipparchus/Field;)V");
                  mids$[mid_computeInitValues_f9ea60a8dc2d69fb] = env->getMethodID(cls, "computeInitValues", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_getDerivative_b23de0cfc61f8f60] = env->getMethodID(cls, "getDerivative", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getValue_b23de0cfc61f8f60] = env->getMethodID(cls, "getValue", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldHansenThirdBodyLinear::FieldHansenThirdBodyLinear(jint a0, jint a1, const ::org::hipparchus::Field & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3214cb148b0221a6, a0, a1, a2.this$)) {}

              void FieldHansenThirdBodyLinear::computeInitValues(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_f9ea60a8dc2d69fb], a0.this$, a1.this$, a2.this$);
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenThirdBodyLinear::getDerivative(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_b23de0cfc61f8f60], a0, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenThirdBodyLinear::getValue(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_b23de0cfc61f8f60], a0, a1.this$));
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_FieldHansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenThirdBodyLinear_of_(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static int t_FieldHansenThirdBodyLinear_init_(t_FieldHansenThirdBodyLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldHansenThirdBodyLinear_computeInitValues(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_FieldHansenThirdBodyLinear_getDerivative(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_FieldHansenThirdBodyLinear_getValue(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_FieldHansenThirdBodyLinear_get__parameters_(t_FieldHansenThirdBodyLinear *self, void *data);
              static PyGetSetDef t_FieldHansenThirdBodyLinear__fields_[] = {
                DECLARE_GET_FIELD(t_FieldHansenThirdBodyLinear, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldHansenThirdBodyLinear__methods_[] = {
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldHansenThirdBodyLinear)[] = {
                { Py_tp_methods, t_FieldHansenThirdBodyLinear__methods_ },
                { Py_tp_init, (void *) t_FieldHansenThirdBodyLinear_init_ },
                { Py_tp_getset, t_FieldHansenThirdBodyLinear__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldHansenThirdBodyLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldHansenThirdBodyLinear, t_FieldHansenThirdBodyLinear, FieldHansenThirdBodyLinear);
              PyObject *t_FieldHansenThirdBodyLinear::wrap_Object(const FieldHansenThirdBodyLinear& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenThirdBodyLinear::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenThirdBodyLinear *self = (t_FieldHansenThirdBodyLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldHansenThirdBodyLinear::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenThirdBodyLinear::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenThirdBodyLinear *self = (t_FieldHansenThirdBodyLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldHansenThirdBodyLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldHansenThirdBodyLinear), &PY_TYPE_DEF(FieldHansenThirdBodyLinear), module, "FieldHansenThirdBodyLinear", 0);
              }

              void t_FieldHansenThirdBodyLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenThirdBodyLinear), "class_", make_descriptor(FieldHansenThirdBodyLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenThirdBodyLinear), "wrapfn_", make_descriptor(t_FieldHansenThirdBodyLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenThirdBodyLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldHansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldHansenThirdBodyLinear::initializeClass, 1)))
                  return NULL;
                return t_FieldHansenThirdBodyLinear::wrap_Object(FieldHansenThirdBodyLinear(((t_FieldHansenThirdBodyLinear *) arg)->object.this$));
              }
              static PyObject *t_FieldHansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldHansenThirdBodyLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_of_(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldHansenThirdBodyLinear_init_(t_FieldHansenThirdBodyLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                ::org::hipparchus::Field a2((jobject) NULL);
                PyTypeObject **p2;
                FieldHansenThirdBodyLinear object((jobject) NULL);

                if (!parseArgs(args, "IIK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
                {
                  INT_CALL(object = FieldHansenThirdBodyLinear(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_computeInitValues(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_getDerivative(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_getValue(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
              }
              static PyObject *t_FieldHansenThirdBodyLinear_get__parameters_(t_FieldHansenThirdBodyLinear *self, void *data)
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
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FieldBodiesElements::class$ = NULL;
      jmethodID *FieldBodiesElements::mids$ = NULL;
      bool FieldBodiesElements::live$ = false;

      jclass FieldBodiesElements::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FieldBodiesElements");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1d8f51a614567843] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getLE_08d37e3f77b7239d] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLJu_08d37e3f77b7239d] = env->getMethodID(cls, "getLJu", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLJuDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLJuDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMa_08d37e3f77b7239d] = env->getMethodID(cls, "getLMa", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMaDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLMaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMe_08d37e3f77b7239d] = env->getMethodID(cls, "getLMe", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMeDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLMeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLNe_08d37e3f77b7239d] = env->getMethodID(cls, "getLNe", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLNeDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLNeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLSa_08d37e3f77b7239d] = env->getMethodID(cls, "getLSa", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLSaDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLSaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLUr_08d37e3f77b7239d] = env->getMethodID(cls, "getLUr", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLUrDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLUrDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLVe_08d37e3f77b7239d] = env->getMethodID(cls, "getLVe", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLVeDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLVeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPa_08d37e3f77b7239d] = env->getMethodID(cls, "getPa", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPaDot_08d37e3f77b7239d] = env->getMethodID(cls, "getPaDot", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldBodiesElements::FieldBodiesElements(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13, const ::org::hipparchus::CalculusFieldElement & a14, const ::org::hipparchus::CalculusFieldElement & a15, const ::org::hipparchus::CalculusFieldElement & a16, const ::org::hipparchus::CalculusFieldElement & a17, const ::org::hipparchus::CalculusFieldElement & a18, const ::org::hipparchus::CalculusFieldElement & a19, const ::org::hipparchus::CalculusFieldElement & a20, const ::org::hipparchus::CalculusFieldElement & a21, const ::org::hipparchus::CalculusFieldElement & a22, const ::org::hipparchus::CalculusFieldElement & a23, const ::org::hipparchus::CalculusFieldElement & a24, const ::org::hipparchus::CalculusFieldElement & a25, const ::org::hipparchus::CalculusFieldElement & a26, const ::org::hipparchus::CalculusFieldElement & a27, const ::org::hipparchus::CalculusFieldElement & a28, const ::org::hipparchus::CalculusFieldElement & a29, const ::org::hipparchus::CalculusFieldElement & a30, const ::org::hipparchus::CalculusFieldElement & a31) : ::org::orekit::data::FieldDelaunayArguments(env->newObject(initializeClass, &mids$, mid_init$_1d8f51a614567843, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16.this$, a17.this$, a18.this$, a19.this$, a20.this$, a21.this$, a22.this$, a23.this$, a24.this$, a25.this$, a26.this$, a27.this$, a28.this$, a29.this$, a30.this$, a31.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLJu() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLJu_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLJuDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLJuDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMa() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMa_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMaDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMe() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMe_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMeDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLNe() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLNe_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLNeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLNeDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLSa() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLSa_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLSaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLSaDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLUr() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLUr_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLUrDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLUrDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLVe() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLVe_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLVeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLVeDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getPa() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPa_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getPaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPaDot_08d37e3f77b7239d]));
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
      static PyObject *t_FieldBodiesElements_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBodiesElements_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBodiesElements_of_(t_FieldBodiesElements *self, PyObject *args);
      static int t_FieldBodiesElements_init_(t_FieldBodiesElements *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldBodiesElements_getLE(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLEDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLJu(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLJuDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLMa(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLMaDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLMe(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLMeDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLNe(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLNeDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLSa(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLSaDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLUr(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLUrDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLVe(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLVeDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getPa(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getPaDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_get__lE(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lEDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lJu(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lJuDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lMa(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lMaDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lMe(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lMeDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lNe(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lNeDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lSa(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lSaDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lUr(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lUrDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lVe(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lVeDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__pa(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__paDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__parameters_(t_FieldBodiesElements *self, void *data);
      static PyGetSetDef t_FieldBodiesElements__fields_[] = {
        DECLARE_GET_FIELD(t_FieldBodiesElements, lE),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lEDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lJu),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lJuDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lMa),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lMaDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lMe),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lMeDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lNe),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lNeDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lSa),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lSaDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lUr),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lUrDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lVe),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lVeDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, pa),
        DECLARE_GET_FIELD(t_FieldBodiesElements, paDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldBodiesElements__methods_[] = {
        DECLARE_METHOD(t_FieldBodiesElements, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBodiesElements, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBodiesElements, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLE, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLJu, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLJuDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLMa, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLMaDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLMe, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLMeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLNe, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLNeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLSa, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLSaDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLUr, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLUrDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLVe, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLVeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getPa, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getPaDot, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldBodiesElements)[] = {
        { Py_tp_methods, t_FieldBodiesElements__methods_ },
        { Py_tp_init, (void *) t_FieldBodiesElements_init_ },
        { Py_tp_getset, t_FieldBodiesElements__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldBodiesElements)[] = {
        &PY_TYPE_DEF(::org::orekit::data::FieldDelaunayArguments),
        NULL
      };

      DEFINE_TYPE(FieldBodiesElements, t_FieldBodiesElements, FieldBodiesElements);
      PyObject *t_FieldBodiesElements::wrap_Object(const FieldBodiesElements& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldBodiesElements::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBodiesElements *self = (t_FieldBodiesElements *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldBodiesElements::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldBodiesElements::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBodiesElements *self = (t_FieldBodiesElements *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldBodiesElements::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldBodiesElements), &PY_TYPE_DEF(FieldBodiesElements), module, "FieldBodiesElements", 0);
      }

      void t_FieldBodiesElements::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBodiesElements), "class_", make_descriptor(FieldBodiesElements::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBodiesElements), "wrapfn_", make_descriptor(t_FieldBodiesElements::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBodiesElements), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldBodiesElements_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldBodiesElements::initializeClass, 1)))
          return NULL;
        return t_FieldBodiesElements::wrap_Object(FieldBodiesElements(((t_FieldBodiesElements *) arg)->object.this$));
      }
      static PyObject *t_FieldBodiesElements_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldBodiesElements::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldBodiesElements_of_(t_FieldBodiesElements *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldBodiesElements_init_(t_FieldBodiesElements *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
        PyTypeObject **p3;
        ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
        PyTypeObject **p4;
        ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
        PyTypeObject **p5;
        ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
        PyTypeObject **p6;
        ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
        PyTypeObject **p7;
        ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
        PyTypeObject **p8;
        ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
        PyTypeObject **p9;
        ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
        PyTypeObject **p10;
        ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
        PyTypeObject **p11;
        ::org::hipparchus::CalculusFieldElement a12((jobject) NULL);
        PyTypeObject **p12;
        ::org::hipparchus::CalculusFieldElement a13((jobject) NULL);
        PyTypeObject **p13;
        ::org::hipparchus::CalculusFieldElement a14((jobject) NULL);
        PyTypeObject **p14;
        ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
        PyTypeObject **p15;
        ::org::hipparchus::CalculusFieldElement a16((jobject) NULL);
        PyTypeObject **p16;
        ::org::hipparchus::CalculusFieldElement a17((jobject) NULL);
        PyTypeObject **p17;
        ::org::hipparchus::CalculusFieldElement a18((jobject) NULL);
        PyTypeObject **p18;
        ::org::hipparchus::CalculusFieldElement a19((jobject) NULL);
        PyTypeObject **p19;
        ::org::hipparchus::CalculusFieldElement a20((jobject) NULL);
        PyTypeObject **p20;
        ::org::hipparchus::CalculusFieldElement a21((jobject) NULL);
        PyTypeObject **p21;
        ::org::hipparchus::CalculusFieldElement a22((jobject) NULL);
        PyTypeObject **p22;
        ::org::hipparchus::CalculusFieldElement a23((jobject) NULL);
        PyTypeObject **p23;
        ::org::hipparchus::CalculusFieldElement a24((jobject) NULL);
        PyTypeObject **p24;
        ::org::hipparchus::CalculusFieldElement a25((jobject) NULL);
        PyTypeObject **p25;
        ::org::hipparchus::CalculusFieldElement a26((jobject) NULL);
        PyTypeObject **p26;
        ::org::hipparchus::CalculusFieldElement a27((jobject) NULL);
        PyTypeObject **p27;
        ::org::hipparchus::CalculusFieldElement a28((jobject) NULL);
        PyTypeObject **p28;
        ::org::hipparchus::CalculusFieldElement a29((jobject) NULL);
        PyTypeObject **p29;
        ::org::hipparchus::CalculusFieldElement a30((jobject) NULL);
        PyTypeObject **p30;
        ::org::hipparchus::CalculusFieldElement a31((jobject) NULL);
        PyTypeObject **p31;
        FieldBodiesElements object((jobject) NULL);

        if (!parseArgs(args, "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13, &p13, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a14, &p14, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a16, &p16, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a17, &p17, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a18, &p18, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a19, &p19, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a20, &p20, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a21, &p21, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a22, &p22, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a23, &p23, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a24, &p24, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a25, &p25, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a26, &p26, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a27, &p27, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a28, &p28, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a29, &p29, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a30, &p30, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a31, &p31, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldBodiesElements(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldBodiesElements_getLE(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLEDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLJu(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLJu());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLJuDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLJuDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLMa(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMa());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLMaDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLMe(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMe());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLMeDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLNe(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLNe());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLNeDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLNeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLSa(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLSa());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLSaDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLSaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLUr(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLUr());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLUrDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLUrDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLVe(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLVe());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLVeDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLVeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getPa(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getPa());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getPaDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getPaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldBodiesElements_get__parameters_(t_FieldBodiesElements *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldBodiesElements_get__lE(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lEDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lJu(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLJu());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lJuDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLJuDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lMa(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMa());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lMaDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lMe(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMe());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lMeDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lNe(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLNe());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lNeDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLNeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lSa(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLSa());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lSaDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLSaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lUr(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLUr());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lUrDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLUrDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lVe(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLVe());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lVeDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLVeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__pa(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getPa());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__paDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getPaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "java/lang/Class.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *CoefficientsFactory$NSKey::class$ = NULL;
            jmethodID *CoefficientsFactory$NSKey::mids$ = NULL;
            bool CoefficientsFactory$NSKey::live$ = false;

            jclass CoefficientsFactory$NSKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_b5d23e6c0858e8ed] = env->getMethodID(cls, "<init>", "(II)V");
                mids$[mid_compareTo_ef1d71bcd03971ce] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey;)I");
                mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getN_d6ab429752e7c267] = env->getMethodID(cls, "getN", "()I");
                mids$[mid_getS_d6ab429752e7c267] = env->getMethodID(cls, "getS", "()I");
                mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CoefficientsFactory$NSKey::CoefficientsFactory$NSKey(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5d23e6c0858e8ed, a0, a1)) {}

            jint CoefficientsFactory$NSKey::compareTo(const CoefficientsFactory$NSKey & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_ef1d71bcd03971ce], a0.this$);
            }

            jboolean CoefficientsFactory$NSKey::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
            }

            jint CoefficientsFactory$NSKey::getN() const
            {
              return env->callIntMethod(this$, mids$[mid_getN_d6ab429752e7c267]);
            }

            jint CoefficientsFactory$NSKey::getS() const
            {
              return env->callIntMethod(this$, mids$[mid_getS_d6ab429752e7c267]);
            }

            jint CoefficientsFactory$NSKey::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
            static PyObject *t_CoefficientsFactory$NSKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory$NSKey_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CoefficientsFactory$NSKey_init_(t_CoefficientsFactory$NSKey *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CoefficientsFactory$NSKey_compareTo(t_CoefficientsFactory$NSKey *self, PyObject *arg);
            static PyObject *t_CoefficientsFactory$NSKey_equals(t_CoefficientsFactory$NSKey *self, PyObject *args);
            static PyObject *t_CoefficientsFactory$NSKey_getN(t_CoefficientsFactory$NSKey *self);
            static PyObject *t_CoefficientsFactory$NSKey_getS(t_CoefficientsFactory$NSKey *self);
            static PyObject *t_CoefficientsFactory$NSKey_hashCode(t_CoefficientsFactory$NSKey *self, PyObject *args);
            static PyObject *t_CoefficientsFactory$NSKey_get__n(t_CoefficientsFactory$NSKey *self, void *data);
            static PyObject *t_CoefficientsFactory$NSKey_get__s(t_CoefficientsFactory$NSKey *self, void *data);
            static PyGetSetDef t_CoefficientsFactory$NSKey__fields_[] = {
              DECLARE_GET_FIELD(t_CoefficientsFactory$NSKey, n),
              DECLARE_GET_FIELD(t_CoefficientsFactory$NSKey, s),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CoefficientsFactory$NSKey__methods_[] = {
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, compareTo, METH_O),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, equals, METH_VARARGS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, getN, METH_NOARGS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, getS, METH_NOARGS),
              DECLARE_METHOD(t_CoefficientsFactory$NSKey, hashCode, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CoefficientsFactory$NSKey)[] = {
              { Py_tp_methods, t_CoefficientsFactory$NSKey__methods_ },
              { Py_tp_init, (void *) t_CoefficientsFactory$NSKey_init_ },
              { Py_tp_getset, t_CoefficientsFactory$NSKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CoefficientsFactory$NSKey)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CoefficientsFactory$NSKey, t_CoefficientsFactory$NSKey, CoefficientsFactory$NSKey);

            void t_CoefficientsFactory$NSKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CoefficientsFactory$NSKey), &PY_TYPE_DEF(CoefficientsFactory$NSKey), module, "CoefficientsFactory$NSKey", 0);
            }

            void t_CoefficientsFactory$NSKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory$NSKey), "class_", make_descriptor(CoefficientsFactory$NSKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory$NSKey), "wrapfn_", make_descriptor(t_CoefficientsFactory$NSKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory$NSKey), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CoefficientsFactory$NSKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CoefficientsFactory$NSKey::initializeClass, 1)))
                return NULL;
              return t_CoefficientsFactory$NSKey::wrap_Object(CoefficientsFactory$NSKey(((t_CoefficientsFactory$NSKey *) arg)->object.this$));
            }
            static PyObject *t_CoefficientsFactory$NSKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CoefficientsFactory$NSKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CoefficientsFactory$NSKey_init_(t_CoefficientsFactory$NSKey *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jint a1;
              CoefficientsFactory$NSKey object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = CoefficientsFactory$NSKey(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CoefficientsFactory$NSKey_compareTo(t_CoefficientsFactory$NSKey *self, PyObject *arg)
            {
              CoefficientsFactory$NSKey a0((jobject) NULL);
              jint result;

              if (!parseArg(arg, "k", CoefficientsFactory$NSKey::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.compareTo(a0));
                return PyLong_FromLong((long) result);
              }

              PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory$NSKey_equals(t_CoefficientsFactory$NSKey *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "o", &a0))
              {
                OBJ_CALL(result = self->object.equals(a0));
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CoefficientsFactory$NSKey), (PyObject *) self, "equals", args, 2);
            }

            static PyObject *t_CoefficientsFactory$NSKey_getN(t_CoefficientsFactory$NSKey *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CoefficientsFactory$NSKey_getS(t_CoefficientsFactory$NSKey *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getS());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CoefficientsFactory$NSKey_hashCode(t_CoefficientsFactory$NSKey *self, PyObject *args)
            {
              jint result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.hashCode());
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(CoefficientsFactory$NSKey), (PyObject *) self, "hashCode", args, 2);
            }

            static PyObject *t_CoefficientsFactory$NSKey_get__n(t_CoefficientsFactory$NSKey *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getN());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_CoefficientsFactory$NSKey_get__s(t_CoefficientsFactory$NSKey *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getS());
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
#include "org/orekit/estimation/measurements/modifiers/PythonParametricModelEffectGradient.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PythonParametricModelEffectGradient::class$ = NULL;
          jmethodID *PythonParametricModelEffectGradient::mids$ = NULL;
          bool PythonParametricModelEffectGradient::live$ = false;

          jclass PythonParametricModelEffectGradient::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PythonParametricModelEffectGradient");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_evaluate_21f97701db12cdb0] = env->getMethodID(cls, "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonParametricModelEffectGradient::PythonParametricModelEffectGradient() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonParametricModelEffectGradient::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonParametricModelEffectGradient::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonParametricModelEffectGradient::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_PythonParametricModelEffectGradient_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonParametricModelEffectGradient_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonParametricModelEffectGradient_init_(t_PythonParametricModelEffectGradient *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonParametricModelEffectGradient_finalize(t_PythonParametricModelEffectGradient *self);
          static PyObject *t_PythonParametricModelEffectGradient_pythonExtension(t_PythonParametricModelEffectGradient *self, PyObject *args);
          static jobject JNICALL t_PythonParametricModelEffectGradient_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonParametricModelEffectGradient_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonParametricModelEffectGradient_get__self(t_PythonParametricModelEffectGradient *self, void *data);
          static PyGetSetDef t_PythonParametricModelEffectGradient__fields_[] = {
            DECLARE_GET_FIELD(t_PythonParametricModelEffectGradient, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonParametricModelEffectGradient__methods_[] = {
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonParametricModelEffectGradient, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonParametricModelEffectGradient)[] = {
            { Py_tp_methods, t_PythonParametricModelEffectGradient__methods_ },
            { Py_tp_init, (void *) t_PythonParametricModelEffectGradient_init_ },
            { Py_tp_getset, t_PythonParametricModelEffectGradient__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonParametricModelEffectGradient)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonParametricModelEffectGradient, t_PythonParametricModelEffectGradient, PythonParametricModelEffectGradient);

          void t_PythonParametricModelEffectGradient::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonParametricModelEffectGradient), &PY_TYPE_DEF(PythonParametricModelEffectGradient), module, "PythonParametricModelEffectGradient", 1);
          }

          void t_PythonParametricModelEffectGradient::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffectGradient), "class_", make_descriptor(PythonParametricModelEffectGradient::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffectGradient), "wrapfn_", make_descriptor(t_PythonParametricModelEffectGradient::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffectGradient), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonParametricModelEffectGradient::initializeClass);
            JNINativeMethod methods[] = {
              { "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;", (void *) t_PythonParametricModelEffectGradient_evaluate0 },
              { "pythonDecRef", "()V", (void *) t_PythonParametricModelEffectGradient_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonParametricModelEffectGradient_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonParametricModelEffectGradient::initializeClass, 1)))
              return NULL;
            return t_PythonParametricModelEffectGradient::wrap_Object(PythonParametricModelEffectGradient(((t_PythonParametricModelEffectGradient *) arg)->object.this$));
          }
          static PyObject *t_PythonParametricModelEffectGradient_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonParametricModelEffectGradient::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonParametricModelEffectGradient_init_(t_PythonParametricModelEffectGradient *self, PyObject *args, PyObject *kwds)
          {
            PythonParametricModelEffectGradient object((jobject) NULL);

            INT_CALL(object = PythonParametricModelEffectGradient());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonParametricModelEffectGradient_finalize(t_PythonParametricModelEffectGradient *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonParametricModelEffectGradient_pythonExtension(t_PythonParametricModelEffectGradient *self, PyObject *args)
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

          static jobject JNICALL t_PythonParametricModelEffectGradient_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffectGradient::mids$[PythonParametricModelEffectGradient::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(::org::orekit::estimation::measurements::GroundStation(a0));
            PyObject *o1 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a1));
            PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "evaluate", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &value))
            {
              throwTypeError("evaluate", result);
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

          static void JNICALL t_PythonParametricModelEffectGradient_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffectGradient::mids$[PythonParametricModelEffectGradient::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonParametricModelEffectGradient::mids$[PythonParametricModelEffectGradient::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonParametricModelEffectGradient_get__self(t_PythonParametricModelEffectGradient *self, void *data)
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
            mids$[mid_init$_cd5724127cc72e96] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getLongitude_9981f74b2d109da6] = env->getMethodID(cls, "getLongitude", "()D");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NormalizedGeodeticPoint::NormalizedGeodeticPoint(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::bodies::GeodeticPoint(env->newObject(initializeClass, &mids$, mid_init$_cd5724127cc72e96, a0, a1, a2, a3)) {}

        jboolean NormalizedGeodeticPoint::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        jdouble NormalizedGeodeticPoint::getLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitude_9981f74b2d109da6]);
        }

        jint NormalizedGeodeticPoint::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldSinCos::class$ = NULL;
      jmethodID *FieldSinCos::mids$ = NULL;
      bool FieldSinCos::live$ = false;

      jclass FieldSinCos::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldSinCos");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b1372600709408bf] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
          mids$[mid_cos_704a5bee58538972] = env->getMethodID(cls, "cos", "()Ljava/lang/Object;");
          mids$[mid_difference_e6282dd67229fa6b] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/FieldSinCos;Lorg/hipparchus/util/FieldSinCos;)Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sin_704a5bee58538972] = env->getMethodID(cls, "sin", "()Ljava/lang/Object;");
          mids$[mid_sum_e6282dd67229fa6b] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/FieldSinCos;Lorg/hipparchus/util/FieldSinCos;)Lorg/hipparchus/util/FieldSinCos;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSinCos::FieldSinCos(const ::java::lang::Object & a0, const ::java::lang::Object & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b1372600709408bf, a0.this$, a1.this$)) {}

      ::java::lang::Object FieldSinCos::cos() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_cos_704a5bee58538972]));
      }

      FieldSinCos FieldSinCos::difference(const FieldSinCos & a0, const FieldSinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinCos(env->callStaticObjectMethod(cls, mids$[mid_difference_e6282dd67229fa6b], a0.this$, a1.this$));
      }

      ::java::lang::Object FieldSinCos::sin() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_sin_704a5bee58538972]));
      }

      FieldSinCos FieldSinCos::sum(const FieldSinCos & a0, const FieldSinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinCos(env->callStaticObjectMethod(cls, mids$[mid_sum_e6282dd67229fa6b], a0.this$, a1.this$));
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
      static PyObject *t_FieldSinCos_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinCos_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinCos_of_(t_FieldSinCos *self, PyObject *args);
      static int t_FieldSinCos_init_(t_FieldSinCos *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSinCos_cos(t_FieldSinCos *self);
      static PyObject *t_FieldSinCos_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinCos_sin(t_FieldSinCos *self);
      static PyObject *t_FieldSinCos_sum(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinCos_get__parameters_(t_FieldSinCos *self, void *data);
      static PyGetSetDef t_FieldSinCos__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSinCos, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSinCos__methods_[] = {
        DECLARE_METHOD(t_FieldSinCos, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinCos, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinCos, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSinCos, cos, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinCos, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldSinCos, sin, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinCos, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSinCos)[] = {
        { Py_tp_methods, t_FieldSinCos__methods_ },
        { Py_tp_init, (void *) t_FieldSinCos_init_ },
        { Py_tp_getset, t_FieldSinCos__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSinCos)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSinCos, t_FieldSinCos, FieldSinCos);
      PyObject *t_FieldSinCos::wrap_Object(const FieldSinCos& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinCos::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinCos *self = (t_FieldSinCos *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSinCos::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinCos::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinCos *self = (t_FieldSinCos *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSinCos::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSinCos), &PY_TYPE_DEF(FieldSinCos), module, "FieldSinCos", 0);
      }

      void t_FieldSinCos::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinCos), "class_", make_descriptor(FieldSinCos::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinCos), "wrapfn_", make_descriptor(t_FieldSinCos::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinCos), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSinCos_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSinCos::initializeClass, 1)))
          return NULL;
        return t_FieldSinCos::wrap_Object(FieldSinCos(((t_FieldSinCos *) arg)->object.this$));
      }
      static PyObject *t_FieldSinCos_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSinCos::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSinCos_of_(t_FieldSinCos *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSinCos_init_(t_FieldSinCos *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::java::lang::Object a1((jobject) NULL);
        FieldSinCos object((jobject) NULL);

        if (!parseArgs(args, "oo", &a0, &a1))
        {
          INT_CALL(object = FieldSinCos(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldSinCos_cos(t_FieldSinCos *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinCos_difference(PyTypeObject *type, PyObject *args)
      {
        FieldSinCos a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinCos a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinCos result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinCos::initializeClass, FieldSinCos::initializeClass, &a0, &p0, t_FieldSinCos::parameters_, &a1, &p1, t_FieldSinCos::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinCos::difference(a0, a1));
          return t_FieldSinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_FieldSinCos_sin(t_FieldSinCos *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinCos_sum(PyTypeObject *type, PyObject *args)
      {
        FieldSinCos a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinCos a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinCos result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinCos::initializeClass, FieldSinCos::initializeClass, &a0, &p0, t_FieldSinCos::parameters_, &a1, &p1, t_FieldSinCos::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinCos::sum(a0, a1));
          return t_FieldSinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
      static PyObject *t_FieldSinCos_get__parameters_(t_FieldSinCos *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "java/util/Map.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldShortPeriodTerms::class$ = NULL;
            jmethodID *FieldShortPeriodTerms::mids$ = NULL;
            bool FieldShortPeriodTerms::live$ = false;

            jclass FieldShortPeriodTerms::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getCoefficients_832491c80c3ebc6f] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_d2c8eb4129821f0e] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_value_9f757583fee38862] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/FieldOrbit;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::Map FieldShortPeriodTerms::getCoefficients(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Set & a1) const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCoefficients_832491c80c3ebc6f], a0.this$, a1.this$));
            }

            ::java::lang::String FieldShortPeriodTerms::getCoefficientsKeyPrefix() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCoefficientsKeyPrefix_d2c8eb4129821f0e]));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > FieldShortPeriodTerms::value(const ::org::orekit::orbits::FieldOrbit & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_9f757583fee38862], a0.this$));
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
            static PyObject *t_FieldShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldShortPeriodTerms_of_(t_FieldShortPeriodTerms *self, PyObject *args);
            static PyObject *t_FieldShortPeriodTerms_getCoefficients(t_FieldShortPeriodTerms *self, PyObject *args);
            static PyObject *t_FieldShortPeriodTerms_getCoefficientsKeyPrefix(t_FieldShortPeriodTerms *self);
            static PyObject *t_FieldShortPeriodTerms_value(t_FieldShortPeriodTerms *self, PyObject *arg);
            static PyObject *t_FieldShortPeriodTerms_get__coefficientsKeyPrefix(t_FieldShortPeriodTerms *self, void *data);
            static PyObject *t_FieldShortPeriodTerms_get__parameters_(t_FieldShortPeriodTerms *self, void *data);
            static PyGetSetDef t_FieldShortPeriodTerms__fields_[] = {
              DECLARE_GET_FIELD(t_FieldShortPeriodTerms, coefficientsKeyPrefix),
              DECLARE_GET_FIELD(t_FieldShortPeriodTerms, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldShortPeriodTerms__methods_[] = {
              DECLARE_METHOD(t_FieldShortPeriodTerms, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, getCoefficients, METH_VARARGS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, getCoefficientsKeyPrefix, METH_NOARGS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldShortPeriodTerms)[] = {
              { Py_tp_methods, t_FieldShortPeriodTerms__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldShortPeriodTerms__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldShortPeriodTerms)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldShortPeriodTerms, t_FieldShortPeriodTerms, FieldShortPeriodTerms);
            PyObject *t_FieldShortPeriodTerms::wrap_Object(const FieldShortPeriodTerms& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldShortPeriodTerms::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldShortPeriodTerms *self = (t_FieldShortPeriodTerms *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldShortPeriodTerms::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldShortPeriodTerms::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldShortPeriodTerms *self = (t_FieldShortPeriodTerms *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldShortPeriodTerms::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldShortPeriodTerms), &PY_TYPE_DEF(FieldShortPeriodTerms), module, "FieldShortPeriodTerms", 0);
            }

            void t_FieldShortPeriodTerms::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodTerms), "class_", make_descriptor(FieldShortPeriodTerms::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodTerms), "wrapfn_", make_descriptor(t_FieldShortPeriodTerms::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodTerms), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldShortPeriodTerms::initializeClass, 1)))
                return NULL;
              return t_FieldShortPeriodTerms::wrap_Object(FieldShortPeriodTerms(((t_FieldShortPeriodTerms *) arg)->object.this$));
            }
            static PyObject *t_FieldShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldShortPeriodTerms::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldShortPeriodTerms_of_(t_FieldShortPeriodTerms *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldShortPeriodTerms_getCoefficients(t_FieldShortPeriodTerms *self, PyObject *args)
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::Set a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::Map result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Set::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Set::parameters_))
              {
                OBJ_CALL(result = self->object.getCoefficients(a0, a1));
                return ::java::util::t_Map::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCoefficients", args);
              return NULL;
            }

            static PyObject *t_FieldShortPeriodTerms_getCoefficientsKeyPrefix(t_FieldShortPeriodTerms *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCoefficientsKeyPrefix());
              return j2p(result);
            }

            static PyObject *t_FieldShortPeriodTerms_value(t_FieldShortPeriodTerms *self, PyObject *arg)
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }

              PyErr_SetArgsError((PyObject *) self, "value", arg);
              return NULL;
            }
            static PyObject *t_FieldShortPeriodTerms_get__parameters_(t_FieldShortPeriodTerms *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldShortPeriodTerms_get__coefficientsKeyPrefix(t_FieldShortPeriodTerms *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCoefficientsKeyPrefix());
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
#include "org/orekit/geometry/fov/PythonAbstractFieldOfView.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PythonAbstractFieldOfView::class$ = NULL;
        jmethodID *PythonAbstractFieldOfView::mids$ = NULL;
        bool PythonAbstractFieldOfView::live$ = false;

        jclass PythonAbstractFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PythonAbstractFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getFootprint_0ed2f5155c3855f6] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_offsetFromBoundary_7ed10fb0bfbbf1c4] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_53c542efd8574582] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractFieldOfView::PythonAbstractFieldOfView(jdouble a0) : ::org::orekit::geometry::fov::AbstractFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        void PythonAbstractFieldOfView::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAbstractFieldOfView::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAbstractFieldOfView::pythonExtension(jlong a0) const
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
    namespace geometry {
      namespace fov {
        static PyObject *t_PythonAbstractFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractFieldOfView_init_(t_PythonAbstractFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractFieldOfView_finalize(t_PythonAbstractFieldOfView *self);
        static PyObject *t_PythonAbstractFieldOfView_pythonExtension(t_PythonAbstractFieldOfView *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractFieldOfView_getFootprint0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static jdouble JNICALL t_PythonAbstractFieldOfView_offsetFromBoundary1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
        static jobject JNICALL t_PythonAbstractFieldOfView_projectToBoundary2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractFieldOfView_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractFieldOfView_get__self(t_PythonAbstractFieldOfView *self, void *data);
        static PyGetSetDef t_PythonAbstractFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractFieldOfView, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractFieldOfView__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractFieldOfView, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractFieldOfView, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractFieldOfView)[] = {
          { Py_tp_methods, t_PythonAbstractFieldOfView__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractFieldOfView_init_ },
          { Py_tp_getset, t_PythonAbstractFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::AbstractFieldOfView),
          NULL
        };

        DEFINE_TYPE(PythonAbstractFieldOfView, t_PythonAbstractFieldOfView, PythonAbstractFieldOfView);

        void t_PythonAbstractFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractFieldOfView), &PY_TYPE_DEF(PythonAbstractFieldOfView), module, "PythonAbstractFieldOfView", 1);
        }

        void t_PythonAbstractFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFieldOfView), "class_", make_descriptor(PythonAbstractFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFieldOfView), "wrapfn_", make_descriptor(t_PythonAbstractFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFieldOfView), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractFieldOfView::initializeClass);
          JNINativeMethod methods[] = {
            { "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;", (void *) t_PythonAbstractFieldOfView_getFootprint0 },
            { "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D", (void *) t_PythonAbstractFieldOfView_offsetFromBoundary1 },
            { "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractFieldOfView_projectToBoundary2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractFieldOfView_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractFieldOfView::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractFieldOfView::wrap_Object(PythonAbstractFieldOfView(((t_PythonAbstractFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractFieldOfView_init_(t_PythonAbstractFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          PythonAbstractFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = PythonAbstractFieldOfView(a0));
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

        static PyObject *t_PythonAbstractFieldOfView_finalize(t_PythonAbstractFieldOfView *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractFieldOfView_pythonExtension(t_PythonAbstractFieldOfView *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractFieldOfView_getFootprint0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *o0 = ::org::orekit::frames::t_Transform::wrap_Object(::org::orekit::frames::Transform(a0));
          PyObject *o1 = ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(::org::orekit::bodies::OneAxisEllipsoid(a1));
          PyObject *result = PyObject_CallMethod(obj, "getFootprint", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getFootprint", result);
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

        static jdouble JNICALL t_PythonAbstractFieldOfView_offsetFromBoundary1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o2 = ::org::orekit::propagation::events::t_VisibilityTrigger::wrap_Object(::org::orekit::propagation::events::VisibilityTrigger(a2));
          PyObject *result = PyObject_CallMethod(obj, "offsetFromBoundary", "OdO", o0, (double) a1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("offsetFromBoundary", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonAbstractFieldOfView_projectToBoundary2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "projectToBoundary", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("projectToBoundary", result);
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

        static void JNICALL t_PythonAbstractFieldOfView_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractFieldOfView::mids$[PythonAbstractFieldOfView::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractFieldOfView_get__self(t_PythonAbstractFieldOfView *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/BicubicInterpolatingFunction.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BicubicInterpolatingFunction::class$ = NULL;
        jmethodID *BicubicInterpolatingFunction::mids$ = NULL;
        bool BicubicInterpolatingFunction::live$ = false;

        jclass BicubicInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BicubicInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_aec76f775cbd3789] = env->getMethodID(cls, "<init>", "([D[D[[D[[D[[D[[D)V");
            mids$[mid_isValidPoint_0fc66ee74538f12c] = env->getMethodID(cls, "isValidPoint", "(DD)Z");
            mids$[mid_value_82f92590f4247da1] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BicubicInterpolatingFunction::BicubicInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4, const JArray< JArray< jdouble > > & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aec76f775cbd3789, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        jboolean BicubicInterpolatingFunction::isValidPoint(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_0fc66ee74538f12c], a0, a1);
        }

        jdouble BicubicInterpolatingFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_82f92590f4247da1], a0, a1);
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
        static PyObject *t_BicubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BicubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BicubicInterpolatingFunction_init_(t_BicubicInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BicubicInterpolatingFunction_isValidPoint(t_BicubicInterpolatingFunction *self, PyObject *args);
        static PyObject *t_BicubicInterpolatingFunction_value(t_BicubicInterpolatingFunction *self, PyObject *args);

        static PyMethodDef t_BicubicInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_BicubicInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolatingFunction, isValidPoint, METH_VARARGS),
          DECLARE_METHOD(t_BicubicInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BicubicInterpolatingFunction)[] = {
          { Py_tp_methods, t_BicubicInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_BicubicInterpolatingFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BicubicInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BicubicInterpolatingFunction, t_BicubicInterpolatingFunction, BicubicInterpolatingFunction);

        void t_BicubicInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(BicubicInterpolatingFunction), &PY_TYPE_DEF(BicubicInterpolatingFunction), module, "BicubicInterpolatingFunction", 0);
        }

        void t_BicubicInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolatingFunction), "class_", make_descriptor(BicubicInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolatingFunction), "wrapfn_", make_descriptor(t_BicubicInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BicubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BicubicInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_BicubicInterpolatingFunction::wrap_Object(BicubicInterpolatingFunction(((t_BicubicInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_BicubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BicubicInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BicubicInterpolatingFunction_init_(t_BicubicInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          JArray< JArray< jdouble > > a3((jobject) NULL);
          JArray< JArray< jdouble > > a4((jobject) NULL);
          JArray< JArray< jdouble > > a5((jobject) NULL);
          BicubicInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D[[D[[D[[D", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = BicubicInterpolatingFunction(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BicubicInterpolatingFunction_isValidPoint(t_BicubicInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", args);
          return NULL;
        }

        static PyObject *t_BicubicInterpolatingFunction_value(t_BicubicInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
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
#include "org/orekit/files/ccsds/ndm/adm/apm/Euler.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *Euler::class$ = NULL;
              jmethodID *Euler::mids$ = NULL;
              bool Euler::live$ = false;

              jclass Euler::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/Euler");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEndpoints_d67fadc29cf1ce4a] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_503d51f00fe64860] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getRotationAngles_be783177b060994b] = env->getMethodID(cls, "getRotationAngles", "()[D");
                  mids$[mid_getRotationRates_be783177b060994b] = env->getMethodID(cls, "getRotationRates", "()[D");
                  mids$[mid_hasAngles_eee3de00fe971136] = env->getMethodID(cls, "hasAngles", "()Z");
                  mids$[mid_hasRates_eee3de00fe971136] = env->getMethodID(cls, "hasRates", "()Z");
                  mids$[mid_isSpacecraftBodyRate_eee3de00fe971136] = env->getMethodID(cls, "isSpacecraftBodyRate", "()Z");
                  mids$[mid_rateFrameIsA_eee3de00fe971136] = env->getMethodID(cls, "rateFrameIsA", "()Z");
                  mids$[mid_setEulerRotSeq_d6989ad0241efe2c] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setInRotationAngles_b35db77cae58639e] = env->getMethodID(cls, "setInRotationAngles", "(Z)V");
                  mids$[mid_setIndexedRotationAngle_4320462275d66e78] = env->getMethodID(cls, "setIndexedRotationAngle", "(ID)V");
                  mids$[mid_setIndexedRotationRate_4320462275d66e78] = env->getMethodID(cls, "setIndexedRotationRate", "(ID)V");
                  mids$[mid_setLabeledRotationAngle_d710506c983a8ade] = env->getMethodID(cls, "setLabeledRotationAngle", "(CD)V");
                  mids$[mid_setLabeledRotationRate_d710506c983a8ade] = env->getMethodID(cls, "setLabeledRotationRate", "(CD)V");
                  mids$[mid_setRateFrameIsA_b35db77cae58639e] = env->getMethodID(cls, "setRateFrameIsA", "(Z)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Euler::Euler() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints Euler::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_d67fadc29cf1ce4a]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder Euler::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_503d51f00fe64860]));
              }

              JArray< jdouble > Euler::getRotationAngles() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRotationAngles_be783177b060994b]));
              }

              JArray< jdouble > Euler::getRotationRates() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRotationRates_be783177b060994b]));
              }

              jboolean Euler::hasAngles() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasAngles_eee3de00fe971136]);
              }

              jboolean Euler::hasRates() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasRates_eee3de00fe971136]);
              }

              jboolean Euler::isSpacecraftBodyRate() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isSpacecraftBodyRate_eee3de00fe971136]);
              }

              jboolean Euler::rateFrameIsA() const
              {
                return env->callBooleanMethod(this$, mids$[mid_rateFrameIsA_eee3de00fe971136]);
              }

              void Euler::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_d6989ad0241efe2c], a0.this$);
              }

              void Euler::setInRotationAngles(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInRotationAngles_b35db77cae58639e], a0);
              }

              void Euler::setIndexedRotationAngle(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setIndexedRotationAngle_4320462275d66e78], a0, a1);
              }

              void Euler::setIndexedRotationRate(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setIndexedRotationRate_4320462275d66e78], a0, a1);
              }

              void Euler::setLabeledRotationAngle(jchar a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setLabeledRotationAngle_d710506c983a8ade], a0, a1);
              }

              void Euler::setLabeledRotationRate(jchar a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setLabeledRotationRate_d710506c983a8ade], a0, a1);
              }

              void Euler::setRateFrameIsA(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateFrameIsA_b35db77cae58639e], a0);
              }

              void Euler::validate(jdouble a0) const
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
            namespace apm {
              static PyObject *t_Euler_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Euler_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Euler_init_(t_Euler *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Euler_getEndpoints(t_Euler *self);
              static PyObject *t_Euler_getEulerRotSeq(t_Euler *self);
              static PyObject *t_Euler_getRotationAngles(t_Euler *self);
              static PyObject *t_Euler_getRotationRates(t_Euler *self);
              static PyObject *t_Euler_hasAngles(t_Euler *self);
              static PyObject *t_Euler_hasRates(t_Euler *self);
              static PyObject *t_Euler_isSpacecraftBodyRate(t_Euler *self);
              static PyObject *t_Euler_rateFrameIsA(t_Euler *self);
              static PyObject *t_Euler_setEulerRotSeq(t_Euler *self, PyObject *arg);
              static PyObject *t_Euler_setInRotationAngles(t_Euler *self, PyObject *arg);
              static PyObject *t_Euler_setIndexedRotationAngle(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_setIndexedRotationRate(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_setLabeledRotationAngle(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_setLabeledRotationRate(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_setRateFrameIsA(t_Euler *self, PyObject *arg);
              static PyObject *t_Euler_validate(t_Euler *self, PyObject *args);
              static PyObject *t_Euler_get__endpoints(t_Euler *self, void *data);
              static PyObject *t_Euler_get__eulerRotSeq(t_Euler *self, void *data);
              static int t_Euler_set__eulerRotSeq(t_Euler *self, PyObject *arg, void *data);
              static int t_Euler_set__inRotationAngles(t_Euler *self, PyObject *arg, void *data);
              static PyObject *t_Euler_get__rotationAngles(t_Euler *self, void *data);
              static PyObject *t_Euler_get__rotationRates(t_Euler *self, void *data);
              static PyObject *t_Euler_get__spacecraftBodyRate(t_Euler *self, void *data);
              static PyGetSetDef t_Euler__fields_[] = {
                DECLARE_GET_FIELD(t_Euler, endpoints),
                DECLARE_GETSET_FIELD(t_Euler, eulerRotSeq),
                DECLARE_SET_FIELD(t_Euler, inRotationAngles),
                DECLARE_GET_FIELD(t_Euler, rotationAngles),
                DECLARE_GET_FIELD(t_Euler, rotationRates),
                DECLARE_GET_FIELD(t_Euler, spacecraftBodyRate),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Euler__methods_[] = {
                DECLARE_METHOD(t_Euler, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Euler, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Euler, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_Euler, getEulerRotSeq, METH_NOARGS),
                DECLARE_METHOD(t_Euler, getRotationAngles, METH_NOARGS),
                DECLARE_METHOD(t_Euler, getRotationRates, METH_NOARGS),
                DECLARE_METHOD(t_Euler, hasAngles, METH_NOARGS),
                DECLARE_METHOD(t_Euler, hasRates, METH_NOARGS),
                DECLARE_METHOD(t_Euler, isSpacecraftBodyRate, METH_NOARGS),
                DECLARE_METHOD(t_Euler, rateFrameIsA, METH_NOARGS),
                DECLARE_METHOD(t_Euler, setEulerRotSeq, METH_O),
                DECLARE_METHOD(t_Euler, setInRotationAngles, METH_O),
                DECLARE_METHOD(t_Euler, setIndexedRotationAngle, METH_VARARGS),
                DECLARE_METHOD(t_Euler, setIndexedRotationRate, METH_VARARGS),
                DECLARE_METHOD(t_Euler, setLabeledRotationAngle, METH_VARARGS),
                DECLARE_METHOD(t_Euler, setLabeledRotationRate, METH_VARARGS),
                DECLARE_METHOD(t_Euler, setRateFrameIsA, METH_O),
                DECLARE_METHOD(t_Euler, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Euler)[] = {
                { Py_tp_methods, t_Euler__methods_ },
                { Py_tp_init, (void *) t_Euler_init_ },
                { Py_tp_getset, t_Euler__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Euler)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(Euler, t_Euler, Euler);

              void t_Euler::install(PyObject *module)
              {
                installType(&PY_TYPE(Euler), &PY_TYPE_DEF(Euler), module, "Euler", 0);
              }

              void t_Euler::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Euler), "class_", make_descriptor(Euler::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Euler), "wrapfn_", make_descriptor(t_Euler::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Euler), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Euler_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Euler::initializeClass, 1)))
                  return NULL;
                return t_Euler::wrap_Object(Euler(((t_Euler *) arg)->object.this$));
              }
              static PyObject *t_Euler_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Euler::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Euler_init_(t_Euler *self, PyObject *args, PyObject *kwds)
              {
                Euler object((jobject) NULL);

                INT_CALL(object = Euler());
                self->object = object;

                return 0;
              }

              static PyObject *t_Euler_getEndpoints(t_Euler *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_Euler_getEulerRotSeq(t_Euler *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(result);
              }

              static PyObject *t_Euler_getRotationAngles(t_Euler *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getRotationAngles());
                return result.wrap();
              }

              static PyObject *t_Euler_getRotationRates(t_Euler *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getRotationRates());
                return result.wrap();
              }

              static PyObject *t_Euler_hasAngles(t_Euler *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasAngles());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Euler_hasRates(t_Euler *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasRates());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Euler_isSpacecraftBodyRate(t_Euler *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isSpacecraftBodyRate());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Euler_rateFrameIsA(t_Euler *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.rateFrameIsA());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Euler_setEulerRotSeq(t_Euler *self, PyObject *arg)
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

              static PyObject *t_Euler_setInRotationAngles(t_Euler *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setInRotationAngles(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInRotationAngles", arg);
                return NULL;
              }

              static PyObject *t_Euler_setIndexedRotationAngle(t_Euler *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setIndexedRotationAngle(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIndexedRotationAngle", args);
                return NULL;
              }

              static PyObject *t_Euler_setIndexedRotationRate(t_Euler *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setIndexedRotationRate(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIndexedRotationRate", args);
                return NULL;
              }

              static PyObject *t_Euler_setLabeledRotationAngle(t_Euler *self, PyObject *args)
              {
                jchar a0;
                jdouble a1;

                if (!parseArgs(args, "CD", &a0, &a1))
                {
                  OBJ_CALL(self->object.setLabeledRotationAngle(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setLabeledRotationAngle", args);
                return NULL;
              }

              static PyObject *t_Euler_setLabeledRotationRate(t_Euler *self, PyObject *args)
              {
                jchar a0;
                jdouble a1;

                if (!parseArgs(args, "CD", &a0, &a1))
                {
                  OBJ_CALL(self->object.setLabeledRotationRate(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setLabeledRotationRate", args);
                return NULL;
              }

              static PyObject *t_Euler_setRateFrameIsA(t_Euler *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setRateFrameIsA(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateFrameIsA", arg);
                return NULL;
              }

              static PyObject *t_Euler_validate(t_Euler *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(Euler), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_Euler_get__endpoints(t_Euler *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_Euler_get__eulerRotSeq(t_Euler *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(value);
              }
              static int t_Euler_set__eulerRotSeq(t_Euler *self, PyObject *arg, void *data)
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

              static int t_Euler_set__inRotationAngles(t_Euler *self, PyObject *arg, void *data)
              {
                {
                  jboolean value;
                  if (!parseArg(arg, "Z", &value))
                  {
                    INT_CALL(self->object.setInRotationAngles(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "inRotationAngles", arg);
                return -1;
              }

              static PyObject *t_Euler_get__rotationAngles(t_Euler *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getRotationAngles());
                return value.wrap();
              }

              static PyObject *t_Euler_get__rotationRates(t_Euler *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getRotationRates());
                return value.wrap();
              }

              static PyObject *t_Euler_get__spacecraftBodyRate(t_Euler *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isSpacecraftBodyRate());
                Py_RETURN_BOOL(value);
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
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {

    ::java::lang::Class *FieldElement::class$ = NULL;
    jmethodID *FieldElement::mids$ = NULL;
    bool FieldElement::live$ = false;

    jclass FieldElement::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("org/hipparchus/FieldElement");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_6c107bef87eef23a] = env->getMethodID(cls, "add", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_divide_6c107bef87eef23a] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
        mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
        mids$[mid_isZero_eee3de00fe971136] = env->getMethodID(cls, "isZero", "()Z");
        mids$[mid_multiply_bae57aba20797b29] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_multiply_6c107bef87eef23a] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_negate_f6328613456309a1] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_reciprocal_f6328613456309a1] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_subtract_6c107bef87eef23a] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FieldElement FieldElement::add(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_add_6c107bef87eef23a], a0.this$));
    }

    FieldElement FieldElement::divide(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_divide_6c107bef87eef23a], a0.this$));
    }

    ::org::hipparchus::Field FieldElement::getField() const
    {
      return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
    }

    jdouble FieldElement::getReal() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
    }

    jboolean FieldElement::isZero() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isZero_eee3de00fe971136]);
    }

    FieldElement FieldElement::multiply(jint a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_multiply_bae57aba20797b29], a0));
    }

    FieldElement FieldElement::multiply(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_multiply_6c107bef87eef23a], a0.this$));
    }

    FieldElement FieldElement::negate() const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_negate_f6328613456309a1]));
    }

    FieldElement FieldElement::reciprocal() const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_reciprocal_f6328613456309a1]));
    }

    FieldElement FieldElement::subtract(const FieldElement & a0) const
    {
      return FieldElement(env->callObjectMethod(this$, mids$[mid_subtract_6c107bef87eef23a], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    static PyObject *t_FieldElement_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FieldElement_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FieldElement_of_(t_FieldElement *self, PyObject *args);
    static PyObject *t_FieldElement_add(t_FieldElement *self, PyObject *arg);
    static PyObject *t_FieldElement_divide(t_FieldElement *self, PyObject *arg);
    static PyObject *t_FieldElement_getField(t_FieldElement *self);
    static PyObject *t_FieldElement_getReal(t_FieldElement *self);
    static PyObject *t_FieldElement_isZero(t_FieldElement *self);
    static PyObject *t_FieldElement_multiply(t_FieldElement *self, PyObject *args);
    static PyObject *t_FieldElement_negate(t_FieldElement *self);
    static PyObject *t_FieldElement_reciprocal(t_FieldElement *self);
    static PyObject *t_FieldElement_subtract(t_FieldElement *self, PyObject *arg);
    static PyObject *t_FieldElement_get__field(t_FieldElement *self, void *data);
    static PyObject *t_FieldElement_get__real(t_FieldElement *self, void *data);
    static PyObject *t_FieldElement_get__zero(t_FieldElement *self, void *data);
    static PyObject *t_FieldElement_get__parameters_(t_FieldElement *self, void *data);
    static PyGetSetDef t_FieldElement__fields_[] = {
      DECLARE_GET_FIELD(t_FieldElement, field),
      DECLARE_GET_FIELD(t_FieldElement, real),
      DECLARE_GET_FIELD(t_FieldElement, zero),
      DECLARE_GET_FIELD(t_FieldElement, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_FieldElement__methods_[] = {
      DECLARE_METHOD(t_FieldElement, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FieldElement, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FieldElement, of_, METH_VARARGS),
      DECLARE_METHOD(t_FieldElement, add, METH_O),
      DECLARE_METHOD(t_FieldElement, divide, METH_O),
      DECLARE_METHOD(t_FieldElement, getField, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, getReal, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, isZero, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, multiply, METH_VARARGS),
      DECLARE_METHOD(t_FieldElement, negate, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, reciprocal, METH_NOARGS),
      DECLARE_METHOD(t_FieldElement, subtract, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FieldElement)[] = {
      { Py_tp_methods, t_FieldElement__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_FieldElement__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FieldElement)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(FieldElement, t_FieldElement, FieldElement);
    PyObject *t_FieldElement::wrap_Object(const FieldElement& object, PyTypeObject *p0)
    {
      PyObject *obj = t_FieldElement::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_FieldElement *self = (t_FieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_FieldElement::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_FieldElement::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_FieldElement *self = (t_FieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_FieldElement::install(PyObject *module)
    {
      installType(&PY_TYPE(FieldElement), &PY_TYPE_DEF(FieldElement), module, "FieldElement", 0);
    }

    void t_FieldElement::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElement), "class_", make_descriptor(FieldElement::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElement), "wrapfn_", make_descriptor(t_FieldElement::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElement), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FieldElement_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FieldElement::initializeClass, 1)))
        return NULL;
      return t_FieldElement::wrap_Object(FieldElement(((t_FieldElement *) arg)->object.this$));
    }
    static PyObject *t_FieldElement_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FieldElement::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_FieldElement_of_(t_FieldElement *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_FieldElement_add(t_FieldElement *self, PyObject *arg)
    {
      FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.add(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "add", arg);
      return NULL;
    }

    static PyObject *t_FieldElement_divide(t_FieldElement *self, PyObject *arg)
    {
      FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.divide(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "divide", arg);
      return NULL;
    }

    static PyObject *t_FieldElement_getField(t_FieldElement *self)
    {
      ::org::hipparchus::Field result((jobject) NULL);
      OBJ_CALL(result = self->object.getField());
      return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_FieldElement_getReal(t_FieldElement *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getReal());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_FieldElement_isZero(t_FieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isZero());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_FieldElement_multiply(t_FieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          FieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.multiply(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
          }
        }
        {
          FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.multiply(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "multiply", args);
      return NULL;
    }

    static PyObject *t_FieldElement_negate(t_FieldElement *self)
    {
      FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.negate());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_FieldElement_reciprocal(t_FieldElement *self)
    {
      FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.reciprocal());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_FieldElement_subtract(t_FieldElement *self, PyObject *arg)
    {
      FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", FieldElement::initializeClass, &a0, &p0, t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.subtract(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "subtract", arg);
      return NULL;
    }
    static PyObject *t_FieldElement_get__parameters_(t_FieldElement *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_FieldElement_get__field(t_FieldElement *self, void *data)
    {
      ::org::hipparchus::Field value((jobject) NULL);
      OBJ_CALL(value = self->object.getField());
      return ::org::hipparchus::t_Field::wrap_Object(value);
    }

    static PyObject *t_FieldElement_get__real(t_FieldElement *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getReal());
      return PyFloat_FromDouble((double) value);
    }

    static PyObject *t_FieldElement_get__zero(t_FieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isZero());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AggregateBoundedPropagator.h"
#include "java/util/NavigableMap.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AggregateBoundedPropagator::class$ = NULL;
        jmethodID *AggregateBoundedPropagator::mids$ = NULL;
        bool AggregateBoundedPropagator::live$ = false;

        jclass AggregateBoundedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AggregateBoundedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_82af91bc8dfb5029] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
            mids$[mid_init$_9c250f9254b2120c] = env->getMethodID(cls, "<init>", "(Ljava/util/NavigableMap;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getInitialState_8fbfa58855031235] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getPVCoordinates_6236a35378ed47a5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getPropagators_93ffcad6c2bfa505] = env->getMethodID(cls, "getPropagators", "()Ljava/util/NavigableMap;");
            mids$[mid_resetInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getMass_209f08246d708042] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_propagateOrbit_776cca2e85dfe61d] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_basicPropagate_1e982279849c3b65] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_resetIntermediateState_b69b5541e48d21c0] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AggregateBoundedPropagator::AggregateBoundedPropagator(const ::java::util::Collection & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_82af91bc8dfb5029, a0.this$)) {}

        AggregateBoundedPropagator::AggregateBoundedPropagator(const ::java::util::NavigableMap & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_9c250f9254b2120c, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::propagation::SpacecraftState AggregateBoundedPropagator::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_8fbfa58855031235]));
        }

        ::org::orekit::time::AbsoluteDate AggregateBoundedPropagator::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate AggregateBoundedPropagator::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates AggregateBoundedPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_6236a35378ed47a5], a0.this$, a1.this$));
        }

        ::java::util::NavigableMap AggregateBoundedPropagator::getPropagators() const
        {
          return ::java::util::NavigableMap(env->callObjectMethod(this$, mids$[mid_getPropagators_93ffcad6c2bfa505]));
        }

        void AggregateBoundedPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_72b846eb87f3af9a], a0.this$);
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
        static PyObject *t_AggregateBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AggregateBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AggregateBoundedPropagator_init_(t_AggregateBoundedPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AggregateBoundedPropagator_getInitialState(t_AggregateBoundedPropagator *self, PyObject *args);
        static PyObject *t_AggregateBoundedPropagator_getMaxDate(t_AggregateBoundedPropagator *self);
        static PyObject *t_AggregateBoundedPropagator_getMinDate(t_AggregateBoundedPropagator *self);
        static PyObject *t_AggregateBoundedPropagator_getPVCoordinates(t_AggregateBoundedPropagator *self, PyObject *args);
        static PyObject *t_AggregateBoundedPropagator_getPropagators(t_AggregateBoundedPropagator *self);
        static PyObject *t_AggregateBoundedPropagator_resetInitialState(t_AggregateBoundedPropagator *self, PyObject *args);
        static PyObject *t_AggregateBoundedPropagator_get__initialState(t_AggregateBoundedPropagator *self, void *data);
        static PyObject *t_AggregateBoundedPropagator_get__maxDate(t_AggregateBoundedPropagator *self, void *data);
        static PyObject *t_AggregateBoundedPropagator_get__minDate(t_AggregateBoundedPropagator *self, void *data);
        static PyObject *t_AggregateBoundedPropagator_get__propagators(t_AggregateBoundedPropagator *self, void *data);
        static PyGetSetDef t_AggregateBoundedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, initialState),
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, maxDate),
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, minDate),
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, propagators),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AggregateBoundedPropagator__methods_[] = {
          DECLARE_METHOD(t_AggregateBoundedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getPropagators, METH_NOARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AggregateBoundedPropagator)[] = {
          { Py_tp_methods, t_AggregateBoundedPropagator__methods_ },
          { Py_tp_init, (void *) t_AggregateBoundedPropagator_init_ },
          { Py_tp_getset, t_AggregateBoundedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AggregateBoundedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(AggregateBoundedPropagator, t_AggregateBoundedPropagator, AggregateBoundedPropagator);

        void t_AggregateBoundedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AggregateBoundedPropagator), &PY_TYPE_DEF(AggregateBoundedPropagator), module, "AggregateBoundedPropagator", 0);
        }

        void t_AggregateBoundedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedPropagator), "class_", make_descriptor(AggregateBoundedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedPropagator), "wrapfn_", make_descriptor(t_AggregateBoundedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AggregateBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AggregateBoundedPropagator::initializeClass, 1)))
            return NULL;
          return t_AggregateBoundedPropagator::wrap_Object(AggregateBoundedPropagator(((t_AggregateBoundedPropagator *) arg)->object.this$));
        }
        static PyObject *t_AggregateBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AggregateBoundedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AggregateBoundedPropagator_init_(t_AggregateBoundedPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              AggregateBoundedPropagator object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                INT_CALL(object = AggregateBoundedPropagator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::util::NavigableMap a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              AggregateBoundedPropagator object((jobject) NULL);

              if (!parseArgs(args, "Kkk", ::java::util::NavigableMap::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_NavigableMap::parameters_, &a1, &a2))
              {
                INT_CALL(object = AggregateBoundedPropagator(a0, a1, a2));
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

        static PyObject *t_AggregateBoundedPropagator_getInitialState(t_AggregateBoundedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AggregateBoundedPropagator), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_AggregateBoundedPropagator_getMaxDate(t_AggregateBoundedPropagator *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AggregateBoundedPropagator_getMinDate(t_AggregateBoundedPropagator *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AggregateBoundedPropagator_getPVCoordinates(t_AggregateBoundedPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AggregateBoundedPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_AggregateBoundedPropagator_getPropagators(t_AggregateBoundedPropagator *self)
        {
          ::java::util::NavigableMap result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagators());
          return ::java::util::t_NavigableMap::wrap_Object(result);
        }

        static PyObject *t_AggregateBoundedPropagator_resetInitialState(t_AggregateBoundedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AggregateBoundedPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_AggregateBoundedPropagator_get__initialState(t_AggregateBoundedPropagator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_AggregateBoundedPropagator_get__maxDate(t_AggregateBoundedPropagator *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AggregateBoundedPropagator_get__minDate(t_AggregateBoundedPropagator *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AggregateBoundedPropagator_get__propagators(t_AggregateBoundedPropagator *self, void *data)
        {
          ::java::util::NavigableMap value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagators());
          return ::java::util::t_NavigableMap::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/MessagesParser.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *Type::class$ = NULL;
          jmethodID *Type::mids$ = NULL;
          bool Type::live$ = false;
          Type *Type::IGS_SSR = NULL;
          Type *Type::RTCM = NULL;

          jclass Type::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/Type");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParser_805561d5fb16cbab] = env->getMethodID(cls, "getParser", "(Ljava/util/List;)Lorg/orekit/gnss/metric/parser/MessagesParser;");
              mids$[mid_valueOf_c99d05fb84f7a8ae] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/Type;");
              mids$[mid_values_cf9dcd25953da753] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/Type;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IGS_SSR = new Type(env->getStaticObjectField(cls, "IGS_SSR", "Lorg/orekit/gnss/metric/ntrip/Type;"));
              RTCM = new Type(env->getStaticObjectField(cls, "RTCM", "Lorg/orekit/gnss/metric/ntrip/Type;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::gnss::metric::parser::MessagesParser Type::getParser(const ::java::util::List & a0) const
          {
            return ::org::orekit::gnss::metric::parser::MessagesParser(env->callObjectMethod(this$, mids$[mid_getParser_805561d5fb16cbab], a0.this$));
          }

          Type Type::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Type(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c99d05fb84f7a8ae], a0.this$));
          }

          JArray< Type > Type::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< Type >(env->callStaticObjectMethod(cls, mids$[mid_values_cf9dcd25953da753]));
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
          static PyObject *t_Type_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Type_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Type_of_(t_Type *self, PyObject *args);
          static PyObject *t_Type_getParser(t_Type *self, PyObject *arg);
          static PyObject *t_Type_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_Type_values(PyTypeObject *type);
          static PyObject *t_Type_get__parameters_(t_Type *self, void *data);
          static PyGetSetDef t_Type__fields_[] = {
            DECLARE_GET_FIELD(t_Type, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Type__methods_[] = {
            DECLARE_METHOD(t_Type, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Type, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Type, of_, METH_VARARGS),
            DECLARE_METHOD(t_Type, getParser, METH_O),
            DECLARE_METHOD(t_Type, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Type, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Type)[] = {
            { Py_tp_methods, t_Type__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Type__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Type)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(Type, t_Type, Type);
          PyObject *t_Type::wrap_Object(const Type& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Type::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Type *self = (t_Type *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Type::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Type::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Type *self = (t_Type *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Type::install(PyObject *module)
          {
            installType(&PY_TYPE(Type), &PY_TYPE_DEF(Type), module, "Type", 0);
          }

          void t_Type::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "class_", make_descriptor(Type::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "wrapfn_", make_descriptor(t_Type::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "boxfn_", make_descriptor(boxObject));
            env->getClass(Type::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "IGS_SSR", make_descriptor(t_Type::wrap_Object(*Type::IGS_SSR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "RTCM", make_descriptor(t_Type::wrap_Object(*Type::RTCM)));
          }

          static PyObject *t_Type_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Type::initializeClass, 1)))
              return NULL;
            return t_Type::wrap_Object(Type(((t_Type *) arg)->object.this$));
          }
          static PyObject *t_Type_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Type::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Type_of_(t_Type *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Type_getParser(t_Type *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::metric::parser::MessagesParser result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.getParser(a0));
              return ::org::orekit::gnss::metric::parser::t_MessagesParser::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getParser", arg);
            return NULL;
          }

          static PyObject *t_Type_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            Type result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Type::valueOf(a0));
              return t_Type::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_Type_values(PyTypeObject *type)
          {
            JArray< Type > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Type::values());
            return JArray<jobject>(result.this$).wrap(t_Type::wrap_jobject);
          }
          static PyObject *t_Type_get__parameters_(t_Type *self, void *data)
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
#include "org/orekit/bodies/PythonIAUPole.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/IAUPole.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonIAUPole::class$ = NULL;
      jmethodID *PythonIAUPole::mids$ = NULL;
      bool PythonIAUPole::live$ = false;

      jclass PythonIAUPole::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonIAUPole");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getNode_8b37cafaaf55a3a5] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNode_8e5aead0a4b0cc16] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPole_8b37cafaaf55a3a5] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPole_8e5aead0a4b0cc16] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPrimeMeridianAngle_209f08246d708042] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getPrimeMeridianAngle_cf010978f3c5a913] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonIAUPole::PythonIAUPole() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonIAUPole::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonIAUPole::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonIAUPole::pythonExtension(jlong a0) const
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
    namespace bodies {
      static PyObject *t_PythonIAUPole_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonIAUPole_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonIAUPole_init_(t_PythonIAUPole *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonIAUPole_finalize(t_PythonIAUPole *self);
      static PyObject *t_PythonIAUPole_pythonExtension(t_PythonIAUPole *self, PyObject *args);
      static jobject JNICALL t_PythonIAUPole_getNode0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getNode1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getPole2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getPole3(JNIEnv *jenv, jobject jobj, jobject a0);
      static jdouble JNICALL t_PythonIAUPole_getPrimeMeridianAngle4(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonIAUPole_getPrimeMeridianAngle5(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonIAUPole_pythonDecRef6(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonIAUPole_get__self(t_PythonIAUPole *self, void *data);
      static PyGetSetDef t_PythonIAUPole__fields_[] = {
        DECLARE_GET_FIELD(t_PythonIAUPole, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonIAUPole__methods_[] = {
        DECLARE_METHOD(t_PythonIAUPole, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonIAUPole, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonIAUPole, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonIAUPole, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonIAUPole)[] = {
        { Py_tp_methods, t_PythonIAUPole__methods_ },
        { Py_tp_init, (void *) t_PythonIAUPole_init_ },
        { Py_tp_getset, t_PythonIAUPole__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonIAUPole)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonIAUPole, t_PythonIAUPole, PythonIAUPole);

      void t_PythonIAUPole::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonIAUPole), &PY_TYPE_DEF(PythonIAUPole), module, "PythonIAUPole", 1);
      }

      void t_PythonIAUPole::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIAUPole), "class_", make_descriptor(PythonIAUPole::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIAUPole), "wrapfn_", make_descriptor(t_PythonIAUPole::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIAUPole), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonIAUPole::initializeClass);
        JNINativeMethod methods[] = {
          { "getNode", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonIAUPole_getNode0 },
          { "getNode", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonIAUPole_getNode1 },
          { "getPole", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonIAUPole_getPole2 },
          { "getPole", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonIAUPole_getPole3 },
          { "getPrimeMeridianAngle", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonIAUPole_getPrimeMeridianAngle4 },
          { "getPrimeMeridianAngle", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonIAUPole_getPrimeMeridianAngle5 },
          { "pythonDecRef", "()V", (void *) t_PythonIAUPole_pythonDecRef6 },
        };
        env->registerNatives(cls, methods, 7);
      }

      static PyObject *t_PythonIAUPole_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonIAUPole::initializeClass, 1)))
          return NULL;
        return t_PythonIAUPole::wrap_Object(PythonIAUPole(((t_PythonIAUPole *) arg)->object.this$));
      }
      static PyObject *t_PythonIAUPole_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonIAUPole::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonIAUPole_init_(t_PythonIAUPole *self, PyObject *args, PyObject *kwds)
      {
        PythonIAUPole object((jobject) NULL);

        INT_CALL(object = PythonIAUPole());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonIAUPole_finalize(t_PythonIAUPole *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonIAUPole_pythonExtension(t_PythonIAUPole *self, PyObject *args)
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

      static jobject JNICALL t_PythonIAUPole_getNode0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNode", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("getNode", result);
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

      static jobject JNICALL t_PythonIAUPole_getNode1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNode", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("getNode", result);
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

      static jobject JNICALL t_PythonIAUPole_getPole2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPole", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("getPole", result);
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

      static jobject JNICALL t_PythonIAUPole_getPole3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPole", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("getPole", result);
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

      static jdouble JNICALL t_PythonIAUPole_getPrimeMeridianAngle4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPrimeMeridianAngle", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getPrimeMeridianAngle", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonIAUPole_getPrimeMeridianAngle5(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getPrimeMeridianAngle", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("getPrimeMeridianAngle", result);
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

      static void JNICALL t_PythonIAUPole_pythonDecRef6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonIAUPole::mids$[PythonIAUPole::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonIAUPole_get__self(t_PythonIAUPole *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *FieldVector3D::class$ = NULL;
          jmethodID *FieldVector3D::mids$ = NULL;
          bool FieldVector3D::live$ = false;

          jclass FieldVector3D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/FieldVector3D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e61a645c496adc] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_2547c8b008203199] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_2ca3d0f9cc0458ff] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_cbbe0ea7153e8243] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_c528a40acb311d63] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_bab44dcbad09a0fe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_f9ea60a8dc2d69fb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_53eb1eaa7d486337] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_fbdfce0abbc6ec97] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_715ae0b53a545e50] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_7f36d00502b1a411] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_3600fc826b0bf516] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_5e5f436da030f07b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_3dc52d8ed8f08220] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_a33657dd2c7fdf46] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_37bd77cc55bb6394] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_add_df37e4d755ff0467] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_f577b57448bfefd2] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_285bb51f11eca050] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_b202d3872c3dcaec] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_9c9f11b7c428777c] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_749028f45aac6597] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_angle_76ae169de4d66af2] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_78466cd3f373c8f1] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_7c8d4944669ef839] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_blendArithmeticallyWith_5f54bfbc5ca211f5] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_df37e4d755ff0467] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_f577b57448bfefd2] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_1b84772486fb83f9] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_21f6734482fee228] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_5857e16b641c47d0] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_distance_aa19eca086a185fe] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_1cfc77d18e0355ee] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_76ae169de4d66af2] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_7c8d4944669ef839] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_78466cd3f373c8f1] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_aa19eca086a185fe] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_1cfc77d18e0355ee] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_76ae169de4d66af2] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_78466cd3f373c8f1] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_7c8d4944669ef839] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_aa19eca086a185fe] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_1cfc77d18e0355ee] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_76ae169de4d66af2] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_78466cd3f373c8f1] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_7c8d4944669ef839] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_aa19eca086a185fe] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_1cfc77d18e0355ee] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_76ae169de4d66af2] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_78466cd3f373c8f1] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_7c8d4944669ef839] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_aa19eca086a185fe] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_1cfc77d18e0355ee] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_76ae169de4d66af2] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_7c8d4944669ef839] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_78466cd3f373c8f1] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getAlpha_08d37e3f77b7239d] = env->getMethodID(cls, "getAlpha", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDelta_08d37e3f77b7239d] = env->getMethodID(cls, "getDelta", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMinusI_10f9413c61ea347a] = env->getStaticMethodID(cls, "getMinusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getMinusJ_10f9413c61ea347a] = env->getStaticMethodID(cls, "getMinusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getMinusK_10f9413c61ea347a] = env->getStaticMethodID(cls, "getMinusK", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getNaN_10f9413c61ea347a] = env->getStaticMethodID(cls, "getNaN", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getNegativeInfinity_10f9413c61ea347a] = env->getStaticMethodID(cls, "getNegativeInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getNorm_08d37e3f77b7239d] = env->getMethodID(cls, "getNorm", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNorm1_08d37e3f77b7239d] = env->getMethodID(cls, "getNorm1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormInf_08d37e3f77b7239d] = env->getMethodID(cls, "getNormInf", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormSq_08d37e3f77b7239d] = env->getMethodID(cls, "getNormSq", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getPlusI_10f9413c61ea347a] = env->getStaticMethodID(cls, "getPlusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getPlusJ_10f9413c61ea347a] = env->getStaticMethodID(cls, "getPlusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getPlusK_10f9413c61ea347a] = env->getStaticMethodID(cls, "getPlusK", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getPositiveInfinity_10f9413c61ea347a] = env->getStaticMethodID(cls, "getPositiveInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getX_08d37e3f77b7239d] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getY_08d37e3f77b7239d] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getZ_08d37e3f77b7239d] = env->getMethodID(cls, "getZ", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getZero_10f9413c61ea347a] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_eee3de00fe971136] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_eee3de00fe971136] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_d1b42a6748e907f9] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_normalize_d1b42a6748e907f9] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_orthogonal_d1b42a6748e907f9] = env->getMethodID(cls, "orthogonal", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_scalarMultiply_9fc2ffdb71a4cfdb] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_scalarMultiply_c2b058e1eb7a8988] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_df37e4d755ff0467] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_f577b57448bfefd2] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_285bb51f11eca050] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_9c9f11b7c428777c] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_b202d3872c3dcaec] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_749028f45aac6597] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_toArray_94ed2e0620f8833d] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_aeac32100fe35ffe] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");
              mids$[mid_toVector3D_032312bdeb3f2f93] = env->getMethodID(cls, "toVector3D", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldVector3D::FieldVector3D(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e61a645c496adc, a0.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2547c8b008203199, a0, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2ca3d0f9cc0458ff, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cbbe0ea7153e8243, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::Field & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c528a40acb311d63, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bab44dcbad09a0fe, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f9ea60a8dc2d69fb, a0.this$, a1.this$, a2.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1, jdouble a2, const FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_53eb1eaa7d486337, a0, a1.this$, a2, a3.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fbdfce0abbc6ec97, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_715ae0b53a545e50, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1, jdouble a2, const FieldVector3D & a3, jdouble a4, const FieldVector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7f36d00502b1a411, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3600fc826b0bf516, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5e5f436da030f07b, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1, jdouble a2, const FieldVector3D & a3, jdouble a4, const FieldVector3D & a5, jdouble a6, const FieldVector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3dc52d8ed8f08220, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector3D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldVector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a33657dd2c7fdf46, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_37bd77cc55bb6394, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector3D FieldVector3D::add(const FieldVector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_df37e4d755ff0467], a0.this$));
          }

          FieldVector3D FieldVector3D::add(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_f577b57448bfefd2], a0.this$));
          }

          FieldVector3D FieldVector3D::add(jdouble a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_285bb51f11eca050], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::add(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_b202d3872c3dcaec], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::add(jdouble a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_9c9f11b7c428777c], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::add(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_749028f45aac6597], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::angle(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_76ae169de4d66af2], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::angle(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_78466cd3f373c8f1], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::angle(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_7c8d4944669ef839], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::blendArithmeticallyWith(const FieldVector3D & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_5f54bfbc5ca211f5], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const FieldVector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_crossProduct_df37e4d755ff0467], a0.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_crossProduct_f577b57448bfefd2], a0.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_1b84772486fb83f9], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_21f6734482fee228], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_5857e16b641c47d0], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_aa19eca086a185fe], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_1cfc77d18e0355ee], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_76ae169de4d66af2], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_7c8d4944669ef839], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_78466cd3f373c8f1], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_aa19eca086a185fe], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_1cfc77d18e0355ee], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_76ae169de4d66af2], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_78466cd3f373c8f1], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_7c8d4944669ef839], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_aa19eca086a185fe], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_1cfc77d18e0355ee], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_76ae169de4d66af2], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_78466cd3f373c8f1], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_7c8d4944669ef839], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_aa19eca086a185fe], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_1cfc77d18e0355ee], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_76ae169de4d66af2], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_78466cd3f373c8f1], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_7c8d4944669ef839], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_aa19eca086a185fe], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_1cfc77d18e0355ee], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_dotProduct_76ae169de4d66af2], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_dotProduct_7c8d4944669ef839], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_dotProduct_78466cd3f373c8f1], a0.this$, a1.this$));
          }

          jboolean FieldVector3D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getAlpha() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getDelta() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDelta_08d37e3f77b7239d]));
          }

          FieldVector3D FieldVector3D::getMinusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getMinusI_10f9413c61ea347a], a0.this$));
          }

          FieldVector3D FieldVector3D::getMinusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getMinusJ_10f9413c61ea347a], a0.this$));
          }

          FieldVector3D FieldVector3D::getMinusK(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getMinusK_10f9413c61ea347a], a0.this$));
          }

          FieldVector3D FieldVector3D::getNaN(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getNaN_10f9413c61ea347a], a0.this$));
          }

          FieldVector3D FieldVector3D::getNegativeInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getNegativeInfinity_10f9413c61ea347a], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNorm() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNorm1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm1_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNormInf() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormInf_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNormSq() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormSq_08d37e3f77b7239d]));
          }

          FieldVector3D FieldVector3D::getPlusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPlusI_10f9413c61ea347a], a0.this$));
          }

          FieldVector3D FieldVector3D::getPlusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPlusJ_10f9413c61ea347a], a0.this$));
          }

          FieldVector3D FieldVector3D::getPlusK(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPlusK_10f9413c61ea347a], a0.this$));
          }

          FieldVector3D FieldVector3D::getPositiveInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPositiveInfinity_10f9413c61ea347a], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getX() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getY() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getY_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getZ() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getZ_08d37e3f77b7239d]));
          }

          FieldVector3D FieldVector3D::getZero(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getZero_10f9413c61ea347a], a0.this$));
          }

          jint FieldVector3D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
          }

          jboolean FieldVector3D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_eee3de00fe971136]);
          }

          jboolean FieldVector3D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_eee3de00fe971136]);
          }

          FieldVector3D FieldVector3D::negate() const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_negate_d1b42a6748e907f9]));
          }

          FieldVector3D FieldVector3D::normalize() const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_normalize_d1b42a6748e907f9]));
          }

          FieldVector3D FieldVector3D::orthogonal() const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_orthogonal_d1b42a6748e907f9]));
          }

          FieldVector3D FieldVector3D::scalarMultiply(jdouble a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_9fc2ffdb71a4cfdb], a0));
          }

          FieldVector3D FieldVector3D::scalarMultiply(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_c2b058e1eb7a8988], a0.this$));
          }

          FieldVector3D FieldVector3D::subtract(const FieldVector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_df37e4d755ff0467], a0.this$));
          }

          FieldVector3D FieldVector3D::subtract(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_f577b57448bfefd2], a0.this$));
          }

          FieldVector3D FieldVector3D::subtract(jdouble a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_285bb51f11eca050], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::subtract(jdouble a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_9c9f11b7c428777c], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_b202d3872c3dcaec], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_749028f45aac6597], a0.this$, a1.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > FieldVector3D::toArray() const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_94ed2e0620f8833d]));
          }

          ::java::lang::String FieldVector3D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
          }

          ::java::lang::String FieldVector3D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_aeac32100fe35ffe], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D FieldVector3D::toVector3D() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toVector3D_032312bdeb3f2f93]));
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
          static PyObject *t_FieldVector3D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_of_(t_FieldVector3D *self, PyObject *args);
          static int t_FieldVector3D_init_(t_FieldVector3D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldVector3D_add(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_blendArithmeticallyWith(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_crossProduct(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_crossProduct_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distance(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distance1(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distanceInf(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distanceSq(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_dotProduct(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_dotProduct_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_equals(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_getAlpha(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getDelta(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getMinusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getMinusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getMinusK(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getNaN(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getNegativeInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getNorm(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getNorm1(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getNormInf(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getNormSq(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getPlusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getPlusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getPlusK(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getPositiveInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getX(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getY(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getZ(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getZero(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_hashCode(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_isInfinite(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_isNaN(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_negate(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_normalize(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_orthogonal(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_scalarMultiply(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_subtract(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_toArray(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_toString(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_toVector3D(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_get__alpha(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__delta(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__infinite(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__naN(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__norm(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__norm1(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__normInf(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__normSq(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__x(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__y(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__z(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__parameters_(t_FieldVector3D *self, void *data);
          static PyGetSetDef t_FieldVector3D__fields_[] = {
            DECLARE_GET_FIELD(t_FieldVector3D, alpha),
            DECLARE_GET_FIELD(t_FieldVector3D, delta),
            DECLARE_GET_FIELD(t_FieldVector3D, infinite),
            DECLARE_GET_FIELD(t_FieldVector3D, naN),
            DECLARE_GET_FIELD(t_FieldVector3D, norm),
            DECLARE_GET_FIELD(t_FieldVector3D, norm1),
            DECLARE_GET_FIELD(t_FieldVector3D, normInf),
            DECLARE_GET_FIELD(t_FieldVector3D, normSq),
            DECLARE_GET_FIELD(t_FieldVector3D, x),
            DECLARE_GET_FIELD(t_FieldVector3D, y),
            DECLARE_GET_FIELD(t_FieldVector3D, z),
            DECLARE_GET_FIELD(t_FieldVector3D, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldVector3D__methods_[] = {
            DECLARE_METHOD(t_FieldVector3D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, add, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, blendArithmeticallyWith, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, crossProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, crossProduct_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distance, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distance1, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distanceInf, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distanceSq, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, dotProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, dotProduct_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, equals, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getDelta, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getMinusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getMinusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getMinusK, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getNaN, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getNegativeInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getPlusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getPlusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getPlusK, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getPositiveInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getX, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getY, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getZ, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getZero, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, negate, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, normalize, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, orthogonal, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, scalarMultiply, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, toString, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, toVector3D, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldVector3D)[] = {
            { Py_tp_methods, t_FieldVector3D__methods_ },
            { Py_tp_init, (void *) t_FieldVector3D_init_ },
            { Py_tp_getset, t_FieldVector3D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldVector3D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldVector3D, t_FieldVector3D, FieldVector3D);
          PyObject *t_FieldVector3D::wrap_Object(const FieldVector3D& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector3D::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector3D *self = (t_FieldVector3D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldVector3D::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector3D::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector3D *self = (t_FieldVector3D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldVector3D::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldVector3D), &PY_TYPE_DEF(FieldVector3D), module, "FieldVector3D", 0);
          }

          void t_FieldVector3D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector3D), "class_", make_descriptor(FieldVector3D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector3D), "wrapfn_", make_descriptor(t_FieldVector3D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector3D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldVector3D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldVector3D::initializeClass, 1)))
              return NULL;
            return t_FieldVector3D::wrap_Object(FieldVector3D(((t_FieldVector3D *) arg)->object.this$));
          }
          static PyObject *t_FieldVector3D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldVector3D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldVector3D_of_(t_FieldVector3D *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldVector3D_init_(t_FieldVector3D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
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
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DKDK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_, &a2, &a3, &p3, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_, &a2, &a3, &p3, t_FieldVector3D::parameters_, &a4, &a5, &p5, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                jdouble a6;
                FieldVector3D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDKDK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_, &a2, &a3, &p3, t_FieldVector3D::parameters_, &a4, &a5, &p5, t_FieldVector3D::parameters_, &a6, &a7, &p7, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                FieldVector3D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector3D::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a7((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_FieldVector3D_add(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_angle(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::angle(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_blendArithmeticallyWith(t_FieldVector3D *self, PyObject *args)
          {
            FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KK", FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
              return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_crossProduct(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_crossProduct_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::crossProduct(a0, a1));
                  return t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::crossProduct(a0, a1));
                  return t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::crossProduct(a0, a1));
                  return t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "crossProduct_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance1(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance1_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance1(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceInf(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceInf(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceSq(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceSq(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_dotProduct(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_dotProduct_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::dotProduct(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::dotProduct(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::dotProduct(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "dotProduct_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_equals(t_FieldVector3D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(FieldVector3D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_FieldVector3D_getAlpha(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getDelta(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getDelta());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getMinusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getMinusI(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getMinusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getMinusJ(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getMinusK(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getMinusK(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusK", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getNaN(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getNaN(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNaN", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getNegativeInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getNegativeInfinity(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNegativeInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getNorm(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getNorm1(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getNormInf(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormInf());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getNormSq(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormSq());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getPlusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPlusI(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getPlusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPlusJ(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getPlusK(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPlusK(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusK", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getPositiveInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPositiveInfinity(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPositiveInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getX(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getX());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getY(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getY());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getZ(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getZ());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getZero(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getZero(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getZero", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_hashCode(t_FieldVector3D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(FieldVector3D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_FieldVector3D_isInfinite(t_FieldVector3D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector3D_isNaN(t_FieldVector3D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector3D_negate(t_FieldVector3D *self)
          {
            FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector3D_normalize(t_FieldVector3D *self)
          {
            FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.normalize());
            return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector3D_orthogonal(t_FieldVector3D *self)
          {
            FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.orthogonal());
            return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector3D_scalarMultiply(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_subtract(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_toArray(t_FieldVector3D *self)
          {
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          static PyObject *t_FieldVector3D_toString(t_FieldVector3D *self, PyObject *args)
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
                ::java::text::NumberFormat a0((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.toString(a0));
                  return j2p(result);
                }
              }
            }

            return callSuper(PY_TYPE(FieldVector3D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_FieldVector3D_toVector3D(t_FieldVector3D *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.toVector3D());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }
          static PyObject *t_FieldVector3D_get__parameters_(t_FieldVector3D *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldVector3D_get__alpha(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__delta(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getDelta());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__infinite(t_FieldVector3D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector3D_get__naN(t_FieldVector3D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector3D_get__norm(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__norm1(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm1());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__normInf(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormInf());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__normSq(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormSq());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__x(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getX());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__y(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getY());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__z(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getZ());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
