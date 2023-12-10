#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LazyLoadedEop.h"
#include "org/orekit/time/TimeScales.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LazyLoadedEop::class$ = NULL;
      jmethodID *LazyLoadedEop::mids$ = NULL;
      bool LazyLoadedEop::live$ = false;

      jclass LazyLoadedEop::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LazyLoadedEop");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_92cedf0c8913c23b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_addDefaultEOP1980HistoryLoaders_76cf8f9004d5e7a3] = env->getMethodID(cls, "addDefaultEOP1980HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)V");
          mids$[mid_addDefaultEOP2000HistoryLoaders_76cf8f9004d5e7a3] = env->getMethodID(cls, "addDefaultEOP2000HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)V");
          mids$[mid_addEOPHistoryLoader_e1571b88fce42eed] = env->getMethodID(cls, "addEOPHistoryLoader", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/EopHistoryLoader;)V");
          mids$[mid_clearEOPHistoryLoaders_7ae3461a92a43152] = env->getMethodID(cls, "clearEOPHistoryLoaders", "()V");
          mids$[mid_getDataProvidersManager_e1fc6728282cfec7] = env->getMethodID(cls, "getDataProvidersManager", "()Lorg/orekit/data/DataProvidersManager;");
          mids$[mid_getEOPHistory_7e3b1b9c6a8f4b4a] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;ZLorg/orekit/time/TimeScales;)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_setEOPContinuityThreshold_77e0f9a1f260e2e5] = env->getMethodID(cls, "setEOPContinuityThreshold", "(D)V");
          mids$[mid_setInterpolationDegree_0a2a1ac2721c0336] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedEop::LazyLoadedEop(const ::org::orekit::data::DataProvidersManager & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_92cedf0c8913c23b, a0.this$)) {}

      void LazyLoadedEop::addDefaultEOP1980HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, const ::java::util::function::Supplier & a6) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP1980HistoryLoaders_76cf8f9004d5e7a3], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$);
      }

      void LazyLoadedEop::addDefaultEOP2000HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5, const ::java::util::function::Supplier & a6) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP2000HistoryLoaders_76cf8f9004d5e7a3], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$);
      }

      void LazyLoadedEop::addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::EopHistoryLoader & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addEOPHistoryLoader_e1571b88fce42eed], a0.this$, a1.this$);
      }

      void LazyLoadedEop::clearEOPHistoryLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEOPHistoryLoaders_7ae3461a92a43152]);
      }

      ::org::orekit::data::DataProvidersManager LazyLoadedEop::getDataProvidersManager() const
      {
        return ::org::orekit::data::DataProvidersManager(env->callObjectMethod(this$, mids$[mid_getDataProvidersManager_e1fc6728282cfec7]));
      }

      ::org::orekit::frames::EOPHistory LazyLoadedEop::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1, const ::org::orekit::time::TimeScales & a2) const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_7e3b1b9c6a8f4b4a], a0.this$, a1, a2.this$));
      }

      void LazyLoadedEop::setEOPContinuityThreshold(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setEOPContinuityThreshold_77e0f9a1f260e2e5], a0);
      }

      void LazyLoadedEop::setInterpolationDegree(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_0a2a1ac2721c0336], a0);
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
      static PyObject *t_LazyLoadedEop_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedEop_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedEop_init_(t_LazyLoadedEop *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedEop_addDefaultEOP1980HistoryLoaders(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_addDefaultEOP2000HistoryLoaders(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_addEOPHistoryLoader(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_clearEOPHistoryLoaders(t_LazyLoadedEop *self);
      static PyObject *t_LazyLoadedEop_getDataProvidersManager(t_LazyLoadedEop *self);
      static PyObject *t_LazyLoadedEop_getEOPHistory(t_LazyLoadedEop *self, PyObject *args);
      static PyObject *t_LazyLoadedEop_setEOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg);
      static PyObject *t_LazyLoadedEop_setInterpolationDegree(t_LazyLoadedEop *self, PyObject *arg);
      static PyObject *t_LazyLoadedEop_get__dataProvidersManager(t_LazyLoadedEop *self, void *data);
      static int t_LazyLoadedEop_set__eOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg, void *data);
      static int t_LazyLoadedEop_set__interpolationDegree(t_LazyLoadedEop *self, PyObject *arg, void *data);
      static PyGetSetDef t_LazyLoadedEop__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedEop, dataProvidersManager),
        DECLARE_SET_FIELD(t_LazyLoadedEop, eOPContinuityThreshold),
        DECLARE_SET_FIELD(t_LazyLoadedEop, interpolationDegree),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedEop__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedEop, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedEop, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedEop, addDefaultEOP1980HistoryLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, addDefaultEOP2000HistoryLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, addEOPHistoryLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, clearEOPHistoryLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedEop, getDataProvidersManager, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedEop, getEOPHistory, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedEop, setEOPContinuityThreshold, METH_O),
        DECLARE_METHOD(t_LazyLoadedEop, setInterpolationDegree, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedEop)[] = {
        { Py_tp_methods, t_LazyLoadedEop__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedEop_init_ },
        { Py_tp_getset, t_LazyLoadedEop__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedEop)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LazyLoadedEop, t_LazyLoadedEop, LazyLoadedEop);

      void t_LazyLoadedEop::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedEop), &PY_TYPE_DEF(LazyLoadedEop), module, "LazyLoadedEop", 0);
      }

      void t_LazyLoadedEop::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedEop), "class_", make_descriptor(LazyLoadedEop::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedEop), "wrapfn_", make_descriptor(t_LazyLoadedEop::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedEop), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedEop_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedEop::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedEop::wrap_Object(LazyLoadedEop(((t_LazyLoadedEop *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedEop_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedEop::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedEop_init_(t_LazyLoadedEop *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
        LazyLoadedEop object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::data::DataProvidersManager::initializeClass, &a0))
        {
          INT_CALL(object = LazyLoadedEop(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedEop_addDefaultEOP1980HistoryLoaders(t_LazyLoadedEop *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);
        ::java::util::function::Supplier a6((jobject) NULL);
        PyTypeObject **p6;

        if (!parseArgs(args, "ssssssK", ::java::util::function::Supplier::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::function::t_Supplier::parameters_))
        {
          OBJ_CALL(self->object.addDefaultEOP1980HistoryLoaders(a0, a1, a2, a3, a4, a5, a6));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultEOP1980HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_addDefaultEOP2000HistoryLoaders(t_LazyLoadedEop *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);
        ::java::util::function::Supplier a6((jobject) NULL);
        PyTypeObject **p6;

        if (!parseArgs(args, "ssssssK", ::java::util::function::Supplier::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::function::t_Supplier::parameters_))
        {
          OBJ_CALL(self->object.addDefaultEOP2000HistoryLoaders(a0, a1, a2, a3, a4, a5, a6));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultEOP2000HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_addEOPHistoryLoader(t_LazyLoadedEop *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::EopHistoryLoader a1((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::EopHistoryLoader::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(self->object.addEOPHistoryLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEOPHistoryLoader", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_clearEOPHistoryLoaders(t_LazyLoadedEop *self)
      {
        OBJ_CALL(self->object.clearEOPHistoryLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedEop_getDataProvidersManager(t_LazyLoadedEop *self)
      {
        ::org::orekit::data::DataProvidersManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataProvidersManager());
        return ::org::orekit::data::t_DataProvidersManager::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedEop_getEOPHistory(t_LazyLoadedEop *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::TimeScales a2((jobject) NULL);
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArgs(args, "KZk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
        {
          OBJ_CALL(result = self->object.getEOPHistory(a0, a1, a2));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEOPHistory", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_setEOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setEOPContinuityThreshold(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEOPContinuityThreshold", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_setInterpolationDegree(t_LazyLoadedEop *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setInterpolationDegree(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setInterpolationDegree", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedEop_get__dataProvidersManager(t_LazyLoadedEop *self, void *data)
      {
        ::org::orekit::data::DataProvidersManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataProvidersManager());
        return ::org::orekit::data::t_DataProvidersManager::wrap_Object(value);
      }

      static int t_LazyLoadedEop_set__eOPContinuityThreshold(t_LazyLoadedEop *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setEOPContinuityThreshold(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "eOPContinuityThreshold", arg);
        return -1;
      }

      static int t_LazyLoadedEop_set__interpolationDegree(t_LazyLoadedEop *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setInterpolationDegree(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "interpolationDegree", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$InvalidPVProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AggregatedPVCoordinatesProvider$InvalidPVProvider::class$ = NULL;
      jmethodID *AggregatedPVCoordinatesProvider$InvalidPVProvider::mids$ = NULL;
      bool AggregatedPVCoordinatesProvider$InvalidPVProvider::live$ = false;

      jclass AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AggregatedPVCoordinatesProvider$InvalidPVProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getPVCoordinates_20557c175f7cd899] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregatedPVCoordinatesProvider$InvalidPVProvider::AggregatedPVCoordinatesProvider$InvalidPVProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates AggregatedPVCoordinatesProvider$InvalidPVProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_20557c175f7cd899], a0.this$, a1.this$));
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
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AggregatedPVCoordinatesProvider$InvalidPVProvider_init_(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_getPVCoordinates(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args);

      static PyMethodDef t_AggregatedPVCoordinatesProvider$InvalidPVProvider__methods_[] = {
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$InvalidPVProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$InvalidPVProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$InvalidPVProvider, getPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AggregatedPVCoordinatesProvider$InvalidPVProvider)[] = {
        { Py_tp_methods, t_AggregatedPVCoordinatesProvider$InvalidPVProvider__methods_ },
        { Py_tp_init, (void *) t_AggregatedPVCoordinatesProvider$InvalidPVProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AggregatedPVCoordinatesProvider$InvalidPVProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider, t_AggregatedPVCoordinatesProvider$InvalidPVProvider, AggregatedPVCoordinatesProvider$InvalidPVProvider);

      void t_AggregatedPVCoordinatesProvider$InvalidPVProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), &PY_TYPE_DEF(AggregatedPVCoordinatesProvider$InvalidPVProvider), module, "AggregatedPVCoordinatesProvider$InvalidPVProvider", 0);
      }

      void t_AggregatedPVCoordinatesProvider$InvalidPVProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), "class_", make_descriptor(AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), "wrapfn_", make_descriptor(t_AggregatedPVCoordinatesProvider$InvalidPVProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass, 1)))
          return NULL;
        return t_AggregatedPVCoordinatesProvider$InvalidPVProvider::wrap_Object(AggregatedPVCoordinatesProvider$InvalidPVProvider(((t_AggregatedPVCoordinatesProvider$InvalidPVProvider *) arg)->object.this$));
      }
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AggregatedPVCoordinatesProvider$InvalidPVProvider_init_(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args, PyObject *kwds)
      {
        AggregatedPVCoordinatesProvider$InvalidPVProvider object((jobject) NULL);

        INT_CALL(object = AggregatedPVCoordinatesProvider$InvalidPVProvider());
        self->object = object;

        return 0;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_getPVCoordinates(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldTimeSpanMap.h"
#include "org/hipparchus/Field.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/FieldTimeSpanMap$Transition.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldTimeSpanMap::class$ = NULL;
      jmethodID *FieldTimeSpanMap::mids$ = NULL;
      bool FieldTimeSpanMap::live$ = false;

      jclass FieldTimeSpanMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldTimeSpanMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_43a02e2a81afd51c] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Lorg/hipparchus/Field;)V");
          mids$[mid_addValidAfter_27ddae2d23e99183] = env->getMethodID(cls, "addValidAfter", "(Ljava/lang/Object;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_addValidBefore_27ddae2d23e99183] = env->getMethodID(cls, "addValidBefore", "(Ljava/lang/Object;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_get_7684025eb484b969] = env->getMethodID(cls, "get", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/lang/Object;");
          mids$[mid_getTransitions_d01a04ddab6c7194] = env->getMethodID(cls, "getTransitions", "()Ljava/util/SortedSet;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTimeSpanMap::FieldTimeSpanMap(const ::java::lang::Object & a0, const ::org::hipparchus::Field & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_43a02e2a81afd51c, a0.this$, a1.this$)) {}

      void FieldTimeSpanMap::addValidAfter(const ::java::lang::Object & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addValidAfter_27ddae2d23e99183], a0.this$, a1.this$);
      }

      void FieldTimeSpanMap::addValidBefore(const ::java::lang::Object & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addValidBefore_27ddae2d23e99183], a0.this$, a1.this$);
      }

      ::java::lang::Object FieldTimeSpanMap::get$(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_7684025eb484b969], a0.this$));
      }

      ::java::util::SortedSet FieldTimeSpanMap::getTransitions() const
      {
        return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getTransitions_d01a04ddab6c7194]));
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
      static PyObject *t_FieldTimeSpanMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap_of_(t_FieldTimeSpanMap *self, PyObject *args);
      static int t_FieldTimeSpanMap_init_(t_FieldTimeSpanMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTimeSpanMap_addValidAfter(t_FieldTimeSpanMap *self, PyObject *args);
      static PyObject *t_FieldTimeSpanMap_addValidBefore(t_FieldTimeSpanMap *self, PyObject *args);
      static PyObject *t_FieldTimeSpanMap_get(t_FieldTimeSpanMap *self, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap_getTransitions(t_FieldTimeSpanMap *self);
      static PyObject *t_FieldTimeSpanMap_get__transitions(t_FieldTimeSpanMap *self, void *data);
      static PyObject *t_FieldTimeSpanMap_get__parameters_(t_FieldTimeSpanMap *self, void *data);
      static PyGetSetDef t_FieldTimeSpanMap__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeSpanMap, transitions),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeSpanMap__methods_[] = {
        DECLARE_METHOD(t_FieldTimeSpanMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeSpanMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeSpanMap, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap, addValidAfter, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap, addValidBefore, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap, get, METH_O),
        DECLARE_METHOD(t_FieldTimeSpanMap, getTransitions, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeSpanMap)[] = {
        { Py_tp_methods, t_FieldTimeSpanMap__methods_ },
        { Py_tp_init, (void *) t_FieldTimeSpanMap_init_ },
        { Py_tp_getset, t_FieldTimeSpanMap__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeSpanMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeSpanMap, t_FieldTimeSpanMap, FieldTimeSpanMap);
      PyObject *t_FieldTimeSpanMap::wrap_Object(const FieldTimeSpanMap& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeSpanMap::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeSpanMap *self = (t_FieldTimeSpanMap *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeSpanMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeSpanMap::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeSpanMap *self = (t_FieldTimeSpanMap *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeSpanMap::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeSpanMap), &PY_TYPE_DEF(FieldTimeSpanMap), module, "FieldTimeSpanMap", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap), "Transition", make_descriptor(&PY_TYPE_DEF(FieldTimeSpanMap$Transition)));
      }

      void t_FieldTimeSpanMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap), "class_", make_descriptor(FieldTimeSpanMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap), "wrapfn_", make_descriptor(t_FieldTimeSpanMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeSpanMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeSpanMap::initializeClass, 1)))
          return NULL;
        return t_FieldTimeSpanMap::wrap_Object(FieldTimeSpanMap(((t_FieldTimeSpanMap *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeSpanMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeSpanMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeSpanMap_of_(t_FieldTimeSpanMap *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTimeSpanMap_init_(t_FieldTimeSpanMap *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::hipparchus::Field a1((jobject) NULL);
        PyTypeObject **p1;
        FieldTimeSpanMap object((jobject) NULL);

        if (!parseArgs(args, "oK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_Field::parameters_))
        {
          INT_CALL(object = FieldTimeSpanMap(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldTimeSpanMap_addValidAfter(t_FieldTimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "OK", self->parameters[0], ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(self->object.addValidAfter(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addValidAfter", args);
        return NULL;
      }

      static PyObject *t_FieldTimeSpanMap_addValidBefore(t_FieldTimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "OK", self->parameters[0], ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(self->object.addValidBefore(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addValidBefore", args);
        return NULL;
      }

      static PyObject *t_FieldTimeSpanMap_get(t_FieldTimeSpanMap *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::lang::Object result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_FieldTimeSpanMap_getTransitions(t_FieldTimeSpanMap *self)
      {
        ::java::util::SortedSet result((jobject) NULL);
        OBJ_CALL(result = self->object.getTransitions());
        return ::java::util::t_SortedSet::wrap_Object(result);
      }
      static PyObject *t_FieldTimeSpanMap_get__parameters_(t_FieldTimeSpanMap *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeSpanMap_get__transitions(t_FieldTimeSpanMap *self, void *data)
      {
        ::java::util::SortedSet value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransitions());
        return ::java::util::t_SortedSet::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/LongitudeExtremumDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/bodies/BodyShape.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_6d5ed18afc9cd8ba] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_init$_1b8515f578ac1f69] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_883d26889ee03ca8] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_e6a7cd9b5e58b284] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LongitudeExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LongitudeExtremumDetector::LongitudeExtremumDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_6d5ed18afc9cd8ba, a0.this$)) {}

        LongitudeExtremumDetector::LongitudeExtremumDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_1b8515f578ac1f69, a0, a1, a2.this$)) {}

        jdouble LongitudeExtremumDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::bodies::BodyShape LongitudeExtremumDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_883d26889ee03ca8]));
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
#include "org/hipparchus/analysis/function/Subtract.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Subtract::class$ = NULL;
        jmethodID *Subtract::mids$ = NULL;
        bool Subtract::live$ = false;

        jclass Subtract::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Subtract");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_824133ce4aec3505] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Subtract::Subtract() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Subtract::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_824133ce4aec3505], a0, a1);
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
        static PyObject *t_Subtract_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Subtract_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Subtract_init_(t_Subtract *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Subtract_value(t_Subtract *self, PyObject *args);

        static PyMethodDef t_Subtract__methods_[] = {
          DECLARE_METHOD(t_Subtract, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Subtract, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Subtract, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Subtract)[] = {
          { Py_tp_methods, t_Subtract__methods_ },
          { Py_tp_init, (void *) t_Subtract_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Subtract)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Subtract, t_Subtract, Subtract);

        void t_Subtract::install(PyObject *module)
        {
          installType(&PY_TYPE(Subtract), &PY_TYPE_DEF(Subtract), module, "Subtract", 0);
        }

        void t_Subtract::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Subtract), "class_", make_descriptor(Subtract::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Subtract), "wrapfn_", make_descriptor(t_Subtract::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Subtract), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Subtract_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Subtract::initializeClass, 1)))
            return NULL;
          return t_Subtract::wrap_Object(Subtract(((t_Subtract *) arg)->object.this$));
        }
        static PyObject *t_Subtract_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Subtract::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Subtract_init_(t_Subtract *self, PyObject *args, PyObject *kwds)
        {
          Subtract object((jobject) NULL);

          INT_CALL(object = Subtract());
          self->object = object;

          return 0;
        }

        static PyObject *t_Subtract_value(t_Subtract *self, PyObject *args)
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
#include "org/orekit/orbits/FieldCartesianOrbit.h"
#include "org/orekit/orbits/FieldCartesianOrbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldCartesianOrbit::class$ = NULL;
      jmethodID *FieldCartesianOrbit::mids$ = NULL;
      bool FieldCartesianOrbit::live$ = false;

      jclass FieldCartesianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldCartesianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b6fb4d19a77f9888] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_cbd2ff2f7da73705] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/CartesianOrbit;)V");
          mids$[mid_init$_3630ab60f65fc257] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_c46027b2f093f684] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_cca8d8314ace10b6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_72af0bc419feab2f] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getA_e6d4d3215c30992a] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_e6d4d3215c30992a] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getE_e6d4d3215c30992a] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_e6d4d3215c30992a] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_e6d4d3215c30992a] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_e6d4d3215c30992a] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_e6d4d3215c30992a] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_e6d4d3215c30992a] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_e6d4d3215c30992a] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_e6d4d3215c30992a] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_e6d4d3215c30992a] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_e6d4d3215c30992a] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_e6d4d3215c30992a] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_e470b6d9e0d979db] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_shiftedBy_1468ba50478809e1] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldCartesianOrbit;");
          mids$[mid_shiftedBy_701a75ffad67ff68] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldCartesianOrbit;");
          mids$[mid_toOrbit_7b54ade357cb34f6] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/CartesianOrbit;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPosition_5791f80683b5227e] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_initPVCoordinates_26447a781aafdb9e] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_dd8485a0eb2e2903] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_dd8485a0eb2e2903] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_dd8485a0eb2e2903] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_b6fb4d19a77f9888, a0.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::CartesianOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_cbd2ff2f7da73705, a0.this$, a1.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_3630ab60f65fc257, a0.this$, a1.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_c46027b2f093f684, a0.this$, a1.this$, a2.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_cca8d8314ace10b6, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      void FieldCartesianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_72af0bc419feab2f], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_e6d4d3215c30992a]));
      }

      ::org::orekit::orbits::OrbitType FieldCartesianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_63ea5cd020bf7bf1]));
      }

      jboolean FieldCartesianOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_e470b6d9e0d979db]);
      }

      FieldCartesianOrbit FieldCartesianOrbit::shiftedBy(jdouble a0) const
      {
        return FieldCartesianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_1468ba50478809e1], a0));
      }

      FieldCartesianOrbit FieldCartesianOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldCartesianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_701a75ffad67ff68], a0.this$));
      }

      ::org::orekit::orbits::CartesianOrbit FieldCartesianOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::CartesianOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_7b54ade357cb34f6]));
      }

      ::java::lang::String FieldCartesianOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      static PyObject *t_FieldCartesianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCartesianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCartesianOrbit_of_(t_FieldCartesianOrbit *self, PyObject *args);
      static int t_FieldCartesianOrbit_init_(t_FieldCartesianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldCartesianOrbit_addKeplerContribution(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getA(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getADot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getE(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialEx(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialExDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialEy(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialEyDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHx(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHxDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHy(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHyDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getI(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getIDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLE(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLEDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLM(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLMDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLv(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLvDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getType(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_hasDerivatives(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_shiftedBy(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_toOrbit(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_toString(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_get__a(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__aDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__e(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__eDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialEx(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialExDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialEy(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialEyDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hx(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hxDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hy(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hyDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__i(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__iDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lE(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lEDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lM(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lMDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lv(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lvDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__type(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__parameters_(t_FieldCartesianOrbit *self, void *data);
      static PyGetSetDef t_FieldCartesianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, a),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, e),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hx),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hy),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, i),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lE),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lM),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lv),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, type),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldCartesianOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldCartesianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCartesianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCartesianOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldCartesianOrbit)[] = {
        { Py_tp_methods, t_FieldCartesianOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldCartesianOrbit_init_ },
        { Py_tp_getset, t_FieldCartesianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldCartesianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldCartesianOrbit, t_FieldCartesianOrbit, FieldCartesianOrbit);
      PyObject *t_FieldCartesianOrbit::wrap_Object(const FieldCartesianOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCartesianOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCartesianOrbit *self = (t_FieldCartesianOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldCartesianOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCartesianOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCartesianOrbit *self = (t_FieldCartesianOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldCartesianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldCartesianOrbit), &PY_TYPE_DEF(FieldCartesianOrbit), module, "FieldCartesianOrbit", 0);
      }

      void t_FieldCartesianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCartesianOrbit), "class_", make_descriptor(FieldCartesianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCartesianOrbit), "wrapfn_", make_descriptor(t_FieldCartesianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCartesianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldCartesianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldCartesianOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldCartesianOrbit::wrap_Object(FieldCartesianOrbit(((t_FieldCartesianOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldCartesianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldCartesianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldCartesianOrbit_of_(t_FieldCartesianOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldCartesianOrbit_init_(t_FieldCartesianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldCartesianOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::CartesianOrbit a1((jobject) NULL);
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::CartesianOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1, a2, a3));
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

      static PyObject *t_FieldCartesianOrbit_addKeplerContribution(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getA(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getADot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getE(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialEx(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialExDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialEy(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialEyDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHx(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHxDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHy(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHyDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getI(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getIDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLE(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLEDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLM(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLMDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLv(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLvDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getType(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_hasDerivatives(t_FieldCartesianOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_shiftedBy(t_FieldCartesianOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldCartesianOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCartesianOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCartesianOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCartesianOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_toOrbit(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::CartesianOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_CartesianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_toString(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldCartesianOrbit_get__parameters_(t_FieldCartesianOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldCartesianOrbit_get__a(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__aDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__e(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__eDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialEx(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialExDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialEy(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialEyDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hx(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hxDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hy(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hyDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__i(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__iDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lE(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lEDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lM(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lMDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lv(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lvDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__type(t_FieldCartesianOrbit *self, void *data)
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
#include "org/orekit/utils/FrameAdapter.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FrameAdapter::class$ = NULL;
      jmethodID *FrameAdapter::mids$ = NULL;
      bool FrameAdapter::live$ = false;

      jclass FrameAdapter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FrameAdapter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b1992bd1bb70f476] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_getPVCoordinates_20557c175f7cd899] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_0e277b7d6a64b75a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FrameAdapter::FrameAdapter(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b1992bd1bb70f476, a0.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates FrameAdapter::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_20557c175f7cd899], a0.this$, a1.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FrameAdapter::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_0e277b7d6a64b75a], a0.this$, a1.this$));
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
      static PyObject *t_FrameAdapter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FrameAdapter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FrameAdapter_init_(t_FrameAdapter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FrameAdapter_getPVCoordinates(t_FrameAdapter *self, PyObject *args);

      static PyMethodDef t_FrameAdapter__methods_[] = {
        DECLARE_METHOD(t_FrameAdapter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAdapter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAdapter, getPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FrameAdapter)[] = {
        { Py_tp_methods, t_FrameAdapter__methods_ },
        { Py_tp_init, (void *) t_FrameAdapter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FrameAdapter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FrameAdapter, t_FrameAdapter, FrameAdapter);

      void t_FrameAdapter::install(PyObject *module)
      {
        installType(&PY_TYPE(FrameAdapter), &PY_TYPE_DEF(FrameAdapter), module, "FrameAdapter", 0);
      }

      void t_FrameAdapter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAdapter), "class_", make_descriptor(FrameAdapter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAdapter), "wrapfn_", make_descriptor(t_FrameAdapter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAdapter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FrameAdapter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FrameAdapter::initializeClass, 1)))
          return NULL;
        return t_FrameAdapter::wrap_Object(FrameAdapter(((t_FrameAdapter *) arg)->object.this$));
      }
      static PyObject *t_FrameAdapter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FrameAdapter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FrameAdapter_init_(t_FrameAdapter *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        FrameAdapter object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          INT_CALL(object = FrameAdapter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FrameAdapter_getPVCoordinates(t_FrameAdapter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
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
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldCombinedDerivatives.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldCombinedDerivatives::class$ = NULL;
        jmethodID *FieldCombinedDerivatives::mids$ = NULL;
        bool FieldCombinedDerivatives::live$ = false;

        jclass FieldCombinedDerivatives::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldCombinedDerivatives");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_44f58eee1ec38a36] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getAdditionalDerivatives_01c7d10e96d5cf94] = env->getMethodID(cls, "getAdditionalDerivatives", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMainStateDerivativesIncrements_01c7d10e96d5cf94] = env->getMethodID(cls, "getMainStateDerivativesIncrements", "()[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldCombinedDerivatives::FieldCombinedDerivatives(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44f58eee1ec38a36, a0.this$, a1.this$)) {}

        JArray< ::org::hipparchus::CalculusFieldElement > FieldCombinedDerivatives::getAdditionalDerivatives() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivatives_01c7d10e96d5cf94]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldCombinedDerivatives::getMainStateDerivativesIncrements() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMainStateDerivativesIncrements_01c7d10e96d5cf94]));
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
        static PyObject *t_FieldCombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldCombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldCombinedDerivatives_of_(t_FieldCombinedDerivatives *self, PyObject *args);
        static int t_FieldCombinedDerivatives_init_(t_FieldCombinedDerivatives *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldCombinedDerivatives_getAdditionalDerivatives(t_FieldCombinedDerivatives *self);
        static PyObject *t_FieldCombinedDerivatives_getMainStateDerivativesIncrements(t_FieldCombinedDerivatives *self);
        static PyObject *t_FieldCombinedDerivatives_get__additionalDerivatives(t_FieldCombinedDerivatives *self, void *data);
        static PyObject *t_FieldCombinedDerivatives_get__mainStateDerivativesIncrements(t_FieldCombinedDerivatives *self, void *data);
        static PyObject *t_FieldCombinedDerivatives_get__parameters_(t_FieldCombinedDerivatives *self, void *data);
        static PyGetSetDef t_FieldCombinedDerivatives__fields_[] = {
          DECLARE_GET_FIELD(t_FieldCombinedDerivatives, additionalDerivatives),
          DECLARE_GET_FIELD(t_FieldCombinedDerivatives, mainStateDerivativesIncrements),
          DECLARE_GET_FIELD(t_FieldCombinedDerivatives, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldCombinedDerivatives__methods_[] = {
          DECLARE_METHOD(t_FieldCombinedDerivatives, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, getAdditionalDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_FieldCombinedDerivatives, getMainStateDerivativesIncrements, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldCombinedDerivatives)[] = {
          { Py_tp_methods, t_FieldCombinedDerivatives__methods_ },
          { Py_tp_init, (void *) t_FieldCombinedDerivatives_init_ },
          { Py_tp_getset, t_FieldCombinedDerivatives__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldCombinedDerivatives)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldCombinedDerivatives, t_FieldCombinedDerivatives, FieldCombinedDerivatives);
        PyObject *t_FieldCombinedDerivatives::wrap_Object(const FieldCombinedDerivatives& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldCombinedDerivatives::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldCombinedDerivatives *self = (t_FieldCombinedDerivatives *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldCombinedDerivatives::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldCombinedDerivatives::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldCombinedDerivatives *self = (t_FieldCombinedDerivatives *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldCombinedDerivatives::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldCombinedDerivatives), &PY_TYPE_DEF(FieldCombinedDerivatives), module, "FieldCombinedDerivatives", 0);
        }

        void t_FieldCombinedDerivatives::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCombinedDerivatives), "class_", make_descriptor(FieldCombinedDerivatives::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCombinedDerivatives), "wrapfn_", make_descriptor(t_FieldCombinedDerivatives::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCombinedDerivatives), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldCombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldCombinedDerivatives::initializeClass, 1)))
            return NULL;
          return t_FieldCombinedDerivatives::wrap_Object(FieldCombinedDerivatives(((t_FieldCombinedDerivatives *) arg)->object.this$));
        }
        static PyObject *t_FieldCombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldCombinedDerivatives::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldCombinedDerivatives_of_(t_FieldCombinedDerivatives *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldCombinedDerivatives_init_(t_FieldCombinedDerivatives *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          FieldCombinedDerivatives object((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = FieldCombinedDerivatives(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldCombinedDerivatives_getAdditionalDerivatives(t_FieldCombinedDerivatives *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivatives());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldCombinedDerivatives_getMainStateDerivativesIncrements(t_FieldCombinedDerivatives *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMainStateDerivativesIncrements());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
        static PyObject *t_FieldCombinedDerivatives_get__parameters_(t_FieldCombinedDerivatives *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldCombinedDerivatives_get__additionalDerivatives(t_FieldCombinedDerivatives *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivatives());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldCombinedDerivatives_get__mainStateDerivativesIncrements(t_FieldCombinedDerivatives *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMainStateDerivativesIncrements());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVectorWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *StateVectorWriter::class$ = NULL;
            jmethodID *StateVectorWriter::mids$ = NULL;
            bool StateVectorWriter::live$ = false;

            jclass StateVectorWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/StateVectorWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_writeContent_fb36c2e4ae059ab9] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

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
            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_StateVectorWriter__methods_[] = {
              DECLARE_METHOD(t_StateVectorWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorWriter)[] = {
              { Py_tp_methods, t_StateVectorWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVectorWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(StateVectorWriter, t_StateVectorWriter, StateVectorWriter);

            void t_StateVectorWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVectorWriter), &PY_TYPE_DEF(StateVectorWriter), module, "StateVectorWriter", 0);
            }

            void t_StateVectorWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "class_", make_descriptor(StateVectorWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "wrapfn_", make_descriptor(t_StateVectorWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVectorWriter::initializeClass, 1)))
                return NULL;
              return t_StateVectorWriter::wrap_Object(StateVectorWriter(((t_StateVectorWriter *) arg)->object.this$));
            }
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVectorWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/WaypointPVBuilder$InterpolationFactory.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *WaypointPVBuilder$InterpolationFactory::class$ = NULL;
      jmethodID *WaypointPVBuilder$InterpolationFactory::mids$ = NULL;
      bool WaypointPVBuilder$InterpolationFactory::live$ = false;

      jclass WaypointPVBuilder$InterpolationFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/WaypointPVBuilder$InterpolationFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_db1d94629119bb44] = env->getMethodID(cls, "create", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::PVCoordinatesProvider WaypointPVBuilder$InterpolationFactory::create(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::bodies::GeodeticPoint & a3, const ::org::orekit::bodies::OneAxisEllipsoid & a4) const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_create_db1d94629119bb44], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_create(t_WaypointPVBuilder$InterpolationFactory *self, PyObject *args);

      static PyMethodDef t_WaypointPVBuilder$InterpolationFactory__methods_[] = {
        DECLARE_METHOD(t_WaypointPVBuilder$InterpolationFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder$InterpolationFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder$InterpolationFactory, create, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WaypointPVBuilder$InterpolationFactory)[] = {
        { Py_tp_methods, t_WaypointPVBuilder$InterpolationFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WaypointPVBuilder$InterpolationFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WaypointPVBuilder$InterpolationFactory, t_WaypointPVBuilder$InterpolationFactory, WaypointPVBuilder$InterpolationFactory);

      void t_WaypointPVBuilder$InterpolationFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(WaypointPVBuilder$InterpolationFactory), &PY_TYPE_DEF(WaypointPVBuilder$InterpolationFactory), module, "WaypointPVBuilder$InterpolationFactory", 0);
      }

      void t_WaypointPVBuilder$InterpolationFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder$InterpolationFactory), "class_", make_descriptor(WaypointPVBuilder$InterpolationFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder$InterpolationFactory), "wrapfn_", make_descriptor(t_WaypointPVBuilder$InterpolationFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder$InterpolationFactory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WaypointPVBuilder$InterpolationFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WaypointPVBuilder$InterpolationFactory::initializeClass, 1)))
          return NULL;
        return t_WaypointPVBuilder$InterpolationFactory::wrap_Object(WaypointPVBuilder$InterpolationFactory(((t_WaypointPVBuilder$InterpolationFactory *) arg)->object.this$));
      }
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WaypointPVBuilder$InterpolationFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_WaypointPVBuilder$InterpolationFactory_create(t_WaypointPVBuilder$InterpolationFactory *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
        ::org::orekit::bodies::GeodeticPoint a3((jobject) NULL);
        ::org::orekit::bodies::OneAxisEllipsoid a4((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          OBJ_CALL(result = self->object.create(a0, a1, a2, a3, a4));
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "create", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/PolynomialThrustSegment.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PolynomialThrustSegment::class$ = NULL;
          jmethodID *PolynomialThrustSegment::mids$ = NULL;
          bool PolynomialThrustSegment::live$ = false;

          jclass PolynomialThrustSegment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PolynomialThrustSegment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e21e77cc42229f60] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
              mids$[mid_getThrustVector_71c51b45829333ce] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_11a4be79061d1fe3] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolynomialThrustSegment::PolynomialThrustSegment(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a1, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a2, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e21e77cc42229f60, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D PolynomialThrustSegment::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_71c51b45829333ce], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PolynomialThrustSegment::getThrustVector(const ::org::orekit::time::FieldAbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_11a4be79061d1fe3], a0.this$));
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
          static PyObject *t_PolynomialThrustSegment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolynomialThrustSegment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PolynomialThrustSegment_init_(t_PolynomialThrustSegment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolynomialThrustSegment_getThrustVector(t_PolynomialThrustSegment *self, PyObject *args);

          static PyMethodDef t_PolynomialThrustSegment__methods_[] = {
            DECLARE_METHOD(t_PolynomialThrustSegment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolynomialThrustSegment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolynomialThrustSegment, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolynomialThrustSegment)[] = {
            { Py_tp_methods, t_PolynomialThrustSegment__methods_ },
            { Py_tp_init, (void *) t_PolynomialThrustSegment_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolynomialThrustSegment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PolynomialThrustSegment, t_PolynomialThrustSegment, PolynomialThrustSegment);

          void t_PolynomialThrustSegment::install(PyObject *module)
          {
            installType(&PY_TYPE(PolynomialThrustSegment), &PY_TYPE_DEF(PolynomialThrustSegment), module, "PolynomialThrustSegment", 0);
          }

          void t_PolynomialThrustSegment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialThrustSegment), "class_", make_descriptor(PolynomialThrustSegment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialThrustSegment), "wrapfn_", make_descriptor(t_PolynomialThrustSegment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialThrustSegment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolynomialThrustSegment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolynomialThrustSegment::initializeClass, 1)))
              return NULL;
            return t_PolynomialThrustSegment::wrap_Object(PolynomialThrustSegment(((t_PolynomialThrustSegment *) arg)->object.this$));
          }
          static PyObject *t_PolynomialThrustSegment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolynomialThrustSegment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PolynomialThrustSegment_init_(t_PolynomialThrustSegment *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::analysis::polynomials::PolynomialFunction a1((jobject) NULL);
            ::org::hipparchus::analysis::polynomials::PolynomialFunction a2((jobject) NULL);
            ::org::hipparchus::analysis::polynomials::PolynomialFunction a3((jobject) NULL);
            PolynomialThrustSegment object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PolynomialThrustSegment(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PolynomialThrustSegment_getThrustVector(t_PolynomialThrustSegment *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmSatelliteEphemeris::class$ = NULL;
              jmethodID *OcmSatelliteEphemeris::mids$ = NULL;
              bool OcmSatelliteEphemeris::live$ = false;

              jclass OcmSatelliteEphemeris::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmSatelliteEphemeris");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d0a6ea578b35c45e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLjava/util/List;)V");
                  mids$[mid_getId_0090f7797e403f43] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getSegments_a6156df500549a58] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmSatelliteEphemeris::OcmSatelliteEphemeris(const ::java::lang::String & a0, jdouble a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0a6ea578b35c45e, a0.this$, a1, a2.this$)) {}

              ::java::lang::String OcmSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_0090f7797e403f43]));
              }

              jdouble OcmSatelliteEphemeris::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
              }

              ::java::util::List OcmSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_a6156df500549a58]));
              }

              ::org::orekit::time::AbsoluteDate OcmSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate OcmSatelliteEphemeris::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
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
              static PyObject *t_OcmSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OcmSatelliteEphemeris_init_(t_OcmSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OcmSatelliteEphemeris_getId(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getMu(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getSegments(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getStart(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_getStop(t_OcmSatelliteEphemeris *self);
              static PyObject *t_OcmSatelliteEphemeris_get__id(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__mu(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__segments(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__start(t_OcmSatelliteEphemeris *self, void *data);
              static PyObject *t_OcmSatelliteEphemeris_get__stop(t_OcmSatelliteEphemeris *self, void *data);
              static PyGetSetDef t_OcmSatelliteEphemeris__fields_[] = {
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, id),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, mu),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, segments),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, start),
                DECLARE_GET_FIELD(t_OcmSatelliteEphemeris, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmSatelliteEphemeris__methods_[] = {
                DECLARE_METHOD(t_OcmSatelliteEphemeris, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getId, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getMu, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getSegments, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getStart, METH_NOARGS),
                DECLARE_METHOD(t_OcmSatelliteEphemeris, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmSatelliteEphemeris)[] = {
                { Py_tp_methods, t_OcmSatelliteEphemeris__methods_ },
                { Py_tp_init, (void *) t_OcmSatelliteEphemeris_init_ },
                { Py_tp_getset, t_OcmSatelliteEphemeris__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmSatelliteEphemeris)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OcmSatelliteEphemeris, t_OcmSatelliteEphemeris, OcmSatelliteEphemeris);

              void t_OcmSatelliteEphemeris::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmSatelliteEphemeris), &PY_TYPE_DEF(OcmSatelliteEphemeris), module, "OcmSatelliteEphemeris", 0);
              }

              void t_OcmSatelliteEphemeris::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmSatelliteEphemeris), "class_", make_descriptor(OcmSatelliteEphemeris::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmSatelliteEphemeris), "wrapfn_", make_descriptor(t_OcmSatelliteEphemeris::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OcmSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmSatelliteEphemeris::initializeClass, 1)))
                  return NULL;
                return t_OcmSatelliteEphemeris::wrap_Object(OcmSatelliteEphemeris(((t_OcmSatelliteEphemeris *) arg)->object.this$));
              }
              static PyObject *t_OcmSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmSatelliteEphemeris::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OcmSatelliteEphemeris_init_(t_OcmSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                OcmSatelliteEphemeris object((jobject) NULL);

                if (!parseArgs(args, "sDK", ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OcmSatelliteEphemeris(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OcmSatelliteEphemeris_getId(t_OcmSatelliteEphemeris *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_OcmSatelliteEphemeris_getMu(t_OcmSatelliteEphemeris *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmSatelliteEphemeris_getSegments(t_OcmSatelliteEphemeris *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(TrajectoryStateHistory));
              }

              static PyObject *t_OcmSatelliteEphemeris_getStart(t_OcmSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmSatelliteEphemeris_getStop(t_OcmSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__id(t_OcmSatelliteEphemeris *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__mu(t_OcmSatelliteEphemeris *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__segments(t_OcmSatelliteEphemeris *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__start(t_OcmSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_OcmSatelliteEphemeris_get__stop(t_OcmSatelliteEphemeris *self, void *data)
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
#include "org/orekit/propagation/events/FieldFunctionalDetector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldFunctionalDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldFunctionalDetector::class$ = NULL;
        jmethodID *FieldFunctionalDetector::mids$ = NULL;
        bool FieldFunctionalDetector::live$ = false;

        jclass FieldFunctionalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldFunctionalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_205c34b8e33cf33f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_create_c769ae7d904ec085] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldFunctionalDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldFunctionalDetector::FieldFunctionalDetector(const ::org::hipparchus::Field & a0) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_205c34b8e33cf33f, a0.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldFunctionalDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
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
        static PyObject *t_FieldFunctionalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldFunctionalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldFunctionalDetector_of_(t_FieldFunctionalDetector *self, PyObject *args);
        static int t_FieldFunctionalDetector_init_(t_FieldFunctionalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldFunctionalDetector_g(t_FieldFunctionalDetector *self, PyObject *args);
        static PyObject *t_FieldFunctionalDetector_get__parameters_(t_FieldFunctionalDetector *self, void *data);
        static PyGetSetDef t_FieldFunctionalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldFunctionalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldFunctionalDetector__methods_[] = {
          DECLARE_METHOD(t_FieldFunctionalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldFunctionalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldFunctionalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldFunctionalDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldFunctionalDetector)[] = {
          { Py_tp_methods, t_FieldFunctionalDetector__methods_ },
          { Py_tp_init, (void *) t_FieldFunctionalDetector_init_ },
          { Py_tp_getset, t_FieldFunctionalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldFunctionalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldFunctionalDetector, t_FieldFunctionalDetector, FieldFunctionalDetector);
        PyObject *t_FieldFunctionalDetector::wrap_Object(const FieldFunctionalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldFunctionalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldFunctionalDetector *self = (t_FieldFunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldFunctionalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldFunctionalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldFunctionalDetector *self = (t_FieldFunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldFunctionalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldFunctionalDetector), &PY_TYPE_DEF(FieldFunctionalDetector), module, "FieldFunctionalDetector", 0);
        }

        void t_FieldFunctionalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFunctionalDetector), "class_", make_descriptor(FieldFunctionalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFunctionalDetector), "wrapfn_", make_descriptor(t_FieldFunctionalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldFunctionalDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldFunctionalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldFunctionalDetector::initializeClass, 1)))
            return NULL;
          return t_FieldFunctionalDetector::wrap_Object(FieldFunctionalDetector(((t_FieldFunctionalDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldFunctionalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldFunctionalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldFunctionalDetector_of_(t_FieldFunctionalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldFunctionalDetector_init_(t_FieldFunctionalDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          FieldFunctionalDetector object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            INT_CALL(object = FieldFunctionalDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldFunctionalDetector_g(t_FieldFunctionalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldFunctionalDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_FieldFunctionalDetector_get__parameters_(t_FieldFunctionalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/AdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
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
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/AdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_3b8f73a4d2dddc4a] = env->getMethodID(cls, "currentInterval", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AdaptableInterval::currentInterval(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_3b8f73a4d2dddc4a], a0.this$);
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
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
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
#include "org/orekit/forces/radiation/AbstractRadiationForceModel.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *AbstractRadiationForceModel::class$ = NULL;
        jmethodID *AbstractRadiationForceModel::mids$ = NULL;
        bool AbstractRadiationForceModel::live$ = false;

        jclass AbstractRadiationForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/AbstractRadiationForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addOccultingBody_6d5ed18afc9cd8ba] = env->getMethodID(cls, "addOccultingBody", "(Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_addOccultingBody_700c1b4c67b6f6c5] = env->getMethodID(cls, "addOccultingBody", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;D)V");
            mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_a68a17dd093f796d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_1328ddb491531a35] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getOccultingBodies_a6156df500549a58] = env->getMethodID(cls, "getOccultingBodies", "()Ljava/util/List;");
            mids$[mid_getGeneralEclipseAngles_515ed9c3398805a5] = env->getMethodID(cls, "getGeneralEclipseAngles", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getGeneralEclipseAngles_92b5a46fc0bf8ab7] = env->getMethodID(cls, "getGeneralEclipseAngles", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractRadiationForceModel::addOccultingBody(const ::org::orekit::bodies::OneAxisEllipsoid & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addOccultingBody_6d5ed18afc9cd8ba], a0.this$);
        }

        void AbstractRadiationForceModel::addOccultingBody(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addOccultingBody_700c1b4c67b6f6c5], a0.this$, a1);
        }

        jboolean AbstractRadiationForceModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
        }

        ::java::util::stream::Stream AbstractRadiationForceModel::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a68a17dd093f796d]));
        }

        ::java::util::stream::Stream AbstractRadiationForceModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_1328ddb491531a35], a0.this$));
        }

        ::java::util::List AbstractRadiationForceModel::getOccultingBodies() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOccultingBodies_a6156df500549a58]));
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
      namespace radiation {
        static PyObject *t_AbstractRadiationForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRadiationForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRadiationForceModel_addOccultingBody(t_AbstractRadiationForceModel *self, PyObject *args);
        static PyObject *t_AbstractRadiationForceModel_dependsOnPositionOnly(t_AbstractRadiationForceModel *self);
        static PyObject *t_AbstractRadiationForceModel_getEventDetectors(t_AbstractRadiationForceModel *self);
        static PyObject *t_AbstractRadiationForceModel_getFieldEventDetectors(t_AbstractRadiationForceModel *self, PyObject *arg);
        static PyObject *t_AbstractRadiationForceModel_getOccultingBodies(t_AbstractRadiationForceModel *self);
        static PyObject *t_AbstractRadiationForceModel_get__eventDetectors(t_AbstractRadiationForceModel *self, void *data);
        static PyObject *t_AbstractRadiationForceModel_get__occultingBodies(t_AbstractRadiationForceModel *self, void *data);
        static PyGetSetDef t_AbstractRadiationForceModel__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractRadiationForceModel, eventDetectors),
          DECLARE_GET_FIELD(t_AbstractRadiationForceModel, occultingBodies),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractRadiationForceModel__methods_[] = {
          DECLARE_METHOD(t_AbstractRadiationForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, addOccultingBody, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRadiationForceModel, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_AbstractRadiationForceModel, getOccultingBodies, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractRadiationForceModel)[] = {
          { Py_tp_methods, t_AbstractRadiationForceModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractRadiationForceModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractRadiationForceModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractRadiationForceModel, t_AbstractRadiationForceModel, AbstractRadiationForceModel);

        void t_AbstractRadiationForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractRadiationForceModel), &PY_TYPE_DEF(AbstractRadiationForceModel), module, "AbstractRadiationForceModel", 0);
        }

        void t_AbstractRadiationForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRadiationForceModel), "class_", make_descriptor(AbstractRadiationForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRadiationForceModel), "wrapfn_", make_descriptor(t_AbstractRadiationForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRadiationForceModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractRadiationForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractRadiationForceModel::initializeClass, 1)))
            return NULL;
          return t_AbstractRadiationForceModel::wrap_Object(AbstractRadiationForceModel(((t_AbstractRadiationForceModel *) arg)->object.this$));
        }
        static PyObject *t_AbstractRadiationForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractRadiationForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractRadiationForceModel_addOccultingBody(t_AbstractRadiationForceModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
              {
                OBJ_CALL(self->object.addOccultingBody(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              jdouble a1;

              if (!parseArgs(args, "kD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addOccultingBody(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addOccultingBody", args);
          return NULL;
        }

        static PyObject *t_AbstractRadiationForceModel_dependsOnPositionOnly(t_AbstractRadiationForceModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractRadiationForceModel_getEventDetectors(t_AbstractRadiationForceModel *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_AbstractRadiationForceModel_getFieldEventDetectors(t_AbstractRadiationForceModel *self, PyObject *arg)
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

        static PyObject *t_AbstractRadiationForceModel_getOccultingBodies(t_AbstractRadiationForceModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getOccultingBodies());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(OccultationEngine));
        }

        static PyObject *t_AbstractRadiationForceModel_get__eventDetectors(t_AbstractRadiationForceModel *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_AbstractRadiationForceModel_get__occultingBodies(t_AbstractRadiationForceModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getOccultingBodies());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTleKey.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTleKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTle.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmTleKey::class$ = NULL;
              jmethodID *OmmTleKey::mids$ = NULL;
              bool OmmTleKey::live$ = false;
              OmmTleKey *OmmTleKey::AGOM = NULL;
              OmmTleKey *OmmTleKey::BSTAR = NULL;
              OmmTleKey *OmmTleKey::BTERM = NULL;
              OmmTleKey *OmmTleKey::CLASSIFICATION_TYPE = NULL;
              OmmTleKey *OmmTleKey::COMMENT = NULL;
              OmmTleKey *OmmTleKey::ELEMENT_SET_NO = NULL;
              OmmTleKey *OmmTleKey::EPHEMERIS_TYPE = NULL;
              OmmTleKey *OmmTleKey::MEAN_MOTION_DDOT = NULL;
              OmmTleKey *OmmTleKey::MEAN_MOTION_DOT = NULL;
              OmmTleKey *OmmTleKey::NORAD_CAT_ID = NULL;
              OmmTleKey *OmmTleKey::REV_AT_EPOCH = NULL;

              jclass OmmTleKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmTleKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_e9fed2659f98b927] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTle;)Z");
                  mids$[mid_valueOf_b874895857e0c9cc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;");
                  mids$[mid_values_4af74d0941061dbb] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AGOM = new OmmTleKey(env->getStaticObjectField(cls, "AGOM", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  BSTAR = new OmmTleKey(env->getStaticObjectField(cls, "BSTAR", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  BTERM = new OmmTleKey(env->getStaticObjectField(cls, "BTERM", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  CLASSIFICATION_TYPE = new OmmTleKey(env->getStaticObjectField(cls, "CLASSIFICATION_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  COMMENT = new OmmTleKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  ELEMENT_SET_NO = new OmmTleKey(env->getStaticObjectField(cls, "ELEMENT_SET_NO", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  EPHEMERIS_TYPE = new OmmTleKey(env->getStaticObjectField(cls, "EPHEMERIS_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  MEAN_MOTION_DDOT = new OmmTleKey(env->getStaticObjectField(cls, "MEAN_MOTION_DDOT", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  MEAN_MOTION_DOT = new OmmTleKey(env->getStaticObjectField(cls, "MEAN_MOTION_DOT", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  NORAD_CAT_ID = new OmmTleKey(env->getStaticObjectField(cls, "NORAD_CAT_ID", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  REV_AT_EPOCH = new OmmTleKey(env->getStaticObjectField(cls, "REV_AT_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OmmTleKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_e9fed2659f98b927], a0.this$, a1.this$, a2.this$);
              }

              OmmTleKey OmmTleKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OmmTleKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b874895857e0c9cc], a0.this$));
              }

              JArray< OmmTleKey > OmmTleKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OmmTleKey >(env->callStaticObjectMethod(cls, mids$[mid_values_4af74d0941061dbb]));
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
            namespace omm {
              static PyObject *t_OmmTleKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmTleKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmTleKey_of_(t_OmmTleKey *self, PyObject *args);
              static PyObject *t_OmmTleKey_process(t_OmmTleKey *self, PyObject *args);
              static PyObject *t_OmmTleKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OmmTleKey_values(PyTypeObject *type);
              static PyObject *t_OmmTleKey_get__parameters_(t_OmmTleKey *self, void *data);
              static PyGetSetDef t_OmmTleKey__fields_[] = {
                DECLARE_GET_FIELD(t_OmmTleKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmTleKey__methods_[] = {
                DECLARE_METHOD(t_OmmTleKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmTleKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmTleKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OmmTleKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OmmTleKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OmmTleKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmTleKey)[] = {
                { Py_tp_methods, t_OmmTleKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OmmTleKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmTleKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OmmTleKey, t_OmmTleKey, OmmTleKey);
              PyObject *t_OmmTleKey::wrap_Object(const OmmTleKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OmmTleKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmTleKey *self = (t_OmmTleKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OmmTleKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OmmTleKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmTleKey *self = (t_OmmTleKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OmmTleKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmTleKey), &PY_TYPE_DEF(OmmTleKey), module, "OmmTleKey", 0);
              }

              void t_OmmTleKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "class_", make_descriptor(OmmTleKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "wrapfn_", make_descriptor(t_OmmTleKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmTleKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "AGOM", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::AGOM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "BSTAR", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::BSTAR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "BTERM", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::BTERM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "CLASSIFICATION_TYPE", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::CLASSIFICATION_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "COMMENT", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "ELEMENT_SET_NO", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::ELEMENT_SET_NO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "EPHEMERIS_TYPE", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::EPHEMERIS_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "MEAN_MOTION_DDOT", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::MEAN_MOTION_DDOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "MEAN_MOTION_DOT", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::MEAN_MOTION_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "NORAD_CAT_ID", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::NORAD_CAT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "REV_AT_EPOCH", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::REV_AT_EPOCH)));
              }

              static PyObject *t_OmmTleKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmTleKey::initializeClass, 1)))
                  return NULL;
                return t_OmmTleKey::wrap_Object(OmmTleKey(((t_OmmTleKey *) arg)->object.this$));
              }
              static PyObject *t_OmmTleKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmTleKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OmmTleKey_of_(t_OmmTleKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OmmTleKey_process(t_OmmTleKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OmmTleKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OmmTleKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::omm::OmmTleKey::valueOf(a0));
                  return t_OmmTleKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OmmTleKey_values(PyTypeObject *type)
              {
                JArray< OmmTleKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::omm::OmmTleKey::values());
                return JArray<jobject>(result.this$).wrap(t_OmmTleKey::wrap_jobject);
              }
              static PyObject *t_OmmTleKey_get__parameters_(t_OmmTleKey *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/EulerKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Euler.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/EulerKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
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
                  mids$[mid_process_0202372339b249f1] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/Euler;)Z");
                  mids$[mid_valueOf_8cc2391abce132fe] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;");
                  mids$[mid_values_bb4b2a948aea09f3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;");

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
                return env->callBooleanMethod(this$, mids$[mid_process_0202372339b249f1], a0.this$, a1.this$, a2.this$);
              }

              EulerKey EulerKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return EulerKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8cc2391abce132fe], a0.this$));
              }

              JArray< EulerKey > EulerKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< EulerKey >(env->callStaticObjectMethod(cls, mids$[mid_values_bb4b2a948aea09f3]));
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
#include "org/hipparchus/exception/LocalizedCoreFormats.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/LocalizedCoreFormats.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *LocalizedCoreFormats::class$ = NULL;
      jmethodID *LocalizedCoreFormats::mids$ = NULL;
      bool LocalizedCoreFormats::live$ = false;
      LocalizedCoreFormats *LocalizedCoreFormats::ARITHMETIC_EXCEPTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_ELEMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1 = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_SIZE_EXCEEDS_MAX_VARIABLES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_SUMS_TO_ZERO = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::AT_LEAST_ONE_COLUMN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::AT_LEAST_ONE_ROW = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BANDWIDTH = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BASE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BESSEL_FUNCTION_BAD_ARGUMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BESSEL_FUNCTION_FAILED_CONVERGENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BINOMIAL_INVALID_PARAMETERS_ORDER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BINOMIAL_NEGATIVE_PARAMETER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_0TH_ROOT_OF_UNITY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_FORMAT_INSTANCE_AS_COMPLEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_FORMAT_OBJECT_TO_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_PARSE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_PARSE_AS_TYPE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::COLUMN_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONSTRAINT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTINUED_FRACTION_INFINITY_DIVERGENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTINUED_FRACTION_NAN_DIVERGENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_ONE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONVERGENCE_FAILED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CUMULATIVE_PROBABILITY_RETURNED_NAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DEGREES_OF_FREEDOM = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DENOMINATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DENOMINATOR_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DERIVATION_ORDER_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIFFERENT_ROWS_LENGTHS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIGEST_NOT_INITIALIZED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIMENSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIMENSIONS_MISMATCH = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIMENSIONS_MISMATCH_2x2 = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DISTRIBUTION_NOT_LOADED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DUPLICATED_ABSCISSA_DIVISION_BY_ZERO = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_INTERPOLATION_SAMPLE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_SELECTED_COLUMN_INDEX_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_SELECTED_ROW_INDEX_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ENDPOINTS_NOT_AN_INTERVAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EVALUATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EVALUATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EXPANSION_FACTOR_SMALLER_THAN_ONE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EXPONENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FACTORIAL_NEGATIVE_PARAMETER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FAILED_BRACKETING = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FAILED_DECOMPOSITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FAILED_FRACTION_CONVERSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FIRST_COLUMNS_NOT_INITIALIZED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FIRST_ROWS_NOT_INITIALIZED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FRACTION_CONVERSION_OVERFLOW = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FUNCTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::GCD_OVERFLOW_32_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::GCD_OVERFLOW_64_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ILLEGAL_STATE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ILL_CONDITIONED_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::IMAGINARY_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INDEX_LARGER_THAN_MAX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INDEX_NOT_POSITIVE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INFINITE_ARRAY_ELEMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INFINITE_BOUND = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INFINITE_VALUE_CONVERSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INITIAL_CAPACITY_NOT_POSITIVE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INITIAL_COLUMN_AFTER_FINAL_COLUMN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INITIAL_ROW_AFTER_FINAL_ROW = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INPUT_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_DATA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_DIMENSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_ROWS_AND_COLUMNS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INTERNAL_ERROR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INVALID_MAX_ITERATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ITERATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LCM_OVERFLOW_32_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LCM_OVERFLOW_64_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LENGTH = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LOWER_BOUND_NOT_BELOW_UPPER_BOUND = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::MAX_COUNT_EXCEEDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::MEAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NAN_ELEMENT_AT_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NAN_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NAN_VALUE_CONVERSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NEGATIVE_COMPLEX_MODULE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NEGATIVE_DEFINITE_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NEGATIVE_ELEMENT_AT_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_CONVERGENT_CONTINUED_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_POSITIVE_DEFINITE_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SELF_ADJOINT_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SQUARE_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SQUARE_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SYMMETRIC_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NORM = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NORMALIZE_INFINITE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NORMALIZE_NAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_BRACKETING_INTERVAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_DECREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_FINITE_NUMBER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_INCREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_DEFINITE_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_EXPONENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_NUMBER_OF_SAMPLES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_SCALE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_WINDOW_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_STRICTLY_DECREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_STRICTLY_INCREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NO_CONVERGENCE_WITH_ANY_START_POINT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NO_DATA$ = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NO_OPTIMUM_COMPUTED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NULL_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_INTERPOLATION_POINTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_POINTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_SAMPLES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_SUCCESSES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_TRIALS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_LARGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_LARGE_BOUND_EXCLUDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_SMALL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_SMALL_BOUND_EXCLUDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMERATOR_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMERATOR_OVERFLOW_AFTER_MULTIPLY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE_LEFT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE_ROOT_OF_UNITY_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE_SIMPLE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW$ = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_ADDITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_MULTIPLICATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_SUBTRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::PERMUTATION_EXCEEDS_N = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::PERMUTATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::POLYNOMIAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::POPULATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::REAL_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::RIGHT_EDGE_GREATER_THAN_LEFT_EDGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ROBUSTNESS_ITERATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ROOTS_OF_UNITY_NOT_COMPUTED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ROW_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SCALE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SHAPE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SIMPLE_MESSAGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SINGULAR_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SINGULAR_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::STANDARD_DEVIATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::START_POINT_NOT_IN_INTERVAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::START_POSITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SUBARRAY_ENDS_AFTER_ARRAY_END = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::TOO_LARGE_CUTOFF_SINGULAR_VALUE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::UNKNOWN_MODE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::UNSUPPORTED_OPERATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::URL_CONTAINS_NO_DATA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::USER_EXCEPTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::WEIGHT_AT_LEAST_ONE_NON_ZERO = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::WHOLE_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::WRONG_NUMBER_OF_POINTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_DENOMINATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_DENOMINATOR_IN_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_FRACTION_TO_DIVIDE_BY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_NORM = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_STATE_SIZE = NULL;

      jclass LocalizedCoreFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/LocalizedCoreFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_bab3be9b232acc5a] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_0090f7797e403f43] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_22c27263cea306a7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/exception/LocalizedCoreFormats;");
          mids$[mid_values_48b05f789e784309] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/exception/LocalizedCoreFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARITHMETIC_EXCEPTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARITHMETIC_EXCEPTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_ELEMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_ELEMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1 = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_SIZE_EXCEEDS_MAX_VARIABLES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_SIZE_EXCEEDS_MAX_VARIABLES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_SUMS_TO_ZERO = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_SUMS_TO_ZERO", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          AT_LEAST_ONE_COLUMN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "AT_LEAST_ONE_COLUMN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          AT_LEAST_ONE_ROW = new LocalizedCoreFormats(env->getStaticObjectField(cls, "AT_LEAST_ONE_ROW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BANDWIDTH = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BANDWIDTH", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BASE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BASE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BESSEL_FUNCTION_BAD_ARGUMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BESSEL_FUNCTION_BAD_ARGUMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BESSEL_FUNCTION_FAILED_CONVERGENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BESSEL_FUNCTION_FAILED_CONVERGENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BINOMIAL_INVALID_PARAMETERS_ORDER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BINOMIAL_INVALID_PARAMETERS_ORDER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BINOMIAL_NEGATIVE_PARAMETER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BINOMIAL_NEGATIVE_PARAMETER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_0TH_ROOT_OF_UNITY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_0TH_ROOT_OF_UNITY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_FORMAT_INSTANCE_AS_COMPLEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_FORMAT_INSTANCE_AS_COMPLEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_FORMAT_OBJECT_TO_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_FORMAT_OBJECT_TO_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_PARSE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_PARSE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_PARSE_AS_TYPE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_PARSE_AS_TYPE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          COLUMN_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "COLUMN_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONSTRAINT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONSTRAINT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTINUED_FRACTION_INFINITY_DIVERGENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTINUED_FRACTION_INFINITY_DIVERGENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTINUED_FRACTION_NAN_DIVERGENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTINUED_FRACTION_NAN_DIVERGENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTRACTION_CRITERIA_SMALLER_THAN_ONE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTRACTION_CRITERIA_SMALLER_THAN_ONE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONVERGENCE_FAILED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONVERGENCE_FAILED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CUMULATIVE_PROBABILITY_RETURNED_NAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CUMULATIVE_PROBABILITY_RETURNED_NAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DEGREES_OF_FREEDOM = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DEGREES_OF_FREEDOM", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DENOMINATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DENOMINATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DENOMINATOR_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DENOMINATOR_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DERIVATION_ORDER_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DERIVATION_ORDER_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIFFERENT_ROWS_LENGTHS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIFFERENT_ROWS_LENGTHS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIGEST_NOT_INITIALIZED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIGEST_NOT_INITIALIZED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIMENSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIMENSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIMENSIONS_MISMATCH = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIMENSIONS_MISMATCH", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIMENSIONS_MISMATCH_2x2 = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIMENSIONS_MISMATCH_2x2", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DISTRIBUTION_NOT_LOADED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DISTRIBUTION_NOT_LOADED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DUPLICATED_ABSCISSA_DIVISION_BY_ZERO = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DUPLICATED_ABSCISSA_DIVISION_BY_ZERO", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_INTERPOLATION_SAMPLE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_INTERPOLATION_SAMPLE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_SELECTED_COLUMN_INDEX_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_SELECTED_COLUMN_INDEX_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_SELECTED_ROW_INDEX_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_SELECTED_ROW_INDEX_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ENDPOINTS_NOT_AN_INTERVAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ENDPOINTS_NOT_AN_INTERVAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EVALUATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EVALUATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EVALUATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EVALUATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EXPANSION_FACTOR_SMALLER_THAN_ONE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EXPANSION_FACTOR_SMALLER_THAN_ONE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EXPONENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EXPONENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FACTORIAL_NEGATIVE_PARAMETER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FACTORIAL_NEGATIVE_PARAMETER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FAILED_BRACKETING = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FAILED_BRACKETING", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FAILED_DECOMPOSITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FAILED_DECOMPOSITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FAILED_FRACTION_CONVERSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FAILED_FRACTION_CONVERSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FIRST_COLUMNS_NOT_INITIALIZED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FIRST_COLUMNS_NOT_INITIALIZED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FIRST_ROWS_NOT_INITIALIZED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FIRST_ROWS_NOT_INITIALIZED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FRACTION_CONVERSION_OVERFLOW = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FRACTION_CONVERSION_OVERFLOW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FUNCTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FUNCTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          GCD_OVERFLOW_32_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "GCD_OVERFLOW_32_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          GCD_OVERFLOW_64_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "GCD_OVERFLOW_64_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ILLEGAL_STATE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ILLEGAL_STATE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ILL_CONDITIONED_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ILL_CONDITIONED_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          IMAGINARY_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "IMAGINARY_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INDEX_LARGER_THAN_MAX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INDEX_LARGER_THAN_MAX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INDEX_NOT_POSITIVE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INDEX_NOT_POSITIVE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INFINITE_ARRAY_ELEMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INFINITE_ARRAY_ELEMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INFINITE_BOUND = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INFINITE_BOUND", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INFINITE_VALUE_CONVERSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INFINITE_VALUE_CONVERSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INITIAL_CAPACITY_NOT_POSITIVE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INITIAL_CAPACITY_NOT_POSITIVE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INITIAL_COLUMN_AFTER_FINAL_COLUMN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INITIAL_COLUMN_AFTER_FINAL_COLUMN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INITIAL_ROW_AFTER_FINAL_ROW = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INITIAL_ROW_AFTER_FINAL_ROW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INPUT_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INPUT_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_DATA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_DATA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_DIMENSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_DIMENSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_ROWS_AND_COLUMNS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_ROWS_AND_COLUMNS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INTERNAL_ERROR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INTERNAL_ERROR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INVALID_MAX_ITERATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INVALID_MAX_ITERATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ITERATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ITERATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LCM_OVERFLOW_32_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LCM_OVERFLOW_32_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LCM_OVERFLOW_64_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LCM_OVERFLOW_64_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LENGTH = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LENGTH", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LOWER_BOUND_NOT_BELOW_UPPER_BOUND = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LOWER_BOUND_NOT_BELOW_UPPER_BOUND", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          MAX_COUNT_EXCEEDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "MAX_COUNT_EXCEEDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          MEAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "MEAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NAN_ELEMENT_AT_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NAN_ELEMENT_AT_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NAN_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NAN_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NAN_VALUE_CONVERSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NAN_VALUE_CONVERSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NEGATIVE_COMPLEX_MODULE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NEGATIVE_COMPLEX_MODULE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NEGATIVE_DEFINITE_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NEGATIVE_DEFINITE_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NEGATIVE_ELEMENT_AT_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NEGATIVE_ELEMENT_AT_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_CONVERGENT_CONTINUED_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_CONVERGENT_CONTINUED_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_POSITIVE_DEFINITE_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_POSITIVE_DEFINITE_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SELF_ADJOINT_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SELF_ADJOINT_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SQUARE_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SQUARE_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SQUARE_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SQUARE_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SYMMETRIC_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SYMMETRIC_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NORM = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NORM", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NORMALIZE_INFINITE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NORMALIZE_INFINITE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NORMALIZE_NAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NORMALIZE_NAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_BRACKETING_INTERVAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_BRACKETING_INTERVAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_DECREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_DECREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_FINITE_NUMBER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_FINITE_NUMBER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_INCREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_INCREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_DEFINITE_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_DEFINITE_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_EXPONENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_EXPONENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_NUMBER_OF_SAMPLES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_NUMBER_OF_SAMPLES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_SCALE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_SCALE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_WINDOW_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_WINDOW_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_STRICTLY_DECREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_STRICTLY_DECREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_STRICTLY_INCREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_STRICTLY_INCREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NO_CONVERGENCE_WITH_ANY_START_POINT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NO_CONVERGENCE_WITH_ANY_START_POINT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NO_DATA$ = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NO_DATA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NO_OPTIMUM_COMPUTED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NO_OPTIMUM_COMPUTED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NULL_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NULL_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_INTERPOLATION_POINTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_INTERPOLATION_POINTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_POINTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_POINTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_SAMPLES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_SAMPLES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_SUCCESSES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_SUCCESSES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_TRIALS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_TRIALS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_LARGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_LARGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_LARGE_BOUND_EXCLUDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_LARGE_BOUND_EXCLUDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_SMALL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_SMALL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_SMALL_BOUND_EXCLUDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_SMALL_BOUND_EXCLUDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMERATOR_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMERATOR_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMERATOR_OVERFLOW_AFTER_MULTIPLY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMERATOR_OVERFLOW_AFTER_MULTIPLY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE_LEFT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE_LEFT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE_ROOT_OF_UNITY_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE_ROOT_OF_UNITY_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE_SIMPLE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE_SIMPLE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW$ = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_ADDITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_ADDITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_MULTIPLICATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_MULTIPLICATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_SUBTRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_SUBTRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          PERMUTATION_EXCEEDS_N = new LocalizedCoreFormats(env->getStaticObjectField(cls, "PERMUTATION_EXCEEDS_N", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          PERMUTATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "PERMUTATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          POLYNOMIAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "POLYNOMIAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          POPULATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "POPULATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          REAL_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "REAL_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          RIGHT_EDGE_GREATER_THAN_LEFT_EDGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "RIGHT_EDGE_GREATER_THAN_LEFT_EDGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ROBUSTNESS_ITERATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ROBUSTNESS_ITERATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ROOTS_OF_UNITY_NOT_COMPUTED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ROOTS_OF_UNITY_NOT_COMPUTED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ROW_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ROW_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SCALE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SCALE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SHAPE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SHAPE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SIMPLE_MESSAGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SIMPLE_MESSAGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SINGULAR_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SINGULAR_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SINGULAR_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SINGULAR_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          STANDARD_DEVIATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "STANDARD_DEVIATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          START_POINT_NOT_IN_INTERVAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "START_POINT_NOT_IN_INTERVAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          START_POSITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "START_POSITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SUBARRAY_ENDS_AFTER_ARRAY_END = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SUBARRAY_ENDS_AFTER_ARRAY_END", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          TOO_LARGE_CUTOFF_SINGULAR_VALUE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "TOO_LARGE_CUTOFF_SINGULAR_VALUE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          UNKNOWN_MODE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "UNKNOWN_MODE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          UNSUPPORTED_OPERATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "UNSUPPORTED_OPERATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          URL_CONTAINS_NO_DATA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "URL_CONTAINS_NO_DATA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          USER_EXCEPTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "USER_EXCEPTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          WEIGHT_AT_LEAST_ONE_NON_ZERO = new LocalizedCoreFormats(env->getStaticObjectField(cls, "WEIGHT_AT_LEAST_ONE_NON_ZERO", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          WHOLE_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "WHOLE_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          WRONG_NUMBER_OF_POINTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "WRONG_NUMBER_OF_POINTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_DENOMINATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_DENOMINATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_DENOMINATOR_IN_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_DENOMINATOR_IN_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_FRACTION_TO_DIVIDE_BY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_FRACTION_TO_DIVIDE_BY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_NORM = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_NORM", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_STATE_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_STATE_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedCoreFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_bab3be9b232acc5a], a0.this$));
      }

      ::java::lang::String LocalizedCoreFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_0090f7797e403f43]));
      }

      LocalizedCoreFormats LocalizedCoreFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedCoreFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_22c27263cea306a7], a0.this$));
      }

      JArray< LocalizedCoreFormats > LocalizedCoreFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedCoreFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_48b05f789e784309]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_LocalizedCoreFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedCoreFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedCoreFormats_of_(t_LocalizedCoreFormats *self, PyObject *args);
      static PyObject *t_LocalizedCoreFormats_getLocalizedString(t_LocalizedCoreFormats *self, PyObject *arg);
      static PyObject *t_LocalizedCoreFormats_getSourceString(t_LocalizedCoreFormats *self);
      static PyObject *t_LocalizedCoreFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedCoreFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedCoreFormats_get__sourceString(t_LocalizedCoreFormats *self, void *data);
      static PyObject *t_LocalizedCoreFormats_get__parameters_(t_LocalizedCoreFormats *self, void *data);
      static PyGetSetDef t_LocalizedCoreFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedCoreFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedCoreFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedCoreFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedCoreFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedCoreFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedCoreFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedCoreFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedCoreFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedCoreFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedCoreFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedCoreFormats)[] = {
        { Py_tp_methods, t_LocalizedCoreFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedCoreFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedCoreFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedCoreFormats, t_LocalizedCoreFormats, LocalizedCoreFormats);
      PyObject *t_LocalizedCoreFormats::wrap_Object(const LocalizedCoreFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedCoreFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedCoreFormats *self = (t_LocalizedCoreFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedCoreFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedCoreFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedCoreFormats *self = (t_LocalizedCoreFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedCoreFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedCoreFormats), &PY_TYPE_DEF(LocalizedCoreFormats), module, "LocalizedCoreFormats", 0);
      }

      void t_LocalizedCoreFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "class_", make_descriptor(LocalizedCoreFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "wrapfn_", make_descriptor(t_LocalizedCoreFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedCoreFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARITHMETIC_EXCEPTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARITHMETIC_EXCEPTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_ELEMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_ELEMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_SIZE_EXCEEDS_MAX_VARIABLES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_SIZE_EXCEEDS_MAX_VARIABLES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_SUMS_TO_ZERO", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_SUMS_TO_ZERO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "AT_LEAST_ONE_COLUMN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::AT_LEAST_ONE_COLUMN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "AT_LEAST_ONE_ROW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::AT_LEAST_ONE_ROW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BANDWIDTH", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BANDWIDTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BASE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BASE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BESSEL_FUNCTION_BAD_ARGUMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BESSEL_FUNCTION_BAD_ARGUMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BESSEL_FUNCTION_FAILED_CONVERGENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BESSEL_FUNCTION_FAILED_CONVERGENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BINOMIAL_INVALID_PARAMETERS_ORDER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BINOMIAL_INVALID_PARAMETERS_ORDER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BINOMIAL_NEGATIVE_PARAMETER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BINOMIAL_NEGATIVE_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_0TH_ROOT_OF_UNITY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_0TH_ROOT_OF_UNITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_FORMAT_INSTANCE_AS_COMPLEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_FORMAT_INSTANCE_AS_COMPLEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_FORMAT_OBJECT_TO_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_FORMAT_OBJECT_TO_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_PARSE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_PARSE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_PARSE_AS_TYPE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_PARSE_AS_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "COLUMN_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::COLUMN_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONSTRAINT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONSTRAINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTINUED_FRACTION_INFINITY_DIVERGENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTINUED_FRACTION_INFINITY_DIVERGENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTINUED_FRACTION_NAN_DIVERGENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTINUED_FRACTION_NAN_DIVERGENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTRACTION_CRITERIA_SMALLER_THAN_ONE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONVERGENCE_FAILED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONVERGENCE_FAILED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CUMULATIVE_PROBABILITY_RETURNED_NAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CUMULATIVE_PROBABILITY_RETURNED_NAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DEGREES_OF_FREEDOM", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DEGREES_OF_FREEDOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DENOMINATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DENOMINATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DENOMINATOR_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DENOMINATOR_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DERIVATION_ORDER_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DERIVATION_ORDER_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIFFERENT_ROWS_LENGTHS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIFFERENT_ROWS_LENGTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIGEST_NOT_INITIALIZED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIGEST_NOT_INITIALIZED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIMENSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIMENSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIMENSIONS_MISMATCH", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIMENSIONS_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIMENSIONS_MISMATCH_2x2", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIMENSIONS_MISMATCH_2x2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DISTRIBUTION_NOT_LOADED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DISTRIBUTION_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DUPLICATED_ABSCISSA_DIVISION_BY_ZERO", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DUPLICATED_ABSCISSA_DIVISION_BY_ZERO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_INTERPOLATION_SAMPLE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_INTERPOLATION_SAMPLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_SELECTED_COLUMN_INDEX_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_SELECTED_COLUMN_INDEX_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_SELECTED_ROW_INDEX_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_SELECTED_ROW_INDEX_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ENDPOINTS_NOT_AN_INTERVAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ENDPOINTS_NOT_AN_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EVALUATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EVALUATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EVALUATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EVALUATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EXPANSION_FACTOR_SMALLER_THAN_ONE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EXPANSION_FACTOR_SMALLER_THAN_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EXPONENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EXPONENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FACTORIAL_NEGATIVE_PARAMETER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FACTORIAL_NEGATIVE_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FAILED_BRACKETING", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FAILED_BRACKETING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FAILED_DECOMPOSITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FAILED_DECOMPOSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FAILED_FRACTION_CONVERSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FAILED_FRACTION_CONVERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FIRST_COLUMNS_NOT_INITIALIZED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FIRST_COLUMNS_NOT_INITIALIZED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FIRST_ROWS_NOT_INITIALIZED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FIRST_ROWS_NOT_INITIALIZED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FRACTION_CONVERSION_OVERFLOW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FRACTION_CONVERSION_OVERFLOW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FUNCTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FUNCTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "GCD_OVERFLOW_32_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::GCD_OVERFLOW_32_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "GCD_OVERFLOW_64_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::GCD_OVERFLOW_64_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ILLEGAL_STATE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ILLEGAL_STATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ILL_CONDITIONED_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ILL_CONDITIONED_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "IMAGINARY_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::IMAGINARY_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INDEX_LARGER_THAN_MAX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INDEX_LARGER_THAN_MAX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INDEX_NOT_POSITIVE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INDEX_NOT_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INFINITE_ARRAY_ELEMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INFINITE_ARRAY_ELEMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INFINITE_BOUND", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INFINITE_BOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INFINITE_VALUE_CONVERSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INFINITE_VALUE_CONVERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INITIAL_CAPACITY_NOT_POSITIVE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INITIAL_CAPACITY_NOT_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INITIAL_COLUMN_AFTER_FINAL_COLUMN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INITIAL_COLUMN_AFTER_FINAL_COLUMN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INITIAL_ROW_AFTER_FINAL_ROW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INITIAL_ROW_AFTER_FINAL_ROW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INPUT_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INPUT_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_DATA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_DIMENSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_DIMENSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_ROWS_AND_COLUMNS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_ROWS_AND_COLUMNS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INTERNAL_ERROR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INTERNAL_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INVALID_MAX_ITERATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INVALID_MAX_ITERATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ITERATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ITERATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LCM_OVERFLOW_32_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LCM_OVERFLOW_32_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LCM_OVERFLOW_64_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LCM_OVERFLOW_64_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LENGTH", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LENGTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LOWER_BOUND_NOT_BELOW_UPPER_BOUND", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LOWER_BOUND_NOT_BELOW_UPPER_BOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "MAX_COUNT_EXCEEDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::MAX_COUNT_EXCEEDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "MEAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::MEAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NAN_ELEMENT_AT_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NAN_ELEMENT_AT_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NAN_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NAN_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NAN_VALUE_CONVERSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NAN_VALUE_CONVERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NEGATIVE_COMPLEX_MODULE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NEGATIVE_COMPLEX_MODULE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NEGATIVE_DEFINITE_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NEGATIVE_DEFINITE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NEGATIVE_ELEMENT_AT_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NEGATIVE_ELEMENT_AT_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_CONVERGENT_CONTINUED_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_CONVERGENT_CONTINUED_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_POSITIVE_DEFINITE_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_POSITIVE_DEFINITE_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SELF_ADJOINT_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SELF_ADJOINT_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SQUARE_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SQUARE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SQUARE_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SQUARE_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SYMMETRIC_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SYMMETRIC_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NORM", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NORMALIZE_INFINITE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NORMALIZE_INFINITE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NORMALIZE_NAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NORMALIZE_NAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_BRACKETING_INTERVAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_BRACKETING_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_DECREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_DECREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_FINITE_NUMBER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_FINITE_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_INCREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_INCREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_DEFINITE_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_DEFINITE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_EXPONENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_EXPONENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_NUMBER_OF_SAMPLES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_NUMBER_OF_SAMPLES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_SCALE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_SCALE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_WINDOW_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_WINDOW_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_STRICTLY_DECREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_STRICTLY_DECREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_STRICTLY_INCREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_STRICTLY_INCREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NO_CONVERGENCE_WITH_ANY_START_POINT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NO_CONVERGENCE_WITH_ANY_START_POINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NO_DATA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NO_DATA$)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NO_OPTIMUM_COMPUTED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NO_OPTIMUM_COMPUTED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NULL_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NULL_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_INTERPOLATION_POINTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_INTERPOLATION_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_POINTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_SAMPLES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_SAMPLES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_SUCCESSES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_SUCCESSES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_TRIALS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_TRIALS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_LARGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_LARGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_LARGE_BOUND_EXCLUDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_LARGE_BOUND_EXCLUDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_SMALL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_SMALL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_SMALL_BOUND_EXCLUDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_SMALL_BOUND_EXCLUDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMERATOR_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMERATOR_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMERATOR_OVERFLOW_AFTER_MULTIPLY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMERATOR_OVERFLOW_AFTER_MULTIPLY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE_LEFT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE_LEFT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE_ROOT_OF_UNITY_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE_ROOT_OF_UNITY_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE_SIMPLE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE_SIMPLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW$)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_ADDITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_ADDITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_MULTIPLICATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_MULTIPLICATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_SUBTRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_SUBTRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "PERMUTATION_EXCEEDS_N", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::PERMUTATION_EXCEEDS_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "PERMUTATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::PERMUTATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "POLYNOMIAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::POLYNOMIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "POPULATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::POPULATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "REAL_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::REAL_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "RIGHT_EDGE_GREATER_THAN_LEFT_EDGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::RIGHT_EDGE_GREATER_THAN_LEFT_EDGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ROBUSTNESS_ITERATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ROBUSTNESS_ITERATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ROOTS_OF_UNITY_NOT_COMPUTED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ROOTS_OF_UNITY_NOT_COMPUTED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ROW_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ROW_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SCALE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SCALE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SHAPE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SHAPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SIMPLE_MESSAGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SIMPLE_MESSAGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SINGULAR_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SINGULAR_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SINGULAR_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SINGULAR_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "STANDARD_DEVIATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::STANDARD_DEVIATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "START_POINT_NOT_IN_INTERVAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::START_POINT_NOT_IN_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "START_POSITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::START_POSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SUBARRAY_ENDS_AFTER_ARRAY_END", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SUBARRAY_ENDS_AFTER_ARRAY_END)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "TOO_LARGE_CUTOFF_SINGULAR_VALUE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::TOO_LARGE_CUTOFF_SINGULAR_VALUE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "UNKNOWN_MODE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::UNKNOWN_MODE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "UNSUPPORTED_OPERATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::UNSUPPORTED_OPERATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "URL_CONTAINS_NO_DATA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::URL_CONTAINS_NO_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "USER_EXCEPTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::USER_EXCEPTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "WEIGHT_AT_LEAST_ONE_NON_ZERO", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::WEIGHT_AT_LEAST_ONE_NON_ZERO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "WHOLE_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::WHOLE_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "WRONG_NUMBER_OF_POINTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::WRONG_NUMBER_OF_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_DENOMINATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_DENOMINATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_DENOMINATOR_IN_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_DENOMINATOR_IN_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_FRACTION_TO_DIVIDE_BY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_FRACTION_TO_DIVIDE_BY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_NORM", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_NORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_STATE_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_STATE_SIZE)));
      }

      static PyObject *t_LocalizedCoreFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedCoreFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedCoreFormats::wrap_Object(LocalizedCoreFormats(((t_LocalizedCoreFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedCoreFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedCoreFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedCoreFormats_of_(t_LocalizedCoreFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedCoreFormats_getLocalizedString(t_LocalizedCoreFormats *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_LocalizedCoreFormats_getSourceString(t_LocalizedCoreFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedCoreFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedCoreFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::exception::LocalizedCoreFormats::valueOf(a0));
          return t_LocalizedCoreFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedCoreFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedCoreFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::exception::LocalizedCoreFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedCoreFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedCoreFormats_get__parameters_(t_LocalizedCoreFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedCoreFormats_get__sourceString(t_LocalizedCoreFormats *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EclipticProvider.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EclipticProvider::class$ = NULL;
      jmethodID *EclipticProvider::mids$ = NULL;
      bool EclipticProvider::live$ = false;

      jclass EclipticProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EclipticProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fb57ef656f9b39e7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;)V");
          mids$[mid_init$_3e35edf3d40d5101] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getTransform_d55545a64ea4a9a7] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_0b4f24249033b631] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EclipticProvider::EclipticProvider(const ::org::orekit::utils::IERSConventions & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fb57ef656f9b39e7, a0.this$)) {}

      EclipticProvider::EclipticProvider(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScales & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e35edf3d40d5101, a0.this$, a1.this$)) {}

      ::org::orekit::frames::Transform EclipticProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_d55545a64ea4a9a7], a0.this$));
      }

      ::org::orekit::frames::FieldTransform EclipticProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_0b4f24249033b631], a0.this$));
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
      static PyObject *t_EclipticProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EclipticProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EclipticProvider_init_(t_EclipticProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EclipticProvider_getTransform(t_EclipticProvider *self, PyObject *args);

      static PyMethodDef t_EclipticProvider__methods_[] = {
        DECLARE_METHOD(t_EclipticProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EclipticProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EclipticProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EclipticProvider)[] = {
        { Py_tp_methods, t_EclipticProvider__methods_ },
        { Py_tp_init, (void *) t_EclipticProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EclipticProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EclipticProvider, t_EclipticProvider, EclipticProvider);

      void t_EclipticProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(EclipticProvider), &PY_TYPE_DEF(EclipticProvider), module, "EclipticProvider", 0);
      }

      void t_EclipticProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EclipticProvider), "class_", make_descriptor(EclipticProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EclipticProvider), "wrapfn_", make_descriptor(t_EclipticProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EclipticProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EclipticProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EclipticProvider::initializeClass, 1)))
          return NULL;
        return t_EclipticProvider::wrap_Object(EclipticProvider(((t_EclipticProvider *) arg)->object.this$));
      }
      static PyObject *t_EclipticProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EclipticProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EclipticProvider_init_(t_EclipticProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            EclipticProvider object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              INT_CALL(object = EclipticProvider(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            EclipticProvider object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              INT_CALL(object = EclipticProvider(a0, a1));
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

      static PyObject *t_EclipticProvider_getTransform(t_EclipticProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Atanh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Atanh::class$ = NULL;
        jmethodID *Atanh::mids$ = NULL;
        bool Atanh::live$ = false;

        jclass Atanh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Atanh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Atanh::Atanh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Atanh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Atanh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
        static PyObject *t_Atanh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Atanh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Atanh_init_(t_Atanh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Atanh_value(t_Atanh *self, PyObject *args);

        static PyMethodDef t_Atanh__methods_[] = {
          DECLARE_METHOD(t_Atanh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atanh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atanh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Atanh)[] = {
          { Py_tp_methods, t_Atanh__methods_ },
          { Py_tp_init, (void *) t_Atanh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Atanh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Atanh, t_Atanh, Atanh);

        void t_Atanh::install(PyObject *module)
        {
          installType(&PY_TYPE(Atanh), &PY_TYPE_DEF(Atanh), module, "Atanh", 0);
        }

        void t_Atanh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atanh), "class_", make_descriptor(Atanh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atanh), "wrapfn_", make_descriptor(t_Atanh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atanh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Atanh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Atanh::initializeClass, 1)))
            return NULL;
          return t_Atanh::wrap_Object(Atanh(((t_Atanh *) arg)->object.this$));
        }
        static PyObject *t_Atanh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Atanh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Atanh_init_(t_Atanh *self, PyObject *args, PyObject *kwds)
        {
          Atanh object((jobject) NULL);

          INT_CALL(object = Atanh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Atanh_value(t_Atanh *self, PyObject *args)
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
#include "org/hipparchus/ode/nonstiff/AdamsIntegrator.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsIntegrator::class$ = NULL;
        jmethodID *AdamsIntegrator::mids$ = NULL;
        bool AdamsIntegrator::live$ = false;

        jclass AdamsIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_346aeec680764d4f] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;IIDD[D[D)V");
            mids$[mid_init$_c3bfd79d1f705090] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;IIDDDD)V");
            mids$[mid_integrate_7efcd57267e426c3] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_updateHighOrderDerivativesPhase1_6bf0ab2b7bd27bc5] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_37b11fdf1f335fdb] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([D[DLorg/hipparchus/linear/Array2DRowRealMatrix;)V");
            mids$[mid_initializeHighOrderDerivatives_3307b1e87a2ed966] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(D[D[[D[[D)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_errorEstimation_75ea1ed39c36d40d] = env->getMethodID(cls, "errorEstimation", "([DD[D[DLorg/hipparchus/linear/RealMatrix;)D");
            mids$[mid_finalizeStep_dff8af8869f4d85a] = env->getMethodID(cls, "finalizeStep", "(D[D[DLorg/hipparchus/linear/Array2DRowRealMatrix;ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsIntegrator::AdamsIntegrator(const ::java::lang::String & a0, jint a1, jint a2, jdouble a3, jdouble a4, const JArray< jdouble > & a5, const JArray< jdouble > & a6) : ::org::hipparchus::ode::MultistepIntegrator(env->newObject(initializeClass, &mids$, mid_init$_346aeec680764d4f, a0.this$, a1, a2, a3, a4, a5.this$, a6.this$)) {}

        AdamsIntegrator::AdamsIntegrator(const ::java::lang::String & a0, jint a1, jint a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::hipparchus::ode::MultistepIntegrator(env->newObject(initializeClass, &mids$, mid_init$_c3bfd79d1f705090, a0.this$, a1, a2, a3, a4, a5, a6)) {}

        ::org::hipparchus::ode::ODEStateAndDerivative AdamsIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_7efcd57267e426c3], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::linear::Array2DRowRealMatrix AdamsIntegrator::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowRealMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_6bf0ab2b7bd27bc5], a0.this$));
        }

        void AdamsIntegrator::updateHighOrderDerivativesPhase2(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::hipparchus::linear::Array2DRowRealMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_37b11fdf1f335fdb], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsIntegrator_init_(t_AdamsIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsIntegrator_integrate(t_AdamsIntegrator *self, PyObject *args);
        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase1(t_AdamsIntegrator *self, PyObject *arg);
        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase2(t_AdamsIntegrator *self, PyObject *args);

        static PyMethodDef t_AdamsIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_AdamsIntegrator, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsIntegrator, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsIntegrator)[] = {
          { Py_tp_methods, t_AdamsIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::MultistepIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsIntegrator, t_AdamsIntegrator, AdamsIntegrator);

        void t_AdamsIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsIntegrator), &PY_TYPE_DEF(AdamsIntegrator), module, "AdamsIntegrator", 0);
        }

        void t_AdamsIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsIntegrator), "class_", make_descriptor(AdamsIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsIntegrator), "wrapfn_", make_descriptor(t_AdamsIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsIntegrator::wrap_Object(AdamsIntegrator(((t_AdamsIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsIntegrator_init_(t_AdamsIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 7:
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              jdouble a3;
              jdouble a4;
              JArray< jdouble > a5((jobject) NULL);
              JArray< jdouble > a6((jobject) NULL);
              AdamsIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sIIDD[D[D", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = AdamsIntegrator(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              AdamsIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sIIDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = AdamsIntegrator(a0, a1, a2, a3, a4, a5, a6));
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

        static PyObject *t_AdamsIntegrator_integrate(t_AdamsIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AdamsIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase1(t_AdamsIntegrator *self, PyObject *arg)
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

        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase2(t_AdamsIntegrator *self, PyObject *args)
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
#include "org/orekit/propagation/analytical/tle/SDP4.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *SDP4::class$ = NULL;
          jmethodID *SDP4::mids$ = NULL;
          bool SDP4::live$ = false;

          jclass SDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/SDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_sxpInitialize_7ae3461a92a43152] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_77e0f9a1f260e2e5] = env->getMethodID(cls, "sxpPropagate", "(D)V");
              mids$[mid_luniSolarTermsComputation_7ae3461a92a43152] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_deepSecularEffects_77e0f9a1f260e2e5] = env->getMethodID(cls, "deepSecularEffects", "(D)V");
              mids$[mid_deepPeriodicEffects_77e0f9a1f260e2e5] = env->getMethodID(cls, "deepPeriodicEffects", "(D)V");
              mids$[mid_thetaG_e912d21057defe63] = env->getMethodID(cls, "thetaG", "(Lorg/orekit/time/AbsoluteDate;)D");

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
    namespace propagation {
      namespace analytical {
        namespace tle {
          static PyObject *t_SDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SDP4_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SDP4__methods_[] = {
            DECLARE_METHOD(t_SDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SDP4, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SDP4)[] = {
            { Py_tp_methods, t_SDP4__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::TLEPropagator),
            NULL
          };

          DEFINE_TYPE(SDP4, t_SDP4, SDP4);

          void t_SDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(SDP4), &PY_TYPE_DEF(SDP4), module, "SDP4", 0);
          }

          void t_SDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SDP4), "class_", make_descriptor(SDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SDP4), "wrapfn_", make_descriptor(t_SDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SDP4::initializeClass, 1)))
              return NULL;
            return t_SDP4::wrap_Object(SDP4(((t_SDP4 *) arg)->object.this$));
          }
          static PyObject *t_SDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SDP4::initializeClass, 0))
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
#include "org/orekit/files/rinex/observation/RinexObservationWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/rinex/observation/RinexObservation.h"
#include "java/util/List.h"
#include "java/lang/AutoCloseable.h"
#include "org/orekit/files/rinex/observation/RinexObservationHeader.h"
#include "java/lang/Appendable.h"
#include "org/orekit/files/rinex/section/RinexComment.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservationWriter::class$ = NULL;
          jmethodID *RinexObservationWriter::mids$ = NULL;
          bool RinexObservationWriter::live$ = false;

          jclass RinexObservationWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservationWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e39e830a0f55c9db] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;)V");
              mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
              mids$[mid_prepareComments_65de9727799c5641] = env->getMethodID(cls, "prepareComments", "(Ljava/util/List;)V");
              mids$[mid_writeCompleteFile_31f7edc5a6aad656] = env->getMethodID(cls, "writeCompleteFile", "(Lorg/orekit/files/rinex/observation/RinexObservation;)V");
              mids$[mid_writeHeader_581bd9eb401a3c81] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/rinex/observation/RinexObservationHeader;)V");
              mids$[mid_writeObservationDataSet_a74883e6a7063961] = env->getMethodID(cls, "writeObservationDataSet", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_writePendingRinex2Observations_7ae3461a92a43152] = env->getMethodID(cls, "writePendingRinex2Observations", "()V");
              mids$[mid_writePendingRinex34Observations_7ae3461a92a43152] = env->getMethodID(cls, "writePendingRinex34Observations", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservationWriter::RinexObservationWriter(const ::java::lang::Appendable & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e39e830a0f55c9db, a0.this$, a1.this$)) {}

          void RinexObservationWriter::close() const
          {
            env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
          }

          void RinexObservationWriter::prepareComments(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_prepareComments_65de9727799c5641], a0.this$);
          }

          void RinexObservationWriter::writeCompleteFile(const ::org::orekit::files::rinex::observation::RinexObservation & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_writeCompleteFile_31f7edc5a6aad656], a0.this$);
          }

          void RinexObservationWriter::writeHeader(const ::org::orekit::files::rinex::observation::RinexObservationHeader & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_writeHeader_581bd9eb401a3c81], a0.this$);
          }

          void RinexObservationWriter::writeObservationDataSet(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_writeObservationDataSet_a74883e6a7063961], a0.this$);
          }

          void RinexObservationWriter::writePendingRinex2Observations() const
          {
            env->callVoidMethod(this$, mids$[mid_writePendingRinex2Observations_7ae3461a92a43152]);
          }

          void RinexObservationWriter::writePendingRinex34Observations() const
          {
            env->callVoidMethod(this$, mids$[mid_writePendingRinex34Observations_7ae3461a92a43152]);
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
          static PyObject *t_RinexObservationWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservationWriter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexObservationWriter_init_(t_RinexObservationWriter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservationWriter_close(t_RinexObservationWriter *self);
          static PyObject *t_RinexObservationWriter_prepareComments(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writeCompleteFile(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writeHeader(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writeObservationDataSet(t_RinexObservationWriter *self, PyObject *arg);
          static PyObject *t_RinexObservationWriter_writePendingRinex2Observations(t_RinexObservationWriter *self);
          static PyObject *t_RinexObservationWriter_writePendingRinex34Observations(t_RinexObservationWriter *self);

          static PyMethodDef t_RinexObservationWriter__methods_[] = {
            DECLARE_METHOD(t_RinexObservationWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationWriter, close, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationWriter, prepareComments, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writeCompleteFile, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writeHeader, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writeObservationDataSet, METH_O),
            DECLARE_METHOD(t_RinexObservationWriter, writePendingRinex2Observations, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationWriter, writePendingRinex34Observations, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservationWriter)[] = {
            { Py_tp_methods, t_RinexObservationWriter__methods_ },
            { Py_tp_init, (void *) t_RinexObservationWriter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservationWriter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexObservationWriter, t_RinexObservationWriter, RinexObservationWriter);

          void t_RinexObservationWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservationWriter), &PY_TYPE_DEF(RinexObservationWriter), module, "RinexObservationWriter", 0);
          }

          void t_RinexObservationWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationWriter), "class_", make_descriptor(RinexObservationWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationWriter), "wrapfn_", make_descriptor(t_RinexObservationWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationWriter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexObservationWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservationWriter::initializeClass, 1)))
              return NULL;
            return t_RinexObservationWriter::wrap_Object(RinexObservationWriter(((t_RinexObservationWriter *) arg)->object.this$));
          }
          static PyObject *t_RinexObservationWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservationWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexObservationWriter_init_(t_RinexObservationWriter *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::Appendable a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            RinexObservationWriter object((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::lang::Appendable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RinexObservationWriter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexObservationWriter_close(t_RinexObservationWriter *self)
          {
            OBJ_CALL(self->object.close());
            Py_RETURN_NONE;
          }

          static PyObject *t_RinexObservationWriter_prepareComments(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.prepareComments(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "prepareComments", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writeCompleteFile(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::RinexObservation a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::observation::RinexObservation::initializeClass, &a0, &p0, ::org::orekit::files::rinex::observation::t_RinexObservation::parameters_))
            {
              OBJ_CALL(self->object.writeCompleteFile(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeCompleteFile", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writeHeader(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::RinexObservationHeader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::RinexObservationHeader::initializeClass, &a0))
            {
              OBJ_CALL(self->object.writeHeader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeHeader", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writeObservationDataSet(t_RinexObservationWriter *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
            {
              OBJ_CALL(self->object.writeObservationDataSet(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeObservationDataSet", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationWriter_writePendingRinex2Observations(t_RinexObservationWriter *self)
          {
            OBJ_CALL(self->object.writePendingRinex2Observations());
            Py_RETURN_NONE;
          }

          static PyObject *t_RinexObservationWriter_writePendingRinex34Observations(t_RinexObservationWriter *self)
          {
            OBJ_CALL(self->object.writePendingRinex34Observations());
            Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldAngularCoordinates::class$ = NULL;
      jmethodID *TimeStampedFieldAngularCoordinates::mids$ = NULL;
      bool TimeStampedFieldAngularCoordinates::live$ = false;

      jclass TimeStampedFieldAngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldAngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e15b020416400437] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_e1a7392be9254a79] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/TimeStampedAngularCoordinates;)V");
          mids$[mid_init$_fbe0d61f3942c09c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_f953797f92c3fc12] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_b7eb08ec687e53fa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;D)V");
          mids$[mid_init$_a26a60053d31b138] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;D)V");
          mids$[mid_addOffset_e1547cbee1589e0c] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_getDate_09b0a926600dfc14] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_revert_3a64e8ea05af639a] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_shiftedBy_22bd2763ea870f72] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_shiftedBy_6020a51044d9cf6b] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_subtractOffset_e1547cbee1589e0c] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_e15b020416400437, a0.this$, a1.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::TimeStampedAngularCoordinates & a1) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_e1a7392be9254a79, a0.this$, a1.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_fbe0d61f3942c09c, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_f953797f92c3fc12, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::orekit::utils::FieldPVCoordinates & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_b7eb08ec687e53fa, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::orekit::utils::FieldPVCoordinates & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a26a60053d31b138, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::addOffset(const ::org::orekit::utils::FieldAngularCoordinates & a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_e1547cbee1589e0c], a0.this$));
      }

      ::org::orekit::time::FieldAbsoluteDate TimeStampedFieldAngularCoordinates::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_09b0a926600dfc14]));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::revert() const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_3a64e8ea05af639a]));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_22bd2763ea870f72], a0));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_6020a51044d9cf6b], a0.this$));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::subtractOffset(const ::org::orekit::utils::FieldAngularCoordinates & a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_e1547cbee1589e0c], a0.this$));
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
      static PyObject *t_TimeStampedFieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinates_of_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static int t_TimeStampedFieldAngularCoordinates_init_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldAngularCoordinates_addOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_getDate(t_TimeStampedFieldAngularCoordinates *self);
      static PyObject *t_TimeStampedFieldAngularCoordinates_revert(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_shiftedBy(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_subtractOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_get__date(t_TimeStampedFieldAngularCoordinates *self, void *data);
      static PyObject *t_TimeStampedFieldAngularCoordinates_get__parameters_(t_TimeStampedFieldAngularCoordinates *self, void *data);
      static PyGetSetDef t_TimeStampedFieldAngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinates, date),
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldAngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, addOffset, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, revert, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, subtractOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldAngularCoordinates)[] = {
        { Py_tp_methods, t_TimeStampedFieldAngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldAngularCoordinates_init_ },
        { Py_tp_getset, t_TimeStampedFieldAngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldAngularCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::FieldAngularCoordinates),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldAngularCoordinates, t_TimeStampedFieldAngularCoordinates, TimeStampedFieldAngularCoordinates);
      PyObject *t_TimeStampedFieldAngularCoordinates::wrap_Object(const TimeStampedFieldAngularCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinates *self = (t_TimeStampedFieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldAngularCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinates *self = (t_TimeStampedFieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldAngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldAngularCoordinates), &PY_TYPE_DEF(TimeStampedFieldAngularCoordinates), module, "TimeStampedFieldAngularCoordinates", 0);
      }

      void t_TimeStampedFieldAngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinates), "class_", make_descriptor(TimeStampedFieldAngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinates), "wrapfn_", make_descriptor(t_TimeStampedFieldAngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldAngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldAngularCoordinates::wrap_Object(TimeStampedFieldAngularCoordinates(((t_TimeStampedFieldAngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldAngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_of_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldAngularCoordinates_init_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedAngularCoordinates a1((jobject) NULL);
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKKD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKD", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_TimeStampedFieldAngularCoordinates_addOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        TimeStampedFieldAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "addOffset", args, 2);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_getDate(t_TimeStampedFieldAngularCoordinates *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_revert(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        TimeStampedFieldAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.revert());
          return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "revert", args, 2);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_shiftedBy(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            TimeStampedFieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            TimeStampedFieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_subtractOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        TimeStampedFieldAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "subtractOffset", args, 2);
      }
      static PyObject *t_TimeStampedFieldAngularCoordinates_get__parameters_(t_TimeStampedFieldAngularCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_get__date(t_TimeStampedFieldAngularCoordinates *self, void *data)
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
#include "org/orekit/utils/OccultationEngine.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/OccultationEngine$FieldOccultationAngles.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/OccultationEngine$OccultationAngles.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
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
          mids$[mid_init$_8212346dfc4eeedc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_angles_35f0fb375591b62e] = env->getMethodID(cls, "angles", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/utils/OccultationEngine$FieldOccultationAngles;");
          mids$[mid_angles_2f228fc34943e243] = env->getMethodID(cls, "angles", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/utils/OccultationEngine$OccultationAngles;");
          mids$[mid_getOcculted_488529e6bae70b9b] = env->getMethodID(cls, "getOcculted", "()Lorg/orekit/utils/ExtendedPVCoordinatesProvider;");
          mids$[mid_getOccultedRadius_456d9a2f64d6b28d] = env->getMethodID(cls, "getOccultedRadius", "()D");
          mids$[mid_getOcculting_940814a1dcab100a] = env->getMethodID(cls, "getOcculting", "()Lorg/orekit/bodies/OneAxisEllipsoid;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OccultationEngine::OccultationEngine(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8212346dfc4eeedc, a0.this$, a1, a2.this$)) {}

      ::org::orekit::utils::OccultationEngine$FieldOccultationAngles OccultationEngine::angles(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::orekit::utils::OccultationEngine$FieldOccultationAngles(env->callObjectMethod(this$, mids$[mid_angles_35f0fb375591b62e], a0.this$));
      }

      ::org::orekit::utils::OccultationEngine$OccultationAngles OccultationEngine::angles(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::orekit::utils::OccultationEngine$OccultationAngles(env->callObjectMethod(this$, mids$[mid_angles_2f228fc34943e243], a0.this$));
      }

      ::org::orekit::utils::ExtendedPVCoordinatesProvider OccultationEngine::getOcculted() const
      {
        return ::org::orekit::utils::ExtendedPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getOcculted_488529e6bae70b9b]));
      }

      jdouble OccultationEngine::getOccultedRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOccultedRadius_456d9a2f64d6b28d]);
      }

      ::org::orekit::bodies::OneAxisEllipsoid OccultationEngine::getOcculting() const
      {
        return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getOcculting_940814a1dcab100a]));
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
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldAbsolutePVCoordinates::class$ = NULL;
      jmethodID *FieldAbsolutePVCoordinates::mids$ = NULL;
      bool FieldAbsolutePVCoordinates::live$ = false;

      jclass FieldAbsolutePVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldAbsolutePVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_df81e043e926a013] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)V");
          mids$[mid_init$_43f93b28b797951a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_380e3285128bd3ab] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_6915f38f9d73a4da] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_84e2abc75a0ef1a2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_a332af9e0c5473c5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_13df4cca0dae3be7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_8ee2135f18ca0852] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_10206186abe24235] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_316d0b5400379728] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getPVCoordinates_26447a781aafdb9e] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_485af6605091d545] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_0e277b7d6a64b75a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_863ec0d27d7d92bb] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_shiftedBy_65569f14a206711d] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/FieldAbsolutePVCoordinates;");
          mids$[mid_shiftedBy_b506c770a1be56c1] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldAbsolutePVCoordinates;");
          mids$[mid_toAbsolutePVCoordinates_821da029915a6e75] = env->getMethodID(cls, "toAbsolutePVCoordinates", "()Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_toTaylorProvider_d265659654cb169e] = env->getMethodID(cls, "toTaylorProvider", "()Lorg/orekit/utils/FieldPVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a1) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_df81e043e926a013, a0.this$, a1.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const FieldAbsolutePVCoordinates & a1, const FieldAbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_43f93b28b797951a, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_380e3285128bd3ab, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_6915f38f9d73a4da, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_84e2abc75a0ef1a2, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a332af9e0c5473c5, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const FieldAbsolutePVCoordinates & a4) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_13df4cca0dae3be7, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a4) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_8ee2135f18ca0852, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const FieldAbsolutePVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const FieldAbsolutePVCoordinates & a6) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_10206186abe24235, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const FieldAbsolutePVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const FieldAbsolutePVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const FieldAbsolutePVCoordinates & a8) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_316d0b5400379728, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      ::org::orekit::frames::Frame FieldAbsolutePVCoordinates::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbsolutePVCoordinates::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_26447a781aafdb9e]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_485af6605091d545], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_0e277b7d6a64b75a], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAbsolutePVCoordinates::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_863ec0d27d7d92bb], a0.this$));
      }

      FieldAbsolutePVCoordinates FieldAbsolutePVCoordinates::shiftedBy(jdouble a0) const
      {
        return FieldAbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_65569f14a206711d], a0));
      }

      FieldAbsolutePVCoordinates FieldAbsolutePVCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_b506c770a1be56c1], a0.this$));
      }

      ::org::orekit::utils::AbsolutePVCoordinates FieldAbsolutePVCoordinates::toAbsolutePVCoordinates() const
      {
        return ::org::orekit::utils::AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_toAbsolutePVCoordinates_821da029915a6e75]));
      }

      ::org::orekit::utils::FieldPVCoordinatesProvider FieldAbsolutePVCoordinates::toTaylorProvider() const
      {
        return ::org::orekit::utils::FieldPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toTaylorProvider_d265659654cb169e]));
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
      static PyObject *t_FieldAbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinates_of_(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static int t_FieldAbsolutePVCoordinates_init_(t_FieldAbsolutePVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAbsolutePVCoordinates_getFrame(t_FieldAbsolutePVCoordinates *self);
      static PyObject *t_FieldAbsolutePVCoordinates_getPVCoordinates(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_FieldAbsolutePVCoordinates_getPosition(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_FieldAbsolutePVCoordinates_shiftedBy(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_FieldAbsolutePVCoordinates_toAbsolutePVCoordinates(t_FieldAbsolutePVCoordinates *self);
      static PyObject *t_FieldAbsolutePVCoordinates_toTaylorProvider(t_FieldAbsolutePVCoordinates *self);
      static PyObject *t_FieldAbsolutePVCoordinates_get__frame(t_FieldAbsolutePVCoordinates *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinates_get__pVCoordinates(t_FieldAbsolutePVCoordinates *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinates_get__parameters_(t_FieldAbsolutePVCoordinates *self, void *data);
      static PyGetSetDef t_FieldAbsolutePVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinates, frame),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinates, pVCoordinates),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbsolutePVCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, toAbsolutePVCoordinates, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, toTaylorProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbsolutePVCoordinates)[] = {
        { Py_tp_methods, t_FieldAbsolutePVCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldAbsolutePVCoordinates_init_ },
        { Py_tp_getset, t_FieldAbsolutePVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbsolutePVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::TimeStampedFieldPVCoordinates),
        NULL
      };

      DEFINE_TYPE(FieldAbsolutePVCoordinates, t_FieldAbsolutePVCoordinates, FieldAbsolutePVCoordinates);
      PyObject *t_FieldAbsolutePVCoordinates::wrap_Object(const FieldAbsolutePVCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinates *self = (t_FieldAbsolutePVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbsolutePVCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinates *self = (t_FieldAbsolutePVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbsolutePVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbsolutePVCoordinates), &PY_TYPE_DEF(FieldAbsolutePVCoordinates), module, "FieldAbsolutePVCoordinates", 0);
      }

      void t_FieldAbsolutePVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinates), "class_", make_descriptor(FieldAbsolutePVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinates), "wrapfn_", make_descriptor(t_FieldAbsolutePVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbsolutePVCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldAbsolutePVCoordinates::wrap_Object(FieldAbsolutePVCoordinates(((t_FieldAbsolutePVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldAbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbsolutePVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbsolutePVCoordinates_of_(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAbsolutePVCoordinates_init_(t_FieldAbsolutePVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsolutePVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, FieldAbsolutePVCoordinates::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, t_FieldAbsolutePVCoordinates::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAbsolutePVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, t_FieldAbsolutePVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAbsolutePVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            FieldAbsolutePVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, t_FieldAbsolutePVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, t_FieldAbsolutePVCoordinates::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_FieldAbsolutePVCoordinates_getFrame(t_FieldAbsolutePVCoordinates *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_getPVCoordinates(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 2:
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
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldAbsolutePVCoordinates_getPosition(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getPosition(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(FieldAbsolutePVCoordinates), (PyObject *) self, "getPosition", args, 2);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_shiftedBy(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAbsolutePVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsolutePVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsolutePVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsolutePVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldAbsolutePVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_toAbsolutePVCoordinates(t_FieldAbsolutePVCoordinates *self)
      {
        ::org::orekit::utils::AbsolutePVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toAbsolutePVCoordinates());
        return ::org::orekit::utils::t_AbsolutePVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_toTaylorProvider(t_FieldAbsolutePVCoordinates *self)
      {
        ::org::orekit::utils::FieldPVCoordinatesProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.toTaylorProvider());
        return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldAbsolutePVCoordinates_get__parameters_(t_FieldAbsolutePVCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbsolutePVCoordinates_get__frame(t_FieldAbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_get__pVCoordinates(t_FieldAbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/XmlStructureKey.h"
#include "org/orekit/files/ccsds/section/XmlStructureKey.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *XmlStructureKey::class$ = NULL;
          jmethodID *XmlStructureKey::mids$ = NULL;
          bool XmlStructureKey::live$ = false;
          XmlStructureKey *XmlStructureKey::body = NULL;
          XmlStructureKey *XmlStructureKey::data = NULL;
          XmlStructureKey *XmlStructureKey::header = NULL;
          XmlStructureKey *XmlStructureKey::metadata = NULL;
          XmlStructureKey *XmlStructureKey::segment = NULL;

          jclass XmlStructureKey::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/XmlStructureKey");

              mids$ = new jmethodID[max_mid];
              mids$[mid_process_6f09ff368ed52756] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)Z");
              mids$[mid_valueOf_af857aa1fe55eef0] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/XmlStructureKey;");
              mids$[mid_values_e2e167fb9c360584] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/XmlStructureKey;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              body = new XmlStructureKey(env->getStaticObjectField(cls, "body", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              data = new XmlStructureKey(env->getStaticObjectField(cls, "data", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              header = new XmlStructureKey(env->getStaticObjectField(cls, "header", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              metadata = new XmlStructureKey(env->getStaticObjectField(cls, "metadata", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              segment = new XmlStructureKey(env->getStaticObjectField(cls, "segment", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean XmlStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_process_6f09ff368ed52756], a0.this$, a1.this$);
          }

          XmlStructureKey XmlStructureKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return XmlStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_af857aa1fe55eef0], a0.this$));
          }

          JArray< XmlStructureKey > XmlStructureKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< XmlStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_e2e167fb9c360584]));
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
          static PyObject *t_XmlStructureKey_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_XmlStructureKey_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_XmlStructureKey_of_(t_XmlStructureKey *self, PyObject *args);
          static PyObject *t_XmlStructureKey_process(t_XmlStructureKey *self, PyObject *args);
          static PyObject *t_XmlStructureKey_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_XmlStructureKey_values(PyTypeObject *type);
          static PyObject *t_XmlStructureKey_get__parameters_(t_XmlStructureKey *self, void *data);
          static PyGetSetDef t_XmlStructureKey__fields_[] = {
            DECLARE_GET_FIELD(t_XmlStructureKey, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_XmlStructureKey__methods_[] = {
            DECLARE_METHOD(t_XmlStructureKey, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureKey, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureKey, of_, METH_VARARGS),
            DECLARE_METHOD(t_XmlStructureKey, process, METH_VARARGS),
            DECLARE_METHOD(t_XmlStructureKey, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureKey, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(XmlStructureKey)[] = {
            { Py_tp_methods, t_XmlStructureKey__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_XmlStructureKey__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(XmlStructureKey)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(XmlStructureKey, t_XmlStructureKey, XmlStructureKey);
          PyObject *t_XmlStructureKey::wrap_Object(const XmlStructureKey& object, PyTypeObject *p0)
          {
            PyObject *obj = t_XmlStructureKey::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_XmlStructureKey *self = (t_XmlStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_XmlStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_XmlStructureKey::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_XmlStructureKey *self = (t_XmlStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_XmlStructureKey::install(PyObject *module)
          {
            installType(&PY_TYPE(XmlStructureKey), &PY_TYPE_DEF(XmlStructureKey), module, "XmlStructureKey", 0);
          }

          void t_XmlStructureKey::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "class_", make_descriptor(XmlStructureKey::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "wrapfn_", make_descriptor(t_XmlStructureKey::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "boxfn_", make_descriptor(boxObject));
            env->getClass(XmlStructureKey::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "body", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::body)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "data", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::data)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "header", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::header)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "metadata", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::metadata)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "segment", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::segment)));
          }

          static PyObject *t_XmlStructureKey_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, XmlStructureKey::initializeClass, 1)))
              return NULL;
            return t_XmlStructureKey::wrap_Object(XmlStructureKey(((t_XmlStructureKey *) arg)->object.this$));
          }
          static PyObject *t_XmlStructureKey_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, XmlStructureKey::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_XmlStructureKey_of_(t_XmlStructureKey *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_XmlStructureKey_process(t_XmlStructureKey *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean result;

            if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              OBJ_CALL(result = self->object.process(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "process", args);
            return NULL;
          }

          static PyObject *t_XmlStructureKey_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            XmlStructureKey result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::section::XmlStructureKey::valueOf(a0));
              return t_XmlStructureKey::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_XmlStructureKey_values(PyTypeObject *type)
          {
            JArray< XmlStructureKey > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::section::XmlStructureKey::values());
            return JArray<jobject>(result.this$).wrap(t_XmlStructureKey::wrap_jobject);
          }
          static PyObject *t_XmlStructureKey_get__parameters_(t_XmlStructureKey *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresFactory.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresFactory::class$ = NULL;
            jmethodID *LeastSquaresFactory::mids$ = NULL;
            bool LeastSquaresFactory::live$ = false;

            jclass LeastSquaresFactory::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresFactory");

                mids$ = new jmethodID[max_mid];
                mids$[mid_countEvaluations_d895828ff66e2e28] = env->getStaticMethodID(cls, "countEvaluations", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;Lorg/hipparchus/util/Incrementor;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_5b568760059dad60] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/optim/ConvergenceChecker;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_8e09ef5bdf791899] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/optim/ConvergenceChecker;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_7d2867df71e9c392] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;Lorg/hipparchus/analysis/MultivariateMatrixFunction;[D[DLorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/optim/ConvergenceChecker;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_878472d31d65edc2] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/optim/ConvergenceChecker;IIZLorg/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_evaluationChecker_3f15d3efc7f0fe61] = env->getStaticMethodID(cls, "evaluationChecker", "(Lorg/hipparchus/optim/ConvergenceChecker;)Lorg/hipparchus/optim/ConvergenceChecker;");
                mids$[mid_model_77824eaff5c3c8a5] = env->getStaticMethodID(cls, "model", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;Lorg/hipparchus/analysis/MultivariateMatrixFunction;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
                mids$[mid_weightDiagonal_8d6b23812c19e8cd] = env->getStaticMethodID(cls, "weightDiagonal", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_weightMatrix_9506dfeff4834b40] = env->getStaticMethodID(cls, "weightMatrix", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::countEvaluations(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0, const ::org::hipparchus::util::Incrementor & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_countEvaluations_d895828ff66e2e28], a0.this$, a1.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::optim::ConvergenceChecker & a3, jint a4, jint a5)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_5b568760059dad60], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::optim::ConvergenceChecker & a4, jint a5, jint a6)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_8e09ef5bdf791899], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const ::org::hipparchus::analysis::MultivariateMatrixFunction & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const ::org::hipparchus::linear::RealMatrix & a4, const ::org::hipparchus::optim::ConvergenceChecker & a5, jint a6, jint a7)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_7d2867df71e9c392], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6, a7));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::optim::ConvergenceChecker & a4, jint a5, jint a6, jboolean a7, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator & a8)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_878472d31d65edc2], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8.this$));
            }

            ::org::hipparchus::optim::ConvergenceChecker LeastSquaresFactory::evaluationChecker(const ::org::hipparchus::optim::ConvergenceChecker & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::ConvergenceChecker(env->callStaticObjectMethod(cls, mids$[mid_evaluationChecker_3f15d3efc7f0fe61], a0.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction LeastSquaresFactory::model(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const ::org::hipparchus::analysis::MultivariateMatrixFunction & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction(env->callStaticObjectMethod(cls, mids$[mid_model_77824eaff5c3c8a5], a0.this$, a1.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::weightDiagonal(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0, const ::org::hipparchus::linear::RealVector & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_weightDiagonal_8d6b23812c19e8cd], a0.this$, a1.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::weightMatrix(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0, const ::org::hipparchus::linear::RealMatrix & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_weightMatrix_9506dfeff4834b40], a0.this$, a1.this$));
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
        namespace vector {
          namespace leastsquares {
            static PyObject *t_LeastSquaresFactory_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresFactory_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresFactory_countEvaluations(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_create(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_evaluationChecker(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresFactory_model(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_weightDiagonal(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_weightMatrix(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_LeastSquaresFactory__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresFactory, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, countEvaluations, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, create, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, evaluationChecker, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, model, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, weightDiagonal, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, weightMatrix, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresFactory)[] = {
              { Py_tp_methods, t_LeastSquaresFactory__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresFactory)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresFactory, t_LeastSquaresFactory, LeastSquaresFactory);

            void t_LeastSquaresFactory::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresFactory), &PY_TYPE_DEF(LeastSquaresFactory), module, "LeastSquaresFactory", 0);
            }

            void t_LeastSquaresFactory::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresFactory), "class_", make_descriptor(LeastSquaresFactory::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresFactory), "wrapfn_", make_descriptor(t_LeastSquaresFactory::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresFactory), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresFactory_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresFactory::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresFactory::wrap_Object(LeastSquaresFactory(((t_LeastSquaresFactory *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresFactory_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresFactory::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresFactory_countEvaluations(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::util::Incrementor a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, ::org::hipparchus::util::Incrementor::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::countEvaluations(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "countEvaluations", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_create(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 6:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a1((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a2((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a3((jobject) NULL);
                  PyTypeObject **p3;
                  jint a4;
                  jint a5;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kkkKII", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a4, &a5))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
                break;
               case 7:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a1((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a2((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a4((jobject) NULL);
                  PyTypeObject **p4;
                  jint a5;
                  jint a6;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kkkkKII", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a5, &a6))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5, a6));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
                break;
               case 8:
                {
                  ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                  ::org::hipparchus::analysis::MultivariateMatrixFunction a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > a3((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a5((jobject) NULL);
                  PyTypeObject **p5;
                  jint a6;
                  jint a7;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kk[D[DkKII", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::analysis::MultivariateMatrixFunction::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a6, &a7))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5, a6, a7));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
                break;
               case 9:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a1((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a2((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a4((jobject) NULL);
                  PyTypeObject **p4;
                  jint a5;
                  jint a6;
                  jboolean a7;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator a8((jobject) NULL);
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kkkkKIIZk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a5, &a6, &a7, &a8))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "create", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_evaluationChecker(PyTypeObject *type, PyObject *arg)
            {
              ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::evaluationChecker(a0));
                return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, ::org::hipparchus::optim::nonlinear::vector::leastsquares::PY_TYPE(LeastSquaresProblem$Evaluation));
              }

              PyErr_SetArgsError(type, "evaluationChecker", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_model(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::MultivariateMatrixFunction a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::analysis::MultivariateMatrixFunction::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::model(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_MultivariateJacobianFunction::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "model", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_weightDiagonal(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::linear::RealVector a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::weightDiagonal(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "weightDiagonal", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_weightMatrix(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::weightMatrix(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "weightMatrix", args);
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
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "java/util/List.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *AbstractFieldIntegrator::class$ = NULL;
      jmethodID *AbstractFieldIntegrator::mids$ = NULL;
      bool AbstractFieldIntegrator::live$ = false;

      jclass AbstractFieldIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/AbstractFieldIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_51c8f19515e56fc6] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
          mids$[mid_addStepEndHandler_08e1e17c6db119ef] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/FieldODEStepEndHandler;)V");
          mids$[mid_addStepHandler_d88adba4c2bf364d] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/FieldODEStepHandler;)V");
          mids$[mid_clearEventDetectors_7ae3461a92a43152] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_7ae3461a92a43152] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_7ae3461a92a43152] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_computeDerivatives_ea2fed402e730f9f] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCurrentSignedStepsize_e6d4d3215c30992a] = env->getMethodID(cls, "getCurrentSignedStepsize", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_a6156df500549a58] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getMaxEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_a6156df500549a58] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_a6156df500549a58] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_f1f1c5e26e98a1d9] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_0a2a1ac2721c0336] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");
          mids$[mid_sanityChecks_2231c8fee9b0ac70] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_initIntegration_668e072c435ebb6b] = env->getMethodID(cls, "initIntegration", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_setStepStart_c314ae4458a4e52a] = env->getMethodID(cls, "setStepStart", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
          mids$[mid_setStepSize_03a16642f77779e7] = env->getMethodID(cls, "setStepSize", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_setIsLastStep_50a2e0b139e80a58] = env->getMethodID(cls, "setIsLastStep", "(Z)V");
          mids$[mid_getStepSize_e6d4d3215c30992a] = env->getMethodID(cls, "getStepSize", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_acceptStep_356accace7518dce] = env->getMethodID(cls, "acceptStep", "(Lorg/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_isLastStep_e470b6d9e0d979db] = env->getMethodID(cls, "isLastStep", "()Z");
          mids$[mid_resetOccurred_e470b6d9e0d979db] = env->getMethodID(cls, "resetOccurred", "()Z");
          mids$[mid_getEquations_6fd381cb4880014f] = env->getMethodID(cls, "getEquations", "()Lorg/hipparchus/ode/FieldExpandableODE;");
          mids$[mid_getEvaluationsCounter_745ef02916e2d8db] = env->getMethodID(cls, "getEvaluationsCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_setStateInitialized_50a2e0b139e80a58] = env->getMethodID(cls, "setStateInitialized", "(Z)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractFieldIntegrator::addEventDetector(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_51c8f19515e56fc6], a0.this$);
      }

      void AbstractFieldIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::FieldODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_08e1e17c6db119ef], a0.this$);
      }

      void AbstractFieldIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::FieldODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_d88adba4c2bf364d], a0.this$);
      }

      void AbstractFieldIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_7ae3461a92a43152]);
      }

      void AbstractFieldIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_7ae3461a92a43152]);
      }

      void AbstractFieldIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_7ae3461a92a43152]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > AbstractFieldIntegrator::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_ea2fed402e730f9f], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement AbstractFieldIntegrator::getCurrentSignedStepsize() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCurrentSignedStepsize_e6d4d3215c30992a]));
      }

      jint AbstractFieldIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_f2f64475e4580546]);
      }

      ::java::util::List AbstractFieldIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a6156df500549a58]));
      }

      ::org::hipparchus::Field AbstractFieldIntegrator::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
      }

      jint AbstractFieldIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_f2f64475e4580546]);
      }

      ::java::lang::String AbstractFieldIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      ::java::util::List AbstractFieldIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_a6156df500549a58]));
      }

      ::java::util::List AbstractFieldIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_a6156df500549a58]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_f1f1c5e26e98a1d9]));
      }

      void AbstractFieldIntegrator::setMaxEvaluations(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_0a2a1ac2721c0336], a0);
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
      static PyObject *t_AbstractFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_of_(t_AbstractFieldIntegrator *self, PyObject *args);
      static PyObject *t_AbstractFieldIntegrator_addEventDetector(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_addStepEndHandler(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_addStepHandler(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_clearEventDetectors(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_clearStepEndHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_clearStepHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_computeDerivatives(t_AbstractFieldIntegrator *self, PyObject *args);
      static PyObject *t_AbstractFieldIntegrator_getCurrentSignedStepsize(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getEvaluations(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getEventDetectors(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getField(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getMaxEvaluations(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getName(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getStepEndHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getStepHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getStepStart(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_setMaxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_get__currentSignedStepsize(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__evaluations(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__eventDetectors(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__field(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__maxEvaluations(t_AbstractFieldIntegrator *self, void *data);
      static int t_AbstractFieldIntegrator_set__maxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__name(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__stepEndHandlers(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__stepHandlers(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__stepStart(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__parameters_(t_AbstractFieldIntegrator *self, void *data);
      static PyGetSetDef t_AbstractFieldIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, evaluations),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, eventDetectors),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, field),
        DECLARE_GETSET_FIELD(t_AbstractFieldIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, name),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, stepStart),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldIntegrator__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_AbstractFieldIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_AbstractFieldIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_AbstractFieldIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getField, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldIntegrator)[] = {
        { Py_tp_methods, t_AbstractFieldIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFieldIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldIntegrator, t_AbstractFieldIntegrator, AbstractFieldIntegrator);
      PyObject *t_AbstractFieldIntegrator::wrap_Object(const AbstractFieldIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldIntegrator *self = (t_AbstractFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldIntegrator *self = (t_AbstractFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractFieldIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldIntegrator), &PY_TYPE_DEF(AbstractFieldIntegrator), module, "AbstractFieldIntegrator", 0);
      }

      void t_AbstractFieldIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegrator), "class_", make_descriptor(AbstractFieldIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegrator), "wrapfn_", make_descriptor(t_AbstractFieldIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldIntegrator::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldIntegrator::wrap_Object(AbstractFieldIntegrator(((t_AbstractFieldIntegrator *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldIntegrator_of_(t_AbstractFieldIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractFieldIntegrator_addEventDetector(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::FieldODEEventDetector a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_addStepEndHandler(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::FieldODEStepEndHandler a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEStepEndHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::parameters_))
        {
          OBJ_CALL(self->object.addStepEndHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepEndHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_addStepHandler(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::FieldODEStepHandler a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStepHandler::parameters_))
        {
          OBJ_CALL(self->object.addStepHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_clearEventDetectors(t_AbstractFieldIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractFieldIntegrator_clearStepEndHandlers(t_AbstractFieldIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractFieldIntegrator_clearStepHandlers(t_AbstractFieldIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractFieldIntegrator_computeDerivatives(t_AbstractFieldIntegrator *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_getCurrentSignedStepsize(t_AbstractFieldIntegrator *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getEvaluations(t_AbstractFieldIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldIntegrator_getEventDetectors(t_AbstractFieldIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getField(t_AbstractFieldIntegrator *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldIntegrator_getMaxEvaluations(t_AbstractFieldIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldIntegrator_getName(t_AbstractFieldIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getStepEndHandlers(t_AbstractFieldIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getStepHandlers(t_AbstractFieldIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getStepStart(t_AbstractFieldIntegrator *self)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldIntegrator_setMaxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setMaxEvaluations(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxEvaluations", arg);
        return NULL;
      }
      static PyObject *t_AbstractFieldIntegrator_get__parameters_(t_AbstractFieldIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldIntegrator_get__currentSignedStepsize(t_AbstractFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__evaluations(t_AbstractFieldIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__eventDetectors(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__field(t_AbstractFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__maxEvaluations(t_AbstractFieldIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_AbstractFieldIntegrator_set__maxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setMaxEvaluations(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
        return -1;
      }

      static PyObject *t_AbstractFieldIntegrator_get__name(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__stepEndHandlers(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__stepHandlers(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__stepStart(t_AbstractFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
      }
    }
  }
}
