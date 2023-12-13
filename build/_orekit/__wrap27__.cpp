#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/InitialGuess.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *InitialGuess::class$ = NULL;
      jmethodID *InitialGuess::mids$ = NULL;
      bool InitialGuess::live$ = false;

      jclass InitialGuess::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/InitialGuess");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ab69da052b88f50c] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_getInitialGuess_25e1757a36c4dde2] = env->getMethodID(cls, "getInitialGuess", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      InitialGuess::InitialGuess(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab69da052b88f50c, a0.this$)) {}

      JArray< jdouble > InitialGuess::getInitialGuess() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInitialGuess_25e1757a36c4dde2]));
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
      static PyObject *t_InitialGuess_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InitialGuess_instance_(PyTypeObject *type, PyObject *arg);
      static int t_InitialGuess_init_(t_InitialGuess *self, PyObject *args, PyObject *kwds);
      static PyObject *t_InitialGuess_getInitialGuess(t_InitialGuess *self);
      static PyObject *t_InitialGuess_get__initialGuess(t_InitialGuess *self, void *data);
      static PyGetSetDef t_InitialGuess__fields_[] = {
        DECLARE_GET_FIELD(t_InitialGuess, initialGuess),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_InitialGuess__methods_[] = {
        DECLARE_METHOD(t_InitialGuess, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InitialGuess, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InitialGuess, getInitialGuess, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(InitialGuess)[] = {
        { Py_tp_methods, t_InitialGuess__methods_ },
        { Py_tp_init, (void *) t_InitialGuess_init_ },
        { Py_tp_getset, t_InitialGuess__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(InitialGuess)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(InitialGuess, t_InitialGuess, InitialGuess);

      void t_InitialGuess::install(PyObject *module)
      {
        installType(&PY_TYPE(InitialGuess), &PY_TYPE_DEF(InitialGuess), module, "InitialGuess", 0);
      }

      void t_InitialGuess::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(InitialGuess), "class_", make_descriptor(InitialGuess::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InitialGuess), "wrapfn_", make_descriptor(t_InitialGuess::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InitialGuess), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_InitialGuess_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, InitialGuess::initializeClass, 1)))
          return NULL;
        return t_InitialGuess::wrap_Object(InitialGuess(((t_InitialGuess *) arg)->object.this$));
      }
      static PyObject *t_InitialGuess_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, InitialGuess::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_InitialGuess_init_(t_InitialGuess *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        InitialGuess object((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          INT_CALL(object = InitialGuess(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_InitialGuess_getInitialGuess(t_InitialGuess *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialGuess());
        return result.wrap();
      }

      static PyObject *t_InitialGuess_get__initialGuess(t_InitialGuess *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialGuess());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/AbstractFrames.h"
#include "org/orekit/frames/Frames.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Predefined.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/time/TimeScales.h"
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
          mids$[mid_init$_49fbab41a915bed1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;Ljava/util/function/Supplier;)V");
          mids$[mid_buildUncachedITRF_de25c2adba5180fc] = env->getMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;");
          mids$[mid_getCIRF_b8f4087626aff39a] = env->getMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_38d89ffeb32a6f21] = env->getMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEcliptic_15d291dcc172f59b] = env->getMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_acd75386f33c2984] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getGCRF_2c51111cc6894ba1] = env->getMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_816956b542562f07] = env->getMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_b8f4087626aff39a] = env->getMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_2c51111cc6894ba1] = env->getMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_b8f4087626aff39a] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_2e00eadcfbf4fef8] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_b8f4087626aff39a] = env->getMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_5e99e4a3c4469bb0] = env->getMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_816956b542562f07] = env->getMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getPZ9011_b8f4087626aff39a] = env->getMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_38d89ffeb32a6f21] = env->getMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_5e99e4a3c4469bb0] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_b8f4087626aff39a] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_816956b542562f07] = env->getMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_b8f4087626aff39a] = env->getMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_38d89ffeb32a6f21] = env->getMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTimeScales_d1a571f8b033e2d3] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractFrames::AbstractFrames(const ::org::orekit::time::TimeScales & a0, const ::java::util::function::Supplier & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49fbab41a915bed1, a0.this$, a1.this$)) {}

      ::org::orekit::frames::Frame AbstractFrames::buildUncachedITRF(const ::org::orekit::time::UT1Scale & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_buildUncachedITRF_de25c2adba5180fc], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getCIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getCIRF_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getEME2000() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getEME2000_38d89ffeb32a6f21]));
      }

      ::org::orekit::frames::Frame AbstractFrames::getEcliptic(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getEcliptic_15d291dcc172f59b], a0.this$));
      }

      ::org::orekit::frames::Frame AbstractFrames::getFrame(const ::org::orekit::frames::Predefined & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_acd75386f33c2984], a0.this$));
      }

      ::org::orekit::frames::Frame AbstractFrames::getGCRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getGCRF_2c51111cc6894ba1]));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getGTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_816956b542562f07], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getGTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::Frame AbstractFrames::getICRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getICRF_2c51111cc6894ba1]));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getITRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRF_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::VersionedITRF AbstractFrames::getITRF(const ::org::orekit::frames::ITRFVersion & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2) const
      {
        return ::org::orekit::frames::VersionedITRF(env->callObjectMethod(this$, mids$[mid_getITRF_2e00eadcfbf4fef8], a0.this$, a1.this$, a2));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getITRFEquinox(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRFEquinox_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getMOD(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_5e99e4a3c4469bb0], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getMOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_816956b542562f07], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getPZ9011(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getPZ9011_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTEME() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTEME_38d89ffeb32a6f21]));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTIRF(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_5e99e4a3c4469bb0], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_816956b542562f07], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame AbstractFrames::getVeis1950() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getVeis1950_38d89ffeb32a6f21]));
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresProblem$Evaluation::class$ = NULL;
            jmethodID *LeastSquaresProblem$Evaluation::mids$ = NULL;
            bool LeastSquaresProblem$Evaluation::live$ = false;

            jclass LeastSquaresProblem$Evaluation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getChiSquare_b74f83833fdad017] = env->getMethodID(cls, "getChiSquare", "()D");
                mids$[mid_getCost_b74f83833fdad017] = env->getMethodID(cls, "getCost", "()D");
                mids$[mid_getCovariances_f5dd9d6021dc9dae] = env->getMethodID(cls, "getCovariances", "(D)Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getJacobian_f77d745f2128c391] = env->getMethodID(cls, "getJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getPoint_3a10cc75bd070d84] = env->getMethodID(cls, "getPoint", "()Lorg/hipparchus/linear/RealVector;");
                mids$[mid_getRMS_b74f83833fdad017] = env->getMethodID(cls, "getRMS", "()D");
                mids$[mid_getReducedChiSquare_2afcbc21f4e57ab2] = env->getMethodID(cls, "getReducedChiSquare", "(I)D");
                mids$[mid_getResiduals_3a10cc75bd070d84] = env->getMethodID(cls, "getResiduals", "()Lorg/hipparchus/linear/RealVector;");
                mids$[mid_getSigma_0af7505d8931441d] = env->getMethodID(cls, "getSigma", "(D)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble LeastSquaresProblem$Evaluation::getChiSquare() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChiSquare_b74f83833fdad017]);
            }

            jdouble LeastSquaresProblem$Evaluation::getCost() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCost_b74f83833fdad017]);
            }

            ::org::hipparchus::linear::RealMatrix LeastSquaresProblem$Evaluation::getCovariances(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariances_f5dd9d6021dc9dae], a0));
            }

            ::org::hipparchus::linear::RealMatrix LeastSquaresProblem$Evaluation::getJacobian() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getJacobian_f77d745f2128c391]));
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem$Evaluation::getPoint() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPoint_3a10cc75bd070d84]));
            }

            jdouble LeastSquaresProblem$Evaluation::getRMS() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRMS_b74f83833fdad017]);
            }

            jdouble LeastSquaresProblem$Evaluation::getReducedChiSquare(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getReducedChiSquare_2afcbc21f4e57ab2], a0);
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem$Evaluation::getResiduals() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getResiduals_3a10cc75bd070d84]));
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem$Evaluation::getSigma(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSigma_0af7505d8931441d], a0));
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
            static PyObject *t_LeastSquaresProblem$Evaluation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_getChiSquare(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getCost(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getCovariances(t_LeastSquaresProblem$Evaluation *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_getJacobian(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getPoint(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getRMS(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getReducedChiSquare(t_LeastSquaresProblem$Evaluation *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_getResiduals(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getSigma(t_LeastSquaresProblem$Evaluation *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__chiSquare(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__cost(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__jacobian(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__point(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__rMS(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__residuals(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyGetSetDef t_LeastSquaresProblem$Evaluation__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, chiSquare),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, cost),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, jacobian),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, point),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, rMS),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, residuals),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresProblem$Evaluation__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getChiSquare, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getCost, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getCovariances, METH_O),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getJacobian, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getPoint, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getRMS, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getReducedChiSquare, METH_O),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getResiduals, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getSigma, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresProblem$Evaluation)[] = {
              { Py_tp_methods, t_LeastSquaresProblem$Evaluation__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LeastSquaresProblem$Evaluation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresProblem$Evaluation)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresProblem$Evaluation, t_LeastSquaresProblem$Evaluation, LeastSquaresProblem$Evaluation);

            void t_LeastSquaresProblem$Evaluation::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresProblem$Evaluation), &PY_TYPE_DEF(LeastSquaresProblem$Evaluation), module, "LeastSquaresProblem$Evaluation", 0);
            }

            void t_LeastSquaresProblem$Evaluation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem$Evaluation), "class_", make_descriptor(LeastSquaresProblem$Evaluation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem$Evaluation), "wrapfn_", make_descriptor(t_LeastSquaresProblem$Evaluation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem$Evaluation), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresProblem$Evaluation::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresProblem$Evaluation::wrap_Object(LeastSquaresProblem$Evaluation(((t_LeastSquaresProblem$Evaluation *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresProblem$Evaluation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresProblem$Evaluation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getChiSquare(t_LeastSquaresProblem$Evaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChiSquare());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getCost(t_LeastSquaresProblem$Evaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCost());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getCovariances(t_LeastSquaresProblem$Evaluation *self, PyObject *arg)
            {
              jdouble a0;
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getCovariances(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCovariances", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getJacobian(t_LeastSquaresProblem$Evaluation *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getJacobian());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getPoint(t_LeastSquaresProblem$Evaluation *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getPoint());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getRMS(t_LeastSquaresProblem$Evaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRMS());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getReducedChiSquare(t_LeastSquaresProblem$Evaluation *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getReducedChiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getReducedChiSquare", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getResiduals(t_LeastSquaresProblem$Evaluation *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getResiduals());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getSigma(t_LeastSquaresProblem$Evaluation *self, PyObject *arg)
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getSigma(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getSigma", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__chiSquare(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChiSquare());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__cost(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCost());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__jacobian(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getJacobian());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__point(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getPoint());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__rMS(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRMS());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__residuals(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getResiduals());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresOptimizer::class$ = NULL;
            jmethodID *LeastSquaresOptimizer::mids$ = NULL;
            bool LeastSquaresOptimizer::live$ = false;

            jclass LeastSquaresOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_optimize_b4aa3e5bf3a16dc8] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum LeastSquaresOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_b4aa3e5bf3a16dc8], a0.this$));
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
            static PyObject *t_LeastSquaresOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresOptimizer_optimize(t_LeastSquaresOptimizer *self, PyObject *arg);

            static PyMethodDef t_LeastSquaresOptimizer__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresOptimizer, optimize, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresOptimizer)[] = {
              { Py_tp_methods, t_LeastSquaresOptimizer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresOptimizer, t_LeastSquaresOptimizer, LeastSquaresOptimizer);

            void t_LeastSquaresOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresOptimizer), &PY_TYPE_DEF(LeastSquaresOptimizer), module, "LeastSquaresOptimizer", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "Optimum", make_descriptor(&PY_TYPE_DEF(LeastSquaresOptimizer$Optimum)));
            }

            void t_LeastSquaresOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "class_", make_descriptor(LeastSquaresOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "wrapfn_", make_descriptor(t_LeastSquaresOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresOptimizer::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresOptimizer::wrap_Object(LeastSquaresOptimizer(((t_LeastSquaresOptimizer *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresOptimizer_optimize(t_LeastSquaresOptimizer *self, PyObject *arg)
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/FiltersManager.h"
#include "org/orekit/data/DataFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource.h"
#include "java/io/IOException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FiltersManager::class$ = NULL;
      jmethodID *FiltersManager::mids$ = NULL;
      bool FiltersManager::live$ = false;

      jclass FiltersManager::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FiltersManager");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addFilter_fd5e03324dfcf025] = env->getMethodID(cls, "addFilter", "(Lorg/orekit/data/DataFilter;)V");
          mids$[mid_applyRelevantFilters_bbc30294b1b0b691] = env->getMethodID(cls, "applyRelevantFilters", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");
          mids$[mid_clearFilters_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearFilters", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FiltersManager::FiltersManager() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void FiltersManager::addFilter(const ::org::orekit::data::DataFilter & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addFilter_fd5e03324dfcf025], a0.this$);
      }

      ::org::orekit::data::DataSource FiltersManager::applyRelevantFilters(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_applyRelevantFilters_bbc30294b1b0b691], a0.this$));
      }

      void FiltersManager::clearFilters() const
      {
        env->callVoidMethod(this$, mids$[mid_clearFilters_a1fa5dae97ea5ed2]);
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
      static PyObject *t_FiltersManager_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FiltersManager_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FiltersManager_init_(t_FiltersManager *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FiltersManager_addFilter(t_FiltersManager *self, PyObject *arg);
      static PyObject *t_FiltersManager_applyRelevantFilters(t_FiltersManager *self, PyObject *arg);
      static PyObject *t_FiltersManager_clearFilters(t_FiltersManager *self);

      static PyMethodDef t_FiltersManager__methods_[] = {
        DECLARE_METHOD(t_FiltersManager, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FiltersManager, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FiltersManager, addFilter, METH_O),
        DECLARE_METHOD(t_FiltersManager, applyRelevantFilters, METH_O),
        DECLARE_METHOD(t_FiltersManager, clearFilters, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FiltersManager)[] = {
        { Py_tp_methods, t_FiltersManager__methods_ },
        { Py_tp_init, (void *) t_FiltersManager_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FiltersManager)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FiltersManager, t_FiltersManager, FiltersManager);

      void t_FiltersManager::install(PyObject *module)
      {
        installType(&PY_TYPE(FiltersManager), &PY_TYPE_DEF(FiltersManager), module, "FiltersManager", 0);
      }

      void t_FiltersManager::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FiltersManager), "class_", make_descriptor(FiltersManager::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FiltersManager), "wrapfn_", make_descriptor(t_FiltersManager::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FiltersManager), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FiltersManager_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FiltersManager::initializeClass, 1)))
          return NULL;
        return t_FiltersManager::wrap_Object(FiltersManager(((t_FiltersManager *) arg)->object.this$));
      }
      static PyObject *t_FiltersManager_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FiltersManager::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FiltersManager_init_(t_FiltersManager *self, PyObject *args, PyObject *kwds)
      {
        FiltersManager object((jobject) NULL);

        INT_CALL(object = FiltersManager());
        self->object = object;

        return 0;
      }

      static PyObject *t_FiltersManager_addFilter(t_FiltersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataFilter a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataFilter::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addFilter(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addFilter", arg);
        return NULL;
      }

      static PyObject *t_FiltersManager_applyRelevantFilters(t_FiltersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataSource a0((jobject) NULL);
        ::org::orekit::data::DataSource result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.applyRelevantFilters(a0));
          return ::org::orekit::data::t_DataSource::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "applyRelevantFilters", arg);
        return NULL;
      }

      static PyObject *t_FiltersManager_clearFilters(t_FiltersManager *self)
      {
        OBJ_CALL(self->object.clearFilters());
        Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/ChronologicalComparator.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *ChronologicalComparator::class$ = NULL;
      jmethodID *ChronologicalComparator::mids$ = NULL;
      bool ChronologicalComparator::live$ = false;

      jclass ChronologicalComparator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/ChronologicalComparator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compare_26f43f9916cc30f9] = env->getMethodID(cls, "compare", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ChronologicalComparator::ChronologicalComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      jint ChronologicalComparator::compare(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_compare_26f43f9916cc30f9], a0.this$, a1.this$);
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
      static PyObject *t_ChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ChronologicalComparator_init_(t_ChronologicalComparator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ChronologicalComparator_compare(t_ChronologicalComparator *self, PyObject *args);

      static PyMethodDef t_ChronologicalComparator__methods_[] = {
        DECLARE_METHOD(t_ChronologicalComparator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ChronologicalComparator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ChronologicalComparator, compare, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ChronologicalComparator)[] = {
        { Py_tp_methods, t_ChronologicalComparator__methods_ },
        { Py_tp_init, (void *) t_ChronologicalComparator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ChronologicalComparator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ChronologicalComparator, t_ChronologicalComparator, ChronologicalComparator);

      void t_ChronologicalComparator::install(PyObject *module)
      {
        installType(&PY_TYPE(ChronologicalComparator), &PY_TYPE_DEF(ChronologicalComparator), module, "ChronologicalComparator", 0);
      }

      void t_ChronologicalComparator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ChronologicalComparator), "class_", make_descriptor(ChronologicalComparator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ChronologicalComparator), "wrapfn_", make_descriptor(t_ChronologicalComparator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ChronologicalComparator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ChronologicalComparator::initializeClass, 1)))
          return NULL;
        return t_ChronologicalComparator::wrap_Object(ChronologicalComparator(((t_ChronologicalComparator *) arg)->object.this$));
      }
      static PyObject *t_ChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ChronologicalComparator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ChronologicalComparator_init_(t_ChronologicalComparator *self, PyObject *args, PyObject *kwds)
      {
        ChronologicalComparator object((jobject) NULL);

        INT_CALL(object = ChronologicalComparator());
        self->object = object;

        return 0;
      }

      static PyObject *t_ChronologicalComparator_compare(t_ChronologicalComparator *self, PyObject *args)
      {
        ::org::orekit::time::TimeStamped a0((jobject) NULL);
        ::org::orekit::time::TimeStamped a1((jobject) NULL);
        jint result;

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.compare(a0, a1));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compare", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventState.h"
#include "org/orekit/propagation/events/EventState$EventOccurrence.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventState::class$ = NULL;
        jmethodID *EventState::mids$ = NULL;
        bool EventState::live$ = false;

        jclass EventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e13564f833403504] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_doEvent_ea036e102af9abe9] = env->getMethodID(cls, "doEvent", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/events/EventState$EventOccurrence;");
            mids$[mid_evaluateStep_33229803b1a9d740] = env->getMethodID(cls, "evaluateStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)Z");
            mids$[mid_getEventDate_c325492395d89b24] = env->getMethodID(cls, "getEventDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEventDetector_9ada55f07f5a223c] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_reinitializeBegin_13c351c10f00bcd7] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_tryAdvance_1a1fd848268a091f] = env->getMethodID(cls, "tryAdvance", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventState::EventState(const ::org::orekit::propagation::events::EventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e13564f833403504, a0.this$)) {}

        ::org::orekit::propagation::events::EventState$EventOccurrence EventState::doEvent(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::events::EventState$EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_ea036e102af9abe9], a0.this$));
        }

        jboolean EventState::evaluateStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_33229803b1a9d740], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate EventState::getEventDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEventDate_c325492395d89b24]));
        }

        ::org::orekit::propagation::events::EventDetector EventState::getEventDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_9ada55f07f5a223c]));
        }

        void EventState::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
        }

        void EventState::reinitializeBegin(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_13c351c10f00bcd7], a0.this$);
        }

        jboolean EventState::tryAdvance(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_1a1fd848268a091f], a0.this$, a1.this$);
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
        static PyObject *t_EventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState_of_(t_EventState *self, PyObject *args);
        static int t_EventState_init_(t_EventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventState_doEvent(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_evaluateStep(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_getEventDate(t_EventState *self);
        static PyObject *t_EventState_getEventDetector(t_EventState *self);
        static PyObject *t_EventState_init(t_EventState *self, PyObject *args);
        static PyObject *t_EventState_reinitializeBegin(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_tryAdvance(t_EventState *self, PyObject *args);
        static PyObject *t_EventState_get__eventDate(t_EventState *self, void *data);
        static PyObject *t_EventState_get__eventDetector(t_EventState *self, void *data);
        static PyObject *t_EventState_get__parameters_(t_EventState *self, void *data);
        static PyGetSetDef t_EventState__fields_[] = {
          DECLARE_GET_FIELD(t_EventState, eventDate),
          DECLARE_GET_FIELD(t_EventState, eventDetector),
          DECLARE_GET_FIELD(t_EventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventState__methods_[] = {
          DECLARE_METHOD(t_EventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventState, doEvent, METH_O),
          DECLARE_METHOD(t_EventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_EventState, getEventDate, METH_NOARGS),
          DECLARE_METHOD(t_EventState, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventState, init, METH_VARARGS),
          DECLARE_METHOD(t_EventState, reinitializeBegin, METH_O),
          DECLARE_METHOD(t_EventState, tryAdvance, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventState)[] = {
          { Py_tp_methods, t_EventState__methods_ },
          { Py_tp_init, (void *) t_EventState_init_ },
          { Py_tp_getset, t_EventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventState, t_EventState, EventState);
        PyObject *t_EventState::wrap_Object(const EventState& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventState *self = (t_EventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventState::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventState *self = (t_EventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventState::install(PyObject *module)
        {
          installType(&PY_TYPE(EventState), &PY_TYPE_DEF(EventState), module, "EventState", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "EventOccurrence", make_descriptor(&PY_TYPE_DEF(EventState$EventOccurrence)));
        }

        void t_EventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "class_", make_descriptor(EventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "wrapfn_", make_descriptor(t_EventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventState::initializeClass, 1)))
            return NULL;
          return t_EventState::wrap_Object(EventState(((t_EventState *) arg)->object.this$));
        }
        static PyObject *t_EventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventState_of_(t_EventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventState_init_(t_EventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          EventState object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            INT_CALL(object = EventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventState_doEvent(t_EventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::events::EventState$EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::orekit::propagation::events::t_EventState$EventOccurrence::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_EventState_evaluateStep(t_EventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_EventState_getEventDate(t_EventState *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EventState_getEventDetector(t_EventState *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventState_init(t_EventState *self, PyObject *args)
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

        static PyObject *t_EventState_reinitializeBegin(t_EventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.reinitializeBegin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reinitializeBegin", arg);
          return NULL;
        }

        static PyObject *t_EventState_tryAdvance(t_EventState *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.tryAdvance(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "tryAdvance", args);
          return NULL;
        }
        static PyObject *t_EventState_get__parameters_(t_EventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventState_get__eventDate(t_EventState *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EventState_get__eventDetector(t_EventState *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/MaxGapInterpolationGrid.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *MaxGapInterpolationGrid::class$ = NULL;
            jmethodID *MaxGapInterpolationGrid::mids$ = NULL;
            bool MaxGapInterpolationGrid::live$ = false;

            jclass MaxGapInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/MaxGapInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
                mids$[mid_getGridPoints_eaf2da2173f3569e] = env->getMethodID(cls, "getGridPoints", "(DD)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MaxGapInterpolationGrid::MaxGapInterpolationGrid(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

            JArray< jdouble > MaxGapInterpolationGrid::getGridPoints(jdouble a0, jdouble a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGridPoints_eaf2da2173f3569e], a0, a1));
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
            static PyObject *t_MaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MaxGapInterpolationGrid_init_(t_MaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MaxGapInterpolationGrid_getGridPoints(t_MaxGapInterpolationGrid *self, PyObject *args);

            static PyMethodDef t_MaxGapInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_MaxGapInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MaxGapInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MaxGapInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MaxGapInterpolationGrid)[] = {
              { Py_tp_methods, t_MaxGapInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_MaxGapInterpolationGrid_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MaxGapInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MaxGapInterpolationGrid, t_MaxGapInterpolationGrid, MaxGapInterpolationGrid);

            void t_MaxGapInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(MaxGapInterpolationGrid), &PY_TYPE_DEF(MaxGapInterpolationGrid), module, "MaxGapInterpolationGrid", 0);
            }

            void t_MaxGapInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MaxGapInterpolationGrid), "class_", make_descriptor(MaxGapInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MaxGapInterpolationGrid), "wrapfn_", make_descriptor(t_MaxGapInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MaxGapInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MaxGapInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_MaxGapInterpolationGrid::wrap_Object(MaxGapInterpolationGrid(((t_MaxGapInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_MaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MaxGapInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MaxGapInterpolationGrid_init_(t_MaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              MaxGapInterpolationGrid object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MaxGapInterpolationGrid(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_MaxGapInterpolationGrid_getGridPoints(t_MaxGapInterpolationGrid *self, PyObject *args)
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
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
#include "org/orekit/files/sinex/Station$ReferenceSystem.h"
#include "org/orekit/files/sinex/Station$ReferenceSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *Station$ReferenceSystem::class$ = NULL;
        jmethodID *Station$ReferenceSystem::mids$ = NULL;
        bool Station$ReferenceSystem::live$ = false;
        Station$ReferenceSystem *Station$ReferenceSystem::UNE = NULL;
        Station$ReferenceSystem *Station$ReferenceSystem::XYZ = NULL;

        jclass Station$ReferenceSystem::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/Station$ReferenceSystem");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEccRefSystem_ac110b3b29acc51f] = env->getStaticMethodID(cls, "getEccRefSystem", "(Ljava/lang/String;)Lorg/orekit/files/sinex/Station$ReferenceSystem;");
            mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_valueOf_ac110b3b29acc51f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sinex/Station$ReferenceSystem;");
            mids$[mid_values_93e83c8fff5d4389] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sinex/Station$ReferenceSystem;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            UNE = new Station$ReferenceSystem(env->getStaticObjectField(cls, "UNE", "Lorg/orekit/files/sinex/Station$ReferenceSystem;"));
            XYZ = new Station$ReferenceSystem(env->getStaticObjectField(cls, "XYZ", "Lorg/orekit/files/sinex/Station$ReferenceSystem;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Station$ReferenceSystem Station$ReferenceSystem::getEccRefSystem(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Station$ReferenceSystem(env->callStaticObjectMethod(cls, mids$[mid_getEccRefSystem_ac110b3b29acc51f], a0.this$));
        }

        ::java::lang::String Station$ReferenceSystem::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
        }

        Station$ReferenceSystem Station$ReferenceSystem::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Station$ReferenceSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ac110b3b29acc51f], a0.this$));
        }

        JArray< Station$ReferenceSystem > Station$ReferenceSystem::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Station$ReferenceSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_93e83c8fff5d4389]));
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
        static PyObject *t_Station$ReferenceSystem_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Station$ReferenceSystem_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Station$ReferenceSystem_of_(t_Station$ReferenceSystem *self, PyObject *args);
        static PyObject *t_Station$ReferenceSystem_getEccRefSystem(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Station$ReferenceSystem_getName(t_Station$ReferenceSystem *self);
        static PyObject *t_Station$ReferenceSystem_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Station$ReferenceSystem_values(PyTypeObject *type);
        static PyObject *t_Station$ReferenceSystem_get__name(t_Station$ReferenceSystem *self, void *data);
        static PyObject *t_Station$ReferenceSystem_get__parameters_(t_Station$ReferenceSystem *self, void *data);
        static PyGetSetDef t_Station$ReferenceSystem__fields_[] = {
          DECLARE_GET_FIELD(t_Station$ReferenceSystem, name),
          DECLARE_GET_FIELD(t_Station$ReferenceSystem, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Station$ReferenceSystem__methods_[] = {
          DECLARE_METHOD(t_Station$ReferenceSystem, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station$ReferenceSystem, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station$ReferenceSystem, of_, METH_VARARGS),
          DECLARE_METHOD(t_Station$ReferenceSystem, getEccRefSystem, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station$ReferenceSystem, getName, METH_NOARGS),
          DECLARE_METHOD(t_Station$ReferenceSystem, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Station$ReferenceSystem, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Station$ReferenceSystem)[] = {
          { Py_tp_methods, t_Station$ReferenceSystem__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Station$ReferenceSystem__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Station$ReferenceSystem)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Station$ReferenceSystem, t_Station$ReferenceSystem, Station$ReferenceSystem);
        PyObject *t_Station$ReferenceSystem::wrap_Object(const Station$ReferenceSystem& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Station$ReferenceSystem::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Station$ReferenceSystem *self = (t_Station$ReferenceSystem *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Station$ReferenceSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Station$ReferenceSystem::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Station$ReferenceSystem *self = (t_Station$ReferenceSystem *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Station$ReferenceSystem::install(PyObject *module)
        {
          installType(&PY_TYPE(Station$ReferenceSystem), &PY_TYPE_DEF(Station$ReferenceSystem), module, "Station$ReferenceSystem", 0);
        }

        void t_Station$ReferenceSystem::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "class_", make_descriptor(Station$ReferenceSystem::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "wrapfn_", make_descriptor(t_Station$ReferenceSystem::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "boxfn_", make_descriptor(boxObject));
          env->getClass(Station$ReferenceSystem::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "UNE", make_descriptor(t_Station$ReferenceSystem::wrap_Object(*Station$ReferenceSystem::UNE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station$ReferenceSystem), "XYZ", make_descriptor(t_Station$ReferenceSystem::wrap_Object(*Station$ReferenceSystem::XYZ)));
        }

        static PyObject *t_Station$ReferenceSystem_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Station$ReferenceSystem::initializeClass, 1)))
            return NULL;
          return t_Station$ReferenceSystem::wrap_Object(Station$ReferenceSystem(((t_Station$ReferenceSystem *) arg)->object.this$));
        }
        static PyObject *t_Station$ReferenceSystem_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Station$ReferenceSystem::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Station$ReferenceSystem_of_(t_Station$ReferenceSystem *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Station$ReferenceSystem_getEccRefSystem(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          Station$ReferenceSystem result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sinex::Station$ReferenceSystem::getEccRefSystem(a0));
            return t_Station$ReferenceSystem::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getEccRefSystem", arg);
          return NULL;
        }

        static PyObject *t_Station$ReferenceSystem_getName(t_Station$ReferenceSystem *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Station$ReferenceSystem_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Station$ReferenceSystem result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sinex::Station$ReferenceSystem::valueOf(a0));
            return t_Station$ReferenceSystem::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Station$ReferenceSystem_values(PyTypeObject *type)
        {
          JArray< Station$ReferenceSystem > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::sinex::Station$ReferenceSystem::values());
          return JArray<jobject>(result.this$).wrap(t_Station$ReferenceSystem::wrap_jobject);
        }
        static PyObject *t_Station$ReferenceSystem_get__parameters_(t_Station$ReferenceSystem *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Station$ReferenceSystem_get__name(t_Station$ReferenceSystem *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *NullPointerException::class$ = NULL;
    jmethodID *NullPointerException::mids$ = NULL;
    bool NullPointerException::live$ = false;

    jclass NullPointerException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/NullPointerException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NullPointerException::NullPointerException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    NullPointerException::NullPointerException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_NullPointerException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NullPointerException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_NullPointerException_init_(t_NullPointerException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_NullPointerException__methods_[] = {
      DECLARE_METHOD(t_NullPointerException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NullPointerException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NullPointerException)[] = {
      { Py_tp_methods, t_NullPointerException__methods_ },
      { Py_tp_init, (void *) t_NullPointerException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NullPointerException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(NullPointerException, t_NullPointerException, NullPointerException);

    void t_NullPointerException::install(PyObject *module)
    {
      installType(&PY_TYPE(NullPointerException), &PY_TYPE_DEF(NullPointerException), module, "NullPointerException", 0);
    }

    void t_NullPointerException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NullPointerException), "class_", make_descriptor(NullPointerException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NullPointerException), "wrapfn_", make_descriptor(t_NullPointerException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NullPointerException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NullPointerException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NullPointerException::initializeClass, 1)))
        return NULL;
      return t_NullPointerException::wrap_Object(NullPointerException(((t_NullPointerException *) arg)->object.this$));
    }
    static PyObject *t_NullPointerException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NullPointerException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_NullPointerException_init_(t_NullPointerException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NullPointerException object((jobject) NULL);

          INT_CALL(object = NullPointerException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          NullPointerException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = NullPointerException(a0));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/util/Iterator.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/linear/RealVectorPreservingVisitor.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/linear/RealVector$Entry.h"
#include "org/hipparchus/linear/RealVectorChangingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVector::class$ = NULL;
      jmethodID *RealVector::mids$ = NULL;
      bool RealVector::live$ = false;

      jclass RealVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_add_d5f1d017fd25113b] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_addToEntry_d5322b8b512aeb26] = env->getMethodID(cls, "addToEntry", "(ID)V");
          mids$[mid_append_d5f1d017fd25113b] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_append_0af7505d8931441d] = env->getMethodID(cls, "append", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_combine_60c5136b129a75b0] = env->getMethodID(cls, "combine", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_combineToSelf_60c5136b129a75b0] = env->getMethodID(cls, "combineToSelf", "(DDLorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_copy_3a10cc75bd070d84] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_cosine_532b95759e51e831] = env->getMethodID(cls, "cosine", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_dotProduct_532b95759e51e831] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_ebeDivide_d5f1d017fd25113b] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_ebeMultiply_d5f1d017fd25113b] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getDistance_532b95759e51e831] = env->getMethodID(cls, "getDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getEntry_2afcbc21f4e57ab2] = env->getMethodID(cls, "getEntry", "(I)D");
          mids$[mid_getL1Distance_532b95759e51e831] = env->getMethodID(cls, "getL1Distance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getL1Norm_b74f83833fdad017] = env->getMethodID(cls, "getL1Norm", "()D");
          mids$[mid_getLInfDistance_532b95759e51e831] = env->getMethodID(cls, "getLInfDistance", "(Lorg/hipparchus/linear/RealVector;)D");
          mids$[mid_getLInfNorm_b74f83833fdad017] = env->getMethodID(cls, "getLInfNorm", "()D");
          mids$[mid_getMaxIndex_55546ef6a647f39b] = env->getMethodID(cls, "getMaxIndex", "()I");
          mids$[mid_getMaxValue_b74f83833fdad017] = env->getMethodID(cls, "getMaxValue", "()D");
          mids$[mid_getMinIndex_55546ef6a647f39b] = env->getMethodID(cls, "getMinIndex", "()I");
          mids$[mid_getMinValue_b74f83833fdad017] = env->getMethodID(cls, "getMinValue", "()D");
          mids$[mid_getNorm_b74f83833fdad017] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getSubVector_71fee5b03bacb96b] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isInfinite_9ab94ac1dc23b105] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_9ab94ac1dc23b105] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_iterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
          mids$[mid_map_d81d16e6299b5dc0] = env->getMethodID(cls, "map", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapAdd_0af7505d8931441d] = env->getMethodID(cls, "mapAdd", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapAddToSelf_0af7505d8931441d] = env->getMethodID(cls, "mapAddToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapDivide_0af7505d8931441d] = env->getMethodID(cls, "mapDivide", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapDivideToSelf_0af7505d8931441d] = env->getMethodID(cls, "mapDivideToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapMultiply_0af7505d8931441d] = env->getMethodID(cls, "mapMultiply", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapMultiplyToSelf_0af7505d8931441d] = env->getMethodID(cls, "mapMultiplyToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapSubtract_0af7505d8931441d] = env->getMethodID(cls, "mapSubtract", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapSubtractToSelf_0af7505d8931441d] = env->getMethodID(cls, "mapSubtractToSelf", "(D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_mapToSelf_d81d16e6299b5dc0] = env->getMethodID(cls, "mapToSelf", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_outerProduct_847a33a82b65c746] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_projection_d5f1d017fd25113b] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_set_8ba9fe7a847cecad] = env->getMethodID(cls, "set", "(D)V");
          mids$[mid_setEntry_d5322b8b512aeb26] = env->getMethodID(cls, "setEntry", "(ID)V");
          mids$[mid_setSubVector_9fe1e9c5bee9d07c] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/RealVector;)V");
          mids$[mid_sparseIterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "sparseIterator", "()Ljava/util/Iterator;");
          mids$[mid_subtract_d5f1d017fd25113b] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_toArray_25e1757a36c4dde2] = env->getMethodID(cls, "toArray", "()[D");
          mids$[mid_unitVector_3a10cc75bd070d84] = env->getMethodID(cls, "unitVector", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_unitize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "unitize", "()V");
          mids$[mid_unmodifiableRealVector_d5f1d017fd25113b] = env->getStaticMethodID(cls, "unmodifiableRealVector", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_walkInDefaultOrder_3b0a64df0d6d5970] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;)D");
          mids$[mid_walkInDefaultOrder_5765b86ec2dc0005] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;)D");
          mids$[mid_walkInDefaultOrder_e0df9aff405997ab] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;II)D");
          mids$[mid_walkInDefaultOrder_dc41fc18b07911cf] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;II)D");
          mids$[mid_walkInOptimizedOrder_3b0a64df0d6d5970] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_5765b86ec2dc0005] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;)D");
          mids$[mid_walkInOptimizedOrder_e0df9aff405997ab] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorChangingVisitor;II)D");
          mids$[mid_walkInOptimizedOrder_dc41fc18b07911cf] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/RealVectorPreservingVisitor;II)D");
          mids$[mid_checkVectorDimensions_872f190ac7ffe0f7] = env->getMethodID(cls, "checkVectorDimensions", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_checkVectorDimensions_44ed599e93e8a30c] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");
          mids$[mid_checkIndices_3313c75e3e16c428] = env->getMethodID(cls, "checkIndices", "(II)V");
          mids$[mid_checkIndex_44ed599e93e8a30c] = env->getMethodID(cls, "checkIndex", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealVector::RealVector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      RealVector RealVector::add(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_add_d5f1d017fd25113b], a0.this$));
      }

      void RealVector::addToEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_d5322b8b512aeb26], a0, a1);
      }

      RealVector RealVector::append(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_append_d5f1d017fd25113b], a0.this$));
      }

      RealVector RealVector::append(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_append_0af7505d8931441d], a0));
      }

      RealVector RealVector::combine(jdouble a0, jdouble a1, const RealVector & a2) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_combine_60c5136b129a75b0], a0, a1, a2.this$));
      }

      RealVector RealVector::combineToSelf(jdouble a0, jdouble a1, const RealVector & a2) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_combineToSelf_60c5136b129a75b0], a0, a1, a2.this$));
      }

      RealVector RealVector::copy() const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_copy_3a10cc75bd070d84]));
      }

      jdouble RealVector::cosine(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_cosine_532b95759e51e831], a0.this$);
      }

      jdouble RealVector::dotProduct(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_532b95759e51e831], a0.this$);
      }

      RealVector RealVector::ebeDivide(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_d5f1d017fd25113b], a0.this$));
      }

      RealVector RealVector::ebeMultiply(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_d5f1d017fd25113b], a0.this$));
      }

      jboolean RealVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      jint RealVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
      }

      jdouble RealVector::getDistance(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_532b95759e51e831], a0.this$);
      }

      jdouble RealVector::getEntry(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_2afcbc21f4e57ab2], a0);
      }

      jdouble RealVector::getL1Distance(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Distance_532b95759e51e831], a0.this$);
      }

      jdouble RealVector::getL1Norm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL1Norm_b74f83833fdad017]);
      }

      jdouble RealVector::getLInfDistance(const RealVector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfDistance_532b95759e51e831], a0.this$);
      }

      jdouble RealVector::getLInfNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLInfNorm_b74f83833fdad017]);
      }

      jint RealVector::getMaxIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIndex_55546ef6a647f39b]);
      }

      jdouble RealVector::getMaxValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxValue_b74f83833fdad017]);
      }

      jint RealVector::getMinIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getMinIndex_55546ef6a647f39b]);
      }

      jdouble RealVector::getMinValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinValue_b74f83833fdad017]);
      }

      jdouble RealVector::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_b74f83833fdad017]);
      }

      RealVector RealVector::getSubVector(jint a0, jint a1) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_getSubVector_71fee5b03bacb96b], a0, a1));
      }

      jint RealVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      jboolean RealVector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_9ab94ac1dc23b105]);
      }

      jboolean RealVector::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_9ab94ac1dc23b105]);
      }

      ::java::util::Iterator RealVector::iterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_fc7780bc5d5b73b0]));
      }

      RealVector RealVector::map(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_map_d81d16e6299b5dc0], a0.this$));
      }

      RealVector RealVector::mapAdd(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapAdd_0af7505d8931441d], a0));
      }

      RealVector RealVector::mapAddToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_0af7505d8931441d], a0));
      }

      RealVector RealVector::mapDivide(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapDivide_0af7505d8931441d], a0));
      }

      RealVector RealVector::mapDivideToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_0af7505d8931441d], a0));
      }

      RealVector RealVector::mapMultiply(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_0af7505d8931441d], a0));
      }

      RealVector RealVector::mapMultiplyToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_0af7505d8931441d], a0));
      }

      RealVector RealVector::mapSubtract(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_0af7505d8931441d], a0));
      }

      RealVector RealVector::mapSubtractToSelf(jdouble a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_0af7505d8931441d], a0));
      }

      RealVector RealVector::mapToSelf(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_mapToSelf_d81d16e6299b5dc0], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix RealVector::outerProduct(const RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_847a33a82b65c746], a0.this$));
      }

      RealVector RealVector::projection(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_projection_d5f1d017fd25113b], a0.this$));
      }

      void RealVector::set(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_8ba9fe7a847cecad], a0);
      }

      void RealVector::setEntry(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_d5322b8b512aeb26], a0, a1);
      }

      void RealVector::setSubVector(jint a0, const RealVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_9fe1e9c5bee9d07c], a0, a1.this$);
      }

      ::java::util::Iterator RealVector::sparseIterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_sparseIterator_fc7780bc5d5b73b0]));
      }

      RealVector RealVector::subtract(const RealVector & a0) const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_subtract_d5f1d017fd25113b], a0.this$));
      }

      JArray< jdouble > RealVector::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_25e1757a36c4dde2]));
      }

      RealVector RealVector::unitVector() const
      {
        return RealVector(env->callObjectMethod(this$, mids$[mid_unitVector_3a10cc75bd070d84]));
      }

      void RealVector::unitize() const
      {
        env->callVoidMethod(this$, mids$[mid_unitize_a1fa5dae97ea5ed2]);
      }

      RealVector RealVector::unmodifiableRealVector(const RealVector & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return RealVector(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableRealVector_d5f1d017fd25113b], a0.this$));
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_3b0a64df0d6d5970], a0.this$);
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_5765b86ec2dc0005], a0.this$);
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_e0df9aff405997ab], a0.this$, a1, a2);
      }

      jdouble RealVector::walkInDefaultOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInDefaultOrder_dc41fc18b07911cf], a0.this$, a1, a2);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_3b0a64df0d6d5970], a0.this$);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_5765b86ec2dc0005], a0.this$);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_e0df9aff405997ab], a0.this$, a1, a2);
      }

      jdouble RealVector::walkInOptimizedOrder(const ::org::hipparchus::linear::RealVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInOptimizedOrder_dc41fc18b07911cf], a0.this$, a1, a2);
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
      static PyObject *t_RealVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealVector_init_(t_RealVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealVector_add(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_addToEntry(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_append(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_combine(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_combineToSelf(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_copy(t_RealVector *self);
      static PyObject *t_RealVector_cosine(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_dotProduct(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_ebeDivide(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_ebeMultiply(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_equals(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_getDimension(t_RealVector *self);
      static PyObject *t_RealVector_getDistance(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getEntry(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getL1Distance(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getL1Norm(t_RealVector *self);
      static PyObject *t_RealVector_getLInfDistance(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_getLInfNorm(t_RealVector *self);
      static PyObject *t_RealVector_getMaxIndex(t_RealVector *self);
      static PyObject *t_RealVector_getMaxValue(t_RealVector *self);
      static PyObject *t_RealVector_getMinIndex(t_RealVector *self);
      static PyObject *t_RealVector_getMinValue(t_RealVector *self);
      static PyObject *t_RealVector_getNorm(t_RealVector *self);
      static PyObject *t_RealVector_getSubVector(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_hashCode(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_isInfinite(t_RealVector *self);
      static PyObject *t_RealVector_isNaN(t_RealVector *self);
      static PyObject *t_RealVector_iterator(t_RealVector *self);
      static PyObject *t_RealVector_map(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapAdd(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapAddToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapDivide(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapDivideToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapMultiply(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapMultiplyToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapSubtract(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapSubtractToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_mapToSelf(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_outerProduct(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_projection(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_set(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_setEntry(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_setSubVector(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_sparseIterator(t_RealVector *self);
      static PyObject *t_RealVector_subtract(t_RealVector *self, PyObject *arg);
      static PyObject *t_RealVector_toArray(t_RealVector *self);
      static PyObject *t_RealVector_unitVector(t_RealVector *self);
      static PyObject *t_RealVector_unitize(t_RealVector *self);
      static PyObject *t_RealVector_unmodifiableRealVector(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVector_walkInDefaultOrder(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_walkInOptimizedOrder(t_RealVector *self, PyObject *args);
      static PyObject *t_RealVector_get__dimension(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__infinite(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__l1Norm(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__lInfNorm(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__maxIndex(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__maxValue(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__minIndex(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__minValue(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__naN(t_RealVector *self, void *data);
      static PyObject *t_RealVector_get__norm(t_RealVector *self, void *data);
      static PyGetSetDef t_RealVector__fields_[] = {
        DECLARE_GET_FIELD(t_RealVector, dimension),
        DECLARE_GET_FIELD(t_RealVector, infinite),
        DECLARE_GET_FIELD(t_RealVector, l1Norm),
        DECLARE_GET_FIELD(t_RealVector, lInfNorm),
        DECLARE_GET_FIELD(t_RealVector, maxIndex),
        DECLARE_GET_FIELD(t_RealVector, maxValue),
        DECLARE_GET_FIELD(t_RealVector, minIndex),
        DECLARE_GET_FIELD(t_RealVector, minValue),
        DECLARE_GET_FIELD(t_RealVector, naN),
        DECLARE_GET_FIELD(t_RealVector, norm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealVector__methods_[] = {
        DECLARE_METHOD(t_RealVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector, add, METH_O),
        DECLARE_METHOD(t_RealVector, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, append, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, combine, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, combineToSelf, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, cosine, METH_O),
        DECLARE_METHOD(t_RealVector, dotProduct, METH_O),
        DECLARE_METHOD(t_RealVector, ebeDivide, METH_O),
        DECLARE_METHOD(t_RealVector, ebeMultiply, METH_O),
        DECLARE_METHOD(t_RealVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getDistance, METH_O),
        DECLARE_METHOD(t_RealVector, getEntry, METH_O),
        DECLARE_METHOD(t_RealVector, getL1Distance, METH_O),
        DECLARE_METHOD(t_RealVector, getL1Norm, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getLInfDistance, METH_O),
        DECLARE_METHOD(t_RealVector, getLInfNorm, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMaxIndex, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMaxValue, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMinIndex, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getMinValue, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, iterator, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, map, METH_O),
        DECLARE_METHOD(t_RealVector, mapAdd, METH_O),
        DECLARE_METHOD(t_RealVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapDivide, METH_O),
        DECLARE_METHOD(t_RealVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_RealVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_RealVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, mapToSelf, METH_O),
        DECLARE_METHOD(t_RealVector, outerProduct, METH_O),
        DECLARE_METHOD(t_RealVector, projection, METH_O),
        DECLARE_METHOD(t_RealVector, set, METH_O),
        DECLARE_METHOD(t_RealVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, sparseIterator, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, subtract, METH_O),
        DECLARE_METHOD(t_RealVector, toArray, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, unitVector, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, unitize, METH_NOARGS),
        DECLARE_METHOD(t_RealVector, unmodifiableRealVector, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector, walkInDefaultOrder, METH_VARARGS),
        DECLARE_METHOD(t_RealVector, walkInOptimizedOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVector)[] = {
        { Py_tp_methods, t_RealVector__methods_ },
        { Py_tp_init, (void *) t_RealVector_init_ },
        { Py_tp_getset, t_RealVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVector, t_RealVector, RealVector);

      void t_RealVector::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVector), &PY_TYPE_DEF(RealVector), module, "RealVector", 0);
      }

      void t_RealVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector), "class_", make_descriptor(RealVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector), "wrapfn_", make_descriptor(t_RealVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVector::initializeClass, 1)))
          return NULL;
        return t_RealVector::wrap_Object(RealVector(((t_RealVector *) arg)->object.this$));
      }
      static PyObject *t_RealVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealVector_init_(t_RealVector *self, PyObject *args, PyObject *kwds)
      {
        RealVector object((jobject) NULL);

        INT_CALL(object = RealVector());
        self->object = object;

        return 0;
      }

      static PyObject *t_RealVector_add(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_RealVector_addToEntry(t_RealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_RealVector_append(t_RealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            RealVector a0((jobject) NULL);
            RealVector result((jobject) NULL);

            if (!parseArgs(args, "k", RealVector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_RealVector::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            RealVector result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_RealVector_combine(t_RealVector *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        RealVector a2((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArgs(args, "DDk", RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.combine(a0, a1, a2));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "combine", args);
        return NULL;
      }

      static PyObject *t_RealVector_combineToSelf(t_RealVector *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        RealVector a2((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArgs(args, "DDk", RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.combineToSelf(a0, a1, a2));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "combineToSelf", args);
        return NULL;
      }

      static PyObject *t_RealVector_copy(t_RealVector *self)
      {
        RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_RealVector::wrap_Object(result);
      }

      static PyObject *t_RealVector_cosine(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.cosine(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "cosine", arg);
        return NULL;
      }

      static PyObject *t_RealVector_dotProduct(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_RealVector_ebeDivide(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", arg);
        return NULL;
      }

      static PyObject *t_RealVector_ebeMultiply(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealVector_equals(t_RealVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(RealVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_RealVector_getDimension(t_RealVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector_getDistance(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getDistance", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getEntry(t_RealVector *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getL1Distance(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getL1Distance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getL1Distance", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getL1Norm(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getL1Norm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getLInfDistance(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLInfDistance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLInfDistance", arg);
        return NULL;
      }

      static PyObject *t_RealVector_getLInfNorm(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLInfNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getMaxIndex(t_RealVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector_getMaxValue(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getMinIndex(t_RealVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMinIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector_getMinValue(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getNorm(t_RealVector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector_getSubVector(t_RealVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        RealVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_RealVector_hashCode(t_RealVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(RealVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_RealVector_isInfinite(t_RealVector *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealVector_isNaN(t_RealVector *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealVector_iterator(t_RealVector *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector$Entry));
      }

      static PyObject *t_RealVector_map(t_RealVector *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.map(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "map", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapAdd(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapAddToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapDivide(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapDivideToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapMultiply(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapMultiplyToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapSubtract(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapSubtractToSelf(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_mapToSelf(t_RealVector *self, PyObject *arg)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.mapToSelf(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "mapToSelf", arg);
        return NULL;
      }

      static PyObject *t_RealVector_outerProduct(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.outerProduct(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", arg);
        return NULL;
      }

      static PyObject *t_RealVector_projection(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.projection(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "projection", arg);
        return NULL;
      }

      static PyObject *t_RealVector_set(t_RealVector *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "set", arg);
        return NULL;
      }

      static PyObject *t_RealVector_setEntry(t_RealVector *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_RealVector_setSubVector(t_RealVector *self, PyObject *args)
      {
        jint a0;
        RealVector a1((jobject) NULL);

        if (!parseArgs(args, "Ik", RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_RealVector_sparseIterator(t_RealVector *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.sparseIterator());
        return ::java::util::t_Iterator::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector$Entry));
      }

      static PyObject *t_RealVector_subtract(t_RealVector *self, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_RealVector_toArray(t_RealVector *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return result.wrap();
      }

      static PyObject *t_RealVector_unitVector(t_RealVector *self)
      {
        RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.unitVector());
        return t_RealVector::wrap_Object(result);
      }

      static PyObject *t_RealVector_unitize(t_RealVector *self)
      {
        OBJ_CALL(self->object.unitize());
        Py_RETURN_NONE;
      }

      static PyObject *t_RealVector_unmodifiableRealVector(PyTypeObject *type, PyObject *arg)
      {
        RealVector a0((jobject) NULL);
        RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::RealVector::unmodifiableRealVector(a0));
          return t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "unmodifiableRealVector", arg);
        return NULL;
      }

      static PyObject *t_RealVector_walkInDefaultOrder(t_RealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInDefaultOrder", args);
        return NULL;
      }

      static PyObject *t_RealVector_walkInOptimizedOrder(t_RealVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealVectorChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorChangingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealVectorPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "kII", ::org::hipparchus::linear::RealVectorPreservingVisitor::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_RealVector_get__dimension(t_RealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealVector_get__infinite(t_RealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RealVector_get__l1Norm(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getL1Norm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__lInfNorm(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLInfNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__maxIndex(t_RealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIndex());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealVector_get__maxValue(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxValue());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__minIndex(t_RealVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMinIndex());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealVector_get__minValue(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinValue());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealVector_get__naN(t_RealVector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RealVector_get__norm(t_RealVector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OneWayGNSSPhaseAmbiguityModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OneWayGNSSPhaseAmbiguityModifier::class$ = NULL;
          jmethodID *OneWayGNSSPhaseAmbiguityModifier::mids$ = NULL;
          bool OneWayGNSSPhaseAmbiguityModifier::live$ = false;

          jclass OneWayGNSSPhaseAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OneWayGNSSPhaseAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OneWayGNSSPhaseAmbiguityModifier::OneWayGNSSPhaseAmbiguityModifier(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

          ::java::util::List OneWayGNSSPhaseAmbiguityModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void OneWayGNSSPhaseAmbiguityModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void OneWayGNSSPhaseAmbiguityModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OneWayGNSSPhaseAmbiguityModifier_init_(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_getParametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modify(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modifyWithoutDerivatives(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_get__parametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self, void *data);
          static PyGetSetDef t_OneWayGNSSPhaseAmbiguityModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSPhaseAmbiguityModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSPhaseAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, modify, METH_O),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSPhaseAmbiguityModifier)[] = {
            { Py_tp_methods, t_OneWayGNSSPhaseAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_OneWayGNSSPhaseAmbiguityModifier_init_ },
            { Py_tp_getset, t_OneWayGNSSPhaseAmbiguityModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSPhaseAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSPhaseAmbiguityModifier, t_OneWayGNSSPhaseAmbiguityModifier, OneWayGNSSPhaseAmbiguityModifier);

          void t_OneWayGNSSPhaseAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), &PY_TYPE_DEF(OneWayGNSSPhaseAmbiguityModifier), module, "OneWayGNSSPhaseAmbiguityModifier", 0);
          }

          void t_OneWayGNSSPhaseAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), "class_", make_descriptor(OneWayGNSSPhaseAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), "wrapfn_", make_descriptor(t_OneWayGNSSPhaseAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSPhaseAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSPhaseAmbiguityModifier::wrap_Object(OneWayGNSSPhaseAmbiguityModifier(((t_OneWayGNSSPhaseAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSPhaseAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OneWayGNSSPhaseAmbiguityModifier_init_(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            OneWayGNSSPhaseAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OneWayGNSSPhaseAmbiguityModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_getParametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modify(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modifyWithoutDerivatives(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_get__parametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self, void *data)
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
#include "org/orekit/models/earth/displacement/Tide.h"
#include "org/orekit/models/earth/displacement/Tide.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *Tide::class$ = NULL;
          jmethodID *Tide::mids$ = NULL;
          bool Tide::live$ = false;
          Tide *Tide::K1 = NULL;
          Tide *Tide::K2 = NULL;
          Tide *Tide::M2 = NULL;
          Tide *Tide::MF = NULL;
          Tide *Tide::MM = NULL;
          Tide *Tide::N2 = NULL;
          Tide *Tide::O1 = NULL;
          Tide *Tide::P1 = NULL;
          Tide *Tide::Q1 = NULL;
          Tide *Tide::S2 = NULL;
          Tide *Tide::SSA = NULL;

          jclass Tide::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/Tide");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
              mids$[mid_init$_ea412797eafea800] = env->getMethodID(cls, "<init>", "(IIIIII)V");
              mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getDelaunayMultipliers_4d095d7a08163110] = env->getMethodID(cls, "getDelaunayMultipliers", "()[I");
              mids$[mid_getDoodsonMultipliers_4d095d7a08163110] = env->getMethodID(cls, "getDoodsonMultipliers", "()[I");
              mids$[mid_getDoodsonNumber_55546ef6a647f39b] = env->getMethodID(cls, "getDoodsonNumber", "()I");
              mids$[mid_getPhase_e5a6deebdf7be070] = env->getMethodID(cls, "getPhase", "(Lorg/orekit/data/BodiesElements;)D");
              mids$[mid_getRate_e5a6deebdf7be070] = env->getMethodID(cls, "getRate", "(Lorg/orekit/data/BodiesElements;)D");
              mids$[mid_getTauMultiplier_55546ef6a647f39b] = env->getMethodID(cls, "getTauMultiplier", "()I");
              mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              K1 = new Tide(env->getStaticObjectField(cls, "K1", "Lorg/orekit/models/earth/displacement/Tide;"));
              K2 = new Tide(env->getStaticObjectField(cls, "K2", "Lorg/orekit/models/earth/displacement/Tide;"));
              M2 = new Tide(env->getStaticObjectField(cls, "M2", "Lorg/orekit/models/earth/displacement/Tide;"));
              MF = new Tide(env->getStaticObjectField(cls, "MF", "Lorg/orekit/models/earth/displacement/Tide;"));
              MM = new Tide(env->getStaticObjectField(cls, "MM", "Lorg/orekit/models/earth/displacement/Tide;"));
              N2 = new Tide(env->getStaticObjectField(cls, "N2", "Lorg/orekit/models/earth/displacement/Tide;"));
              O1 = new Tide(env->getStaticObjectField(cls, "O1", "Lorg/orekit/models/earth/displacement/Tide;"));
              P1 = new Tide(env->getStaticObjectField(cls, "P1", "Lorg/orekit/models/earth/displacement/Tide;"));
              Q1 = new Tide(env->getStaticObjectField(cls, "Q1", "Lorg/orekit/models/earth/displacement/Tide;"));
              S2 = new Tide(env->getStaticObjectField(cls, "S2", "Lorg/orekit/models/earth/displacement/Tide;"));
              SSA = new Tide(env->getStaticObjectField(cls, "SSA", "Lorg/orekit/models/earth/displacement/Tide;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Tide::Tide(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

          Tide::Tide(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ea412797eafea800, a0, a1, a2, a3, a4, a5)) {}

          jboolean Tide::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
          }

          JArray< jint > Tide::getDelaunayMultipliers() const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getDelaunayMultipliers_4d095d7a08163110]));
          }

          JArray< jint > Tide::getDoodsonMultipliers() const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getDoodsonMultipliers_4d095d7a08163110]));
          }

          jint Tide::getDoodsonNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getDoodsonNumber_55546ef6a647f39b]);
          }

          jdouble Tide::getPhase(const ::org::orekit::data::BodiesElements & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhase_e5a6deebdf7be070], a0.this$);
          }

          jdouble Tide::getRate(const ::org::orekit::data::BodiesElements & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRate_e5a6deebdf7be070], a0.this$);
          }

          jint Tide::getTauMultiplier() const
          {
            return env->callIntMethod(this$, mids$[mid_getTauMultiplier_55546ef6a647f39b]);
          }

          jint Tide::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
        namespace displacement {
          static PyObject *t_Tide_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Tide_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Tide_init_(t_Tide *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Tide_equals(t_Tide *self, PyObject *args);
          static PyObject *t_Tide_getDelaunayMultipliers(t_Tide *self);
          static PyObject *t_Tide_getDoodsonMultipliers(t_Tide *self);
          static PyObject *t_Tide_getDoodsonNumber(t_Tide *self);
          static PyObject *t_Tide_getPhase(t_Tide *self, PyObject *arg);
          static PyObject *t_Tide_getRate(t_Tide *self, PyObject *arg);
          static PyObject *t_Tide_getTauMultiplier(t_Tide *self);
          static PyObject *t_Tide_hashCode(t_Tide *self, PyObject *args);
          static PyObject *t_Tide_get__delaunayMultipliers(t_Tide *self, void *data);
          static PyObject *t_Tide_get__doodsonMultipliers(t_Tide *self, void *data);
          static PyObject *t_Tide_get__doodsonNumber(t_Tide *self, void *data);
          static PyObject *t_Tide_get__tauMultiplier(t_Tide *self, void *data);
          static PyGetSetDef t_Tide__fields_[] = {
            DECLARE_GET_FIELD(t_Tide, delaunayMultipliers),
            DECLARE_GET_FIELD(t_Tide, doodsonMultipliers),
            DECLARE_GET_FIELD(t_Tide, doodsonNumber),
            DECLARE_GET_FIELD(t_Tide, tauMultiplier),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Tide__methods_[] = {
            DECLARE_METHOD(t_Tide, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tide, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tide, equals, METH_VARARGS),
            DECLARE_METHOD(t_Tide, getDelaunayMultipliers, METH_NOARGS),
            DECLARE_METHOD(t_Tide, getDoodsonMultipliers, METH_NOARGS),
            DECLARE_METHOD(t_Tide, getDoodsonNumber, METH_NOARGS),
            DECLARE_METHOD(t_Tide, getPhase, METH_O),
            DECLARE_METHOD(t_Tide, getRate, METH_O),
            DECLARE_METHOD(t_Tide, getTauMultiplier, METH_NOARGS),
            DECLARE_METHOD(t_Tide, hashCode, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Tide)[] = {
            { Py_tp_methods, t_Tide__methods_ },
            { Py_tp_init, (void *) t_Tide_init_ },
            { Py_tp_getset, t_Tide__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Tide)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Tide, t_Tide, Tide);

          void t_Tide::install(PyObject *module)
          {
            installType(&PY_TYPE(Tide), &PY_TYPE_DEF(Tide), module, "Tide", 0);
          }

          void t_Tide::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "class_", make_descriptor(Tide::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "wrapfn_", make_descriptor(t_Tide::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "boxfn_", make_descriptor(boxObject));
            env->getClass(Tide::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "K1", make_descriptor(t_Tide::wrap_Object(*Tide::K1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "K2", make_descriptor(t_Tide::wrap_Object(*Tide::K2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "M2", make_descriptor(t_Tide::wrap_Object(*Tide::M2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "MF", make_descriptor(t_Tide::wrap_Object(*Tide::MF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "MM", make_descriptor(t_Tide::wrap_Object(*Tide::MM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "N2", make_descriptor(t_Tide::wrap_Object(*Tide::N2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "O1", make_descriptor(t_Tide::wrap_Object(*Tide::O1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "P1", make_descriptor(t_Tide::wrap_Object(*Tide::P1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "Q1", make_descriptor(t_Tide::wrap_Object(*Tide::Q1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "S2", make_descriptor(t_Tide::wrap_Object(*Tide::S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "SSA", make_descriptor(t_Tide::wrap_Object(*Tide::SSA)));
          }

          static PyObject *t_Tide_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Tide::initializeClass, 1)))
              return NULL;
            return t_Tide::wrap_Object(Tide(((t_Tide *) arg)->object.this$));
          }
          static PyObject *t_Tide_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Tide::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Tide_init_(t_Tide *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jint a0;
                Tide object((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  INT_CALL(object = Tide(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jint a0;
                jint a1;
                jint a2;
                jint a3;
                jint a4;
                jint a5;
                Tide object((jobject) NULL);

                if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = Tide(a0, a1, a2, a3, a4, a5));
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

          static PyObject *t_Tide_equals(t_Tide *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Tide), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Tide_getDelaunayMultipliers(t_Tide *self)
          {
            JArray< jint > result((jobject) NULL);
            OBJ_CALL(result = self->object.getDelaunayMultipliers());
            return result.wrap();
          }

          static PyObject *t_Tide_getDoodsonMultipliers(t_Tide *self)
          {
            JArray< jint > result((jobject) NULL);
            OBJ_CALL(result = self->object.getDoodsonMultipliers());
            return result.wrap();
          }

          static PyObject *t_Tide_getDoodsonNumber(t_Tide *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDoodsonNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Tide_getPhase(t_Tide *self, PyObject *arg)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPhase(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPhase", arg);
            return NULL;
          }

          static PyObject *t_Tide_getRate(t_Tide *self, PyObject *arg)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getRate(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRate", arg);
            return NULL;
          }

          static PyObject *t_Tide_getTauMultiplier(t_Tide *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTauMultiplier());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Tide_hashCode(t_Tide *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Tide), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Tide_get__delaunayMultipliers(t_Tide *self, void *data)
          {
            JArray< jint > value((jobject) NULL);
            OBJ_CALL(value = self->object.getDelaunayMultipliers());
            return value.wrap();
          }

          static PyObject *t_Tide_get__doodsonMultipliers(t_Tide *self, void *data)
          {
            JArray< jint > value((jobject) NULL);
            OBJ_CALL(value = self->object.getDoodsonMultipliers());
            return value.wrap();
          }

          static PyObject *t_Tide_get__doodsonNumber(t_Tide *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDoodsonNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Tide_get__tauMultiplier(t_Tide *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTauMultiplier());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *KeplerianElements::class$ = NULL;
            jmethodID *KeplerianElements::mids$ = NULL;
            bool KeplerianElements::live$ = false;

            jclass KeplerianElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/KeplerianElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_generateKeplerianOrbit_be281caa27adec1e] = env->getMethodID(cls, "generateKeplerianOrbit", "(Lorg/orekit/frames/Frame;)Lorg/orekit/orbits/KeplerianOrbit;");
                mids$[mid_getA_b74f83833fdad017] = env->getMethodID(cls, "getA", "()D");
                mids$[mid_getAnomaly_b74f83833fdad017] = env->getMethodID(cls, "getAnomaly", "()D");
                mids$[mid_getAnomalyType_c25055891f180348] = env->getMethodID(cls, "getAnomalyType", "()Lorg/orekit/orbits/PositionAngleType;");
                mids$[mid_getE_b74f83833fdad017] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getEpoch_c325492395d89b24] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getI_b74f83833fdad017] = env->getMethodID(cls, "getI", "()D");
                mids$[mid_getMeanMotion_b74f83833fdad017] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getPa_b74f83833fdad017] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getRaan_b74f83833fdad017] = env->getMethodID(cls, "getRaan", "()D");
                mids$[mid_setA_8ba9fe7a847cecad] = env->getMethodID(cls, "setA", "(D)V");
                mids$[mid_setAnomaly_8ba9fe7a847cecad] = env->getMethodID(cls, "setAnomaly", "(D)V");
                mids$[mid_setAnomalyType_778d09854443b806] = env->getMethodID(cls, "setAnomalyType", "(Lorg/orekit/orbits/PositionAngleType;)V");
                mids$[mid_setE_8ba9fe7a847cecad] = env->getMethodID(cls, "setE", "(D)V");
                mids$[mid_setEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setI_8ba9fe7a847cecad] = env->getMethodID(cls, "setI", "(D)V");
                mids$[mid_setMeanMotion_8ba9fe7a847cecad] = env->getMethodID(cls, "setMeanMotion", "(D)V");
                mids$[mid_setMu_8ba9fe7a847cecad] = env->getMethodID(cls, "setMu", "(D)V");
                mids$[mid_setPa_8ba9fe7a847cecad] = env->getMethodID(cls, "setPa", "(D)V");
                mids$[mid_setRaan_8ba9fe7a847cecad] = env->getMethodID(cls, "setRaan", "(D)V");
                mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            KeplerianElements::KeplerianElements() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            ::org::orekit::orbits::KeplerianOrbit KeplerianElements::generateKeplerianOrbit(const ::org::orekit::frames::Frame & a0) const
            {
              return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_generateKeplerianOrbit_be281caa27adec1e], a0.this$));
            }

            jdouble KeplerianElements::getA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getA_b74f83833fdad017]);
            }

            jdouble KeplerianElements::getAnomaly() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAnomaly_b74f83833fdad017]);
            }

            ::org::orekit::orbits::PositionAngleType KeplerianElements::getAnomalyType() const
            {
              return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getAnomalyType_c25055891f180348]));
            }

            jdouble KeplerianElements::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_b74f83833fdad017]);
            }

            ::org::orekit::time::AbsoluteDate KeplerianElements::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_c325492395d89b24]));
            }

            jdouble KeplerianElements::getI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getI_b74f83833fdad017]);
            }

            jdouble KeplerianElements::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_b74f83833fdad017]);
            }

            jdouble KeplerianElements::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
            }

            jdouble KeplerianElements::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_b74f83833fdad017]);
            }

            jdouble KeplerianElements::getRaan() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRaan_b74f83833fdad017]);
            }

            void KeplerianElements::setA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setA_8ba9fe7a847cecad], a0);
            }

            void KeplerianElements::setAnomaly(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAnomaly_8ba9fe7a847cecad], a0);
            }

            void KeplerianElements::setAnomalyType(const ::org::orekit::orbits::PositionAngleType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAnomalyType_778d09854443b806], a0.this$);
            }

            void KeplerianElements::setE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setE_8ba9fe7a847cecad], a0);
            }

            void KeplerianElements::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpoch_02135a6ef25adb4b], a0.this$);
            }

            void KeplerianElements::setI(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setI_8ba9fe7a847cecad], a0);
            }

            void KeplerianElements::setMeanMotion(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMeanMotion_8ba9fe7a847cecad], a0);
            }

            void KeplerianElements::setMu(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMu_8ba9fe7a847cecad], a0);
            }

            void KeplerianElements::setPa(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPa_8ba9fe7a847cecad], a0);
            }

            void KeplerianElements::setRaan(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRaan_8ba9fe7a847cecad], a0);
            }

            void KeplerianElements::validate(jdouble a0) const
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
            static PyObject *t_KeplerianElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KeplerianElements_instance_(PyTypeObject *type, PyObject *arg);
            static int t_KeplerianElements_init_(t_KeplerianElements *self, PyObject *args, PyObject *kwds);
            static PyObject *t_KeplerianElements_generateKeplerianOrbit(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_getA(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getAnomaly(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getAnomalyType(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getE(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getEpoch(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getI(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getMeanMotion(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getMu(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getPa(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getRaan(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_setA(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setAnomaly(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setAnomalyType(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setE(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setEpoch(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setI(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setMeanMotion(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setMu(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setPa(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setRaan(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_validate(t_KeplerianElements *self, PyObject *args);
            static PyObject *t_KeplerianElements_get__a(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__a(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__anomaly(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__anomaly(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__anomalyType(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__anomalyType(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__e(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__e(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__epoch(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__epoch(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__i(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__i(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__meanMotion(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__meanMotion(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__mu(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__mu(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__pa(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__pa(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__raan(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__raan(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyGetSetDef t_KeplerianElements__fields_[] = {
              DECLARE_GETSET_FIELD(t_KeplerianElements, a),
              DECLARE_GETSET_FIELD(t_KeplerianElements, anomaly),
              DECLARE_GETSET_FIELD(t_KeplerianElements, anomalyType),
              DECLARE_GETSET_FIELD(t_KeplerianElements, e),
              DECLARE_GETSET_FIELD(t_KeplerianElements, epoch),
              DECLARE_GETSET_FIELD(t_KeplerianElements, i),
              DECLARE_GETSET_FIELD(t_KeplerianElements, meanMotion),
              DECLARE_GETSET_FIELD(t_KeplerianElements, mu),
              DECLARE_GETSET_FIELD(t_KeplerianElements, pa),
              DECLARE_GETSET_FIELD(t_KeplerianElements, raan),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_KeplerianElements__methods_[] = {
              DECLARE_METHOD(t_KeplerianElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElements, generateKeplerianOrbit, METH_O),
              DECLARE_METHOD(t_KeplerianElements, getA, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getAnomaly, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getAnomalyType, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getE, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getEpoch, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getI, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getMu, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getPa, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getRaan, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, setA, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setAnomaly, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setAnomalyType, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setE, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setEpoch, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setI, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setMeanMotion, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setMu, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setPa, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setRaan, METH_O),
              DECLARE_METHOD(t_KeplerianElements, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KeplerianElements)[] = {
              { Py_tp_methods, t_KeplerianElements__methods_ },
              { Py_tp_init, (void *) t_KeplerianElements_init_ },
              { Py_tp_getset, t_KeplerianElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KeplerianElements)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(KeplerianElements, t_KeplerianElements, KeplerianElements);

            void t_KeplerianElements::install(PyObject *module)
            {
              installType(&PY_TYPE(KeplerianElements), &PY_TYPE_DEF(KeplerianElements), module, "KeplerianElements", 0);
            }

            void t_KeplerianElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElements), "class_", make_descriptor(KeplerianElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElements), "wrapfn_", make_descriptor(t_KeplerianElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_KeplerianElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KeplerianElements::initializeClass, 1)))
                return NULL;
              return t_KeplerianElements::wrap_Object(KeplerianElements(((t_KeplerianElements *) arg)->object.this$));
            }
            static PyObject *t_KeplerianElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KeplerianElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_KeplerianElements_init_(t_KeplerianElements *self, PyObject *args, PyObject *kwds)
            {
              KeplerianElements object((jobject) NULL);

              INT_CALL(object = KeplerianElements());
              self->object = object;

              return 0;
            }

            static PyObject *t_KeplerianElements_generateKeplerianOrbit(t_KeplerianElements *self, PyObject *arg)
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.generateKeplerianOrbit(a0));
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "generateKeplerianOrbit", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_getA(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getAnomaly(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAnomaly());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getAnomalyType(t_KeplerianElements *self)
            {
              ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
              OBJ_CALL(result = self->object.getAnomalyType());
              return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
            }

            static PyObject *t_KeplerianElements_getE(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getEpoch(t_KeplerianElements *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_KeplerianElements_getI(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getI());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getMeanMotion(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getMu(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getPa(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getRaan(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRaan());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_setA(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setA", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setAnomaly(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAnomaly(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAnomaly", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setAnomalyType(t_KeplerianElements *self, PyObject *arg)
            {
              ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
              {
                OBJ_CALL(self->object.setAnomalyType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAnomalyType", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setE(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setE", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setEpoch(t_KeplerianElements *self, PyObject *arg)
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

            static PyObject *t_KeplerianElements_setI(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setI(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setI", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setMeanMotion(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMeanMotion(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMeanMotion", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setMu(t_KeplerianElements *self, PyObject *arg)
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

            static PyObject *t_KeplerianElements_setPa(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setPa(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPa", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setRaan(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRaan(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRaan", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_validate(t_KeplerianElements *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KeplerianElements), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_KeplerianElements_get__a(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__a(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "a", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__anomaly(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAnomaly());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__anomaly(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAnomaly(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "anomaly", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__anomalyType(t_KeplerianElements *self, void *data)
            {
              ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
              OBJ_CALL(value = self->object.getAnomalyType());
              return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
            }
            static int t_KeplerianElements_set__anomalyType(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
                {
                  INT_CALL(self->object.setAnomalyType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "anomalyType", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__e(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__e(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "e", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__epoch(t_KeplerianElements *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_KeplerianElements_set__epoch(t_KeplerianElements *self, PyObject *arg, void *data)
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

            static PyObject *t_KeplerianElements_get__i(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getI());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__i(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setI(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "i", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__meanMotion(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__meanMotion(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMeanMotion(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "meanMotion", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__mu(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMu());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__mu(t_KeplerianElements *self, PyObject *arg, void *data)
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

            static PyObject *t_KeplerianElements_get__pa(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__pa(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setPa(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "pa", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__raan(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRaan());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__raan(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRaan(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "raan", arg);
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
#include "java/util/ResourceBundle$Control.h"
#include "java/util/Locale.h"
#include "java/lang/InstantiationException.h"
#include "java/util/List.h"
#include "java/lang/IllegalAccessException.h"
#include "java/util/ResourceBundle.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/util/ResourceBundle$Control.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ResourceBundle$Control::class$ = NULL;
    jmethodID *ResourceBundle$Control::mids$ = NULL;
    bool ResourceBundle$Control::live$ = false;
    ::java::util::List *ResourceBundle$Control::FORMAT_CLASS = NULL;
    ::java::util::List *ResourceBundle$Control::FORMAT_DEFAULT = NULL;
    ::java::util::List *ResourceBundle$Control::FORMAT_PROPERTIES = NULL;
    jlong ResourceBundle$Control::TTL_DONT_CACHE = (jlong) 0;
    jlong ResourceBundle$Control::TTL_NO_EXPIRATION_CONTROL = (jlong) 0;

    jclass ResourceBundle$Control::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ResourceBundle$Control");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getCandidateLocales_0ce6fdc79798094e] = env->getMethodID(cls, "getCandidateLocales", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List;");
        mids$[mid_getControl_0f34a07e65cacad0] = env->getStaticMethodID(cls, "getControl", "(Ljava/util/List;)Ljava/util/ResourceBundle$Control;");
        mids$[mid_getFallbackLocale_735143ee48f37be6] = env->getMethodID(cls, "getFallbackLocale", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/Locale;");
        mids$[mid_getFormats_abe6e889bc24795d] = env->getMethodID(cls, "getFormats", "(Ljava/lang/String;)Ljava/util/List;");
        mids$[mid_getNoFallbackControl_0f34a07e65cacad0] = env->getStaticMethodID(cls, "getNoFallbackControl", "(Ljava/util/List;)Ljava/util/ResourceBundle$Control;");
        mids$[mid_getTimeToLive_e68533389ce9fba8] = env->getMethodID(cls, "getTimeToLive", "(Ljava/lang/String;Ljava/util/Locale;)J");
        mids$[mid_needsReload_5007a333490ad2f4] = env->getMethodID(cls, "needsReload", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle;J)Z");
        mids$[mid_newBundle_8ca50bd8ea3c1503] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");
        mids$[mid_toBundleName_9c65f36218adb4b6] = env->getMethodID(cls, "toBundleName", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_toResourceName_88f2f8c619f3cbd0] = env->getMethodID(cls, "toResourceName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        FORMAT_CLASS = new ::java::util::List(env->getStaticObjectField(cls, "FORMAT_CLASS", "Ljava/util/List;"));
        FORMAT_DEFAULT = new ::java::util::List(env->getStaticObjectField(cls, "FORMAT_DEFAULT", "Ljava/util/List;"));
        FORMAT_PROPERTIES = new ::java::util::List(env->getStaticObjectField(cls, "FORMAT_PROPERTIES", "Ljava/util/List;"));
        TTL_DONT_CACHE = env->getStaticLongField(cls, "TTL_DONT_CACHE");
        TTL_NO_EXPIRATION_CONTROL = env->getStaticLongField(cls, "TTL_NO_EXPIRATION_CONTROL");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::List ResourceBundle$Control::getCandidateLocales(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCandidateLocales_0ce6fdc79798094e], a0.this$, a1.this$));
    }

    ResourceBundle$Control ResourceBundle$Control::getControl(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle$Control(env->callStaticObjectMethod(cls, mids$[mid_getControl_0f34a07e65cacad0], a0.this$));
    }

    ::java::util::Locale ResourceBundle$Control::getFallbackLocale(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return ::java::util::Locale(env->callObjectMethod(this$, mids$[mid_getFallbackLocale_735143ee48f37be6], a0.this$, a1.this$));
    }

    ::java::util::List ResourceBundle$Control::getFormats(const ::java::lang::String & a0) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFormats_abe6e889bc24795d], a0.this$));
    }

    ResourceBundle$Control ResourceBundle$Control::getNoFallbackControl(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle$Control(env->callStaticObjectMethod(cls, mids$[mid_getNoFallbackControl_0f34a07e65cacad0], a0.this$));
    }

    jlong ResourceBundle$Control::getTimeToLive(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return env->callLongMethod(this$, mids$[mid_getTimeToLive_e68533389ce9fba8], a0.this$, a1.this$);
    }

    jboolean ResourceBundle$Control::needsReload(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, const ::java::util::ResourceBundle & a4, jlong a5) const
    {
      return env->callBooleanMethod(this$, mids$[mid_needsReload_5007a333490ad2f4], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5);
    }

    ::java::util::ResourceBundle ResourceBundle$Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
    {
      return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_8ca50bd8ea3c1503], a0.this$, a1.this$, a2.this$, a3.this$, a4));
    }

    ::java::lang::String ResourceBundle$Control::toBundleName(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toBundleName_9c65f36218adb4b6], a0.this$, a1.this$));
    }

    ::java::lang::String ResourceBundle$Control::toResourceName(const ::java::lang::String & a0, const ::java::lang::String & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toResourceName_88f2f8c619f3cbd0], a0.this$, a1.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ResourceBundle$Control_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getCandidateLocales(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_getControl(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getFallbackLocale(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_getFormats(t_ResourceBundle$Control *self, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getNoFallbackControl(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getTimeToLive(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_needsReload(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_newBundle(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_toBundleName(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_toResourceName(t_ResourceBundle$Control *self, PyObject *args);

    static PyMethodDef t_ResourceBundle$Control__methods_[] = {
      DECLARE_METHOD(t_ResourceBundle$Control, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, getCandidateLocales, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, getControl, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, getFallbackLocale, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, getFormats, METH_O),
      DECLARE_METHOD(t_ResourceBundle$Control, getNoFallbackControl, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, getTimeToLive, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, needsReload, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, newBundle, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, toBundleName, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, toResourceName, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ResourceBundle$Control)[] = {
      { Py_tp_methods, t_ResourceBundle$Control__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ResourceBundle$Control)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ResourceBundle$Control, t_ResourceBundle$Control, ResourceBundle$Control);

    void t_ResourceBundle$Control::install(PyObject *module)
    {
      installType(&PY_TYPE(ResourceBundle$Control), &PY_TYPE_DEF(ResourceBundle$Control), module, "ResourceBundle$Control", 0);
    }

    void t_ResourceBundle$Control::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "class_", make_descriptor(ResourceBundle$Control::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "wrapfn_", make_descriptor(t_ResourceBundle$Control::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "boxfn_", make_descriptor(boxObject));
      env->getClass(ResourceBundle$Control::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "FORMAT_CLASS", make_descriptor(::java::util::t_List::wrap_Object(*ResourceBundle$Control::FORMAT_CLASS)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "FORMAT_DEFAULT", make_descriptor(::java::util::t_List::wrap_Object(*ResourceBundle$Control::FORMAT_DEFAULT)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "FORMAT_PROPERTIES", make_descriptor(::java::util::t_List::wrap_Object(*ResourceBundle$Control::FORMAT_PROPERTIES)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "TTL_DONT_CACHE", make_descriptor(ResourceBundle$Control::TTL_DONT_CACHE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "TTL_NO_EXPIRATION_CONTROL", make_descriptor(ResourceBundle$Control::TTL_NO_EXPIRATION_CONTROL));
    }

    static PyObject *t_ResourceBundle$Control_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ResourceBundle$Control::initializeClass, 1)))
        return NULL;
      return t_ResourceBundle$Control::wrap_Object(ResourceBundle$Control(((t_ResourceBundle$Control *) arg)->object.this$));
    }
    static PyObject *t_ResourceBundle$Control_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ResourceBundle$Control::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ResourceBundle$Control_getCandidateLocales(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.getCandidateLocales(a0, a1));
        return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale));
      }

      PyErr_SetArgsError((PyObject *) self, "getCandidateLocales", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getControl(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ResourceBundle$Control result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::ResourceBundle$Control::getControl(a0));
        return t_ResourceBundle$Control::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getControl", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getFallbackLocale(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::util::Locale result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.getFallbackLocale(a0, a1));
        return ::java::util::t_Locale::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getFallbackLocale", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getFormats(t_ResourceBundle$Control *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getFormats(a0));
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      PyErr_SetArgsError((PyObject *) self, "getFormats", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getNoFallbackControl(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ResourceBundle$Control result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::ResourceBundle$Control::getNoFallbackControl(a0));
        return t_ResourceBundle$Control::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getNoFallbackControl", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getTimeToLive(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      jlong result;

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.getTimeToLive(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "getTimeToLive", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_needsReload(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::lang::String a2((jobject) NULL);
      ::java::lang::ClassLoader a3((jobject) NULL);
      ::java::util::ResourceBundle a4((jobject) NULL);
      jlong a5;
      jboolean result;

      if (!parseArgs(args, "skskkJ", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, ::java::util::ResourceBundle::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
      {
        OBJ_CALL(result = self->object.needsReload(a0, a1, a2, a3, a4, a5));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "needsReload", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_newBundle(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::lang::String a2((jobject) NULL);
      ::java::lang::ClassLoader a3((jobject) NULL);
      jboolean a4;
      ::java::util::ResourceBundle result((jobject) NULL);

      if (!parseArgs(args, "skskZ", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2, &a3, &a4))
      {
        OBJ_CALL(result = self->object.newBundle(a0, a1, a2, a3, a4));
        return ::java::util::t_ResourceBundle::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "newBundle", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_toBundleName(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.toBundleName(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "toBundleName", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_toResourceName(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.toResourceName(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "toResourceName", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCombinedCorrectionData::class$ = NULL;
              jmethodID *RtcmCombinedCorrectionData::mids$ = NULL;
              bool RtcmCombinedCorrectionData::live$ = false;

              jclass RtcmCombinedCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_3ae426f140e5e927] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_getGnssIod_55546ef6a647f39b] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_da9c9656f83ca27e] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setClockCorrection_56b7531fea488c5a] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");
                  mids$[mid_setGnssIod_44ed599e93e8a30c] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_b2cd6b761acba879] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCombinedCorrectionData::RtcmCombinedCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection RtcmCombinedCorrectionData::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_3ae426f140e5e927]));
              }

              jint RtcmCombinedCorrectionData::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_55546ef6a647f39b]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection RtcmCombinedCorrectionData::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_da9c9656f83ca27e]));
              }

              void RtcmCombinedCorrectionData::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_56b7531fea488c5a], a0.this$);
              }

              void RtcmCombinedCorrectionData::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_44ed599e93e8a30c], a0);
              }

              void RtcmCombinedCorrectionData::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
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
              static PyObject *t_RtcmCombinedCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmCombinedCorrectionData_init_(t_RtcmCombinedCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCombinedCorrectionData_getClockCorrection(t_RtcmCombinedCorrectionData *self);
              static PyObject *t_RtcmCombinedCorrectionData_getGnssIod(t_RtcmCombinedCorrectionData *self);
              static PyObject *t_RtcmCombinedCorrectionData_getOrbitCorrection(t_RtcmCombinedCorrectionData *self);
              static PyObject *t_RtcmCombinedCorrectionData_setClockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_setGnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_setOrbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_get__clockCorrection(t_RtcmCombinedCorrectionData *self, void *data);
              static int t_RtcmCombinedCorrectionData_set__clockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCombinedCorrectionData_get__gnssIod(t_RtcmCombinedCorrectionData *self, void *data);
              static int t_RtcmCombinedCorrectionData_set__gnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCombinedCorrectionData_get__orbitCorrection(t_RtcmCombinedCorrectionData *self, void *data);
              static int t_RtcmCombinedCorrectionData_set__orbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmCombinedCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmCombinedCorrectionData, clockCorrection),
                DECLARE_GETSET_FIELD(t_RtcmCombinedCorrectionData, gnssIod),
                DECLARE_GETSET_FIELD(t_RtcmCombinedCorrectionData, orbitCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCombinedCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, getClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, getGnssIod, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, getOrbitCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, setClockCorrection, METH_O),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, setGnssIod, METH_O),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, setOrbitCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCombinedCorrectionData)[] = {
                { Py_tp_methods, t_RtcmCombinedCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmCombinedCorrectionData_init_ },
                { Py_tp_getset, t_RtcmCombinedCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCombinedCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData),
                NULL
              };

              DEFINE_TYPE(RtcmCombinedCorrectionData, t_RtcmCombinedCorrectionData, RtcmCombinedCorrectionData);

              void t_RtcmCombinedCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCombinedCorrectionData), &PY_TYPE_DEF(RtcmCombinedCorrectionData), module, "RtcmCombinedCorrectionData", 0);
              }

              void t_RtcmCombinedCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCombinedCorrectionData), "class_", make_descriptor(RtcmCombinedCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCombinedCorrectionData), "wrapfn_", make_descriptor(t_RtcmCombinedCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCombinedCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCombinedCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCombinedCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmCombinedCorrectionData::wrap_Object(RtcmCombinedCorrectionData(((t_RtcmCombinedCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmCombinedCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCombinedCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmCombinedCorrectionData_init_(t_RtcmCombinedCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmCombinedCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmCombinedCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmCombinedCorrectionData_getClockCorrection(t_RtcmCombinedCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmCombinedCorrectionData_getGnssIod(t_RtcmCombinedCorrectionData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGnssIod());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCombinedCorrectionData_getOrbitCorrection(t_RtcmCombinedCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmCombinedCorrectionData_setClockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_RtcmCombinedCorrectionData_setGnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg)
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

              static PyObject *t_RtcmCombinedCorrectionData_setOrbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg)
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

              static PyObject *t_RtcmCombinedCorrectionData_get__clockCorrection(t_RtcmCombinedCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(value);
              }
              static int t_RtcmCombinedCorrectionData_set__clockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "clockCorrection", arg);
                return -1;
              }

              static PyObject *t_RtcmCombinedCorrectionData_get__gnssIod(t_RtcmCombinedCorrectionData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGnssIod());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCombinedCorrectionData_set__gnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data)
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

              static PyObject *t_RtcmCombinedCorrectionData_get__orbitCorrection(t_RtcmCombinedCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(value);
              }
              static int t_RtcmCombinedCorrectionData_set__orbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data)
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
#include "org/orekit/orbits/AbstractFieldOrbitInterpolator.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *AbstractFieldOrbitInterpolator::class$ = NULL;
      jmethodID *AbstractFieldOrbitInterpolator::mids$ = NULL;
      bool AbstractFieldOrbitInterpolator::live$ = false;

      jclass AbstractFieldOrbitInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/AbstractFieldOrbitInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5b6571101ec263f4] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;)V");
          mids$[mid_getOutputInertialFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getOutputInertialFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_b0a7ad791e031e80] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/orbits/FieldOrbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractFieldOrbitInterpolator::AbstractFieldOrbitInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_5b6571101ec263f4, a0, a1, a2.this$)) {}

      ::org::orekit::frames::Frame AbstractFieldOrbitInterpolator::getOutputInertialFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputInertialFrame_2c51111cc6894ba1]));
      }

      ::org::orekit::orbits::FieldOrbit AbstractFieldOrbitInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_interpolate_b0a7ad791e031e80], a0.this$, a1.this$));
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
      static PyObject *t_AbstractFieldOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldOrbitInterpolator_of_(t_AbstractFieldOrbitInterpolator *self, PyObject *args);
      static int t_AbstractFieldOrbitInterpolator_init_(t_AbstractFieldOrbitInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractFieldOrbitInterpolator_getOutputInertialFrame(t_AbstractFieldOrbitInterpolator *self);
      static PyObject *t_AbstractFieldOrbitInterpolator_interpolate(t_AbstractFieldOrbitInterpolator *self, PyObject *args);
      static PyObject *t_AbstractFieldOrbitInterpolator_get__outputInertialFrame(t_AbstractFieldOrbitInterpolator *self, void *data);
      static PyObject *t_AbstractFieldOrbitInterpolator_get__parameters_(t_AbstractFieldOrbitInterpolator *self, void *data);
      static PyGetSetDef t_AbstractFieldOrbitInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldOrbitInterpolator, outputInertialFrame),
        DECLARE_GET_FIELD(t_AbstractFieldOrbitInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldOrbitInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, getOutputInertialFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldOrbitInterpolator)[] = {
        { Py_tp_methods, t_AbstractFieldOrbitInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractFieldOrbitInterpolator_init_ },
        { Py_tp_getset, t_AbstractFieldOrbitInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldOrbitInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbstractFieldOrbitInterpolator, t_AbstractFieldOrbitInterpolator, AbstractFieldOrbitInterpolator);
      PyObject *t_AbstractFieldOrbitInterpolator::wrap_Object(const AbstractFieldOrbitInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldOrbitInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldOrbitInterpolator *self = (t_AbstractFieldOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractFieldOrbitInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldOrbitInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldOrbitInterpolator *self = (t_AbstractFieldOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractFieldOrbitInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldOrbitInterpolator), &PY_TYPE_DEF(AbstractFieldOrbitInterpolator), module, "AbstractFieldOrbitInterpolator", 0);
      }

      void t_AbstractFieldOrbitInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOrbitInterpolator), "class_", make_descriptor(AbstractFieldOrbitInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOrbitInterpolator), "wrapfn_", make_descriptor(t_AbstractFieldOrbitInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOrbitInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldOrbitInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldOrbitInterpolator::wrap_Object(AbstractFieldOrbitInterpolator(((t_AbstractFieldOrbitInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldOrbitInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_of_(t_AbstractFieldOrbitInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractFieldOrbitInterpolator_init_(t_AbstractFieldOrbitInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        AbstractFieldOrbitInterpolator object((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = AbstractFieldOrbitInterpolator(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_getOutputInertialFrame(t_AbstractFieldOrbitInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_interpolate(t_AbstractFieldOrbitInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(AbstractFieldOrbitInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_AbstractFieldOrbitInterpolator_get__parameters_(t_AbstractFieldOrbitInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_get__outputInertialFrame(t_AbstractFieldOrbitInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonEventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonEventDetector::class$ = NULL;
        jmethodID *PythonEventDetector::mids$ = NULL;
        bool PythonEventDetector::live$ = false;

        jclass PythonEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getHandler_0c96c441e92b6ffa] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_014eea600d2cdae8] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_b74f83833fdad017] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEventDetector::PythonEventDetector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonEventDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonEventDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonEventDetector::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        static PyObject *t_PythonEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEventDetector_init_(t_PythonEventDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEventDetector_finalize(t_PythonEventDetector *self);
        static PyObject *t_PythonEventDetector_pythonExtension(t_PythonEventDetector *self, PyObject *args);
        static jdouble JNICALL t_PythonEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEventDetector_getHandler1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEventDetector_get__self(t_PythonEventDetector *self, void *data);
        static PyGetSetDef t_PythonEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEventDetector, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEventDetector__methods_[] = {
          DECLARE_METHOD(t_PythonEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEventDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEventDetector)[] = {
          { Py_tp_methods, t_PythonEventDetector__methods_ },
          { Py_tp_init, (void *) t_PythonEventDetector_init_ },
          { Py_tp_getset, t_PythonEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEventDetector, t_PythonEventDetector, PythonEventDetector);

        void t_PythonEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEventDetector), &PY_TYPE_DEF(PythonEventDetector), module, "PythonEventDetector", 1);
        }

        void t_PythonEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetector), "class_", make_descriptor(PythonEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetector), "wrapfn_", make_descriptor(t_PythonEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEventDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "g", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonEventDetector_g0 },
            { "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;", (void *) t_PythonEventDetector_getHandler1 },
            { "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;", (void *) t_PythonEventDetector_getMaxCheckInterval2 },
            { "getMaxIterationCount", "()I", (void *) t_PythonEventDetector_getMaxIterationCount3 },
            { "getThreshold", "()D", (void *) t_PythonEventDetector_getThreshold4 },
            { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonEventDetector_init5 },
            { "pythonDecRef", "()V", (void *) t_PythonEventDetector_pythonDecRef6 },
          };
          env->registerNatives(cls, methods, 7);
        }

        static PyObject *t_PythonEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEventDetector::initializeClass, 1)))
            return NULL;
          return t_PythonEventDetector::wrap_Object(PythonEventDetector(((t_PythonEventDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEventDetector_init_(t_PythonEventDetector *self, PyObject *args, PyObject *kwds)
        {
          PythonEventDetector object((jobject) NULL);

          INT_CALL(object = PythonEventDetector());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEventDetector_finalize(t_PythonEventDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEventDetector_pythonExtension(t_PythonEventDetector *self, PyObject *args)
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

        static jdouble JNICALL t_PythonEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "g", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("g", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonEventDetector_getHandler1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getHandler", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &value))
          {
            throwTypeError("getHandler", result);
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

        static jobject JNICALL t_PythonEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getMaxCheckInterval", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::AdaptableInterval::initializeClass, &value))
          {
            throwTypeError("getMaxCheckInterval", result);
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

        static jint JNICALL t_PythonEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getMaxIterationCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getMaxIterationCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jdouble JNICALL t_PythonEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getThreshold", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getThreshold", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static void JNICALL t_PythonEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
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

        static void JNICALL t_PythonEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEventDetector_get__self(t_PythonEventDetector *self, void *data)
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
#include "org/orekit/data/PythonDataProvider.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataProvider::class$ = NULL;
      jmethodID *PythonDataProvider::mids$ = NULL;
      bool PythonDataProvider::live$ = false;

      jclass PythonDataProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataProvider::PythonDataProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonDataProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonDataProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonDataProvider::pythonExtension(jlong a0) const
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
  namespace orekit {
    namespace data {
      static PyObject *t_PythonDataProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataProvider_init_(t_PythonDataProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataProvider_finalize(t_PythonDataProvider *self);
      static PyObject *t_PythonDataProvider_pythonExtension(t_PythonDataProvider *self, PyObject *args);
      static void JNICALL t_PythonDataProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataProvider_get__self(t_PythonDataProvider *self, void *data);
      static PyGetSetDef t_PythonDataProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataProvider__methods_[] = {
        DECLARE_METHOD(t_PythonDataProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataProvider)[] = {
        { Py_tp_methods, t_PythonDataProvider__methods_ },
        { Py_tp_init, (void *) t_PythonDataProvider_init_ },
        { Py_tp_getset, t_PythonDataProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataProvider, t_PythonDataProvider, PythonDataProvider);

      void t_PythonDataProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataProvider), &PY_TYPE_DEF(PythonDataProvider), module, "PythonDataProvider", 1);
      }

      void t_PythonDataProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataProvider), "class_", make_descriptor(PythonDataProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataProvider), "wrapfn_", make_descriptor(t_PythonDataProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonDataProvider_pythonDecRef0 },
        };
        env->registerNatives(cls, methods, 1);
      }

      static PyObject *t_PythonDataProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataProvider::initializeClass, 1)))
          return NULL;
        return t_PythonDataProvider::wrap_Object(PythonDataProvider(((t_PythonDataProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonDataProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataProvider_init_(t_PythonDataProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonDataProvider object((jobject) NULL);

        INT_CALL(object = PythonDataProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataProvider_finalize(t_PythonDataProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataProvider_pythonExtension(t_PythonDataProvider *self, PyObject *args)
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

      static void JNICALL t_PythonDataProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataProvider::mids$[PythonDataProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataProvider::mids$[PythonDataProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonDataProvider_get__self(t_PythonDataProvider *self, void *data)
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
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *ObservableSatellite::class$ = NULL;
        jmethodID *ObservableSatellite::mids$ = NULL;
        bool ObservableSatellite::live$ = false;
        ::java::lang::String *ObservableSatellite::CLOCK_DRIFT_PREFIX = NULL;
        ::java::lang::String *ObservableSatellite::CLOCK_OFFSET_PREFIX = NULL;

        jclass ObservableSatellite::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/ObservableSatellite");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getClockDriftDriver_a59daa5e273117e1] = env->getMethodID(cls, "getClockDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getClockOffsetDriver_a59daa5e273117e1] = env->getMethodID(cls, "getClockOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPropagatorIndex_55546ef6a647f39b] = env->getMethodID(cls, "getPropagatorIndex", "()I");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CLOCK_DRIFT_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "CLOCK_DRIFT_PREFIX", "Ljava/lang/String;"));
            CLOCK_OFFSET_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "CLOCK_OFFSET_PREFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ObservableSatellite::ObservableSatellite(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

        jboolean ObservableSatellite::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        ::org::orekit::utils::ParameterDriver ObservableSatellite::getClockDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockDriftDriver_a59daa5e273117e1]));
        }

        ::org::orekit::utils::ParameterDriver ObservableSatellite::getClockOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockOffsetDriver_a59daa5e273117e1]));
        }

        jint ObservableSatellite::getPropagatorIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getPropagatorIndex_55546ef6a647f39b]);
        }

        jint ObservableSatellite::hashCode() const
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
  namespace orekit {
    namespace estimation {
      namespace measurements {
        static PyObject *t_ObservableSatellite_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ObservableSatellite_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ObservableSatellite_init_(t_ObservableSatellite *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ObservableSatellite_equals(t_ObservableSatellite *self, PyObject *args);
        static PyObject *t_ObservableSatellite_getClockDriftDriver(t_ObservableSatellite *self);
        static PyObject *t_ObservableSatellite_getClockOffsetDriver(t_ObservableSatellite *self);
        static PyObject *t_ObservableSatellite_getPropagatorIndex(t_ObservableSatellite *self);
        static PyObject *t_ObservableSatellite_hashCode(t_ObservableSatellite *self, PyObject *args);
        static PyObject *t_ObservableSatellite_get__clockDriftDriver(t_ObservableSatellite *self, void *data);
        static PyObject *t_ObservableSatellite_get__clockOffsetDriver(t_ObservableSatellite *self, void *data);
        static PyObject *t_ObservableSatellite_get__propagatorIndex(t_ObservableSatellite *self, void *data);
        static PyGetSetDef t_ObservableSatellite__fields_[] = {
          DECLARE_GET_FIELD(t_ObservableSatellite, clockDriftDriver),
          DECLARE_GET_FIELD(t_ObservableSatellite, clockOffsetDriver),
          DECLARE_GET_FIELD(t_ObservableSatellite, propagatorIndex),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ObservableSatellite__methods_[] = {
          DECLARE_METHOD(t_ObservableSatellite, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservableSatellite, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ObservableSatellite, equals, METH_VARARGS),
          DECLARE_METHOD(t_ObservableSatellite, getClockDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_ObservableSatellite, getClockOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_ObservableSatellite, getPropagatorIndex, METH_NOARGS),
          DECLARE_METHOD(t_ObservableSatellite, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ObservableSatellite)[] = {
          { Py_tp_methods, t_ObservableSatellite__methods_ },
          { Py_tp_init, (void *) t_ObservableSatellite_init_ },
          { Py_tp_getset, t_ObservableSatellite__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ObservableSatellite)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ObservableSatellite, t_ObservableSatellite, ObservableSatellite);

        void t_ObservableSatellite::install(PyObject *module)
        {
          installType(&PY_TYPE(ObservableSatellite), &PY_TYPE_DEF(ObservableSatellite), module, "ObservableSatellite", 0);
        }

        void t_ObservableSatellite::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "class_", make_descriptor(ObservableSatellite::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "wrapfn_", make_descriptor(t_ObservableSatellite::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "boxfn_", make_descriptor(boxObject));
          env->getClass(ObservableSatellite::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "CLOCK_DRIFT_PREFIX", make_descriptor(j2p(*ObservableSatellite::CLOCK_DRIFT_PREFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ObservableSatellite), "CLOCK_OFFSET_PREFIX", make_descriptor(j2p(*ObservableSatellite::CLOCK_OFFSET_PREFIX)));
        }

        static PyObject *t_ObservableSatellite_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ObservableSatellite::initializeClass, 1)))
            return NULL;
          return t_ObservableSatellite::wrap_Object(ObservableSatellite(((t_ObservableSatellite *) arg)->object.this$));
        }
        static PyObject *t_ObservableSatellite_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ObservableSatellite::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ObservableSatellite_init_(t_ObservableSatellite *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          ObservableSatellite object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = ObservableSatellite(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ObservableSatellite_equals(t_ObservableSatellite *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ObservableSatellite), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_ObservableSatellite_getClockDriftDriver(t_ObservableSatellite *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_ObservableSatellite_getClockOffsetDriver(t_ObservableSatellite *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_ObservableSatellite_getPropagatorIndex(t_ObservableSatellite *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPropagatorIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ObservableSatellite_hashCode(t_ObservableSatellite *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(ObservableSatellite), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_ObservableSatellite_get__clockDriftDriver(t_ObservableSatellite *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_ObservableSatellite_get__clockOffsetDriver(t_ObservableSatellite *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_ObservableSatellite_get__propagatorIndex(t_ObservableSatellite *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPropagatorIndex());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "java/util/Map.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *UserDefined::class$ = NULL;
            jmethodID *UserDefined::mids$ = NULL;
            bool UserDefined::live$ = false;
            ::java::lang::String *UserDefined::USER_DEFINED_PREFIX = NULL;
            ::java::lang::String *UserDefined::USER_DEFINED_XML_ATTRIBUTE = NULL;
            ::java::lang::String *UserDefined::USER_DEFINED_XML_TAG = NULL;

            jclass UserDefined::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/UserDefined");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addEntry_a627ad9c5959309d] = env->getMethodID(cls, "addEntry", "(Ljava/lang/String;Ljava/lang/String;)V");
                mids$[mid_getParameters_810bed48fafb0b9a] = env->getMethodID(cls, "getParameters", "()Ljava/util/Map;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                USER_DEFINED_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "USER_DEFINED_PREFIX", "Ljava/lang/String;"));
                USER_DEFINED_XML_ATTRIBUTE = new ::java::lang::String(env->getStaticObjectField(cls, "USER_DEFINED_XML_ATTRIBUTE", "Ljava/lang/String;"));
                USER_DEFINED_XML_TAG = new ::java::lang::String(env->getStaticObjectField(cls, "USER_DEFINED_XML_TAG", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserDefined::UserDefined() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void UserDefined::addEntry(const ::java::lang::String & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addEntry_a627ad9c5959309d], a0.this$, a1.this$);
            }

            ::java::util::Map UserDefined::getParameters() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getParameters_810bed48fafb0b9a]));
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
            static PyObject *t_UserDefined_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserDefined_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserDefined_init_(t_UserDefined *self, PyObject *args, PyObject *kwds);
            static PyObject *t_UserDefined_addEntry(t_UserDefined *self, PyObject *args);
            static PyObject *t_UserDefined_getParameters(t_UserDefined *self);
            static PyObject *t_UserDefined_get__parameters(t_UserDefined *self, void *data);
            static PyGetSetDef t_UserDefined__fields_[] = {
              DECLARE_GET_FIELD(t_UserDefined, parameters),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_UserDefined__methods_[] = {
              DECLARE_METHOD(t_UserDefined, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefined, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefined, addEntry, METH_VARARGS),
              DECLARE_METHOD(t_UserDefined, getParameters, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserDefined)[] = {
              { Py_tp_methods, t_UserDefined__methods_ },
              { Py_tp_init, (void *) t_UserDefined_init_ },
              { Py_tp_getset, t_UserDefined__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserDefined)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(UserDefined, t_UserDefined, UserDefined);

            void t_UserDefined::install(PyObject *module)
            {
              installType(&PY_TYPE(UserDefined), &PY_TYPE_DEF(UserDefined), module, "UserDefined", 0);
            }

            void t_UserDefined::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "class_", make_descriptor(UserDefined::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "wrapfn_", make_descriptor(t_UserDefined::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "boxfn_", make_descriptor(boxObject));
              env->getClass(UserDefined::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "USER_DEFINED_PREFIX", make_descriptor(j2p(*UserDefined::USER_DEFINED_PREFIX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "USER_DEFINED_XML_ATTRIBUTE", make_descriptor(j2p(*UserDefined::USER_DEFINED_XML_ATTRIBUTE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "USER_DEFINED_XML_TAG", make_descriptor(j2p(*UserDefined::USER_DEFINED_XML_TAG)));
            }

            static PyObject *t_UserDefined_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserDefined::initializeClass, 1)))
                return NULL;
              return t_UserDefined::wrap_Object(UserDefined(((t_UserDefined *) arg)->object.this$));
            }
            static PyObject *t_UserDefined_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserDefined::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserDefined_init_(t_UserDefined *self, PyObject *args, PyObject *kwds)
            {
              UserDefined object((jobject) NULL);

              INT_CALL(object = UserDefined());
              self->object = object;

              return 0;
            }

            static PyObject *t_UserDefined_addEntry(t_UserDefined *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "ss", &a0, &a1))
              {
                OBJ_CALL(self->object.addEntry(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addEntry", args);
              return NULL;
            }

            static PyObject *t_UserDefined_getParameters(t_UserDefined *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getParameters());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_UserDefined_get__parameters(t_UserDefined *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getParameters());
              return ::java::util::t_Map::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/DormandPrince853IntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DormandPrince853IntegratorBuilder::class$ = NULL;
        jmethodID *DormandPrince853IntegratorBuilder::mids$ = NULL;
        bool DormandPrince853IntegratorBuilder::live$ = false;

        jclass DormandPrince853IntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DormandPrince853IntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_916fa199ca08d656] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853IntegratorBuilder::DormandPrince853IntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractIntegrator DormandPrince853IntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_916fa199ca08d656], a0.this$, a1.this$));
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
        static PyObject *t_DormandPrince853IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince853IntegratorBuilder_init_(t_DormandPrince853IntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince853IntegratorBuilder_buildIntegrator(t_DormandPrince853IntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_DormandPrince853IntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_DormandPrince853IntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853IntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853IntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince853IntegratorBuilder)[] = {
          { Py_tp_methods, t_DormandPrince853IntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_DormandPrince853IntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince853IntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DormandPrince853IntegratorBuilder, t_DormandPrince853IntegratorBuilder, DormandPrince853IntegratorBuilder);

        void t_DormandPrince853IntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince853IntegratorBuilder), &PY_TYPE_DEF(DormandPrince853IntegratorBuilder), module, "DormandPrince853IntegratorBuilder", 0);
        }

        void t_DormandPrince853IntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853IntegratorBuilder), "class_", make_descriptor(DormandPrince853IntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853IntegratorBuilder), "wrapfn_", make_descriptor(t_DormandPrince853IntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853IntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince853IntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince853IntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_DormandPrince853IntegratorBuilder::wrap_Object(DormandPrince853IntegratorBuilder(((t_DormandPrince853IntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince853IntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince853IntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince853IntegratorBuilder_init_(t_DormandPrince853IntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          DormandPrince853IntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = DormandPrince853IntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince853IntegratorBuilder_buildIntegrator(t_DormandPrince853IntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/forces/gravity/potential/CachedNormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *CachedNormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *CachedNormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool CachedNormalizedSphericalHarmonicsProvider::live$ = false;

          jclass CachedNormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/CachedNormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5f6b6f2b21e32b4e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;DIIDD)V");
              mids$[mid_getAe_b74f83833fdad017] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_55546ef6a647f39b] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_55546ef6a647f39b] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_c325492395d89b24] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_b2b14af197a8eaf6] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_3543a5b2e9e83041] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CachedNormalizedSphericalHarmonicsProvider::CachedNormalizedSphericalHarmonicsProvider(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a0, jdouble a1, jint a2, jint a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5f6b6f2b21e32b4e, a0.this$, a1, a2, a3, a4, a5)) {}

          jdouble CachedNormalizedSphericalHarmonicsProvider::getAe() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAe_b74f83833fdad017]);
          }

          jint CachedNormalizedSphericalHarmonicsProvider::getMaxDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxDegree_55546ef6a647f39b]);
          }

          jint CachedNormalizedSphericalHarmonicsProvider::getMaxOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxOrder_55546ef6a647f39b]);
          }

          jdouble CachedNormalizedSphericalHarmonicsProvider::getMu() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
          }

          ::org::orekit::time::AbsoluteDate CachedNormalizedSphericalHarmonicsProvider::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_c325492395d89b24]));
          }

          ::org::orekit::forces::gravity::potential::TideSystem CachedNormalizedSphericalHarmonicsProvider::getTideSystem() const
          {
            return ::org::orekit::forces::gravity::potential::TideSystem(env->callObjectMethod(this$, mids$[mid_getTideSystem_b2b14af197a8eaf6]));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics CachedNormalizedSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_3543a5b2e9e83041], a0.this$));
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
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CachedNormalizedSphericalHarmonicsProvider_init_(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getAe(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMu(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getReferenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getTideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_onDate(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *arg);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__ae(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__mu(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__referenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__tideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_CachedNormalizedSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, ae),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, maxDegree),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, maxOrder),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, mu),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, referenceDate),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, tideSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CachedNormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getAe, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getMaxDegree, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getMaxOrder, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getMu, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getTideSystem, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CachedNormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_CachedNormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_CachedNormalizedSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_CachedNormalizedSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CachedNormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CachedNormalizedSphericalHarmonicsProvider, t_CachedNormalizedSphericalHarmonicsProvider, CachedNormalizedSphericalHarmonicsProvider);

          void t_CachedNormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(CachedNormalizedSphericalHarmonicsProvider), module, "CachedNormalizedSphericalHarmonicsProvider", 0);
          }

          void t_CachedNormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), "class_", make_descriptor(CachedNormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_CachedNormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CachedNormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_CachedNormalizedSphericalHarmonicsProvider::wrap_Object(CachedNormalizedSphericalHarmonicsProvider(((t_CachedNormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CachedNormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CachedNormalizedSphericalHarmonicsProvider_init_(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a0((jobject) NULL);
            jdouble a1;
            jint a2;
            jint a3;
            jdouble a4;
            jdouble a5;
            CachedNormalizedSphericalHarmonicsProvider object((jobject) NULL);

            if (!parseArgs(args, "kDIIDD", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = CachedNormalizedSphericalHarmonicsProvider(a0, a1, a2, a3, a4, a5));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getAe(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAe());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMu(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMu());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getReferenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getTideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            ::org::orekit::forces::gravity::potential::TideSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_onDate(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.onDate(a0));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "onDate", arg);
            return NULL;
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__ae(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAe());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxOrder());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__mu(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMu());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__referenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__tideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/Oem.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemWriter::class$ = NULL;
              jmethodID *OemWriter::mids$ = NULL;
              bool OemWriter::live$ = false;
              jdouble OemWriter::CCSDS_OEM_VERS = (jdouble) 0;
              ::java::lang::String *OemWriter::DEFAULT_FILE_NAME = NULL;
              jint OemWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_751257c373115a80] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_e23c1d500bcfe15e] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/odm/oem/OemSegment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OEM_VERS = env->getStaticDoubleField(cls, "CCSDS_OEM_VERS");
                  DEFAULT_FILE_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_FILE_NAME", "Ljava/lang/String;"));
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemWriter::OemWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_751257c373115a80, a0.this$, a1.this$, a2.this$)) {}
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
              static PyObject *t_OemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemWriter_of_(t_OemWriter *self, PyObject *args);
              static int t_OemWriter_init_(t_OemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemWriter_get__parameters_(t_OemWriter *self, void *data);
              static PyGetSetDef t_OemWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OemWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemWriter__methods_[] = {
                DECLARE_METHOD(t_OemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemWriter)[] = {
                { Py_tp_methods, t_OemWriter__methods_ },
                { Py_tp_init, (void *) t_OemWriter_init_ },
                { Py_tp_getset, t_OemWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OemWriter, t_OemWriter, OemWriter);
              PyObject *t_OemWriter::wrap_Object(const OemWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OemWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemWriter *self = (t_OemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OemWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OemWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemWriter *self = (t_OemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OemWriter), &PY_TYPE_DEF(OemWriter), module, "OemWriter", 0);
              }

              void t_OemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "class_", make_descriptor(OemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "wrapfn_", make_descriptor(t_OemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OemWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "CCSDS_OEM_VERS", make_descriptor(OemWriter::CCSDS_OEM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "DEFAULT_FILE_NAME", make_descriptor(j2p(*OemWriter::DEFAULT_FILE_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "KVN_PADDING_WIDTH", make_descriptor(OemWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemWriter::initializeClass, 1)))
                  return NULL;
                return t_OemWriter::wrap_Object(OemWriter(((t_OemWriter *) arg)->object.this$));
              }
              static PyObject *t_OemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemWriter_of_(t_OemWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OemWriter_init_(t_OemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                OemWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = OemWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSegment);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(Oem);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_OemWriter_get__parameters_(t_OemWriter *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovarianceWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CartesianCovarianceWriter::class$ = NULL;
            jmethodID *CartesianCovarianceWriter::mids$ = NULL;
            bool CartesianCovarianceWriter::live$ = false;

            jclass CartesianCovarianceWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CartesianCovarianceWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_e57e840c8403458a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;)V");
                mids$[mid_writeContent_fb222e851cd27682] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CartesianCovarianceWriter::CartesianCovarianceWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a2) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_e57e840c8403458a, a0.this$, a1.this$, a2.this$)) {}
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
            static PyObject *t_CartesianCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CartesianCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CartesianCovarianceWriter_init_(t_CartesianCovarianceWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_CartesianCovarianceWriter__methods_[] = {
              DECLARE_METHOD(t_CartesianCovarianceWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovarianceWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CartesianCovarianceWriter)[] = {
              { Py_tp_methods, t_CartesianCovarianceWriter__methods_ },
              { Py_tp_init, (void *) t_CartesianCovarianceWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CartesianCovarianceWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(CartesianCovarianceWriter, t_CartesianCovarianceWriter, CartesianCovarianceWriter);

            void t_CartesianCovarianceWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CartesianCovarianceWriter), &PY_TYPE_DEF(CartesianCovarianceWriter), module, "CartesianCovarianceWriter", 0);
            }

            void t_CartesianCovarianceWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceWriter), "class_", make_descriptor(CartesianCovarianceWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceWriter), "wrapfn_", make_descriptor(t_CartesianCovarianceWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CartesianCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CartesianCovarianceWriter::initializeClass, 1)))
                return NULL;
              return t_CartesianCovarianceWriter::wrap_Object(CartesianCovarianceWriter(((t_CartesianCovarianceWriter *) arg)->object.this$));
            }
            static PyObject *t_CartesianCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CartesianCovarianceWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CartesianCovarianceWriter_init_(t_CartesianCovarianceWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a2((jobject) NULL);
              CartesianCovarianceWriter object((jobject) NULL);

              if (!parseArgs(args, "ssk", ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CartesianCovarianceWriter(a0, a1, a2));
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
#include "org/orekit/forces/gravity/potential/GRGSFormatReader.h"
#include "java/io/InputStream.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *GRGSFormatReader::class$ = NULL;
          jmethodID *GRGSFormatReader::mids$ = NULL;
          bool GRGSFormatReader::live$ = false;

          jclass GRGSFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/GRGSFormatReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_76cf8b957ccb7ae1] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_f201530b2ce67e89] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_getProvider_752316a4c911183b] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GRGSFormatReader::GRGSFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_76cf8b957ccb7ae1, a0.this$, a1)) {}

          GRGSFormatReader::GRGSFormatReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_f201530b2ce67e89, a0.this$, a1, a2.this$)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider GRGSFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_752316a4c911183b], a0, a1, a2));
          }

          void GRGSFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
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
          static PyObject *t_GRGSFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GRGSFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GRGSFormatReader_init_(t_GRGSFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GRGSFormatReader_getProvider(t_GRGSFormatReader *self, PyObject *args);
          static PyObject *t_GRGSFormatReader_loadData(t_GRGSFormatReader *self, PyObject *args);

          static PyMethodDef t_GRGSFormatReader__methods_[] = {
            DECLARE_METHOD(t_GRGSFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GRGSFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GRGSFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_GRGSFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GRGSFormatReader)[] = {
            { Py_tp_methods, t_GRGSFormatReader__methods_ },
            { Py_tp_init, (void *) t_GRGSFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GRGSFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(GRGSFormatReader, t_GRGSFormatReader, GRGSFormatReader);

          void t_GRGSFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(GRGSFormatReader), &PY_TYPE_DEF(GRGSFormatReader), module, "GRGSFormatReader", 0);
          }

          void t_GRGSFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRGSFormatReader), "class_", make_descriptor(GRGSFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRGSFormatReader), "wrapfn_", make_descriptor(t_GRGSFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRGSFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GRGSFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GRGSFormatReader::initializeClass, 1)))
              return NULL;
            return t_GRGSFormatReader::wrap_Object(GRGSFormatReader(((t_GRGSFormatReader *) arg)->object.this$));
          }
          static PyObject *t_GRGSFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GRGSFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GRGSFormatReader_init_(t_GRGSFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                GRGSFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = GRGSFormatReader(a0, a1));
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
                GRGSFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = GRGSFormatReader(a0, a1, a2));
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

          static PyObject *t_GRGSFormatReader_getProvider(t_GRGSFormatReader *self, PyObject *args)
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

            return callSuper(PY_TYPE(GRGSFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_GRGSFormatReader_loadData(t_GRGSFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GRGSFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitIOException.h"
#include "java/util/Locale.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitIOException::class$ = NULL;
      jmethodID *OrekitIOException::mids$ = NULL;
      bool OrekitIOException::live$ = false;

      jclass OrekitIOException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitIOException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9b3ada3301b0db8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_26070c28e6ea354d] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_24e2edd6319f4c5a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_d8f5056e4f45c9a6] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitIOException::OrekitIOException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_9b3ada3301b0db8c, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitIOException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String OrekitIOException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String OrekitIOException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_26070c28e6ea354d], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitIOException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_24e2edd6319f4c5a]));
      }

      ::org::hipparchus::exception::Localizable OrekitIOException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_d8f5056e4f45c9a6]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitIOException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitIOException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitIOException_init_(t_OrekitIOException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitIOException_getLocalizedMessage(t_OrekitIOException *self, PyObject *args);
      static PyObject *t_OrekitIOException_getMessage(t_OrekitIOException *self, PyObject *args);
      static PyObject *t_OrekitIOException_getParts(t_OrekitIOException *self);
      static PyObject *t_OrekitIOException_getSpecifier(t_OrekitIOException *self);
      static PyObject *t_OrekitIOException_get__localizedMessage(t_OrekitIOException *self, void *data);
      static PyObject *t_OrekitIOException_get__message(t_OrekitIOException *self, void *data);
      static PyObject *t_OrekitIOException_get__parts(t_OrekitIOException *self, void *data);
      static PyObject *t_OrekitIOException_get__specifier(t_OrekitIOException *self, void *data);
      static PyGetSetDef t_OrekitIOException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitIOException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitIOException, message),
        DECLARE_GET_FIELD(t_OrekitIOException, parts),
        DECLARE_GET_FIELD(t_OrekitIOException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitIOException__methods_[] = {
        DECLARE_METHOD(t_OrekitIOException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIOException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIOException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIOException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIOException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitIOException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitIOException)[] = {
        { Py_tp_methods, t_OrekitIOException__methods_ },
        { Py_tp_init, (void *) t_OrekitIOException_init_ },
        { Py_tp_getset, t_OrekitIOException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitIOException)[] = {
        &PY_TYPE_DEF(::java::io::IOException),
        NULL
      };

      DEFINE_TYPE(OrekitIOException, t_OrekitIOException, OrekitIOException);

      void t_OrekitIOException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitIOException), &PY_TYPE_DEF(OrekitIOException), module, "OrekitIOException", 0);
      }

      void t_OrekitIOException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIOException), "class_", make_descriptor(OrekitIOException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIOException), "wrapfn_", make_descriptor(t_OrekitIOException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIOException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitIOException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitIOException::initializeClass, 1)))
          return NULL;
        return t_OrekitIOException::wrap_Object(OrekitIOException(((t_OrekitIOException *) arg)->object.this$));
      }
      static PyObject *t_OrekitIOException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitIOException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitIOException_init_(t_OrekitIOException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitIOException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitIOException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitIOException_getLocalizedMessage(t_OrekitIOException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitIOException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitIOException_getMessage(t_OrekitIOException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(OrekitIOException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitIOException_getParts(t_OrekitIOException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIOException_getSpecifier(t_OrekitIOException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitIOException_get__localizedMessage(t_OrekitIOException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIOException_get__message(t_OrekitIOException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIOException_get__parts(t_OrekitIOException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIOException_get__specifier(t_OrekitIOException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/Generator.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
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
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addPropagator_1aa89687d48bd874] = env->getMethodID(cls, "addPropagator", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_addScheduler_fc41c8f2b7981560] = env->getMethodID(cls, "addScheduler", "(Lorg/orekit/estimation/measurements/generation/Scheduler;)V");
              mids$[mid_addSubscriber_e8027b9d7a84d897] = env->getMethodID(cls, "addSubscriber", "(Lorg/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber;)V");
              mids$[mid_generate_f89af00fc113b524] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_getPropagator_49719abd0d4a2fa6] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/estimation/measurements/ObservableSatellite;)Lorg/orekit/propagation/Propagator;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Generator::Generator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::org::orekit::estimation::measurements::ObservableSatellite Generator::addPropagator(const ::org::orekit::propagation::Propagator & a0) const
          {
            return ::org::orekit::estimation::measurements::ObservableSatellite(env->callObjectMethod(this$, mids$[mid_addPropagator_1aa89687d48bd874], a0.this$));
          }

          void Generator::addScheduler(const ::org::orekit::estimation::measurements::generation::Scheduler & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addScheduler_fc41c8f2b7981560], a0.this$);
          }

          void Generator::addSubscriber(const ::org::orekit::estimation::measurements::generation::GeneratedMeasurementSubscriber & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSubscriber_e8027b9d7a84d897], a0.this$);
          }

          void Generator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_generate_f89af00fc113b524], a0.this$, a1.this$);
          }

          ::org::orekit::propagation::Propagator Generator::getPropagator(const ::org::orekit::estimation::measurements::ObservableSatellite & a0) const
          {
            return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_getPropagator_49719abd0d4a2fa6], a0.this$));
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
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *StateVector::class$ = NULL;
            jmethodID *StateVector::mids$ = NULL;
            bool StateVector::live$ = false;

            jclass StateVector::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/StateVector");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getEpoch_c325492395d89b24] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_hasAcceleration_9ab94ac1dc23b105] = env->getMethodID(cls, "hasAcceleration", "()Z");
                mids$[mid_setA_d5322b8b512aeb26] = env->getMethodID(cls, "setA", "(ID)V");
                mids$[mid_setEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setP_d5322b8b512aeb26] = env->getMethodID(cls, "setP", "(ID)V");
                mids$[mid_setV_d5322b8b512aeb26] = env->getMethodID(cls, "setV", "(ID)V");
                mids$[mid_toTimeStampedPVCoordinates_136cc8ba23b21c29] = env->getMethodID(cls, "toTimeStampedPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
                mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            StateVector::StateVector() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            ::org::orekit::time::AbsoluteDate StateVector::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_c325492395d89b24]));
            }

            jboolean StateVector::hasAcceleration() const
            {
              return env->callBooleanMethod(this$, mids$[mid_hasAcceleration_9ab94ac1dc23b105]);
            }

            void StateVector::setA(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setA_d5322b8b512aeb26], a0, a1);
            }

            void StateVector::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpoch_02135a6ef25adb4b], a0.this$);
            }

            void StateVector::setP(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setP_d5322b8b512aeb26], a0, a1);
            }

            void StateVector::setV(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setV_d5322b8b512aeb26], a0, a1);
            }

            ::org::orekit::utils::TimeStampedPVCoordinates StateVector::toTimeStampedPVCoordinates() const
            {
              return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toTimeStampedPVCoordinates_136cc8ba23b21c29]));
            }

            void StateVector::validate(jdouble a0) const
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
            static PyObject *t_StateVector_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVector_instance_(PyTypeObject *type, PyObject *arg);
            static int t_StateVector_init_(t_StateVector *self, PyObject *args, PyObject *kwds);
            static PyObject *t_StateVector_getEpoch(t_StateVector *self);
            static PyObject *t_StateVector_hasAcceleration(t_StateVector *self);
            static PyObject *t_StateVector_setA(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_setEpoch(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setP(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_setV(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_toTimeStampedPVCoordinates(t_StateVector *self);
            static PyObject *t_StateVector_validate(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_get__epoch(t_StateVector *self, void *data);
            static int t_StateVector_set__epoch(t_StateVector *self, PyObject *arg, void *data);
            static PyGetSetDef t_StateVector__fields_[] = {
              DECLARE_GETSET_FIELD(t_StateVector, epoch),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_StateVector__methods_[] = {
              DECLARE_METHOD(t_StateVector, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVector, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVector, getEpoch, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, hasAcceleration, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, setA, METH_VARARGS),
              DECLARE_METHOD(t_StateVector, setEpoch, METH_O),
              DECLARE_METHOD(t_StateVector, setP, METH_VARARGS),
              DECLARE_METHOD(t_StateVector, setV, METH_VARARGS),
              DECLARE_METHOD(t_StateVector, toTimeStampedPVCoordinates, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVector)[] = {
              { Py_tp_methods, t_StateVector__methods_ },
              { Py_tp_init, (void *) t_StateVector_init_ },
              { Py_tp_getset, t_StateVector__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVector)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(StateVector, t_StateVector, StateVector);

            void t_StateVector::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVector), &PY_TYPE_DEF(StateVector), module, "StateVector", 0);
            }

            void t_StateVector::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "class_", make_descriptor(StateVector::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "wrapfn_", make_descriptor(t_StateVector::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_StateVector_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVector::initializeClass, 1)))
                return NULL;
              return t_StateVector::wrap_Object(StateVector(((t_StateVector *) arg)->object.this$));
            }
            static PyObject *t_StateVector_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVector::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_StateVector_init_(t_StateVector *self, PyObject *args, PyObject *kwds)
            {
              StateVector object((jobject) NULL);

              INT_CALL(object = StateVector());
              self->object = object;

              return 0;
            }

            static PyObject *t_StateVector_getEpoch(t_StateVector *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_StateVector_hasAcceleration(t_StateVector *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.hasAcceleration());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_StateVector_setA(t_StateVector *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.setA(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setA", args);
              return NULL;
            }

            static PyObject *t_StateVector_setEpoch(t_StateVector *self, PyObject *arg)
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

            static PyObject *t_StateVector_setP(t_StateVector *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.setP(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setP", args);
              return NULL;
            }

            static PyObject *t_StateVector_setV(t_StateVector *self, PyObject *args)
            {
              jint a0;
              jdouble a1;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(self->object.setV(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setV", args);
              return NULL;
            }

            static PyObject *t_StateVector_toTimeStampedPVCoordinates(t_StateVector *self)
            {
              ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
              OBJ_CALL(result = self->object.toTimeStampedPVCoordinates());
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }

            static PyObject *t_StateVector_validate(t_StateVector *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(StateVector), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_StateVector_get__epoch(t_StateVector *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_StateVector_set__epoch(t_StateVector *self, PyObject *arg, void *data)
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
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldTrackingCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldTrackingCoordinates::class$ = NULL;
      jmethodID *FieldTrackingCoordinates::mids$ = NULL;
      bool FieldTrackingCoordinates::live$ = false;

      jclass FieldTrackingCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldTrackingCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_baa1ed35ace5d036] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getAzimuth_81520b552cb3fa26] = env->getMethodID(cls, "getAzimuth", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getElevation_81520b552cb3fa26] = env->getMethodID(cls, "getElevation", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRange_81520b552cb3fa26] = env->getMethodID(cls, "getRange", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTrackingCoordinates::FieldTrackingCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_baa1ed35ace5d036, a0.this$, a1.this$, a2.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldTrackingCoordinates::getAzimuth() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAzimuth_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldTrackingCoordinates::getElevation() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getElevation_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldTrackingCoordinates::getRange() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRange_81520b552cb3fa26]));
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
      static PyObject *t_FieldTrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTrackingCoordinates_of_(t_FieldTrackingCoordinates *self, PyObject *args);
      static int t_FieldTrackingCoordinates_init_(t_FieldTrackingCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTrackingCoordinates_getAzimuth(t_FieldTrackingCoordinates *self);
      static PyObject *t_FieldTrackingCoordinates_getElevation(t_FieldTrackingCoordinates *self);
      static PyObject *t_FieldTrackingCoordinates_getRange(t_FieldTrackingCoordinates *self);
      static PyObject *t_FieldTrackingCoordinates_get__azimuth(t_FieldTrackingCoordinates *self, void *data);
      static PyObject *t_FieldTrackingCoordinates_get__elevation(t_FieldTrackingCoordinates *self, void *data);
      static PyObject *t_FieldTrackingCoordinates_get__range(t_FieldTrackingCoordinates *self, void *data);
      static PyObject *t_FieldTrackingCoordinates_get__parameters_(t_FieldTrackingCoordinates *self, void *data);
      static PyGetSetDef t_FieldTrackingCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, azimuth),
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, elevation),
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, range),
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTrackingCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldTrackingCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, getAzimuth, METH_NOARGS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, getElevation, METH_NOARGS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, getRange, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTrackingCoordinates)[] = {
        { Py_tp_methods, t_FieldTrackingCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldTrackingCoordinates_init_ },
        { Py_tp_getset, t_FieldTrackingCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTrackingCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTrackingCoordinates, t_FieldTrackingCoordinates, FieldTrackingCoordinates);
      PyObject *t_FieldTrackingCoordinates::wrap_Object(const FieldTrackingCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTrackingCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTrackingCoordinates *self = (t_FieldTrackingCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTrackingCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTrackingCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTrackingCoordinates *self = (t_FieldTrackingCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTrackingCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTrackingCoordinates), &PY_TYPE_DEF(FieldTrackingCoordinates), module, "FieldTrackingCoordinates", 0);
      }

      void t_FieldTrackingCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrackingCoordinates), "class_", make_descriptor(FieldTrackingCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrackingCoordinates), "wrapfn_", make_descriptor(t_FieldTrackingCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrackingCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTrackingCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldTrackingCoordinates::wrap_Object(FieldTrackingCoordinates(((t_FieldTrackingCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldTrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTrackingCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTrackingCoordinates_of_(t_FieldTrackingCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTrackingCoordinates_init_(t_FieldTrackingCoordinates *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        FieldTrackingCoordinates object((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldTrackingCoordinates(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldTrackingCoordinates_getAzimuth(t_FieldTrackingCoordinates *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAzimuth());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldTrackingCoordinates_getElevation(t_FieldTrackingCoordinates *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getElevation());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldTrackingCoordinates_getRange(t_FieldTrackingCoordinates *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRange());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldTrackingCoordinates_get__parameters_(t_FieldTrackingCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTrackingCoordinates_get__azimuth(t_FieldTrackingCoordinates *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAzimuth());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldTrackingCoordinates_get__elevation(t_FieldTrackingCoordinates *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getElevation());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldTrackingCoordinates_get__range(t_FieldTrackingCoordinates *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRange());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/MultisatStepNormalizer.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *MultisatStepNormalizer::class$ = NULL;
        jmethodID *MultisatStepNormalizer::mids$ = NULL;
        bool MultisatStepNormalizer::live$ = false;

        jclass MultisatStepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/MultisatStepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_02c043bb1395e1f8] = env->getMethodID(cls, "<init>", "(DLorg/orekit/propagation/sampling/MultiSatFixedStepHandler;)V");
            mids$[mid_finish_0e7c3032c7c93ed3] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_getFixedStepHandler_d37df4d2f5d5d6ce] = env->getMethodID(cls, "getFixedStepHandler", "()Lorg/orekit/propagation/sampling/MultiSatFixedStepHandler;");
            mids$[mid_getFixedTimeStep_b74f83833fdad017] = env->getMethodID(cls, "getFixedTimeStep", "()D");
            mids$[mid_handleStep_0e7c3032c7c93ed3] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_0365da66b6e36325] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultisatStepNormalizer::MultisatStepNormalizer(jdouble a0, const ::org::orekit::propagation::sampling::MultiSatFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_02c043bb1395e1f8, a0, a1.this$)) {}

        void MultisatStepNormalizer::finish(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_0e7c3032c7c93ed3], a0.this$);
        }

        ::org::orekit::propagation::sampling::MultiSatFixedStepHandler MultisatStepNormalizer::getFixedStepHandler() const
        {
          return ::org::orekit::propagation::sampling::MultiSatFixedStepHandler(env->callObjectMethod(this$, mids$[mid_getFixedStepHandler_d37df4d2f5d5d6ce]));
        }

        jdouble MultisatStepNormalizer::getFixedTimeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFixedTimeStep_b74f83833fdad017]);
        }

        void MultisatStepNormalizer::handleStep(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_0e7c3032c7c93ed3], a0.this$);
        }

        void MultisatStepNormalizer::init(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0365da66b6e36325], a0.this$, a1.this$);
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
        static PyObject *t_MultisatStepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultisatStepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultisatStepNormalizer_init_(t_MultisatStepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultisatStepNormalizer_finish(t_MultisatStepNormalizer *self, PyObject *arg);
        static PyObject *t_MultisatStepNormalizer_getFixedStepHandler(t_MultisatStepNormalizer *self);
        static PyObject *t_MultisatStepNormalizer_getFixedTimeStep(t_MultisatStepNormalizer *self);
        static PyObject *t_MultisatStepNormalizer_handleStep(t_MultisatStepNormalizer *self, PyObject *arg);
        static PyObject *t_MultisatStepNormalizer_init(t_MultisatStepNormalizer *self, PyObject *args);
        static PyObject *t_MultisatStepNormalizer_get__fixedStepHandler(t_MultisatStepNormalizer *self, void *data);
        static PyObject *t_MultisatStepNormalizer_get__fixedTimeStep(t_MultisatStepNormalizer *self, void *data);
        static PyGetSetDef t_MultisatStepNormalizer__fields_[] = {
          DECLARE_GET_FIELD(t_MultisatStepNormalizer, fixedStepHandler),
          DECLARE_GET_FIELD(t_MultisatStepNormalizer, fixedTimeStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultisatStepNormalizer__methods_[] = {
          DECLARE_METHOD(t_MultisatStepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultisatStepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultisatStepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_MultisatStepNormalizer, getFixedStepHandler, METH_NOARGS),
          DECLARE_METHOD(t_MultisatStepNormalizer, getFixedTimeStep, METH_NOARGS),
          DECLARE_METHOD(t_MultisatStepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_MultisatStepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultisatStepNormalizer)[] = {
          { Py_tp_methods, t_MultisatStepNormalizer__methods_ },
          { Py_tp_init, (void *) t_MultisatStepNormalizer_init_ },
          { Py_tp_getset, t_MultisatStepNormalizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultisatStepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultisatStepNormalizer, t_MultisatStepNormalizer, MultisatStepNormalizer);

        void t_MultisatStepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(MultisatStepNormalizer), &PY_TYPE_DEF(MultisatStepNormalizer), module, "MultisatStepNormalizer", 0);
        }

        void t_MultisatStepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultisatStepNormalizer), "class_", make_descriptor(MultisatStepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultisatStepNormalizer), "wrapfn_", make_descriptor(t_MultisatStepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultisatStepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultisatStepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultisatStepNormalizer::initializeClass, 1)))
            return NULL;
          return t_MultisatStepNormalizer::wrap_Object(MultisatStepNormalizer(((t_MultisatStepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_MultisatStepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultisatStepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultisatStepNormalizer_init_(t_MultisatStepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::propagation::sampling::MultiSatFixedStepHandler a1((jobject) NULL);
          MultisatStepNormalizer object((jobject) NULL);

          if (!parseArgs(args, "Dk", ::org::orekit::propagation::sampling::MultiSatFixedStepHandler::initializeClass, &a0, &a1))
          {
            INT_CALL(object = MultisatStepNormalizer(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MultisatStepNormalizer_finish(t_MultisatStepNormalizer *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_MultisatStepNormalizer_getFixedStepHandler(t_MultisatStepNormalizer *self)
        {
          ::org::orekit::propagation::sampling::MultiSatFixedStepHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_MultiSatFixedStepHandler::wrap_Object(result);
        }

        static PyObject *t_MultisatStepNormalizer_getFixedTimeStep(t_MultisatStepNormalizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFixedTimeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MultisatStepNormalizer_handleStep(t_MultisatStepNormalizer *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_MultisatStepNormalizer_init(t_MultisatStepNormalizer *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_MultisatStepNormalizer_get__fixedStepHandler(t_MultisatStepNormalizer *self, void *data)
        {
          ::org::orekit::propagation::sampling::MultiSatFixedStepHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_MultiSatFixedStepHandler::wrap_Object(value);
        }

        static PyObject *t_MultisatStepNormalizer_get__fixedTimeStep(t_MultisatStepNormalizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFixedTimeStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "java/util/Map.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ocm.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmParser::class$ = NULL;
              jmethodID *OcmParser::mids$ = NULL;
              bool OcmParser::live$ = false;

              jclass OcmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_f16dfdfaecfa4159] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/Ocm;");
                  mids$[mid_finalizeData_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_de29107d9fd9c097] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_9ab94ac1dc23b105] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_795186347fecfb62] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/odm/ocm/Ocm;");
                  mids$[mid_prepareData_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_28163d47221b3cf7] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm OcmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm(env->callObjectMethod(this$, mids$[mid_build_f16dfdfaecfa4159]));
              }

              jboolean OcmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_9ab94ac1dc23b105]);
              }

              jboolean OcmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_9ab94ac1dc23b105]);
              }

              jboolean OcmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_9ab94ac1dc23b105]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OcmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_de29107d9fd9c097]));
              }

              ::java::util::Map OcmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a]));
              }

              jboolean OcmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_9ab94ac1dc23b105]);
              }

              jboolean OcmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_9ab94ac1dc23b105]);
              }

              jboolean OcmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_9ab94ac1dc23b105]);
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm OcmParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm(env->callObjectMethod(this$, mids$[mid_parse_795186347fecfb62], a0.this$));
              }

              jboolean OcmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_9ab94ac1dc23b105]);
              }

              jboolean OcmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_9ab94ac1dc23b105]);
              }

              jboolean OcmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_9ab94ac1dc23b105]);
              }

              void OcmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_28163d47221b3cf7], a0.this$);
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
              static PyObject *t_OcmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmParser_of_(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_build(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_finalizeData(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_finalizeHeader(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_finalizeMetadata(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_getHeader(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_getSpecialXmlElementsBuilders(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_inData(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_inHeader(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_inMetadata(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_parse(t_OcmParser *self, PyObject *arg);
              static PyObject *t_OcmParser_prepareData(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_prepareHeader(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_prepareMetadata(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_reset(t_OcmParser *self, PyObject *args);
              static PyObject *t_OcmParser_get__header(t_OcmParser *self, void *data);
              static PyObject *t_OcmParser_get__specialXmlElementsBuilders(t_OcmParser *self, void *data);
              static PyObject *t_OcmParser_get__parameters_(t_OcmParser *self, void *data);
              static PyGetSetDef t_OcmParser__fields_[] = {
                DECLARE_GET_FIELD(t_OcmParser, header),
                DECLARE_GET_FIELD(t_OcmParser, specialXmlElementsBuilders),
                DECLARE_GET_FIELD(t_OcmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmParser__methods_[] = {
                DECLARE_METHOD(t_OcmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, parse, METH_O),
                DECLARE_METHOD(t_OcmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OcmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmParser)[] = {
                { Py_tp_methods, t_OcmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OcmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
                NULL
              };

              DEFINE_TYPE(OcmParser, t_OcmParser, OcmParser);
              PyObject *t_OcmParser::wrap_Object(const OcmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OcmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmParser *self = (t_OcmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OcmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OcmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmParser *self = (t_OcmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OcmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmParser), &PY_TYPE_DEF(OcmParser), module, "OcmParser", 0);
              }

              void t_OcmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmParser), "class_", make_descriptor(OcmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmParser), "wrapfn_", make_descriptor(t_OcmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OcmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmParser::initializeClass, 1)))
                  return NULL;
                return t_OcmParser::wrap_Object(OcmParser(((t_OcmParser *) arg)->object.this$));
              }
              static PyObject *t_OcmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmParser_of_(t_OcmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OcmParser_build(t_OcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ocm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_OcmParser_finalizeData(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_OcmParser_finalizeHeader(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_OcmParser_finalizeMetadata(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_OcmParser_getHeader(t_OcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_OcmParser_getSpecialXmlElementsBuilders(t_OcmParser *self, PyObject *args)
              {
                ::java::util::Map result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                  return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
              }

              static PyObject *t_OcmParser_inData(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_OcmParser_inHeader(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_OcmParser_inMetadata(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_OcmParser_parse(t_OcmParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::Ocm result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::odm::ocm::t_Ocm::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_OcmParser_prepareData(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_OcmParser_prepareHeader(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_OcmParser_prepareMetadata(t_OcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_OcmParser_reset(t_OcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OcmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_OcmParser_get__parameters_(t_OcmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OcmParser_get__header(t_OcmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(value);
              }

              static PyObject *t_OcmParser_get__specialXmlElementsBuilders(t_OcmParser *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
                return ::java::util::t_Map::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
