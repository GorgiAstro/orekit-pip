#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Predefined.h"
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
          mids$[mid_init$_219496355e171e8f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;ZLorg/orekit/frames/Predefined;)V");
          mids$[mid_getFactoryKey_5ae22bbea6c8ca9b] = env->getMethodID(cls, "getFactoryKey", "()Lorg/orekit/frames/Predefined;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FactoryManagedFrame::FactoryManagedFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::TransformProvider & a1, jboolean a2, const ::org::orekit::frames::Predefined & a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_219496355e171e8f, a0.this$, a1.this$, a2, a3.this$)) {}

      ::org::orekit::frames::Predefined FactoryManagedFrame::getFactoryKey() const
      {
        return ::org::orekit::frames::Predefined(env->callObjectMethod(this$, mids$[mid_getFactoryKey_5ae22bbea6c8ca9b]));
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
#include "org/orekit/propagation/AbstractPropagator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AbstractPropagator::class$ = NULL;
      jmethodID *AbstractPropagator::mids$ = NULL;
      bool AbstractPropagator::live$ = false;

      jclass AbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_8af102d28e19f725] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_getAdditionalStateProviders_0d9551367f7ecdef] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_6df6b78ab9377151] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_15e85d5301b90ef8] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_5d7d8c500345981d] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_82f3fa0ddb2ba923] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_17742a9a6655bdb1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_fd2162b8a05a22fe] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_15e0d02372b1347b] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_resetInitialState_8655761ebf04b503] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setupMatricesComputation_31c2066d459d0537] = env->getMethodID(cls, "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;");
          mids$[mid_setStartDate_20affcbd28542333] = env->getMethodID(cls, "setStartDate", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_createHarvester_5f0409a66c29e9c1] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
          mids$[mid_updateAdditionalStates_2c4cc16b11f79a6c] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_initializePropagation_0640e6acf969ed28] = env->getMethodID(cls, "initializePropagation", "()V");
          mids$[mid_initializeAdditionalStates_20affcbd28542333] = env->getMethodID(cls, "initializeAdditionalStates", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_updateUnmanagedStates_2c4cc16b11f79a6c] = env->getMethodID(cls, "updateUnmanagedStates", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getStartDate_7a97f7e149e79afb] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getHarvester_34a1db86ec41ca99] = env->getMethodID(cls, "getHarvester", "()Lorg/orekit/propagation/AbstractMatricesHarvester;");
          mids$[mid_stateChanged_8655761ebf04b503] = env->getMethodID(cls, "stateChanged", "(Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractPropagator::addAdditionalStateProvider(const ::org::orekit::propagation::AdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_8af102d28e19f725], a0.this$);
      }

      ::java::util::List AbstractPropagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_0d9551367f7ecdef]));
      }

      ::org::orekit::attitudes::AttitudeProvider AbstractPropagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_6df6b78ab9377151]));
      }

      ::org::orekit::frames::Frame AbstractPropagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
      }

      ::org::orekit::propagation::SpacecraftState AbstractPropagator::getInitialState() const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_15e85d5301b90ef8]));
      }

      JArray< ::java::lang::String > AbstractPropagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_5d7d8c500345981d]));
      }

      ::org::orekit::propagation::sampling::StepHandlerMultiplexer AbstractPropagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::StepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_82f3fa0ddb2ba923]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbstractPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_17742a9a6655bdb1], a0.this$, a1.this$));
      }

      jboolean AbstractPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_fd2162b8a05a22fe], a0.this$);
      }

      ::org::orekit::propagation::SpacecraftState AbstractPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_15e0d02372b1347b], a0.this$));
      }

      void AbstractPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_8655761ebf04b503], a0.this$);
      }

      void AbstractPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2], a0.this$);
      }

      ::org::orekit::propagation::MatricesHarvester AbstractPropagator::setupMatricesComputation(const ::java::lang::String & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) const
      {
        return ::org::orekit::propagation::MatricesHarvester(env->callObjectMethod(this$, mids$[mid_setupMatricesComputation_31c2066d459d0537], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_AbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractPropagator_addAdditionalStateProvider(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_getAdditionalStateProviders(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getAttitudeProvider(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getFrame(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getInitialState(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getManagedAdditionalStates(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getMultiplexer(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getPVCoordinates(t_AbstractPropagator *self, PyObject *args);
      static PyObject *t_AbstractPropagator_isAdditionalStateManaged(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_propagate(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_resetInitialState(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_setAttitudeProvider(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_setupMatricesComputation(t_AbstractPropagator *self, PyObject *args);
      static PyObject *t_AbstractPropagator_get__additionalStateProviders(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__attitudeProvider(t_AbstractPropagator *self, void *data);
      static int t_AbstractPropagator_set__attitudeProvider(t_AbstractPropagator *self, PyObject *arg, void *data);
      static PyObject *t_AbstractPropagator_get__frame(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__initialState(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__managedAdditionalStates(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__multiplexer(t_AbstractPropagator *self, void *data);
      static PyGetSetDef t_AbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractPropagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_AbstractPropagator, attitudeProvider),
        DECLARE_GET_FIELD(t_AbstractPropagator, frame),
        DECLARE_GET_FIELD(t_AbstractPropagator, initialState),
        DECLARE_GET_FIELD(t_AbstractPropagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_AbstractPropagator, multiplexer),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_AbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractPropagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_AbstractPropagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, propagate, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, setAttitudeProvider, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, setupMatricesComputation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractPropagator)[] = {
        { Py_tp_methods, t_AbstractPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractPropagator, t_AbstractPropagator, AbstractPropagator);

      void t_AbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractPropagator), &PY_TYPE_DEF(AbstractPropagator), module, "AbstractPropagator", 0);
      }

      void t_AbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagator), "class_", make_descriptor(AbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagator), "wrapfn_", make_descriptor(t_AbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_AbstractPropagator::wrap_Object(AbstractPropagator(((t_AbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_AbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractPropagator_addAdditionalStateProvider(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::AdditionalStateProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::AdditionalStateProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addAdditionalStateProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateProvider", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_getAdditionalStateProviders(t_AbstractPropagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(AdditionalStateProvider));
      }

      static PyObject *t_AbstractPropagator_getAttitudeProvider(t_AbstractPropagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getFrame(t_AbstractPropagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getInitialState(t_AbstractPropagator *self)
      {
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getManagedAdditionalStates(t_AbstractPropagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_AbstractPropagator_getMultiplexer(t_AbstractPropagator *self)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getPVCoordinates(t_AbstractPropagator *self, PyObject *args)
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

      static PyObject *t_AbstractPropagator_isAdditionalStateManaged(t_AbstractPropagator *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAdditionalStateManaged", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_propagate(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.propagate(a0));
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_resetInitialState(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.resetInitialState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetInitialState", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_setAttitudeProvider(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setAttitudeProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_setupMatricesComputation(t_AbstractPropagator *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
        ::org::orekit::propagation::MatricesHarvester result((jobject) NULL);

        if (!parseArgs(args, "skk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.setupMatricesComputation(a0, a1, a2));
          return ::org::orekit::propagation::t_MatricesHarvester::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "setupMatricesComputation", args);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_get__additionalStateProviders(t_AbstractPropagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractPropagator_get__attitudeProvider(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_AbstractPropagator_set__attitudeProvider(t_AbstractPropagator *self, PyObject *arg, void *data)
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

      static PyObject *t_AbstractPropagator_get__frame(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbstractPropagator_get__initialState(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
      }

      static PyObject *t_AbstractPropagator_get__managedAdditionalStates(t_AbstractPropagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_AbstractPropagator_get__multiplexer(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStamped::class$ = NULL;
      jmethodID *TimeStamped::mids$ = NULL;
      bool TimeStamped::live$ = false;

      jclass TimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_durationFrom_fe4d52c50affd584] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/TimeStamped;)D");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeStamped::durationFrom(const TimeStamped & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_durationFrom_fe4d52c50affd584], a0.this$);
      }

      ::org::orekit::time::AbsoluteDate TimeStamped::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
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
      static PyObject *t_TimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStamped_durationFrom(t_TimeStamped *self, PyObject *arg);
      static PyObject *t_TimeStamped_getDate(t_TimeStamped *self);
      static PyObject *t_TimeStamped_get__date(t_TimeStamped *self, void *data);
      static PyGetSetDef t_TimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStamped, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStamped__methods_[] = {
        DECLARE_METHOD(t_TimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStamped, durationFrom, METH_O),
        DECLARE_METHOD(t_TimeStamped, getDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStamped)[] = {
        { Py_tp_methods, t_TimeStamped__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStamped, t_TimeStamped, TimeStamped);

      void t_TimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStamped), &PY_TYPE_DEF(TimeStamped), module, "TimeStamped", 0);
      }

      void t_TimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStamped), "class_", make_descriptor(TimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStamped), "wrapfn_", make_descriptor(t_TimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStamped), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStamped::initializeClass, 1)))
          return NULL;
        return t_TimeStamped::wrap_Object(TimeStamped(((t_TimeStamped *) arg)->object.this$));
      }
      static PyObject *t_TimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStamped_durationFrom(t_TimeStamped *self, PyObject *arg)
      {
        TimeStamped a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", TimeStamped::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.durationFrom(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", arg);
        return NULL;
      }

      static PyObject *t_TimeStamped_getDate(t_TimeStamped *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStamped_get__date(t_TimeStamped *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeSpanMap$Transition::class$ = NULL;
      jmethodID *TimeSpanMap$Transition::mids$ = NULL;
      bool TimeSpanMap$Transition::live$ = false;

      jclass TimeSpanMap$Transition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeSpanMap$Transition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAfter_e661fe3ba2fafb22] = env->getMethodID(cls, "getAfter", "()Ljava/lang/Object;");
          mids$[mid_getBefore_e661fe3ba2fafb22] = env->getMethodID(cls, "getBefore", "()Ljava/lang/Object;");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getSpanAfter_2a24ed7b7f6cbca3] = env->getMethodID(cls, "getSpanAfter", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getSpanBefore_2a24ed7b7f6cbca3] = env->getMethodID(cls, "getSpanBefore", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_next_b2de56d896f89501] = env->getMethodID(cls, "next", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_previous_b2de56d896f89501] = env->getMethodID(cls, "previous", "()Lorg/orekit/utils/TimeSpanMap$Transition;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object TimeSpanMap$Transition::getAfter() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAfter_e661fe3ba2fafb22]));
      }

      ::java::lang::Object TimeSpanMap$Transition::getBefore() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getBefore_e661fe3ba2fafb22]));
      }

      ::org::orekit::time::AbsoluteDate TimeSpanMap$Transition::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap$Transition::getSpanAfter() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getSpanAfter_2a24ed7b7f6cbca3]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap$Transition::getSpanBefore() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getSpanBefore_2a24ed7b7f6cbca3]));
      }

      TimeSpanMap$Transition TimeSpanMap$Transition::next() const
      {
        return TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_next_b2de56d896f89501]));
      }

      TimeSpanMap$Transition TimeSpanMap$Transition::previous() const
      {
        return TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_previous_b2de56d896f89501]));
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
      static PyObject *t_TimeSpanMap$Transition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap$Transition_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap$Transition_of_(t_TimeSpanMap$Transition *self, PyObject *args);
      static PyObject *t_TimeSpanMap$Transition_getAfter(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getBefore(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getDate(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getSpanAfter(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getSpanBefore(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_next(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_previous(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_get__after(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__before(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__date(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__spanAfter(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__spanBefore(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__parameters_(t_TimeSpanMap$Transition *self, void *data);
      static PyGetSetDef t_TimeSpanMap$Transition__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, after),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, before),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, date),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, spanAfter),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, spanBefore),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSpanMap$Transition__methods_[] = {
        DECLARE_METHOD(t_TimeSpanMap$Transition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getAfter, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getBefore, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getSpanAfter, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getSpanBefore, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, next, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, previous, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeSpanMap$Transition)[] = {
        { Py_tp_methods, t_TimeSpanMap$Transition__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeSpanMap$Transition__fields_ },
        { Py_tp_iter, (void *) PyObject_SelfIter },
        { Py_tp_iternext, (void *) ((PyObject *(*)(t_TimeSpanMap$Transition *)) get_generic_next< t_TimeSpanMap$Transition,t_TimeSpanMap$Transition,TimeSpanMap$Transition >) },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeSpanMap$Transition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeSpanMap$Transition, t_TimeSpanMap$Transition, TimeSpanMap$Transition);
      PyObject *t_TimeSpanMap$Transition::wrap_Object(const TimeSpanMap$Transition& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap$Transition::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap$Transition *self = (t_TimeSpanMap$Transition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeSpanMap$Transition::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap$Transition::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap$Transition *self = (t_TimeSpanMap$Transition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeSpanMap$Transition::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeSpanMap$Transition), &PY_TYPE_DEF(TimeSpanMap$Transition), module, "TimeSpanMap$Transition", 0);
      }

      void t_TimeSpanMap$Transition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Transition), "class_", make_descriptor(TimeSpanMap$Transition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Transition), "wrapfn_", make_descriptor(t_TimeSpanMap$Transition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Transition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeSpanMap$Transition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeSpanMap$Transition::initializeClass, 1)))
          return NULL;
        return t_TimeSpanMap$Transition::wrap_Object(TimeSpanMap$Transition(((t_TimeSpanMap$Transition *) arg)->object.this$));
      }
      static PyObject *t_TimeSpanMap$Transition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeSpanMap$Transition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeSpanMap$Transition_of_(t_TimeSpanMap$Transition *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeSpanMap$Transition_getAfter(t_TimeSpanMap$Transition *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getAfter());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Transition_getBefore(t_TimeSpanMap$Transition *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getBefore());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Transition_getDate(t_TimeSpanMap$Transition *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Transition_getSpanAfter(t_TimeSpanMap$Transition *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpanAfter());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Transition_getSpanBefore(t_TimeSpanMap$Transition *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpanBefore());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Transition_next(t_TimeSpanMap$Transition *self)
      {
        TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.next());
        return t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Transition_previous(t_TimeSpanMap$Transition *self)
      {
        TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.previous());
        return t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_TimeSpanMap$Transition_get__parameters_(t_TimeSpanMap$Transition *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSpanMap$Transition_get__after(t_TimeSpanMap$Transition *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getAfter());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__before(t_TimeSpanMap$Transition *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getBefore());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__date(t_TimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__spanAfter(t_TimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpanAfter());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__spanBefore(t_TimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpanBefore());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Add.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Add::class$ = NULL;
        jmethodID *Add::mids$ = NULL;
        bool Add::live$ = false;

        jclass Add::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Add");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_2268d18be49a6087] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Add::Add() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Add::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_2268d18be49a6087], a0, a1);
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
        static PyObject *t_Add_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Add_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Add_init_(t_Add *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Add_value(t_Add *self, PyObject *args);

        static PyMethodDef t_Add__methods_[] = {
          DECLARE_METHOD(t_Add, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Add, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Add, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Add)[] = {
          { Py_tp_methods, t_Add__methods_ },
          { Py_tp_init, (void *) t_Add_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Add)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Add, t_Add, Add);

        void t_Add::install(PyObject *module)
        {
          installType(&PY_TYPE(Add), &PY_TYPE_DEF(Add), module, "Add", 0);
        }

        void t_Add::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Add), "class_", make_descriptor(Add::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Add), "wrapfn_", make_descriptor(t_Add::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Add), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Add_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Add::initializeClass, 1)))
            return NULL;
          return t_Add::wrap_Object(Add(((t_Add *) arg)->object.this$));
        }
        static PyObject *t_Add_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Add::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Add_init_(t_Add *self, PyObject *args, PyObject *kwds)
        {
          Add object((jobject) NULL);

          INT_CALL(object = Add());
          self->object = object;

          return 0;
        }

        static PyObject *t_Add_value(t_Add *self, PyObject *args)
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
#include "org/orekit/gnss/metric/parser/IgsSsrMessagesParser.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *IgsSsrMessagesParser::class$ = NULL;
          jmethodID *IgsSsrMessagesParser::mids$ = NULL;
          bool IgsSsrMessagesParser::live$ = false;

          jclass IgsSsrMessagesParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/IgsSsrMessagesParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4ccaedadb068bdeb] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_getMessageType_ceeebd64fcb1f2de] = env->getMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/MessageType;");
              mids$[mid_parseMessageNumber_2ab051b27e6414f5] = env->getMethodID(cls, "parseMessageNumber", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IgsSsrMessagesParser::IgsSsrMessagesParser(const ::java::util::List & a0) : ::org::orekit::gnss::metric::parser::MessagesParser(env->newObject(initializeClass, &mids$, mid_init$_4ccaedadb068bdeb, a0.this$)) {}
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
          static PyObject *t_IgsSsrMessagesParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessagesParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IgsSsrMessagesParser_init_(t_IgsSsrMessagesParser *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_IgsSsrMessagesParser__methods_[] = {
            DECLARE_METHOD(t_IgsSsrMessagesParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessagesParser, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IgsSsrMessagesParser)[] = {
            { Py_tp_methods, t_IgsSsrMessagesParser__methods_ },
            { Py_tp_init, (void *) t_IgsSsrMessagesParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IgsSsrMessagesParser)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::MessagesParser),
            NULL
          };

          DEFINE_TYPE(IgsSsrMessagesParser, t_IgsSsrMessagesParser, IgsSsrMessagesParser);

          void t_IgsSsrMessagesParser::install(PyObject *module)
          {
            installType(&PY_TYPE(IgsSsrMessagesParser), &PY_TYPE_DEF(IgsSsrMessagesParser), module, "IgsSsrMessagesParser", 0);
          }

          void t_IgsSsrMessagesParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessagesParser), "class_", make_descriptor(IgsSsrMessagesParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessagesParser), "wrapfn_", make_descriptor(t_IgsSsrMessagesParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessagesParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IgsSsrMessagesParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IgsSsrMessagesParser::initializeClass, 1)))
              return NULL;
            return t_IgsSsrMessagesParser::wrap_Object(IgsSsrMessagesParser(((t_IgsSsrMessagesParser *) arg)->object.this$));
          }
          static PyObject *t_IgsSsrMessagesParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IgsSsrMessagesParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IgsSsrMessagesParser_init_(t_IgsSsrMessagesParser *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            IgsSsrMessagesParser object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = IgsSsrMessagesParser(a0));
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
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *OneWayGNSSRange::class$ = NULL;
          jmethodID *OneWayGNSSRange::mids$ = NULL;
          bool OneWayGNSSRange::live$ = false;
          ::java::lang::String *OneWayGNSSRange::MEASUREMENT_TYPE = NULL;

          jclass OneWayGNSSRange::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/OneWayGNSSRange");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_fc3274e847746678] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OneWayGNSSRange::OneWayGNSSRange(const ::org::orekit::utils::PVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_fc3274e847746678, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}
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
          static PyObject *t_OneWayGNSSRange_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRange_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRange_of_(t_OneWayGNSSRange *self, PyObject *args);
          static int t_OneWayGNSSRange_init_(t_OneWayGNSSRange *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OneWayGNSSRange_get__parameters_(t_OneWayGNSSRange *self, void *data);
          static PyGetSetDef t_OneWayGNSSRange__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSRange, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSRange__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSRange, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRange, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRange, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSRange)[] = {
            { Py_tp_methods, t_OneWayGNSSRange__methods_ },
            { Py_tp_init, (void *) t_OneWayGNSSRange_init_ },
            { Py_tp_getset, t_OneWayGNSSRange__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSRange)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSRange, t_OneWayGNSSRange, OneWayGNSSRange);
          PyObject *t_OneWayGNSSRange::wrap_Object(const OneWayGNSSRange& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRange::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRange *self = (t_OneWayGNSSRange *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRange::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRange *self = (t_OneWayGNSSRange *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSRange::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSRange), &PY_TYPE_DEF(OneWayGNSSRange), module, "OneWayGNSSRange", 0);
          }

          void t_OneWayGNSSRange::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "class_", make_descriptor(OneWayGNSSRange::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "wrapfn_", make_descriptor(t_OneWayGNSSRange::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "boxfn_", make_descriptor(boxObject));
            env->getClass(OneWayGNSSRange::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*OneWayGNSSRange::MEASUREMENT_TYPE)));
          }

          static PyObject *t_OneWayGNSSRange_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSRange::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSRange::wrap_Object(OneWayGNSSRange(((t_OneWayGNSSRange *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSRange_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSRange::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSRange_of_(t_OneWayGNSSRange *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_OneWayGNSSRange_init_(t_OneWayGNSSRange *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
            OneWayGNSSRange object((jobject) NULL);

            if (!parseArgs(args, "kDkDDDk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = OneWayGNSSRange(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(OneWayGNSSRange);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
          static PyObject *t_OneWayGNSSRange_get__parameters_(t_OneWayGNSSRange *self, void *data)
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
#include "org/orekit/rugged/linesensor/SensorPixelCrossing.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *SensorPixelCrossing::class$ = NULL;
        jmethodID *SensorPixelCrossing::mids$ = NULL;
        bool SensorPixelCrossing::live$ = false;

        jclass SensorPixelCrossing::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/SensorPixelCrossing");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f4fc95bc6bb270ba] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ID)V");
            mids$[mid_locatePixel_b0b988f941da47d8] = env->getMethodID(cls, "locatePixel", "(Lorg/orekit/time/AbsoluteDate;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorPixelCrossing::SensorPixelCrossing(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jint a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f4fc95bc6bb270ba, a0.this$, a1.this$, a2.this$, a3, a4)) {}

        jdouble SensorPixelCrossing::locatePixel(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_locatePixel_b0b988f941da47d8], a0.this$);
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
        static PyObject *t_SensorPixelCrossing_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SensorPixelCrossing_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SensorPixelCrossing_init_(t_SensorPixelCrossing *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SensorPixelCrossing_locatePixel(t_SensorPixelCrossing *self, PyObject *arg);

        static PyMethodDef t_SensorPixelCrossing__methods_[] = {
          DECLARE_METHOD(t_SensorPixelCrossing, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixelCrossing, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixelCrossing, locatePixel, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SensorPixelCrossing)[] = {
          { Py_tp_methods, t_SensorPixelCrossing__methods_ },
          { Py_tp_init, (void *) t_SensorPixelCrossing_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SensorPixelCrossing)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SensorPixelCrossing, t_SensorPixelCrossing, SensorPixelCrossing);

        void t_SensorPixelCrossing::install(PyObject *module)
        {
          installType(&PY_TYPE(SensorPixelCrossing), &PY_TYPE_DEF(SensorPixelCrossing), module, "SensorPixelCrossing", 0);
        }

        void t_SensorPixelCrossing::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixelCrossing), "class_", make_descriptor(SensorPixelCrossing::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixelCrossing), "wrapfn_", make_descriptor(t_SensorPixelCrossing::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixelCrossing), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SensorPixelCrossing_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SensorPixelCrossing::initializeClass, 1)))
            return NULL;
          return t_SensorPixelCrossing::wrap_Object(SensorPixelCrossing(((t_SensorPixelCrossing *) arg)->object.this$));
        }
        static PyObject *t_SensorPixelCrossing_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SensorPixelCrossing::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SensorPixelCrossing_init_(t_SensorPixelCrossing *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          jint a3;
          jdouble a4;
          SensorPixelCrossing object((jobject) NULL);

          if (!parseArgs(args, "kkkID", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = SensorPixelCrossing(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SensorPixelCrossing_locatePixel(t_SensorPixelCrossing *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.locatePixel(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "locatePixel", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/BigFractionFormat.h"
#include "java/text/ParsePosition.h"
#include "java/util/Locale.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fraction/BigFractionFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Object.h"
#include "java/text/FieldPosition.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFractionFormat::class$ = NULL;
      jmethodID *BigFractionFormat::mids$ = NULL;
      bool BigFractionFormat::live$ = false;

      jclass BigFractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d53859bd7ba1b247] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_3190c52142e043eb] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_c2b55dec3da6da3b] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/BigFraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_60ec49fc2ad8aa0e] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_formatBigFraction_2ba58cfcdb4d7c4d] = env->getStaticMethodID(cls, "formatBigFraction", "(Lorg/hipparchus/fraction/BigFraction;)Ljava/lang/String;");
          mids$[mid_getAvailableLocales_85ff0d07ca843902] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getImproperInstance_c6caa9e9613ff5ca] = env->getStaticMethodID(cls, "getImproperInstance", "()Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_getImproperInstance_f9a33f8d0aaa98e2] = env->getStaticMethodID(cls, "getImproperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_getProperInstance_c6caa9e9613ff5ca] = env->getStaticMethodID(cls, "getProperInstance", "()Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_getProperInstance_f9a33f8d0aaa98e2] = env->getStaticMethodID(cls, "getProperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_parse_b376adea91da912d] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_parse_38d74adaa6fcd6d8] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_parseNextBigInteger_4b48e273de83bda2] = env->getMethodID(cls, "parseNextBigInteger", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/math/BigInteger;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BigFractionFormat::BigFractionFormat() : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      BigFractionFormat::BigFractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_d53859bd7ba1b247, a0.this$)) {}

      BigFractionFormat::BigFractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_3190c52142e043eb, a0.this$, a1.this$)) {}

      ::java::lang::StringBuffer BigFractionFormat::format(const ::org::hipparchus::fraction::BigFraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_c2b55dec3da6da3b], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer BigFractionFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_60ec49fc2ad8aa0e], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::String BigFractionFormat::formatBigFraction(const ::org::hipparchus::fraction::BigFraction & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_formatBigFraction_2ba58cfcdb4d7c4d], a0.this$));
      }

      JArray< ::java::util::Locale > BigFractionFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_85ff0d07ca843902]));
      }

      BigFractionFormat BigFractionFormat::getImproperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_c6caa9e9613ff5ca]));
      }

      BigFractionFormat BigFractionFormat::getImproperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_f9a33f8d0aaa98e2], a0.this$));
      }

      BigFractionFormat BigFractionFormat::getProperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_c6caa9e9613ff5ca]));
      }

      BigFractionFormat BigFractionFormat::getProperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_f9a33f8d0aaa98e2], a0.this$));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_parse_b376adea91da912d], a0.this$));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_parse_38d74adaa6fcd6d8], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_BigFractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BigFractionFormat_init_(t_BigFractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BigFractionFormat_format(t_BigFractionFormat *self, PyObject *args);
      static PyObject *t_BigFractionFormat_formatBigFraction(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFractionFormat_getProperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFractionFormat_parse(t_BigFractionFormat *self, PyObject *args);
      static PyObject *t_BigFractionFormat_get__availableLocales(t_BigFractionFormat *self, void *data);
      static PyObject *t_BigFractionFormat_get__improperInstance(t_BigFractionFormat *self, void *data);
      static PyObject *t_BigFractionFormat_get__properInstance(t_BigFractionFormat *self, void *data);
      static PyGetSetDef t_BigFractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_BigFractionFormat, availableLocales),
        DECLARE_GET_FIELD(t_BigFractionFormat, improperInstance),
        DECLARE_GET_FIELD(t_BigFractionFormat, properInstance),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigFractionFormat__methods_[] = {
        DECLARE_METHOD(t_BigFractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_BigFractionFormat, formatBigFraction, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, getAvailableLocales, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, getImproperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, getProperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFractionFormat)[] = {
        { Py_tp_methods, t_BigFractionFormat__methods_ },
        { Py_tp_init, (void *) t_BigFractionFormat_init_ },
        { Py_tp_getset, t_BigFractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::AbstractFormat),
        NULL
      };

      DEFINE_TYPE(BigFractionFormat, t_BigFractionFormat, BigFractionFormat);

      void t_BigFractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFractionFormat), &PY_TYPE_DEF(BigFractionFormat), module, "BigFractionFormat", 0);
      }

      void t_BigFractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionFormat), "class_", make_descriptor(BigFractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionFormat), "wrapfn_", make_descriptor(t_BigFractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigFractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFractionFormat::initializeClass, 1)))
          return NULL;
        return t_BigFractionFormat::wrap_Object(BigFractionFormat(((t_BigFractionFormat *) arg)->object.this$));
      }
      static PyObject *t_BigFractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BigFractionFormat_init_(t_BigFractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            BigFractionFormat object((jobject) NULL);

            INT_CALL(object = BigFractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            BigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = BigFractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            BigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1))
            {
              INT_CALL(object = BigFractionFormat(a0, a1));
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

      static PyObject *t_BigFractionFormat_format(t_BigFractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::fraction::BigFraction a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::BigFraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
          {
            ::java::lang::Object a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "okk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BigFractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_BigFractionFormat_formatBigFraction(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::fraction::BigFraction a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::fraction::BigFraction::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::formatBigFraction(a0));
          return j2p(result);
        }

        PyErr_SetArgsError(type, "formatBigFraction", arg);
        return NULL;
      }

      static PyObject *t_BigFractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getAvailableLocales());
          return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
        }

        return callSuper(type, "getAvailableLocales", args, 2);
      }

      static PyObject *t_BigFractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            BigFractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getImproperInstance());
            return t_BigFractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            BigFractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getImproperInstance(a0));
              return t_BigFractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getImproperInstance", args);
        return NULL;
      }

      static PyObject *t_BigFractionFormat_getProperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            BigFractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getProperInstance());
            return t_BigFractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            BigFractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getProperInstance(a0));
              return t_BigFractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getProperInstance", args);
        return NULL;
      }

      static PyObject *t_BigFractionFormat_parse(t_BigFractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::fraction::BigFraction result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::fraction::BigFraction result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BigFractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_BigFractionFormat_get__availableLocales(t_BigFractionFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_BigFractionFormat_get__improperInstance(t_BigFractionFormat *self, void *data)
      {
        BigFractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getImproperInstance());
        return t_BigFractionFormat::wrap_Object(value);
      }

      static PyObject *t_BigFractionFormat_get__properInstance(t_BigFractionFormat *self, void *data)
      {
        BigFractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getProperInstance());
        return t_BigFractionFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *AngularRaDec::class$ = NULL;
        jmethodID *AngularRaDec::mids$ = NULL;
        bool AngularRaDec::live$ = false;
        ::java::lang::String *AngularRaDec::MEASUREMENT_TYPE = NULL;

        jclass AngularRaDec::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/AngularRaDec");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d4154093d198556] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;[D[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getObservedLineOfSight_8386213426308de8] = env->getMethodID(cls, "getObservedLineOfSight", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getReferenceFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularRaDec::AngularRaDec(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_1d4154093d198556, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularRaDec::getObservedLineOfSight(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getObservedLineOfSight_8386213426308de8], a0.this$));
        }

        ::org::orekit::frames::Frame AngularRaDec::getReferenceFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_6c9bc0a928c56d4e]));
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
        static PyObject *t_AngularRaDec_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularRaDec_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularRaDec_of_(t_AngularRaDec *self, PyObject *args);
        static int t_AngularRaDec_init_(t_AngularRaDec *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularRaDec_getObservedLineOfSight(t_AngularRaDec *self, PyObject *arg);
        static PyObject *t_AngularRaDec_getReferenceFrame(t_AngularRaDec *self);
        static PyObject *t_AngularRaDec_get__referenceFrame(t_AngularRaDec *self, void *data);
        static PyObject *t_AngularRaDec_get__parameters_(t_AngularRaDec *self, void *data);
        static PyGetSetDef t_AngularRaDec__fields_[] = {
          DECLARE_GET_FIELD(t_AngularRaDec, referenceFrame),
          DECLARE_GET_FIELD(t_AngularRaDec, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularRaDec__methods_[] = {
          DECLARE_METHOD(t_AngularRaDec, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularRaDec, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularRaDec, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularRaDec, getObservedLineOfSight, METH_O),
          DECLARE_METHOD(t_AngularRaDec, getReferenceFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularRaDec)[] = {
          { Py_tp_methods, t_AngularRaDec__methods_ },
          { Py_tp_init, (void *) t_AngularRaDec_init_ },
          { Py_tp_getset, t_AngularRaDec__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularRaDec)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(AngularRaDec, t_AngularRaDec, AngularRaDec);
        PyObject *t_AngularRaDec::wrap_Object(const AngularRaDec& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularRaDec::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularRaDec *self = (t_AngularRaDec *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularRaDec::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularRaDec::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularRaDec *self = (t_AngularRaDec *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularRaDec::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularRaDec), &PY_TYPE_DEF(AngularRaDec), module, "AngularRaDec", 0);
        }

        void t_AngularRaDec::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "class_", make_descriptor(AngularRaDec::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "wrapfn_", make_descriptor(t_AngularRaDec::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "boxfn_", make_descriptor(boxObject));
          env->getClass(AngularRaDec::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDec), "MEASUREMENT_TYPE", make_descriptor(j2p(*AngularRaDec::MEASUREMENT_TYPE)));
        }

        static PyObject *t_AngularRaDec_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularRaDec::initializeClass, 1)))
            return NULL;
          return t_AngularRaDec::wrap_Object(AngularRaDec(((t_AngularRaDec *) arg)->object.this$));
        }
        static PyObject *t_AngularRaDec_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularRaDec::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularRaDec_of_(t_AngularRaDec *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularRaDec_init_(t_AngularRaDec *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          JArray< jdouble > a3((jobject) NULL);
          JArray< jdouble > a4((jobject) NULL);
          JArray< jdouble > a5((jobject) NULL);
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          AngularRaDec object((jobject) NULL);

          if (!parseArgs(args, "kkk[D[D[Dk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = AngularRaDec(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(AngularRaDec);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AngularRaDec_getObservedLineOfSight(t_AngularRaDec *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getObservedLineOfSight(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getObservedLineOfSight", arg);
          return NULL;
        }

        static PyObject *t_AngularRaDec_getReferenceFrame(t_AngularRaDec *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_AngularRaDec_get__parameters_(t_AngularRaDec *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AngularRaDec_get__referenceFrame(t_AngularRaDec *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersGroundReceiverBaseModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseCentersGroundReceiverBaseModifier::class$ = NULL;
          jmethodID *PhaseCentersGroundReceiverBaseModifier::mids$ = NULL;
          bool PhaseCentersGroundReceiverBaseModifier::live$ = false;

          jclass PhaseCentersGroundReceiverBaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseCentersGroundReceiverBaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_59cfeb08e5a13ccd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_oneWayDistanceModification_af5b76ca8791af38] = env->getMethodID(cls, "oneWayDistanceModification", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");
              mids$[mid_twoWayDistanceModification_af5b76ca8791af38] = env->getMethodID(cls, "twoWayDistanceModification", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersGroundReceiverBaseModifier::PhaseCentersGroundReceiverBaseModifier(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_59cfeb08e5a13ccd, a0.this$, a1.this$)) {}

          jdouble PhaseCentersGroundReceiverBaseModifier::oneWayDistanceModification(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_oneWayDistanceModification_af5b76ca8791af38], a0.this$);
          }

          jdouble PhaseCentersGroundReceiverBaseModifier::twoWayDistanceModification(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_twoWayDistanceModification_af5b76ca8791af38], a0.this$);
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
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_of_(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *args);
          static int t_PhaseCentersGroundReceiverBaseModifier_init_(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_oneWayDistanceModification(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *arg);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_twoWayDistanceModification(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *arg);
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_get__parameters_(t_PhaseCentersGroundReceiverBaseModifier *self, void *data);
          static PyGetSetDef t_PhaseCentersGroundReceiverBaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseCentersGroundReceiverBaseModifier, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseCentersGroundReceiverBaseModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, of_, METH_VARARGS),
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, oneWayDistanceModification, METH_O),
            DECLARE_METHOD(t_PhaseCentersGroundReceiverBaseModifier, twoWayDistanceModification, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseCentersGroundReceiverBaseModifier)[] = {
            { Py_tp_methods, t_PhaseCentersGroundReceiverBaseModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseCentersGroundReceiverBaseModifier_init_ },
            { Py_tp_getset, t_PhaseCentersGroundReceiverBaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseCentersGroundReceiverBaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseCentersGroundReceiverBaseModifier, t_PhaseCentersGroundReceiverBaseModifier, PhaseCentersGroundReceiverBaseModifier);
          PyObject *t_PhaseCentersGroundReceiverBaseModifier::wrap_Object(const PhaseCentersGroundReceiverBaseModifier& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PhaseCentersGroundReceiverBaseModifier::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PhaseCentersGroundReceiverBaseModifier *self = (t_PhaseCentersGroundReceiverBaseModifier *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PhaseCentersGroundReceiverBaseModifier::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PhaseCentersGroundReceiverBaseModifier::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PhaseCentersGroundReceiverBaseModifier *self = (t_PhaseCentersGroundReceiverBaseModifier *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PhaseCentersGroundReceiverBaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseCentersGroundReceiverBaseModifier), &PY_TYPE_DEF(PhaseCentersGroundReceiverBaseModifier), module, "PhaseCentersGroundReceiverBaseModifier", 0);
          }

          void t_PhaseCentersGroundReceiverBaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersGroundReceiverBaseModifier), "class_", make_descriptor(PhaseCentersGroundReceiverBaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersGroundReceiverBaseModifier), "wrapfn_", make_descriptor(t_PhaseCentersGroundReceiverBaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersGroundReceiverBaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseCentersGroundReceiverBaseModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseCentersGroundReceiverBaseModifier::wrap_Object(PhaseCentersGroundReceiverBaseModifier(((t_PhaseCentersGroundReceiverBaseModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseCentersGroundReceiverBaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_of_(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PhaseCentersGroundReceiverBaseModifier_init_(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::antenna::FrequencyPattern a0((jobject) NULL);
            ::org::orekit::gnss::antenna::FrequencyPattern a1((jobject) NULL);
            PhaseCentersGroundReceiverBaseModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseCentersGroundReceiverBaseModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_oneWayDistanceModification(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(result = self->object.oneWayDistanceModification(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "oneWayDistanceModification", arg);
            return NULL;
          }

          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_twoWayDistanceModification(t_PhaseCentersGroundReceiverBaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(result = self->object.twoWayDistanceModification(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "twoWayDistanceModification", arg);
            return NULL;
          }
          static PyObject *t_PhaseCentersGroundReceiverBaseModifier_get__parameters_(t_PhaseCentersGroundReceiverBaseModifier *self, void *data)
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
#include "org/orekit/estimation/measurements/filtering/PythonHatchFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *PythonHatchFilter::class$ = NULL;
          jmethodID *PythonHatchFilter::mids$ = NULL;
          bool PythonHatchFilter::live$ = false;

          jclass PythonHatchFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/PythonHatchFilter");

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
        namespace filtering {
          static PyObject *t_PythonHatchFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonHatchFilter_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_PythonHatchFilter__methods_[] = {
            DECLARE_METHOD(t_PythonHatchFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonHatchFilter, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonHatchFilter)[] = {
            { Py_tp_methods, t_PythonHatchFilter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonHatchFilter)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::filtering::HatchFilter),
            NULL
          };

          DEFINE_TYPE(PythonHatchFilter, t_PythonHatchFilter, PythonHatchFilter);

          void t_PythonHatchFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonHatchFilter), &PY_TYPE_DEF(PythonHatchFilter), module, "PythonHatchFilter", 0);
          }

          void t_PythonHatchFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonHatchFilter), "class_", make_descriptor(PythonHatchFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonHatchFilter), "wrapfn_", make_descriptor(t_PythonHatchFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonHatchFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PythonHatchFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonHatchFilter::initializeClass, 1)))
              return NULL;
            return t_PythonHatchFilter::wrap_Object(PythonHatchFilter(((t_PythonHatchFilter *) arg)->object.this$));
          }
          static PyObject *t_PythonHatchFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonHatchFilter::initializeClass, 0))
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
#include "org/orekit/files/ccsds/ndm/odm/oem/OemData.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemData::class$ = NULL;
              jmethodID *OemData::mids$ = NULL;
              bool OemData::live$ = false;

              jclass OemData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addCovarianceMatrix_2b65391e2d141e2e] = env->getMethodID(cls, "addCovarianceMatrix", "(Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;)V");
                  mids$[mid_addData_ca6146c7df041212] = env->getMethodID(cls, "addData", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Z)Z");
                  mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getCoordinates_0d9551367f7ecdef] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
                  mids$[mid_getCovarianceMatrices_0d9551367f7ecdef] = env->getMethodID(cls, "getCovarianceMatrices", "()Ljava/util/List;");
                  mids$[mid_getEphemeridesDataLines_0d9551367f7ecdef] = env->getMethodID(cls, "getEphemeridesDataLines", "()Ljava/util/List;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemData::OemData() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              void OemData::addCovarianceMatrix(const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addCovarianceMatrix_2b65391e2d141e2e], a0.this$);
              }

              jboolean OemData::addData(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, jboolean a1) const
              {
                return env->callBooleanMethod(this$, mids$[mid_addData_ca6146c7df041212], a0.this$, a1);
              }

              ::org::orekit::utils::CartesianDerivativesFilter OemData::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837]));
              }

              ::java::util::List OemData::getCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_0d9551367f7ecdef]));
              }

              ::java::util::List OemData::getCovarianceMatrices() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrices_0d9551367f7ecdef]));
              }

              ::java::util::List OemData::getEphemeridesDataLines() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEphemeridesDataLines_0d9551367f7ecdef]));
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
            namespace oem {
              static PyObject *t_OemData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OemData_init_(t_OemData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemData_addCovarianceMatrix(t_OemData *self, PyObject *arg);
              static PyObject *t_OemData_addData(t_OemData *self, PyObject *args);
              static PyObject *t_OemData_getAvailableDerivatives(t_OemData *self);
              static PyObject *t_OemData_getCoordinates(t_OemData *self);
              static PyObject *t_OemData_getCovarianceMatrices(t_OemData *self);
              static PyObject *t_OemData_getEphemeridesDataLines(t_OemData *self);
              static PyObject *t_OemData_get__availableDerivatives(t_OemData *self, void *data);
              static PyObject *t_OemData_get__coordinates(t_OemData *self, void *data);
              static PyObject *t_OemData_get__covarianceMatrices(t_OemData *self, void *data);
              static PyObject *t_OemData_get__ephemeridesDataLines(t_OemData *self, void *data);
              static PyGetSetDef t_OemData__fields_[] = {
                DECLARE_GET_FIELD(t_OemData, availableDerivatives),
                DECLARE_GET_FIELD(t_OemData, coordinates),
                DECLARE_GET_FIELD(t_OemData, covarianceMatrices),
                DECLARE_GET_FIELD(t_OemData, ephemeridesDataLines),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemData__methods_[] = {
                DECLARE_METHOD(t_OemData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemData, addCovarianceMatrix, METH_O),
                DECLARE_METHOD(t_OemData, addData, METH_VARARGS),
                DECLARE_METHOD(t_OemData, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_OemData, getCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_OemData, getCovarianceMatrices, METH_NOARGS),
                DECLARE_METHOD(t_OemData, getEphemeridesDataLines, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemData)[] = {
                { Py_tp_methods, t_OemData__methods_ },
                { Py_tp_init, (void *) t_OemData_init_ },
                { Py_tp_getset, t_OemData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemData)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OemData, t_OemData, OemData);

              void t_OemData::install(PyObject *module)
              {
                installType(&PY_TYPE(OemData), &PY_TYPE_DEF(OemData), module, "OemData", 0);
              }

              void t_OemData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemData), "class_", make_descriptor(OemData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemData), "wrapfn_", make_descriptor(t_OemData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemData::initializeClass, 1)))
                  return NULL;
                return t_OemData::wrap_Object(OemData(((t_OemData *) arg)->object.this$));
              }
              static PyObject *t_OemData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OemData_init_(t_OemData *self, PyObject *args, PyObject *kwds)
              {
                OemData object((jobject) NULL);

                INT_CALL(object = OemData());
                self->object = object;

                return 0;
              }

              static PyObject *t_OemData_addCovarianceMatrix(t_OemData *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addCovarianceMatrix(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addCovarianceMatrix", arg);
                return NULL;
              }

              static PyObject *t_OemData_addData(t_OemData *self, PyObject *args)
              {
                ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
                jboolean a1;
                jboolean result;

                if (!parseArgs(args, "kZ", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.addData(a0, a1));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "addData", args);
                return NULL;
              }

              static PyObject *t_OemData_getAvailableDerivatives(t_OemData *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_OemData_getCoordinates(t_OemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_OemData_getCovarianceMatrices(t_OemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceMatrices());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(CartesianCovariance));
              }

              static PyObject *t_OemData_getEphemeridesDataLines(t_OemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getEphemeridesDataLines());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_OemData_get__availableDerivatives(t_OemData *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_OemData_get__coordinates(t_OemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemData_get__covarianceMatrices(t_OemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceMatrices());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemData_get__ephemeridesDataLines(t_OemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getEphemeridesDataLines());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *FieldTimeDerivativesEquations::class$ = NULL;
        jmethodID *FieldTimeDerivativesEquations::mids$ = NULL;
        bool FieldTimeDerivativesEquations::live$ = false;

        jclass FieldTimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/FieldTimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addKeplerContribution_1ee4bed350fde589] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addMassDerivative_1ee4bed350fde589] = env->getMethodID(cls, "addMassDerivative", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addNonKeplerianAcceleration_282cea09b82f4134] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldTimeDerivativesEquations::addKeplerContribution(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addKeplerContribution_1ee4bed350fde589], a0.this$);
        }

        void FieldTimeDerivativesEquations::addMassDerivative(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMassDerivative_1ee4bed350fde589], a0.this$);
        }

        void FieldTimeDerivativesEquations::addNonKeplerianAcceleration(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addNonKeplerianAcceleration_282cea09b82f4134], a0.this$);
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
        static PyObject *t_FieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_of_(t_FieldTimeDerivativesEquations *self, PyObject *args);
        static PyObject *t_FieldTimeDerivativesEquations_addKeplerContribution(t_FieldTimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_addMassDerivative(t_FieldTimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_addNonKeplerianAcceleration(t_FieldTimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_get__parameters_(t_FieldTimeDerivativesEquations *self, void *data);
        static PyGetSetDef t_FieldTimeDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_FieldTimeDerivativesEquations, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldTimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, addKeplerContribution, METH_O),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, addMassDerivative, METH_O),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, addNonKeplerianAcceleration, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldTimeDerivativesEquations)[] = {
          { Py_tp_methods, t_FieldTimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldTimeDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldTimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldTimeDerivativesEquations, t_FieldTimeDerivativesEquations, FieldTimeDerivativesEquations);
        PyObject *t_FieldTimeDerivativesEquations::wrap_Object(const FieldTimeDerivativesEquations& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTimeDerivativesEquations::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTimeDerivativesEquations *self = (t_FieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldTimeDerivativesEquations::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTimeDerivativesEquations::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTimeDerivativesEquations *self = (t_FieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldTimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldTimeDerivativesEquations), &PY_TYPE_DEF(FieldTimeDerivativesEquations), module, "FieldTimeDerivativesEquations", 0);
        }

        void t_FieldTimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeDerivativesEquations), "class_", make_descriptor(FieldTimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeDerivativesEquations), "wrapfn_", make_descriptor(t_FieldTimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldTimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_FieldTimeDerivativesEquations::wrap_Object(FieldTimeDerivativesEquations(((t_FieldTimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_FieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldTimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldTimeDerivativesEquations_of_(t_FieldTimeDerivativesEquations *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldTimeDerivativesEquations_addKeplerContribution(t_FieldTimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.addKeplerContribution(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", arg);
          return NULL;
        }

        static PyObject *t_FieldTimeDerivativesEquations_addMassDerivative(t_FieldTimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.addMassDerivative(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMassDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldTimeDerivativesEquations_addNonKeplerianAcceleration(t_FieldTimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
          {
            OBJ_CALL(self->object.addNonKeplerianAcceleration(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addNonKeplerianAcceleration", arg);
          return NULL;
        }
        static PyObject *t_FieldTimeDerivativesEquations_get__parameters_(t_FieldTimeDerivativesEquations *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/GlonassSatelliteChannel.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *GlonassSatelliteChannel::class$ = NULL;
          jmethodID *GlonassSatelliteChannel::mids$ = NULL;
          bool GlonassSatelliteChannel::live$ = false;

          jclass GlonassSatelliteChannel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/GlonassSatelliteChannel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7982d9350a733031] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatInSystem;I)V");
              mids$[mid_getK_412668abc8d889e9] = env->getMethodID(cls, "getK", "()I");
              mids$[mid_getSatellite_c5291c85b38fda6b] = env->getMethodID(cls, "getSatellite", "()Lorg/orekit/gnss/SatInSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlonassSatelliteChannel::GlonassSatelliteChannel(const ::org::orekit::gnss::SatInSystem & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7982d9350a733031, a0.this$, a1)) {}

          jint GlonassSatelliteChannel::getK() const
          {
            return env->callIntMethod(this$, mids$[mid_getK_412668abc8d889e9]);
          }

          ::org::orekit::gnss::SatInSystem GlonassSatelliteChannel::getSatellite() const
          {
            return ::org::orekit::gnss::SatInSystem(env->callObjectMethod(this$, mids$[mid_getSatellite_c5291c85b38fda6b]));
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
        namespace observation {
          static PyObject *t_GlonassSatelliteChannel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlonassSatelliteChannel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlonassSatelliteChannel_init_(t_GlonassSatelliteChannel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlonassSatelliteChannel_getK(t_GlonassSatelliteChannel *self);
          static PyObject *t_GlonassSatelliteChannel_getSatellite(t_GlonassSatelliteChannel *self);
          static PyObject *t_GlonassSatelliteChannel_get__k(t_GlonassSatelliteChannel *self, void *data);
          static PyObject *t_GlonassSatelliteChannel_get__satellite(t_GlonassSatelliteChannel *self, void *data);
          static PyGetSetDef t_GlonassSatelliteChannel__fields_[] = {
            DECLARE_GET_FIELD(t_GlonassSatelliteChannel, k),
            DECLARE_GET_FIELD(t_GlonassSatelliteChannel, satellite),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlonassSatelliteChannel__methods_[] = {
            DECLARE_METHOD(t_GlonassSatelliteChannel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlonassSatelliteChannel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlonassSatelliteChannel, getK, METH_NOARGS),
            DECLARE_METHOD(t_GlonassSatelliteChannel, getSatellite, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlonassSatelliteChannel)[] = {
            { Py_tp_methods, t_GlonassSatelliteChannel__methods_ },
            { Py_tp_init, (void *) t_GlonassSatelliteChannel_init_ },
            { Py_tp_getset, t_GlonassSatelliteChannel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlonassSatelliteChannel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlonassSatelliteChannel, t_GlonassSatelliteChannel, GlonassSatelliteChannel);

          void t_GlonassSatelliteChannel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlonassSatelliteChannel), &PY_TYPE_DEF(GlonassSatelliteChannel), module, "GlonassSatelliteChannel", 0);
          }

          void t_GlonassSatelliteChannel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassSatelliteChannel), "class_", make_descriptor(GlonassSatelliteChannel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassSatelliteChannel), "wrapfn_", make_descriptor(t_GlonassSatelliteChannel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassSatelliteChannel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlonassSatelliteChannel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlonassSatelliteChannel::initializeClass, 1)))
              return NULL;
            return t_GlonassSatelliteChannel::wrap_Object(GlonassSatelliteChannel(((t_GlonassSatelliteChannel *) arg)->object.this$));
          }
          static PyObject *t_GlonassSatelliteChannel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlonassSatelliteChannel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlonassSatelliteChannel_init_(t_GlonassSatelliteChannel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatInSystem a0((jobject) NULL);
            jint a1;
            GlonassSatelliteChannel object((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::gnss::SatInSystem::initializeClass, &a0, &a1))
            {
              INT_CALL(object = GlonassSatelliteChannel(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_GlonassSatelliteChannel_getK(t_GlonassSatelliteChannel *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getK());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_GlonassSatelliteChannel_getSatellite(t_GlonassSatelliteChannel *self)
          {
            ::org::orekit::gnss::SatInSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(result);
          }

          static PyObject *t_GlonassSatelliteChannel_get__k(t_GlonassSatelliteChannel *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getK());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_GlonassSatelliteChannel_get__satellite(t_GlonassSatelliteChannel *self, void *data)
          {
            ::org::orekit::gnss::SatInSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *MessageWriter::class$ = NULL;
            jmethodID *MessageWriter::mids$ = NULL;
            bool MessageWriter::live$ = false;

            jclass MessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/MessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getFormatVersionKey_3cffd47377eca18a] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_3cffd47377eca18a] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getVersion_557b8123390d8d0c] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_writeFooter_0503da09b1f1eb3c] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_9c5c2ece653aa3f3] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V");
                mids$[mid_writeMessage_f246fa1b4daafa07] = env->getMethodID(cls, "writeMessage", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/NdmConstituent;)V");
                mids$[mid_writeSegment_c15b5f80625a03e0] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::lang::String MessageWriter::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_3cffd47377eca18a]));
            }

            ::java::lang::String MessageWriter::getRoot() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRoot_3cffd47377eca18a]));
            }

            jdouble MessageWriter::getVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getVersion_557b8123390d8d0c]);
            }

            void MessageWriter::writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeFooter_0503da09b1f1eb3c], a0.this$);
            }

            void MessageWriter::writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Header & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeHeader_9c5c2ece653aa3f3], a0.this$, a1.this$);
            }

            void MessageWriter::writeMessage(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::NdmConstituent & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeMessage_f246fa1b4daafa07], a0.this$, a1.this$);
            }

            void MessageWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Segment & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegment_c15b5f80625a03e0], a0.this$, a1.this$);
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
            static PyObject *t_MessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageWriter_of_(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_getFormatVersionKey(t_MessageWriter *self);
            static PyObject *t_MessageWriter_getRoot(t_MessageWriter *self);
            static PyObject *t_MessageWriter_getVersion(t_MessageWriter *self);
            static PyObject *t_MessageWriter_writeFooter(t_MessageWriter *self, PyObject *arg);
            static PyObject *t_MessageWriter_writeHeader(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_writeMessage(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_writeSegment(t_MessageWriter *self, PyObject *args);
            static PyObject *t_MessageWriter_get__formatVersionKey(t_MessageWriter *self, void *data);
            static PyObject *t_MessageWriter_get__root(t_MessageWriter *self, void *data);
            static PyObject *t_MessageWriter_get__version(t_MessageWriter *self, void *data);
            static PyObject *t_MessageWriter_get__parameters_(t_MessageWriter *self, void *data);
            static PyGetSetDef t_MessageWriter__fields_[] = {
              DECLARE_GET_FIELD(t_MessageWriter, formatVersionKey),
              DECLARE_GET_FIELD(t_MessageWriter, root),
              DECLARE_GET_FIELD(t_MessageWriter, version),
              DECLARE_GET_FIELD(t_MessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MessageWriter__methods_[] = {
              DECLARE_METHOD(t_MessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_MessageWriter, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_MessageWriter, getRoot, METH_NOARGS),
              DECLARE_METHOD(t_MessageWriter, getVersion, METH_NOARGS),
              DECLARE_METHOD(t_MessageWriter, writeFooter, METH_O),
              DECLARE_METHOD(t_MessageWriter, writeHeader, METH_VARARGS),
              DECLARE_METHOD(t_MessageWriter, writeMessage, METH_VARARGS),
              DECLARE_METHOD(t_MessageWriter, writeSegment, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MessageWriter)[] = {
              { Py_tp_methods, t_MessageWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_MessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MessageWriter, t_MessageWriter, MessageWriter);
            PyObject *t_MessageWriter::wrap_Object(const MessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_MessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageWriter *self = (t_MessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_MessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_MessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MessageWriter *self = (t_MessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_MessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(MessageWriter), &PY_TYPE_DEF(MessageWriter), module, "MessageWriter", 0);
            }

            void t_MessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageWriter), "class_", make_descriptor(MessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageWriter), "wrapfn_", make_descriptor(t_MessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MessageWriter::initializeClass, 1)))
                return NULL;
              return t_MessageWriter::wrap_Object(MessageWriter(((t_MessageWriter *) arg)->object.this$));
            }
            static PyObject *t_MessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MessageWriter_of_(t_MessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_MessageWriter_getFormatVersionKey(t_MessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_MessageWriter_getRoot(t_MessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoot());
              return j2p(result);
            }

            static PyObject *t_MessageWriter_getVersion(t_MessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_MessageWriter_writeFooter(t_MessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
              {
                OBJ_CALL(self->object.writeFooter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeFooter", arg);
              return NULL;
            }

            static PyObject *t_MessageWriter_writeHeader(t_MessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::section::Header a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Header::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.writeHeader(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeHeader", args);
              return NULL;
            }

            static PyObject *t_MessageWriter_writeMessage(t_MessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::NdmConstituent a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_NdmConstituent::parameters_))
              {
                OBJ_CALL(self->object.writeMessage(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeMessage", args);
              return NULL;
            }

            static PyObject *t_MessageWriter_writeSegment(t_MessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::section::Segment a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Segment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::section::t_Segment::parameters_))
              {
                OBJ_CALL(self->object.writeSegment(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
              return NULL;
            }
            static PyObject *t_MessageWriter_get__parameters_(t_MessageWriter *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MessageWriter_get__formatVersionKey(t_MessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_MessageWriter_get__root(t_MessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoot());
              return j2p(value);
            }

            static PyObject *t_MessageWriter_get__version(t_MessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getVersion());
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
#include "org/orekit/bodies/PythonCelestialBodies.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonCelestialBodies::class$ = NULL;
      jmethodID *PythonCelestialBodies::mids$ = NULL;
      bool PythonCelestialBodies::live$ = false;

      jclass PythonCelestialBodies::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonCelestialBodies");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBody_47d89fc2b3d16fd5] = env->getMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarth_40e74583267ad550] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_40e74583267ad550] = env->getMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_40e74583267ad550] = env->getMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_40e74583267ad550] = env->getMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_40e74583267ad550] = env->getMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_40e74583267ad550] = env->getMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_40e74583267ad550] = env->getMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_40e74583267ad550] = env->getMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_40e74583267ad550] = env->getMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_40e74583267ad550] = env->getMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_40e74583267ad550] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_40e74583267ad550] = env->getMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_40e74583267ad550] = env->getMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonCelestialBodies::PythonCelestialBodies() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonCelestialBodies::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonCelestialBodies::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonCelestialBodies::pythonExtension(jlong a0) const
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
    namespace bodies {
      static PyObject *t_PythonCelestialBodies_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonCelestialBodies_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonCelestialBodies_init_(t_PythonCelestialBodies *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonCelestialBodies_finalize(t_PythonCelestialBodies *self);
      static PyObject *t_PythonCelestialBodies_pythonExtension(t_PythonCelestialBodies *self, PyObject *args);
      static jobject JNICALL t_PythonCelestialBodies_getBody0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonCelestialBodies_getEarth1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getEarthMoonBarycenter2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getJupiter3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getMars4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getMercury5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getMoon6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getNeptune7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getPluto8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getSaturn9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getSolarSystemBarycenter10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getSun11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getUranus12(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getVenus13(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonCelestialBodies_pythonDecRef14(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonCelestialBodies_get__self(t_PythonCelestialBodies *self, void *data);
      static PyGetSetDef t_PythonCelestialBodies__fields_[] = {
        DECLARE_GET_FIELD(t_PythonCelestialBodies, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonCelestialBodies__methods_[] = {
        DECLARE_METHOD(t_PythonCelestialBodies, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodies, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodies, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonCelestialBodies, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonCelestialBodies)[] = {
        { Py_tp_methods, t_PythonCelestialBodies__methods_ },
        { Py_tp_init, (void *) t_PythonCelestialBodies_init_ },
        { Py_tp_getset, t_PythonCelestialBodies__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonCelestialBodies)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonCelestialBodies, t_PythonCelestialBodies, PythonCelestialBodies);

      void t_PythonCelestialBodies::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonCelestialBodies), &PY_TYPE_DEF(PythonCelestialBodies), module, "PythonCelestialBodies", 1);
      }

      void t_PythonCelestialBodies::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodies), "class_", make_descriptor(PythonCelestialBodies::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodies), "wrapfn_", make_descriptor(t_PythonCelestialBodies::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodies), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonCelestialBodies::initializeClass);
        JNINativeMethod methods[] = {
          { "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getBody0 },
          { "getEarth", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getEarth1 },
          { "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getEarthMoonBarycenter2 },
          { "getJupiter", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getJupiter3 },
          { "getMars", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getMars4 },
          { "getMercury", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getMercury5 },
          { "getMoon", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getMoon6 },
          { "getNeptune", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getNeptune7 },
          { "getPluto", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getPluto8 },
          { "getSaturn", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getSaturn9 },
          { "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getSolarSystemBarycenter10 },
          { "getSun", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getSun11 },
          { "getUranus", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getUranus12 },
          { "getVenus", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getVenus13 },
          { "pythonDecRef", "()V", (void *) t_PythonCelestialBodies_pythonDecRef14 },
        };
        env->registerNatives(cls, methods, 15);
      }

      static PyObject *t_PythonCelestialBodies_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonCelestialBodies::initializeClass, 1)))
          return NULL;
        return t_PythonCelestialBodies::wrap_Object(PythonCelestialBodies(((t_PythonCelestialBodies *) arg)->object.this$));
      }
      static PyObject *t_PythonCelestialBodies_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonCelestialBodies::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonCelestialBodies_init_(t_PythonCelestialBodies *self, PyObject *args, PyObject *kwds)
      {
        PythonCelestialBodies object((jobject) NULL);

        INT_CALL(object = PythonCelestialBodies());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonCelestialBodies_finalize(t_PythonCelestialBodies *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonCelestialBodies_pythonExtension(t_PythonCelestialBodies *self, PyObject *args)
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

      static jobject JNICALL t_PythonCelestialBodies_getBody0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "getBody", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getBody", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getEarth1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarth", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getEarth", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getEarthMoonBarycenter2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarthMoonBarycenter", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getEarthMoonBarycenter", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getJupiter3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJupiter", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getJupiter", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getMars4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMars", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getMars", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getMercury5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMercury", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getMercury", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getMoon6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMoon", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getMoon", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getNeptune7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getNeptune", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getNeptune", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getPluto8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getPluto", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getPluto", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getSaturn9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSaturn", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getSaturn", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getSolarSystemBarycenter10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSolarSystemBarycenter", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getSolarSystemBarycenter", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getSun11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSun", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getSun", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getUranus12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getUranus", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getUranus", result);
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

      static jobject JNICALL t_PythonCelestialBodies_getVenus13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getVenus", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getVenus", result);
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

      static void JNICALL t_PythonCelestialBodies_pythonDecRef14(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonCelestialBodies_get__self(t_PythonCelestialBodies *self, void *data)
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
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FieldTransform::class$ = NULL;
      jmethodID *FieldTransform::mids$ = NULL;
      bool FieldTransform::live$ = false;

      jclass FieldTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FieldTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3e3c82b13e2cf201] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_3662f4f3d5ceb7b5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_35bdc1ce10a82b14] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldAngularCoordinates;)V");
          mids$[mid_init$_ba43a5f0914e9ada] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_c1da1fadea6d07de] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/frames/Transform;)V");
          mids$[mid_init$_85d2f5694dce0dd3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_0ece0fa6b706157f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_9f3e9231dc4d4fdd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/FieldTransform;Lorg/orekit/frames/FieldTransform;)V");
          mids$[mid_init$_448839dff1f7f897] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_e632fd0ade92943b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_freeze_88fa1fad93ade5d3] = env->getMethodID(cls, "freeze", "()Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getAcceleration_2d64addf4c3391d9] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getAngular_2e8947cffff3985b] = env->getMethodID(cls, "getAngular", "()Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_getCartesian_950575861e9716b3] = env->getMethodID(cls, "getCartesian", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFieldDate_f1fe4daf77c66560] = env->getMethodID(cls, "getFieldDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getIdentity_99b2ac05e5fc7895] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getInverse_88fa1fad93ade5d3] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getJacobian_4ff515bdbce6a2ad] = env->getMethodID(cls, "getJacobian", "(Lorg/orekit/utils/CartesianDerivativesFilter;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getRotation_73da4eeccf2b7e14] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getRotationAcceleration_2d64addf4c3391d9] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getRotationRate_2d64addf4c3391d9] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getTranslation_2d64addf4c3391d9] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getVelocity_2d64addf4c3391d9] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_interpolate_f374ad8221fbadd4] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_interpolate_e76541a1d81fb90b] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Ljava/util/Collection;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_interpolate_4940ae4d3bb419f1] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Ljava/util/stream/Stream;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_shiftedBy_e779761267ceaf91] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_shiftedBy_1ce66039276ccc6b] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_staticShiftedBy_39d5979fbbfb1f23] = env->getMethodID(cls, "staticShiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_toStaticTransform_fe2c5c7bc73a25b6] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_transformPVCoordinates_f6b3fdf5ec92a07f] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_fdfa06d009a789af] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_5954fda0d828683a] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_b038abcbf2a1b6eb] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e3c82b13e2cf201, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3662f4f3d5ceb7b5, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldAngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_35bdc1ce10a82b14, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ba43a5f0914e9ada, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::hipparchus::Field & a0, const ::org::orekit::frames::Transform & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c1da1fadea6d07de, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_85d2f5694dce0dd3, a0.this$, a1.this$, a2.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0ece0fa6b706157f, a0.this$, a1.this$, a2.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const FieldTransform & a1, const FieldTransform & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9f3e9231dc4d4fdd, a0.this$, a1.this$, a2.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_448839dff1f7f897, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e632fd0ade92943b, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldTransform FieldTransform::freeze() const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_freeze_88fa1fad93ade5d3]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_2d64addf4c3391d9]));
      }

      ::org::orekit::utils::FieldAngularCoordinates FieldTransform::getAngular() const
      {
        return ::org::orekit::utils::FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_getAngular_2e8947cffff3985b]));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldTransform::getCartesian() const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getCartesian_950575861e9716b3]));
      }

      ::org::orekit::time::AbsoluteDate FieldTransform::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldTransform::getFieldDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFieldDate_f1fe4daf77c66560]));
      }

      FieldTransform FieldTransform::getIdentity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_99b2ac05e5fc7895], a0.this$));
      }

      FieldTransform FieldTransform::getInverse() const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_getInverse_88fa1fad93ade5d3]));
      }

      void FieldTransform::getJacobian(const ::org::orekit::utils::CartesianDerivativesFilter & a0, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobian_4ff515bdbce6a2ad], a0.this$, a1.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldTransform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_73da4eeccf2b7e14]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_2d64addf4c3391d9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_2d64addf4c3391d9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_2d64addf4c3391d9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_2d64addf4c3391d9]));
      }

      FieldTransform FieldTransform::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_f374ad8221fbadd4], a0.this$, a1.this$));
      }

      FieldTransform FieldTransform::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::java::util::Collection & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_e76541a1d81fb90b], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldTransform FieldTransform::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::java::util::stream::Stream & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_4940ae4d3bb419f1], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldTransform FieldTransform::shiftedBy(jdouble a0) const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_shiftedBy_e779761267ceaf91], a0));
      }

      FieldTransform FieldTransform::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_shiftedBy_1ce66039276ccc6b], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform FieldTransform::staticShiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_staticShiftedBy_39d5979fbbfb1f23], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform FieldTransform::toStaticTransform() const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_fe2c5c7bc73a25b6]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_f6b3fdf5ec92a07f], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_fdfa06d009a789af], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_5954fda0d828683a], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_b038abcbf2a1b6eb], a0.this$));
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
      static PyObject *t_FieldTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransform_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransform_of_(t_FieldTransform *self, PyObject *args);
      static int t_FieldTransform_init_(t_FieldTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTransform_freeze(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getAcceleration(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getAngular(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getCartesian(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getDate(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getFieldDate(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getIdentity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransform_getInverse(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getJacobian(t_FieldTransform *self, PyObject *args);
      static PyObject *t_FieldTransform_getRotation(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getRotationAcceleration(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getRotationRate(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getTranslation(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getVelocity(t_FieldTransform *self);
      static PyObject *t_FieldTransform_interpolate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldTransform_shiftedBy(t_FieldTransform *self, PyObject *args);
      static PyObject *t_FieldTransform_staticShiftedBy(t_FieldTransform *self, PyObject *arg);
      static PyObject *t_FieldTransform_toStaticTransform(t_FieldTransform *self);
      static PyObject *t_FieldTransform_transformPVCoordinates(t_FieldTransform *self, PyObject *args);
      static PyObject *t_FieldTransform_get__acceleration(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__angular(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__cartesian(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__date(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__fieldDate(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__inverse(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__rotation(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__rotationAcceleration(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__rotationRate(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__translation(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__velocity(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__parameters_(t_FieldTransform *self, void *data);
      static PyGetSetDef t_FieldTransform__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTransform, acceleration),
        DECLARE_GET_FIELD(t_FieldTransform, angular),
        DECLARE_GET_FIELD(t_FieldTransform, cartesian),
        DECLARE_GET_FIELD(t_FieldTransform, date),
        DECLARE_GET_FIELD(t_FieldTransform, fieldDate),
        DECLARE_GET_FIELD(t_FieldTransform, inverse),
        DECLARE_GET_FIELD(t_FieldTransform, rotation),
        DECLARE_GET_FIELD(t_FieldTransform, rotationAcceleration),
        DECLARE_GET_FIELD(t_FieldTransform, rotationRate),
        DECLARE_GET_FIELD(t_FieldTransform, translation),
        DECLARE_GET_FIELD(t_FieldTransform, velocity),
        DECLARE_GET_FIELD(t_FieldTransform, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTransform__methods_[] = {
        DECLARE_METHOD(t_FieldTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransform, freeze, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getAngular, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getCartesian, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getFieldDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getIdentity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getJacobian, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransform, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getTranslation, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, interpolate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransform, staticShiftedBy, METH_O),
        DECLARE_METHOD(t_FieldTransform, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, transformPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTransform)[] = {
        { Py_tp_methods, t_FieldTransform__methods_ },
        { Py_tp_init, (void *) t_FieldTransform_init_ },
        { Py_tp_getset, t_FieldTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTransform, t_FieldTransform, FieldTransform);
      PyObject *t_FieldTransform::wrap_Object(const FieldTransform& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTransform::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTransform *self = (t_FieldTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTransform::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTransform::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTransform *self = (t_FieldTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTransform), &PY_TYPE_DEF(FieldTransform), module, "FieldTransform", 0);
      }

      void t_FieldTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransform), "class_", make_descriptor(FieldTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransform), "wrapfn_", make_descriptor(t_FieldTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransform), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTransform::initializeClass, 1)))
          return NULL;
        return t_FieldTransform::wrap_Object(FieldTransform(((t_FieldTransform *) arg)->object.this$));
      }
      static PyObject *t_FieldTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTransform_of_(t_FieldTransform *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTransform_init_(t_FieldTransform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldAngularCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Transform a1((jobject) NULL);
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2));
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
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTransform a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, FieldTransform::initializeClass, FieldTransform::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, t_FieldTransform::parameters_, &a2, &p2, t_FieldTransform::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2, a3));
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
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2, a3));
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

      static PyObject *t_FieldTransform_freeze(t_FieldTransform *self)
      {
        FieldTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.freeze());
        return t_FieldTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getAcceleration(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getAngular(t_FieldTransform *self)
      {
        ::org::orekit::utils::FieldAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngular());
        return ::org::orekit::utils::t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getCartesian(t_FieldTransform *self)
      {
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getCartesian());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getDate(t_FieldTransform *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_FieldTransform_getFieldDate(t_FieldTransform *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFieldDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getIdentity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTransform result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldTransform::getIdentity(a0));
          return t_FieldTransform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getIdentity", arg);
        return NULL;
      }

      static PyObject *t_FieldTransform_getInverse(t_FieldTransform *self)
      {
        FieldTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_FieldTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getJacobian(t_FieldTransform *self, PyObject *args)
      {
        ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "K[[K", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.getJacobian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobian", args);
        return NULL;
      }

      static PyObject *t_FieldTransform_getRotation(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getRotationAcceleration(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getRotationRate(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getTranslation(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getVelocity(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_interpolate(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldTransform::interpolate(a0, a1));
              return t_FieldTransform::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::util::Collection a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &p3, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldTransform::interpolate(a0, a1, a2, a3));
              return t_FieldTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::util::stream::Stream a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &p3, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldTransform::interpolate(a0, a1, a2, a3));
              return t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "interpolate", args);
        return NULL;
      }

      static PyObject *t_FieldTransform_shiftedBy(t_FieldTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldTransform::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldTransform::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldTransform_staticShiftedBy(t_FieldTransform *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.staticShiftedBy(a0));
          return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "staticShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldTransform_toStaticTransform(t_FieldTransform *self)
      {
        ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_transformPVCoordinates(t_FieldTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformPVCoordinates", args);
        return NULL;
      }
      static PyObject *t_FieldTransform_get__parameters_(t_FieldTransform *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTransform_get__acceleration(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__angular(t_FieldTransform *self, void *data)
      {
        ::org::orekit::utils::FieldAngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngular());
        return ::org::orekit::utils::t_FieldAngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__cartesian(t_FieldTransform *self, void *data)
      {
        ::org::orekit::utils::FieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getCartesian());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__date(t_FieldTransform *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__fieldDate(t_FieldTransform *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFieldDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__inverse(t_FieldTransform *self, void *data)
      {
        FieldTransform value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_FieldTransform::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__rotation(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__rotationAcceleration(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__rotationRate(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__translation(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__velocity(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/ComplexUtils.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexUtils::class$ = NULL;
      jmethodID *ComplexUtils::mids$ = NULL;
      bool ComplexUtils::live$ = false;

      jclass ComplexUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_convertToComplex_430c39327f12a793] = env->getStaticMethodID(cls, "convertToComplex", "([D)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_polar2Complex_00e4ffdd403af412] = env->getStaticMethodID(cls, "polar2Complex", "(DD)Lorg/hipparchus/complex/Complex;");
          mids$[mid_polar2Complex_e9dc5bca1487ec04] = env->getStaticMethodID(cls, "polar2Complex", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexUtils::convertToComplex(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::org::hipparchus::complex::Complex >(env->callStaticObjectMethod(cls, mids$[mid_convertToComplex_430c39327f12a793], a0.this$));
      }

      ::org::hipparchus::complex::Complex ComplexUtils::polar2Complex(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_polar2Complex_00e4ffdd403af412], a0, a1));
      }

      ::org::hipparchus::complex::FieldComplex ComplexUtils::polar2Complex(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_polar2Complex_e9dc5bca1487ec04], a0.this$, a1.this$));
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
      static PyObject *t_ComplexUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUtils_convertToComplex(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUtils_polar2Complex(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_ComplexUtils__methods_[] = {
        DECLARE_METHOD(t_ComplexUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUtils, convertToComplex, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUtils, polar2Complex, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexUtils)[] = {
        { Py_tp_methods, t_ComplexUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexUtils, t_ComplexUtils, ComplexUtils);

      void t_ComplexUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexUtils), &PY_TYPE_DEF(ComplexUtils), module, "ComplexUtils", 0);
      }

      void t_ComplexUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUtils), "class_", make_descriptor(ComplexUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUtils), "wrapfn_", make_descriptor(t_ComplexUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexUtils::initializeClass, 1)))
          return NULL;
        return t_ComplexUtils::wrap_Object(ComplexUtils(((t_ComplexUtils *) arg)->object.this$));
      }
      static PyObject *t_ComplexUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexUtils_convertToComplex(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::ComplexUtils::convertToComplex(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError(type, "convertToComplex", arg);
        return NULL;
      }

      static PyObject *t_ComplexUtils_polar2Complex(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::ComplexUtils::polar2Complex(a0, a1));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::ComplexUtils::polar2Complex(a0, a1));
              return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "polar2Complex", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase$Status.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase$Status.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedMeasurementBase$Status::class$ = NULL;
        jmethodID *EstimatedMeasurementBase$Status::mids$ = NULL;
        bool EstimatedMeasurementBase$Status::live$ = false;
        EstimatedMeasurementBase$Status *EstimatedMeasurementBase$Status::PROCESSED = NULL;
        EstimatedMeasurementBase$Status *EstimatedMeasurementBase$Status::REJECTED = NULL;

        jclass EstimatedMeasurementBase$Status::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedMeasurementBase$Status");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_9a1f988d76329bdc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;");
            mids$[mid_values_751cba6d58d07a78] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            PROCESSED = new EstimatedMeasurementBase$Status(env->getStaticObjectField(cls, "PROCESSED", "Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;"));
            REJECTED = new EstimatedMeasurementBase$Status(env->getStaticObjectField(cls, "REJECTED", "Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedMeasurementBase$Status EstimatedMeasurementBase$Status::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return EstimatedMeasurementBase$Status(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9a1f988d76329bdc], a0.this$));
        }

        JArray< EstimatedMeasurementBase$Status > EstimatedMeasurementBase$Status::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< EstimatedMeasurementBase$Status >(env->callStaticObjectMethod(cls, mids$[mid_values_751cba6d58d07a78]));
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
        static PyObject *t_EstimatedMeasurementBase$Status_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase$Status_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase$Status_of_(t_EstimatedMeasurementBase$Status *self, PyObject *args);
        static PyObject *t_EstimatedMeasurementBase$Status_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_EstimatedMeasurementBase$Status_values(PyTypeObject *type);
        static PyObject *t_EstimatedMeasurementBase$Status_get__parameters_(t_EstimatedMeasurementBase$Status *self, void *data);
        static PyGetSetDef t_EstimatedMeasurementBase$Status__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase$Status, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedMeasurementBase$Status__methods_[] = {
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, of_, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase$Status, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedMeasurementBase$Status)[] = {
          { Py_tp_methods, t_EstimatedMeasurementBase$Status__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EstimatedMeasurementBase$Status__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedMeasurementBase$Status)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(EstimatedMeasurementBase$Status, t_EstimatedMeasurementBase$Status, EstimatedMeasurementBase$Status);
        PyObject *t_EstimatedMeasurementBase$Status::wrap_Object(const EstimatedMeasurementBase$Status& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase$Status::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase$Status *self = (t_EstimatedMeasurementBase$Status *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EstimatedMeasurementBase$Status::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase$Status::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase$Status *self = (t_EstimatedMeasurementBase$Status *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EstimatedMeasurementBase$Status::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedMeasurementBase$Status), &PY_TYPE_DEF(EstimatedMeasurementBase$Status), module, "EstimatedMeasurementBase$Status", 0);
        }

        void t_EstimatedMeasurementBase$Status::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "class_", make_descriptor(EstimatedMeasurementBase$Status::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "wrapfn_", make_descriptor(t_EstimatedMeasurementBase$Status::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "boxfn_", make_descriptor(boxObject));
          env->getClass(EstimatedMeasurementBase$Status::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "PROCESSED", make_descriptor(t_EstimatedMeasurementBase$Status::wrap_Object(*EstimatedMeasurementBase$Status::PROCESSED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase$Status), "REJECTED", make_descriptor(t_EstimatedMeasurementBase$Status::wrap_Object(*EstimatedMeasurementBase$Status::REJECTED)));
        }

        static PyObject *t_EstimatedMeasurementBase$Status_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedMeasurementBase$Status::initializeClass, 1)))
            return NULL;
          return t_EstimatedMeasurementBase$Status::wrap_Object(EstimatedMeasurementBase$Status(((t_EstimatedMeasurementBase$Status *) arg)->object.this$));
        }
        static PyObject *t_EstimatedMeasurementBase$Status_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedMeasurementBase$Status::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimatedMeasurementBase$Status_of_(t_EstimatedMeasurementBase$Status *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EstimatedMeasurementBase$Status_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          EstimatedMeasurementBase$Status result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::valueOf(a0));
            return t_EstimatedMeasurementBase$Status::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_EstimatedMeasurementBase$Status_values(PyTypeObject *type)
        {
          JArray< EstimatedMeasurementBase$Status > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::values());
          return JArray<jobject>(result.this$).wrap(t_EstimatedMeasurementBase$Status::wrap_jobject);
        }
        static PyObject *t_EstimatedMeasurementBase$Status_get__parameters_(t_EstimatedMeasurementBase$Status *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/SGP4.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *SGP4::class$ = NULL;
          jmethodID *SGP4::mids$ = NULL;
          bool SGP4::live$ = false;

          jclass SGP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/SGP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c15edfeff3b77424] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)V");
              mids$[mid_init$_2f68d31a9dcd927c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)V");
              mids$[mid_sxpInitialize_0640e6acf969ed28] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_10f281d777284cea] = env->getMethodID(cls, "sxpPropagate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SGP4::SGP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_c15edfeff3b77424, a0.this$, a1.this$, a2)) {}

          SGP4::SGP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_2f68d31a9dcd927c, a0.this$, a1.this$, a2, a3.this$)) {}
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
          static PyObject *t_SGP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SGP4_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SGP4_init_(t_SGP4 *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_SGP4__methods_[] = {
            DECLARE_METHOD(t_SGP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SGP4, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SGP4)[] = {
            { Py_tp_methods, t_SGP4__methods_ },
            { Py_tp_init, (void *) t_SGP4_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SGP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::TLEPropagator),
            NULL
          };

          DEFINE_TYPE(SGP4, t_SGP4, SGP4);

          void t_SGP4::install(PyObject *module)
          {
            installType(&PY_TYPE(SGP4), &PY_TYPE_DEF(SGP4), module, "SGP4", 0);
          }

          void t_SGP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SGP4), "class_", make_descriptor(SGP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SGP4), "wrapfn_", make_descriptor(t_SGP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SGP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SGP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SGP4::initializeClass, 1)))
              return NULL;
            return t_SGP4::wrap_Object(SGP4(((t_SGP4 *) arg)->object.this$));
          }
          static PyObject *t_SGP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SGP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SGP4_init_(t_SGP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                SGP4 object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = SGP4(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                SGP4 object((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = SGP4(a0, a1, a2, a3));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/InputStreamEncodedMessage.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *InputStreamEncodedMessage::class$ = NULL;
          jmethodID *InputStreamEncodedMessage::mids$ = NULL;
          bool InputStreamEncodedMessage::live$ = false;

          jclass InputStreamEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/InputStreamEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_115bc9fcd812647a] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;)V");
              mids$[mid_fetchByte_412668abc8d889e9] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InputStreamEncodedMessage::InputStreamEncodedMessage(const ::java::io::InputStream & a0) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_115bc9fcd812647a, a0.this$)) {}
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
          static PyObject *t_InputStreamEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InputStreamEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_InputStreamEncodedMessage_init_(t_InputStreamEncodedMessage *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_InputStreamEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_InputStreamEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InputStreamEncodedMessage, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InputStreamEncodedMessage)[] = {
            { Py_tp_methods, t_InputStreamEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_InputStreamEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InputStreamEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(InputStreamEncodedMessage, t_InputStreamEncodedMessage, InputStreamEncodedMessage);

          void t_InputStreamEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(InputStreamEncodedMessage), &PY_TYPE_DEF(InputStreamEncodedMessage), module, "InputStreamEncodedMessage", 0);
          }

          void t_InputStreamEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamEncodedMessage), "class_", make_descriptor(InputStreamEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamEncodedMessage), "wrapfn_", make_descriptor(t_InputStreamEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InputStreamEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InputStreamEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_InputStreamEncodedMessage::wrap_Object(InputStreamEncodedMessage(((t_InputStreamEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_InputStreamEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InputStreamEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_InputStreamEncodedMessage_init_(t_InputStreamEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            ::java::io::InputStream a0((jobject) NULL);
            InputStreamEncodedMessage object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
            {
              INT_CALL(object = InputStreamEncodedMessage(a0));
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
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *FrequencyPattern::class$ = NULL;
        jmethodID *FrequencyPattern::mids$ = NULL;
        bool FrequencyPattern::live$ = false;
        FrequencyPattern *FrequencyPattern::ZERO_CORRECTION = NULL;

        jclass FrequencyPattern::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/FrequencyPattern");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5101e04ba5dafe45] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/gnss/antenna/PhaseCenterVariationFunction;)V");
            mids$[mid_getEccentricities_f88961cca75a2c0a] = env->getMethodID(cls, "getEccentricities", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getPhaseCenterVariation_8ddca7bd73e586da] = env->getMethodID(cls, "getPhaseCenterVariation", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
            mids$[mid_getPhaseCenterVariationFunction_12a1f278a2ab1218] = env->getMethodID(cls, "getPhaseCenterVariationFunction", "()Lorg/orekit/gnss/antenna/PhaseCenterVariationFunction;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ZERO_CORRECTION = new FrequencyPattern(env->getStaticObjectField(cls, "ZERO_CORRECTION", "Lorg/orekit/gnss/antenna/FrequencyPattern;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FrequencyPattern::FrequencyPattern(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::gnss::antenna::PhaseCenterVariationFunction & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5101e04ba5dafe45, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FrequencyPattern::getEccentricities() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEccentricities_f88961cca75a2c0a]));
        }

        jdouble FrequencyPattern::getPhaseCenterVariation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPhaseCenterVariation_8ddca7bd73e586da], a0.this$);
        }

        ::org::orekit::gnss::antenna::PhaseCenterVariationFunction FrequencyPattern::getPhaseCenterVariationFunction() const
        {
          return ::org::orekit::gnss::antenna::PhaseCenterVariationFunction(env->callObjectMethod(this$, mids$[mid_getPhaseCenterVariationFunction_12a1f278a2ab1218]));
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
        static PyObject *t_FrequencyPattern_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FrequencyPattern_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FrequencyPattern_init_(t_FrequencyPattern *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FrequencyPattern_getEccentricities(t_FrequencyPattern *self);
        static PyObject *t_FrequencyPattern_getPhaseCenterVariation(t_FrequencyPattern *self, PyObject *arg);
        static PyObject *t_FrequencyPattern_getPhaseCenterVariationFunction(t_FrequencyPattern *self);
        static PyObject *t_FrequencyPattern_get__eccentricities(t_FrequencyPattern *self, void *data);
        static PyObject *t_FrequencyPattern_get__phaseCenterVariationFunction(t_FrequencyPattern *self, void *data);
        static PyGetSetDef t_FrequencyPattern__fields_[] = {
          DECLARE_GET_FIELD(t_FrequencyPattern, eccentricities),
          DECLARE_GET_FIELD(t_FrequencyPattern, phaseCenterVariationFunction),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FrequencyPattern__methods_[] = {
          DECLARE_METHOD(t_FrequencyPattern, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FrequencyPattern, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FrequencyPattern, getEccentricities, METH_NOARGS),
          DECLARE_METHOD(t_FrequencyPattern, getPhaseCenterVariation, METH_O),
          DECLARE_METHOD(t_FrequencyPattern, getPhaseCenterVariationFunction, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FrequencyPattern)[] = {
          { Py_tp_methods, t_FrequencyPattern__methods_ },
          { Py_tp_init, (void *) t_FrequencyPattern_init_ },
          { Py_tp_getset, t_FrequencyPattern__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FrequencyPattern)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FrequencyPattern, t_FrequencyPattern, FrequencyPattern);

        void t_FrequencyPattern::install(PyObject *module)
        {
          installType(&PY_TYPE(FrequencyPattern), &PY_TYPE_DEF(FrequencyPattern), module, "FrequencyPattern", 0);
        }

        void t_FrequencyPattern::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "class_", make_descriptor(FrequencyPattern::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "wrapfn_", make_descriptor(t_FrequencyPattern::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "boxfn_", make_descriptor(boxObject));
          env->getClass(FrequencyPattern::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FrequencyPattern), "ZERO_CORRECTION", make_descriptor(t_FrequencyPattern::wrap_Object(*FrequencyPattern::ZERO_CORRECTION)));
        }

        static PyObject *t_FrequencyPattern_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FrequencyPattern::initializeClass, 1)))
            return NULL;
          return t_FrequencyPattern::wrap_Object(FrequencyPattern(((t_FrequencyPattern *) arg)->object.this$));
        }
        static PyObject *t_FrequencyPattern_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FrequencyPattern::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FrequencyPattern_init_(t_FrequencyPattern *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::gnss::antenna::PhaseCenterVariationFunction a1((jobject) NULL);
          FrequencyPattern object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::gnss::antenna::PhaseCenterVariationFunction::initializeClass, &a0, &a1))
          {
            INT_CALL(object = FrequencyPattern(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FrequencyPattern_getEccentricities(t_FrequencyPattern *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getEccentricities());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_FrequencyPattern_getPhaseCenterVariation(t_FrequencyPattern *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getPhaseCenterVariation(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPhaseCenterVariation", arg);
          return NULL;
        }

        static PyObject *t_FrequencyPattern_getPhaseCenterVariationFunction(t_FrequencyPattern *self)
        {
          ::org::orekit::gnss::antenna::PhaseCenterVariationFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhaseCenterVariationFunction());
          return ::org::orekit::gnss::antenna::t_PhaseCenterVariationFunction::wrap_Object(result);
        }

        static PyObject *t_FrequencyPattern_get__eccentricities(t_FrequencyPattern *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getEccentricities());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_FrequencyPattern_get__phaseCenterVariationFunction(t_FrequencyPattern *self, void *data)
        {
          ::org::orekit::gnss::antenna::PhaseCenterVariationFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhaseCenterVariationFunction());
          return ::org::orekit::gnss::antenna::t_PhaseCenterVariationFunction::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *EphemerisGenerator::class$ = NULL;
      jmethodID *EphemerisGenerator::mids$ = NULL;
      bool EphemerisGenerator::live$ = false;

      jclass EphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/EphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getGeneratedEphemeris_fa108fc36df3791a] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/BoundedPropagator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::propagation::BoundedPropagator EphemerisGenerator::getGeneratedEphemeris() const
      {
        return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getGeneratedEphemeris_fa108fc36df3791a]));
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
      static PyObject *t_EphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EphemerisGenerator_getGeneratedEphemeris(t_EphemerisGenerator *self);
      static PyObject *t_EphemerisGenerator_get__generatedEphemeris(t_EphemerisGenerator *self, void *data);
      static PyGetSetDef t_EphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_EphemerisGenerator, generatedEphemeris),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_EphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EphemerisGenerator, getGeneratedEphemeris, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EphemerisGenerator)[] = {
        { Py_tp_methods, t_EphemerisGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_EphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EphemerisGenerator, t_EphemerisGenerator, EphemerisGenerator);

      void t_EphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(EphemerisGenerator), &PY_TYPE_DEF(EphemerisGenerator), module, "EphemerisGenerator", 0);
      }

      void t_EphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisGenerator), "class_", make_descriptor(EphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisGenerator), "wrapfn_", make_descriptor(t_EphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_EphemerisGenerator::wrap_Object(EphemerisGenerator(((t_EphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_EphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EphemerisGenerator_getGeneratedEphemeris(t_EphemerisGenerator *self)
      {
        ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
      }

      static PyObject *t_EphemerisGenerator_get__generatedEphemeris(t_EphemerisGenerator *self, void *data)
      {
        ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AggregateBoundedAttitudeProvider.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AggregateBoundedAttitudeProvider::class$ = NULL;
      jmethodID *AggregateBoundedAttitudeProvider::mids$ = NULL;
      bool AggregateBoundedAttitudeProvider::live$ = false;

      jclass AggregateBoundedAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AggregateBoundedAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3abde0be9b9c9773] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
          mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_5c74bfcf2d42825a] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getAttitudeRotation_85bb0a19efdadc1d] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregateBoundedAttitudeProvider::AggregateBoundedAttitudeProvider(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3abde0be9b9c9773, a0.this$)) {}

      ::org::orekit::attitudes::FieldAttitude AggregateBoundedAttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude AggregateBoundedAttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AggregateBoundedAttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_5c74bfcf2d42825a], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AggregateBoundedAttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_85bb0a19efdadc1d], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::AbsoluteDate AggregateBoundedAttitudeProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate AggregateBoundedAttitudeProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
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
      static PyObject *t_AggregateBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AggregateBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AggregateBoundedAttitudeProvider_init_(t_AggregateBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitude(t_AggregateBoundedAttitudeProvider *self, PyObject *args);
      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitudeRotation(t_AggregateBoundedAttitudeProvider *self, PyObject *args);
      static PyObject *t_AggregateBoundedAttitudeProvider_getMaxDate(t_AggregateBoundedAttitudeProvider *self);
      static PyObject *t_AggregateBoundedAttitudeProvider_getMinDate(t_AggregateBoundedAttitudeProvider *self);
      static PyObject *t_AggregateBoundedAttitudeProvider_get__maxDate(t_AggregateBoundedAttitudeProvider *self, void *data);
      static PyObject *t_AggregateBoundedAttitudeProvider_get__minDate(t_AggregateBoundedAttitudeProvider *self, void *data);
      static PyGetSetDef t_AggregateBoundedAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_AggregateBoundedAttitudeProvider, maxDate),
        DECLARE_GET_FIELD(t_AggregateBoundedAttitudeProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AggregateBoundedAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AggregateBoundedAttitudeProvider)[] = {
        { Py_tp_methods, t_AggregateBoundedAttitudeProvider__methods_ },
        { Py_tp_init, (void *) t_AggregateBoundedAttitudeProvider_init_ },
        { Py_tp_getset, t_AggregateBoundedAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AggregateBoundedAttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AggregateBoundedAttitudeProvider, t_AggregateBoundedAttitudeProvider, AggregateBoundedAttitudeProvider);

      void t_AggregateBoundedAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AggregateBoundedAttitudeProvider), &PY_TYPE_DEF(AggregateBoundedAttitudeProvider), module, "AggregateBoundedAttitudeProvider", 0);
      }

      void t_AggregateBoundedAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedAttitudeProvider), "class_", make_descriptor(AggregateBoundedAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedAttitudeProvider), "wrapfn_", make_descriptor(t_AggregateBoundedAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedAttitudeProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AggregateBoundedAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_AggregateBoundedAttitudeProvider::wrap_Object(AggregateBoundedAttitudeProvider(((t_AggregateBoundedAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_AggregateBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AggregateBoundedAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AggregateBoundedAttitudeProvider_init_(t_AggregateBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        AggregateBoundedAttitudeProvider object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = AggregateBoundedAttitudeProvider(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitude(t_AggregateBoundedAttitudeProvider *self, PyObject *args)
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

      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitudeRotation(t_AggregateBoundedAttitudeProvider *self, PyObject *args)
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

      static PyObject *t_AggregateBoundedAttitudeProvider_getMaxDate(t_AggregateBoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_getMinDate(t_AggregateBoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_get__maxDate(t_AggregateBoundedAttitudeProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_get__minDate(t_AggregateBoundedAttitudeProvider *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTNewtonianAttractionContext.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTNewtonianAttractionContext::class$ = NULL;
            jmethodID *FieldDSSTNewtonianAttractionContext::mids$ = NULL;
            bool FieldDSSTNewtonianAttractionContext::live$ = false;

            jclass FieldDSSTNewtonianAttractionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTNewtonianAttractionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getGM_613c8f46c659f636] = env->getMethodID(cls, "getGM", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTNewtonianAttractionContext::getGM() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGM_613c8f46c659f636]));
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
            static PyObject *t_FieldDSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_of_(t_FieldDSSTNewtonianAttractionContext *self, PyObject *args);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_getGM(t_FieldDSSTNewtonianAttractionContext *self);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__gM(t_FieldDSSTNewtonianAttractionContext *self, void *data);
            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__parameters_(t_FieldDSSTNewtonianAttractionContext *self, void *data);
            static PyGetSetDef t_FieldDSSTNewtonianAttractionContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTNewtonianAttractionContext, gM),
              DECLARE_GET_FIELD(t_FieldDSSTNewtonianAttractionContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTNewtonianAttractionContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTNewtonianAttractionContext, getGM, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTNewtonianAttractionContext)[] = {
              { Py_tp_methods, t_FieldDSSTNewtonianAttractionContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldDSSTNewtonianAttractionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTNewtonianAttractionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTNewtonianAttractionContext, t_FieldDSSTNewtonianAttractionContext, FieldDSSTNewtonianAttractionContext);
            PyObject *t_FieldDSSTNewtonianAttractionContext::wrap_Object(const FieldDSSTNewtonianAttractionContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTNewtonianAttractionContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTNewtonianAttractionContext *self = (t_FieldDSSTNewtonianAttractionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTNewtonianAttractionContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTNewtonianAttractionContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTNewtonianAttractionContext *self = (t_FieldDSSTNewtonianAttractionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTNewtonianAttractionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTNewtonianAttractionContext), &PY_TYPE_DEF(FieldDSSTNewtonianAttractionContext), module, "FieldDSSTNewtonianAttractionContext", 0);
            }

            void t_FieldDSSTNewtonianAttractionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTNewtonianAttractionContext), "class_", make_descriptor(FieldDSSTNewtonianAttractionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTNewtonianAttractionContext), "wrapfn_", make_descriptor(t_FieldDSSTNewtonianAttractionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTNewtonianAttractionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTNewtonianAttractionContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTNewtonianAttractionContext::wrap_Object(FieldDSSTNewtonianAttractionContext(((t_FieldDSSTNewtonianAttractionContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTNewtonianAttractionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_of_(t_FieldDSSTNewtonianAttractionContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_getGM(t_FieldDSSTNewtonianAttractionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getGM());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__parameters_(t_FieldDSSTNewtonianAttractionContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTNewtonianAttractionContext_get__gM(t_FieldDSSTNewtonianAttractionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getGM());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/MultiStartUnivariateOptimizer.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
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
            mids$[mid_init$_476856d81f2a6382] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/univariate/UnivariateOptimizer;ILorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_getEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getOptima_029a38928c7fa632] = env->getMethodID(cls, "getOptima", "()[Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");
            mids$[mid_optimize_749f41c4a1b59e75] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");
            mids$[mid_doOptimize_31fa57ee28e1174a] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultiStartUnivariateOptimizer::MultiStartUnivariateOptimizer(const ::org::hipparchus::optim::univariate::UnivariateOptimizer & a0, jint a1, const ::org::hipparchus::random::RandomGenerator & a2) : ::org::hipparchus::optim::univariate::UnivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_476856d81f2a6382, a0.this$, a1, a2.this$)) {}

        jint MultiStartUnivariateOptimizer::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_412668abc8d889e9]);
        }

        JArray< ::org::hipparchus::optim::univariate::UnivariatePointValuePair > MultiStartUnivariateOptimizer::getOptima() const
        {
          return JArray< ::org::hipparchus::optim::univariate::UnivariatePointValuePair >(env->callObjectMethod(this$, mids$[mid_getOptima_029a38928c7fa632]));
        }

        ::org::hipparchus::optim::univariate::UnivariatePointValuePair MultiStartUnivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::univariate::UnivariatePointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_749f41c4a1b59e75], a0.this$));
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
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesPhaseModifier.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaInterSatellitesPhaseModifier::class$ = NULL;
          jmethodID *OnBoardAntennaInterSatellitesPhaseModifier::mids$ = NULL;
          bool OnBoardAntennaInterSatellitesPhaseModifier::live$ = false;

          jclass OnBoardAntennaInterSatellitesPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_be9548a8a583a03d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaInterSatellitesPhaseModifier::OnBoardAntennaInterSatellitesPhaseModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_be9548a8a583a03d, a0.this$, a1.this$)) {}

          ::java::util::List OnBoardAntennaInterSatellitesPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void OnBoardAntennaInterSatellitesPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaInterSatellitesPhaseModifier_init_(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_getParametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_get__parametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaInterSatellitesPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaInterSatellitesPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaInterSatellitesPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaInterSatellitesPhaseModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaInterSatellitesPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaInterSatellitesPhaseModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaInterSatellitesPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaInterSatellitesPhaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaInterSatellitesPhaseModifier, t_OnBoardAntennaInterSatellitesPhaseModifier, OnBoardAntennaInterSatellitesPhaseModifier);

          void t_OnBoardAntennaInterSatellitesPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), &PY_TYPE_DEF(OnBoardAntennaInterSatellitesPhaseModifier), module, "OnBoardAntennaInterSatellitesPhaseModifier", 0);
          }

          void t_OnBoardAntennaInterSatellitesPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), "class_", make_descriptor(OnBoardAntennaInterSatellitesPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaInterSatellitesPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaInterSatellitesPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaInterSatellitesPhaseModifier::wrap_Object(OnBoardAntennaInterSatellitesPhaseModifier(((t_OnBoardAntennaInterSatellitesPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaInterSatellitesPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaInterSatellitesPhaseModifier_init_(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            OnBoardAntennaInterSatellitesPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OnBoardAntennaInterSatellitesPhaseModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_getParametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_get__parametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self, void *data)
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
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/section/Metadata.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Segment::class$ = NULL;
          jmethodID *Segment::mids$ = NULL;
          bool Segment::live$ = false;

          jclass Segment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Segment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e68e37923ef9436e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/Metadata;Lorg/orekit/files/ccsds/section/Data;)V");
              mids$[mid_getData_5230e1439f6cd548] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/section/Data;");
              mids$[mid_getMetadata_56bff441ea4d4ad0] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/section/Metadata;");
              mids$[mid_setMetadata_b656c0de7aacc142] = env->getMethodID(cls, "setMetadata", "(Lorg/orekit/files/ccsds/section/Metadata;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Segment::Segment(const ::org::orekit::files::ccsds::section::Metadata & a0, const ::org::orekit::files::ccsds::section::Data & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e68e37923ef9436e, a0.this$, a1.this$)) {}

          ::org::orekit::files::ccsds::section::Data Segment::getData() const
          {
            return ::org::orekit::files::ccsds::section::Data(env->callObjectMethod(this$, mids$[mid_getData_5230e1439f6cd548]));
          }

          ::org::orekit::files::ccsds::section::Metadata Segment::getMetadata() const
          {
            return ::org::orekit::files::ccsds::section::Metadata(env->callObjectMethod(this$, mids$[mid_getMetadata_56bff441ea4d4ad0]));
          }

          void Segment::setMetadata(const ::org::orekit::files::ccsds::section::Metadata & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMetadata_b656c0de7aacc142], a0.this$);
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
          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Segment_of_(t_Segment *self, PyObject *args);
          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Segment_getData(t_Segment *self);
          static PyObject *t_Segment_getMetadata(t_Segment *self);
          static PyObject *t_Segment_setMetadata(t_Segment *self, PyObject *arg);
          static PyObject *t_Segment_get__data(t_Segment *self, void *data);
          static PyObject *t_Segment_get__metadata(t_Segment *self, void *data);
          static int t_Segment_set__metadata(t_Segment *self, PyObject *arg, void *data);
          static PyObject *t_Segment_get__parameters_(t_Segment *self, void *data);
          static PyGetSetDef t_Segment__fields_[] = {
            DECLARE_GET_FIELD(t_Segment, data),
            DECLARE_GETSET_FIELD(t_Segment, metadata),
            DECLARE_GET_FIELD(t_Segment, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Segment__methods_[] = {
            DECLARE_METHOD(t_Segment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Segment, of_, METH_VARARGS),
            DECLARE_METHOD(t_Segment, getData, METH_NOARGS),
            DECLARE_METHOD(t_Segment, getMetadata, METH_NOARGS),
            DECLARE_METHOD(t_Segment, setMetadata, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Segment)[] = {
            { Py_tp_methods, t_Segment__methods_ },
            { Py_tp_init, (void *) t_Segment_init_ },
            { Py_tp_getset, t_Segment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Segment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Segment, t_Segment, Segment);
          PyObject *t_Segment::wrap_Object(const Segment& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Segment::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Segment *self = (t_Segment *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Segment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Segment::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Segment *self = (t_Segment *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_Segment::install(PyObject *module)
          {
            installType(&PY_TYPE(Segment), &PY_TYPE_DEF(Segment), module, "Segment", 0);
          }

          void t_Segment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "class_", make_descriptor(Segment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "wrapfn_", make_descriptor(t_Segment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Segment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Segment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Segment::initializeClass, 1)))
              return NULL;
            return t_Segment::wrap_Object(Segment(((t_Segment *) arg)->object.this$));
          }
          static PyObject *t_Segment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Segment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Segment_of_(t_Segment *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Segment_init_(t_Segment *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::section::Metadata a0((jobject) NULL);
            ::org::orekit::files::ccsds::section::Data a1((jobject) NULL);
            Segment object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::section::Metadata::initializeClass, ::org::orekit::files::ccsds::section::Data::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Segment(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Segment_getData(t_Segment *self)
          {
            ::org::orekit::files::ccsds::section::Data result((jobject) NULL);
            OBJ_CALL(result = self->object.getData());
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::files::ccsds::section::t_Data::wrap_Object(result);
          }

          static PyObject *t_Segment_getMetadata(t_Segment *self)
          {
            ::org::orekit::files::ccsds::section::Metadata result((jobject) NULL);
            OBJ_CALL(result = self->object.getMetadata());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::ccsds::section::t_Metadata::wrap_Object(result);
          }

          static PyObject *t_Segment_setMetadata(t_Segment *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::section::Metadata a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Metadata::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setMetadata(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMetadata", arg);
            return NULL;
          }
          static PyObject *t_Segment_get__parameters_(t_Segment *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Segment_get__data(t_Segment *self, void *data)
          {
            ::org::orekit::files::ccsds::section::Data value((jobject) NULL);
            OBJ_CALL(value = self->object.getData());
            return ::org::orekit::files::ccsds::section::t_Data::wrap_Object(value);
          }

          static PyObject *t_Segment_get__metadata(t_Segment *self, void *data)
          {
            ::org::orekit::files::ccsds::section::Metadata value((jobject) NULL);
            OBJ_CALL(value = self->object.getMetadata());
            return ::org::orekit::files::ccsds::section::t_Metadata::wrap_Object(value);
          }
          static int t_Segment_set__metadata(t_Segment *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::section::Metadata value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Metadata::initializeClass, &value))
              {
                INT_CALL(self->object.setMetadata(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "metadata", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonFieldAdaptableInterval.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldAdaptableInterval::class$ = NULL;
        jmethodID *PythonFieldAdaptableInterval::mids$ = NULL;
        bool PythonFieldAdaptableInterval::live$ = false;

        jclass PythonFieldAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_currentInterval_2bf27f945aefc85c] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/FieldSpacecraftState;)D");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAdaptableInterval::PythonFieldAdaptableInterval() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonFieldAdaptableInterval::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonFieldAdaptableInterval::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonFieldAdaptableInterval::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        static PyObject *t_PythonFieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdaptableInterval_of_(t_PythonFieldAdaptableInterval *self, PyObject *args);
        static int t_PythonFieldAdaptableInterval_init_(t_PythonFieldAdaptableInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAdaptableInterval_finalize(t_PythonFieldAdaptableInterval *self);
        static PyObject *t_PythonFieldAdaptableInterval_pythonExtension(t_PythonFieldAdaptableInterval *self, PyObject *args);
        static jdouble JNICALL t_PythonFieldAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldAdaptableInterval_get__self(t_PythonFieldAdaptableInterval *self, void *data);
        static PyObject *t_PythonFieldAdaptableInterval_get__parameters_(t_PythonFieldAdaptableInterval *self, void *data);
        static PyGetSetDef t_PythonFieldAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAdaptableInterval, self),
          DECLARE_GET_FIELD(t_PythonFieldAdaptableInterval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAdaptableInterval)[] = {
          { Py_tp_methods, t_PythonFieldAdaptableInterval__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAdaptableInterval_init_ },
          { Py_tp_getset, t_PythonFieldAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldAdaptableInterval, t_PythonFieldAdaptableInterval, PythonFieldAdaptableInterval);
        PyObject *t_PythonFieldAdaptableInterval::wrap_Object(const PythonFieldAdaptableInterval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdaptableInterval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdaptableInterval *self = (t_PythonFieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAdaptableInterval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdaptableInterval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdaptableInterval *self = (t_PythonFieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAdaptableInterval), &PY_TYPE_DEF(PythonFieldAdaptableInterval), module, "PythonFieldAdaptableInterval", 1);
        }

        void t_PythonFieldAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdaptableInterval), "class_", make_descriptor(PythonFieldAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdaptableInterval), "wrapfn_", make_descriptor(t_PythonFieldAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdaptableInterval), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAdaptableInterval::initializeClass);
          JNINativeMethod methods[] = {
            { "currentInterval", "(Lorg/orekit/propagation/FieldSpacecraftState;)D", (void *) t_PythonFieldAdaptableInterval_currentInterval0 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAdaptableInterval_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonFieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAdaptableInterval::wrap_Object(PythonFieldAdaptableInterval(((t_PythonFieldAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAdaptableInterval_of_(t_PythonFieldAdaptableInterval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAdaptableInterval_init_(t_PythonFieldAdaptableInterval *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldAdaptableInterval object((jobject) NULL);

          INT_CALL(object = PythonFieldAdaptableInterval());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldAdaptableInterval_finalize(t_PythonFieldAdaptableInterval *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAdaptableInterval_pythonExtension(t_PythonFieldAdaptableInterval *self, PyObject *args)
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

        static jdouble JNICALL t_PythonFieldAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdaptableInterval::mids$[PythonFieldAdaptableInterval::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "currentInterval", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("currentInterval", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static void JNICALL t_PythonFieldAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdaptableInterval::mids$[PythonFieldAdaptableInterval::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAdaptableInterval::mids$[PythonFieldAdaptableInterval::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldAdaptableInterval_get__self(t_PythonFieldAdaptableInterval *self, void *data)
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
        static PyObject *t_PythonFieldAdaptableInterval_get__parameters_(t_PythonFieldAdaptableInterval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/LongitudeExtremumDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/LongitudeExtremumDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LongitudeExtremumDetector::class$ = NULL;
        jmethodID *LongitudeExtremumDetector::mids$ = NULL;
        bool LongitudeExtremumDetector::live$ = false;

        jclass LongitudeExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LongitudeExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fee9aa8bf77f755f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_init$_9c6b45b00f88cd51] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_f166528db337c659] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_280af7449dc0e320] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LongitudeExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LongitudeExtremumDetector::LongitudeExtremumDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_fee9aa8bf77f755f, a0.this$)) {}

        LongitudeExtremumDetector::LongitudeExtremumDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_9c6b45b00f88cd51, a0, a1, a2.this$)) {}

        jdouble LongitudeExtremumDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::bodies::BodyShape LongitudeExtremumDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_f166528db337c659]));
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
        static PyObject *t_LongitudeExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LongitudeExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LongitudeExtremumDetector_of_(t_LongitudeExtremumDetector *self, PyObject *args);
        static int t_LongitudeExtremumDetector_init_(t_LongitudeExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LongitudeExtremumDetector_g(t_LongitudeExtremumDetector *self, PyObject *args);
        static PyObject *t_LongitudeExtremumDetector_getBody(t_LongitudeExtremumDetector *self);
        static PyObject *t_LongitudeExtremumDetector_get__body(t_LongitudeExtremumDetector *self, void *data);
        static PyObject *t_LongitudeExtremumDetector_get__parameters_(t_LongitudeExtremumDetector *self, void *data);
        static PyGetSetDef t_LongitudeExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LongitudeExtremumDetector, body),
          DECLARE_GET_FIELD(t_LongitudeExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LongitudeExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_LongitudeExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LongitudeExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LongitudeExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LongitudeExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LongitudeExtremumDetector, getBody, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LongitudeExtremumDetector)[] = {
          { Py_tp_methods, t_LongitudeExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_LongitudeExtremumDetector_init_ },
          { Py_tp_getset, t_LongitudeExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LongitudeExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LongitudeExtremumDetector, t_LongitudeExtremumDetector, LongitudeExtremumDetector);
        PyObject *t_LongitudeExtremumDetector::wrap_Object(const LongitudeExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LongitudeExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LongitudeExtremumDetector *self = (t_LongitudeExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LongitudeExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LongitudeExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LongitudeExtremumDetector *self = (t_LongitudeExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LongitudeExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LongitudeExtremumDetector), &PY_TYPE_DEF(LongitudeExtremumDetector), module, "LongitudeExtremumDetector", 0);
        }

        void t_LongitudeExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeExtremumDetector), "class_", make_descriptor(LongitudeExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeExtremumDetector), "wrapfn_", make_descriptor(t_LongitudeExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LongitudeExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LongitudeExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_LongitudeExtremumDetector::wrap_Object(LongitudeExtremumDetector(((t_LongitudeExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_LongitudeExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LongitudeExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LongitudeExtremumDetector_of_(t_LongitudeExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LongitudeExtremumDetector_init_(t_LongitudeExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              LongitudeExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
              {
                INT_CALL(object = LongitudeExtremumDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LongitudeExtremumDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              LongitudeExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = LongitudeExtremumDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LongitudeExtremumDetector);
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

        static PyObject *t_LongitudeExtremumDetector_g(t_LongitudeExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LongitudeExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LongitudeExtremumDetector_getBody(t_LongitudeExtremumDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }
        static PyObject *t_LongitudeExtremumDetector_get__parameters_(t_LongitudeExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LongitudeExtremumDetector_get__body(t_LongitudeExtremumDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/JacobiPreconditioner.h"
#include "org/hipparchus/linear/JacobiPreconditioner.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *JacobiPreconditioner::class$ = NULL;
      jmethodID *JacobiPreconditioner::mids$ = NULL;
      bool JacobiPreconditioner::live$ = false;

      jclass JacobiPreconditioner::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/JacobiPreconditioner");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bdd4888f749f6b83] = env->getMethodID(cls, "<init>", "([DZ)V");
          mids$[mid_create_7673b5dd706b64d2] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/linear/RealLinearOperator;)Lorg/hipparchus/linear/JacobiPreconditioner;");
          mids$[mid_getColumnDimension_412668abc8d889e9] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getRowDimension_412668abc8d889e9] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_operate_342d5b01463e0dc5] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_sqrt_89223020fe450792] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/linear/RealLinearOperator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JacobiPreconditioner::JacobiPreconditioner(const JArray< jdouble > & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bdd4888f749f6b83, a0.this$, a1)) {}

      JacobiPreconditioner JacobiPreconditioner::create(const ::org::hipparchus::linear::RealLinearOperator & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JacobiPreconditioner(env->callStaticObjectMethod(cls, mids$[mid_create_7673b5dd706b64d2], a0.this$));
      }

      jint JacobiPreconditioner::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_412668abc8d889e9]);
      }

      jint JacobiPreconditioner::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_412668abc8d889e9]);
      }

      ::org::hipparchus::linear::RealVector JacobiPreconditioner::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_342d5b01463e0dc5], a0.this$));
      }

      ::org::hipparchus::linear::RealLinearOperator JacobiPreconditioner::sqrt() const
      {
        return ::org::hipparchus::linear::RealLinearOperator(env->callObjectMethod(this$, mids$[mid_sqrt_89223020fe450792]));
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
      static PyObject *t_JacobiPreconditioner_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JacobiPreconditioner_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JacobiPreconditioner_init_(t_JacobiPreconditioner *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JacobiPreconditioner_create(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JacobiPreconditioner_getColumnDimension(t_JacobiPreconditioner *self);
      static PyObject *t_JacobiPreconditioner_getRowDimension(t_JacobiPreconditioner *self);
      static PyObject *t_JacobiPreconditioner_operate(t_JacobiPreconditioner *self, PyObject *arg);
      static PyObject *t_JacobiPreconditioner_sqrt(t_JacobiPreconditioner *self);
      static PyObject *t_JacobiPreconditioner_get__columnDimension(t_JacobiPreconditioner *self, void *data);
      static PyObject *t_JacobiPreconditioner_get__rowDimension(t_JacobiPreconditioner *self, void *data);
      static PyGetSetDef t_JacobiPreconditioner__fields_[] = {
        DECLARE_GET_FIELD(t_JacobiPreconditioner, columnDimension),
        DECLARE_GET_FIELD(t_JacobiPreconditioner, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JacobiPreconditioner__methods_[] = {
        DECLARE_METHOD(t_JacobiPreconditioner, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JacobiPreconditioner, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JacobiPreconditioner, create, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JacobiPreconditioner, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_JacobiPreconditioner, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_JacobiPreconditioner, operate, METH_O),
        DECLARE_METHOD(t_JacobiPreconditioner, sqrt, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JacobiPreconditioner)[] = {
        { Py_tp_methods, t_JacobiPreconditioner__methods_ },
        { Py_tp_init, (void *) t_JacobiPreconditioner_init_ },
        { Py_tp_getset, t_JacobiPreconditioner__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JacobiPreconditioner)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(JacobiPreconditioner, t_JacobiPreconditioner, JacobiPreconditioner);

      void t_JacobiPreconditioner::install(PyObject *module)
      {
        installType(&PY_TYPE(JacobiPreconditioner), &PY_TYPE_DEF(JacobiPreconditioner), module, "JacobiPreconditioner", 0);
      }

      void t_JacobiPreconditioner::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPreconditioner), "class_", make_descriptor(JacobiPreconditioner::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPreconditioner), "wrapfn_", make_descriptor(t_JacobiPreconditioner::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPreconditioner), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_JacobiPreconditioner_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JacobiPreconditioner::initializeClass, 1)))
          return NULL;
        return t_JacobiPreconditioner::wrap_Object(JacobiPreconditioner(((t_JacobiPreconditioner *) arg)->object.this$));
      }
      static PyObject *t_JacobiPreconditioner_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JacobiPreconditioner::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JacobiPreconditioner_init_(t_JacobiPreconditioner *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        jboolean a1;
        JacobiPreconditioner object((jobject) NULL);

        if (!parseArgs(args, "[DZ", &a0, &a1))
        {
          INT_CALL(object = JacobiPreconditioner(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_JacobiPreconditioner_create(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
        JacobiPreconditioner result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealLinearOperator::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::JacobiPreconditioner::create(a0));
          return t_JacobiPreconditioner::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", arg);
        return NULL;
      }

      static PyObject *t_JacobiPreconditioner_getColumnDimension(t_JacobiPreconditioner *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_JacobiPreconditioner_getRowDimension(t_JacobiPreconditioner *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_JacobiPreconditioner_operate(t_JacobiPreconditioner *self, PyObject *arg)
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

      static PyObject *t_JacobiPreconditioner_sqrt(t_JacobiPreconditioner *self)
      {
        ::org::hipparchus::linear::RealLinearOperator result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return ::org::hipparchus::linear::t_RealLinearOperator::wrap_Object(result);
      }

      static PyObject *t_JacobiPreconditioner_get__columnDimension(t_JacobiPreconditioner *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_JacobiPreconditioner_get__rowDimension(t_JacobiPreconditioner *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
