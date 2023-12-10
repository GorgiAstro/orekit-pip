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
            mids$[mid_getEccRefSystem_598a51d5a149f1f8] = env->getStaticMethodID(cls, "getEccRefSystem", "(Ljava/lang/String;)Lorg/orekit/files/sinex/Station$ReferenceSystem;");
            mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_valueOf_598a51d5a149f1f8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sinex/Station$ReferenceSystem;");
            mids$[mid_values_b86ae42ecff54fe1] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sinex/Station$ReferenceSystem;");

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
          return Station$ReferenceSystem(env->callStaticObjectMethod(cls, mids$[mid_getEccRefSystem_598a51d5a149f1f8], a0.this$));
        }

        ::java::lang::String Station$ReferenceSystem::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
        }

        Station$ReferenceSystem Station$ReferenceSystem::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Station$ReferenceSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_598a51d5a149f1f8], a0.this$));
        }

        JArray< Station$ReferenceSystem > Station$ReferenceSystem::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Station$ReferenceSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_b86ae42ecff54fe1]));
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
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/time/GMSTScale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/frames/LazyLoadedEop.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/IRNSSScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/TCGScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *LazyLoadedTimeScales::class$ = NULL;
      jmethodID *LazyLoadedTimeScales::mids$ = NULL;
      bool LazyLoadedTimeScales::live$ = false;

      jclass LazyLoadedTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/LazyLoadedTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3a1eaf6addd91fd6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/LazyLoadedEop;)V");
          mids$[mid_addDefaultUTCTAIOffsetsLoaders_0fa09c18fee449d5] = env->getMethodID(cls, "addDefaultUTCTAIOffsetsLoaders", "()V");
          mids$[mid_addUTCTAIOffsetsLoader_65100d031698831e] = env->getMethodID(cls, "addUTCTAIOffsetsLoader", "(Lorg/orekit/time/UTCTAIOffsetsLoader;)V");
          mids$[mid_clearUTCTAIOffsetsLoaders_0fa09c18fee449d5] = env->getMethodID(cls, "clearUTCTAIOffsetsLoaders", "()V");
          mids$[mid_getBDT_fc0e10255fdb9359] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getGLONASS_2b4079449103a541] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_17da19434c6eaf77] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_9e1c13089038a5fa] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_0569916ae20da9e6] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getIRNSS_acc0c9657c1b3fab] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getQZSS_b61358961d42527b] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getTAI_542013db907f5b2d] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_a36a736c24a84bc8] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_bc03267fa6cc0068] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_01a9b50b4c9899e0] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_1cee2d27f65b3e44] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_9806ff584bac5289] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUT1_03564ba2f50e6e3b] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_4611f4f4ac7b3711] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_getEopHistory_f7b9f8d7c24d861d] = env->getMethodID(cls, "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedTimeScales::LazyLoadedTimeScales(const ::org::orekit::frames::LazyLoadedEop & a0) : ::org::orekit::time::AbstractTimeScales(env->newObject(initializeClass, &mids$, mid_init$_3a1eaf6addd91fd6, a0.this$)) {}

      void LazyLoadedTimeScales::addDefaultUTCTAIOffsetsLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultUTCTAIOffsetsLoaders_0fa09c18fee449d5]);
      }

      void LazyLoadedTimeScales::addUTCTAIOffsetsLoader(const ::org::orekit::time::UTCTAIOffsetsLoader & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addUTCTAIOffsetsLoader_65100d031698831e], a0.this$);
      }

      void LazyLoadedTimeScales::clearUTCTAIOffsetsLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearUTCTAIOffsetsLoaders_0fa09c18fee449d5]);
      }

      ::org::orekit::time::BDTScale LazyLoadedTimeScales::getBDT() const
      {
        return ::org::orekit::time::BDTScale(env->callObjectMethod(this$, mids$[mid_getBDT_fc0e10255fdb9359]));
      }

      ::org::orekit::time::GLONASSScale LazyLoadedTimeScales::getGLONASS() const
      {
        return ::org::orekit::time::GLONASSScale(env->callObjectMethod(this$, mids$[mid_getGLONASS_2b4079449103a541]));
      }

      ::org::orekit::time::GMSTScale LazyLoadedTimeScales::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::GMSTScale(env->callObjectMethod(this$, mids$[mid_getGMST_17da19434c6eaf77], a0.this$, a1));
      }

      ::org::orekit::time::GPSScale LazyLoadedTimeScales::getGPS() const
      {
        return ::org::orekit::time::GPSScale(env->callObjectMethod(this$, mids$[mid_getGPS_9e1c13089038a5fa]));
      }

      ::org::orekit::time::GalileoScale LazyLoadedTimeScales::getGST() const
      {
        return ::org::orekit::time::GalileoScale(env->callObjectMethod(this$, mids$[mid_getGST_0569916ae20da9e6]));
      }

      ::org::orekit::time::IRNSSScale LazyLoadedTimeScales::getIRNSS() const
      {
        return ::org::orekit::time::IRNSSScale(env->callObjectMethod(this$, mids$[mid_getIRNSS_acc0c9657c1b3fab]));
      }

      ::org::orekit::time::QZSSScale LazyLoadedTimeScales::getQZSS() const
      {
        return ::org::orekit::time::QZSSScale(env->callObjectMethod(this$, mids$[mid_getQZSS_b61358961d42527b]));
      }

      ::org::orekit::time::TAIScale LazyLoadedTimeScales::getTAI() const
      {
        return ::org::orekit::time::TAIScale(env->callObjectMethod(this$, mids$[mid_getTAI_542013db907f5b2d]));
      }

      ::org::orekit::time::TCBScale LazyLoadedTimeScales::getTCB() const
      {
        return ::org::orekit::time::TCBScale(env->callObjectMethod(this$, mids$[mid_getTCB_a36a736c24a84bc8]));
      }

      ::org::orekit::time::TCGScale LazyLoadedTimeScales::getTCG() const
      {
        return ::org::orekit::time::TCGScale(env->callObjectMethod(this$, mids$[mid_getTCG_bc03267fa6cc0068]));
      }

      ::org::orekit::time::TDBScale LazyLoadedTimeScales::getTDB() const
      {
        return ::org::orekit::time::TDBScale(env->callObjectMethod(this$, mids$[mid_getTDB_01a9b50b4c9899e0]));
      }

      ::org::orekit::time::TTScale LazyLoadedTimeScales::getTT() const
      {
        return ::org::orekit::time::TTScale(env->callObjectMethod(this$, mids$[mid_getTT_1cee2d27f65b3e44]));
      }

      ::org::orekit::time::UT1Scale LazyLoadedTimeScales::getUT1(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_9806ff584bac5289], a0.this$));
      }

      ::org::orekit::time::UT1Scale LazyLoadedTimeScales::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_03564ba2f50e6e3b], a0.this$, a1));
      }

      ::org::orekit::time::UTCScale LazyLoadedTimeScales::getUTC() const
      {
        return ::org::orekit::time::UTCScale(env->callObjectMethod(this$, mids$[mid_getUTC_4611f4f4ac7b3711]));
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
      static PyObject *t_LazyLoadedTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedTimeScales_init_(t_LazyLoadedTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedTimeScales_addDefaultUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self);
      static PyObject *t_LazyLoadedTimeScales_addUTCTAIOffsetsLoader(t_LazyLoadedTimeScales *self, PyObject *arg);
      static PyObject *t_LazyLoadedTimeScales_clearUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self);
      static PyObject *t_LazyLoadedTimeScales_getBDT(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGLONASS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGMST(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGPS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getGST(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getIRNSS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getQZSS(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTAI(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTCB(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTCG(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTDB(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getTT(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getUT1(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_getUTC(t_LazyLoadedTimeScales *self, PyObject *args);
      static PyObject *t_LazyLoadedTimeScales_get__bDT(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__gLONASS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__gPS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__gST(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__iRNSS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__qZSS(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tAI(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tCB(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tCG(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tDB(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__tT(t_LazyLoadedTimeScales *self, void *data);
      static PyObject *t_LazyLoadedTimeScales_get__uTC(t_LazyLoadedTimeScales *self, void *data);
      static PyGetSetDef t_LazyLoadedTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, bDT),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, gLONASS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, gPS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, gST),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, iRNSS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, qZSS),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tAI),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tCB),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tCG),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tDB),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, tT),
        DECLARE_GET_FIELD(t_LazyLoadedTimeScales, uTC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedTimeScales__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, addDefaultUTCTAIOffsetsLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, addUTCTAIOffsetsLoader, METH_O),
        DECLARE_METHOD(t_LazyLoadedTimeScales, clearUTCTAIOffsetsLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getBDT, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGLONASS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGMST, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGPS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getGST, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getIRNSS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getQZSS, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTAI, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTCB, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTCG, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTDB, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getTT, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getUT1, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedTimeScales, getUTC, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedTimeScales)[] = {
        { Py_tp_methods, t_LazyLoadedTimeScales__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedTimeScales_init_ },
        { Py_tp_getset, t_LazyLoadedTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedTimeScales)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeScales),
        NULL
      };

      DEFINE_TYPE(LazyLoadedTimeScales, t_LazyLoadedTimeScales, LazyLoadedTimeScales);

      void t_LazyLoadedTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedTimeScales), &PY_TYPE_DEF(LazyLoadedTimeScales), module, "LazyLoadedTimeScales", 0);
      }

      void t_LazyLoadedTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedTimeScales), "class_", make_descriptor(LazyLoadedTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedTimeScales), "wrapfn_", make_descriptor(t_LazyLoadedTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedTimeScales), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedTimeScales::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedTimeScales::wrap_Object(LazyLoadedTimeScales(((t_LazyLoadedTimeScales *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedTimeScales_init_(t_LazyLoadedTimeScales *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::LazyLoadedEop a0((jobject) NULL);
        LazyLoadedTimeScales object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::LazyLoadedEop::initializeClass, &a0))
        {
          INT_CALL(object = LazyLoadedTimeScales(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedTimeScales_addDefaultUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self)
      {
        OBJ_CALL(self->object.addDefaultUTCTAIOffsetsLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedTimeScales_addUTCTAIOffsetsLoader(t_LazyLoadedTimeScales *self, PyObject *arg)
      {
        ::org::orekit::time::UTCTAIOffsetsLoader a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::UTCTAIOffsetsLoader::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addUTCTAIOffsetsLoader(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addUTCTAIOffsetsLoader", arg);
        return NULL;
      }

      static PyObject *t_LazyLoadedTimeScales_clearUTCTAIOffsetsLoaders(t_LazyLoadedTimeScales *self)
      {
        OBJ_CALL(self->object.clearUTCTAIOffsetsLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedTimeScales_getBDT(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::BDTScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getBDT());
          return ::org::orekit::time::t_BDTScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getBDT", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGLONASS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::GLONASSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGLONASS());
          return ::org::orekit::time::t_GLONASSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGLONASS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGMST(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::GMSTScale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getGMST(a0, a1));
          return ::org::orekit::time::t_GMSTScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGMST", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGPS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::GPSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGPS());
          return ::org::orekit::time::t_GPSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGPS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getGST(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::GalileoScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getGST());
          return ::org::orekit::time::t_GalileoScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getGST", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getIRNSS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::IRNSSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIRNSS());
          return ::org::orekit::time::t_IRNSSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getIRNSS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getQZSS(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::QZSSScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getQZSS());
          return ::org::orekit::time::t_QZSSScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getQZSS", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTAI(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TAIScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTAI());
          return ::org::orekit::time::t_TAIScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTAI", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTCB(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TCBScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTCB());
          return ::org::orekit::time::t_TCBScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTCB", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTCG(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TCGScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTCG());
          return ::org::orekit::time::t_TCGScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTCG", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTDB(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TDBScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTDB());
          return ::org::orekit::time::t_TDBScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTDB", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getTT(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::TTScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getTT());
          return ::org::orekit::time::t_TTScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getTT", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getUT1(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::EOPHistory a0((jobject) NULL);
            ::org::orekit::time::UT1Scale result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getUT1(a0));
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
              OBJ_CALL(result = self->object.getUT1(a0, a1));
              return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getUT1", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_getUTC(t_LazyLoadedTimeScales *self, PyObject *args)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getUTC());
          return ::org::orekit::time::t_UTCScale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedTimeScales), (PyObject *) self, "getUTC", args, 2);
      }

      static PyObject *t_LazyLoadedTimeScales_get__bDT(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::BDTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__gLONASS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__gPS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::GPSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__gST(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__iRNSS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__qZSS(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tAI(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TAIScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tCB(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TCBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tCG(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TCGScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tDB(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TDBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__tT(t_LazyLoadedTimeScales *self, void *data)
      {
        ::org::orekit::time::TTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedTimeScales_get__uTC(t_LazyLoadedTimeScales *self, void *data)
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
#include "org/orekit/rugged/raster/TileFactory.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *TileFactory::class$ = NULL;
        jmethodID *TileFactory::mids$ = NULL;
        bool TileFactory::live$ = false;

        jclass TileFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/TileFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createTile_2f7030d942f36841] = env->getMethodID(cls, "createTile", "()Lorg/orekit/rugged/raster/Tile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::raster::Tile TileFactory::createTile() const
        {
          return ::org::orekit::rugged::raster::Tile(env->callObjectMethod(this$, mids$[mid_createTile_2f7030d942f36841]));
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
        static PyObject *t_TileFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileFactory_of_(t_TileFactory *self, PyObject *args);
        static PyObject *t_TileFactory_createTile(t_TileFactory *self);
        static PyObject *t_TileFactory_get__parameters_(t_TileFactory *self, void *data);
        static PyGetSetDef t_TileFactory__fields_[] = {
          DECLARE_GET_FIELD(t_TileFactory, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TileFactory__methods_[] = {
          DECLARE_METHOD(t_TileFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileFactory, of_, METH_VARARGS),
          DECLARE_METHOD(t_TileFactory, createTile, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TileFactory)[] = {
          { Py_tp_methods, t_TileFactory__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TileFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TileFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TileFactory, t_TileFactory, TileFactory);
        PyObject *t_TileFactory::wrap_Object(const TileFactory& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TileFactory::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TileFactory *self = (t_TileFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TileFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TileFactory::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TileFactory *self = (t_TileFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TileFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(TileFactory), &PY_TYPE_DEF(TileFactory), module, "TileFactory", 0);
        }

        void t_TileFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileFactory), "class_", make_descriptor(TileFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileFactory), "wrapfn_", make_descriptor(t_TileFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TileFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TileFactory::initializeClass, 1)))
            return NULL;
          return t_TileFactory::wrap_Object(TileFactory(((t_TileFactory *) arg)->object.this$));
        }
        static PyObject *t_TileFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TileFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TileFactory_of_(t_TileFactory *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_TileFactory_createTile(t_TileFactory *self)
        {
          ::org::orekit::rugged::raster::Tile result((jobject) NULL);
          OBJ_CALL(result = self->object.createTile());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::rugged::raster::t_Tile::wrap_Object(result);
        }
        static PyObject *t_TileFactory_get__parameters_(t_TileFactory *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *PointVectorValuePair::class$ = NULL;
      jmethodID *PointVectorValuePair::mids$ = NULL;
      bool PointVectorValuePair::live$ = false;

      jclass PointVectorValuePair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/PointVectorValuePair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e1f4b15468f5564a] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_init$_d7aa1cbd3c7df90a] = env->getMethodID(cls, "<init>", "([D[DZ)V");
          mids$[mid_getPoint_60c7040667a7dc5c] = env->getMethodID(cls, "getPoint", "()[D");
          mids$[mid_getPointRef_60c7040667a7dc5c] = env->getMethodID(cls, "getPointRef", "()[D");
          mids$[mid_getValue_60c7040667a7dc5c] = env->getMethodID(cls, "getValue", "()[D");
          mids$[mid_getValueRef_60c7040667a7dc5c] = env->getMethodID(cls, "getValueRef", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PointVectorValuePair::PointVectorValuePair(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_e1f4b15468f5564a, a0.this$, a1.this$)) {}

      PointVectorValuePair::PointVectorValuePair(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_d7aa1cbd3c7df90a, a0.this$, a1.this$, a2)) {}

      JArray< jdouble > PointVectorValuePair::getPoint() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPoint_60c7040667a7dc5c]));
      }

      JArray< jdouble > PointVectorValuePair::getPointRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPointRef_60c7040667a7dc5c]));
      }

      JArray< jdouble > PointVectorValuePair::getValue() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValue_60c7040667a7dc5c]));
      }

      JArray< jdouble > PointVectorValuePair::getValueRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValueRef_60c7040667a7dc5c]));
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
      static PyObject *t_PointVectorValuePair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointVectorValuePair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointVectorValuePair_of_(t_PointVectorValuePair *self, PyObject *args);
      static int t_PointVectorValuePair_init_(t_PointVectorValuePair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PointVectorValuePair_getPoint(t_PointVectorValuePair *self);
      static PyObject *t_PointVectorValuePair_getPointRef(t_PointVectorValuePair *self);
      static PyObject *t_PointVectorValuePair_getValue(t_PointVectorValuePair *self, PyObject *args);
      static PyObject *t_PointVectorValuePair_getValueRef(t_PointVectorValuePair *self);
      static PyObject *t_PointVectorValuePair_get__point(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__pointRef(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__value(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__valueRef(t_PointVectorValuePair *self, void *data);
      static PyObject *t_PointVectorValuePair_get__parameters_(t_PointVectorValuePair *self, void *data);
      static PyGetSetDef t_PointVectorValuePair__fields_[] = {
        DECLARE_GET_FIELD(t_PointVectorValuePair, point),
        DECLARE_GET_FIELD(t_PointVectorValuePair, pointRef),
        DECLARE_GET_FIELD(t_PointVectorValuePair, value),
        DECLARE_GET_FIELD(t_PointVectorValuePair, valueRef),
        DECLARE_GET_FIELD(t_PointVectorValuePair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PointVectorValuePair__methods_[] = {
        DECLARE_METHOD(t_PointVectorValuePair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointVectorValuePair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointVectorValuePair, of_, METH_VARARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getPoint, METH_NOARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getPointRef, METH_NOARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getValue, METH_VARARGS),
        DECLARE_METHOD(t_PointVectorValuePair, getValueRef, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PointVectorValuePair)[] = {
        { Py_tp_methods, t_PointVectorValuePair__methods_ },
        { Py_tp_init, (void *) t_PointVectorValuePair_init_ },
        { Py_tp_getset, t_PointVectorValuePair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PointVectorValuePair)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::Pair),
        NULL
      };

      DEFINE_TYPE(PointVectorValuePair, t_PointVectorValuePair, PointVectorValuePair);
      PyObject *t_PointVectorValuePair::wrap_Object(const PointVectorValuePair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointVectorValuePair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointVectorValuePair *self = (t_PointVectorValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PointVectorValuePair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointVectorValuePair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointVectorValuePair *self = (t_PointVectorValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PointVectorValuePair::install(PyObject *module)
      {
        installType(&PY_TYPE(PointVectorValuePair), &PY_TYPE_DEF(PointVectorValuePair), module, "PointVectorValuePair", 0);
      }

      void t_PointVectorValuePair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointVectorValuePair), "class_", make_descriptor(PointVectorValuePair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointVectorValuePair), "wrapfn_", make_descriptor(t_PointVectorValuePair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointVectorValuePair), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PointVectorValuePair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PointVectorValuePair::initializeClass, 1)))
          return NULL;
        return t_PointVectorValuePair::wrap_Object(PointVectorValuePair(((t_PointVectorValuePair *) arg)->object.this$));
      }
      static PyObject *t_PointVectorValuePair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PointVectorValuePair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PointVectorValuePair_of_(t_PointVectorValuePair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PointVectorValuePair_init_(t_PointVectorValuePair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            PointVectorValuePair object((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              INT_CALL(object = PointVectorValuePair(a0, a1));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = PY_TYPE(JArrayDouble);
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean a2;
            PointVectorValuePair object((jobject) NULL);

            if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
            {
              INT_CALL(object = PointVectorValuePair(a0, a1, a2));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = PY_TYPE(JArrayDouble);
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

      static PyObject *t_PointVectorValuePair_getPoint(t_PointVectorValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPoint());
        return result.wrap();
      }

      static PyObject *t_PointVectorValuePair_getPointRef(t_PointVectorValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPointRef());
        return result.wrap();
      }

      static PyObject *t_PointVectorValuePair_getValue(t_PointVectorValuePair *self, PyObject *args)
      {
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getValue());
          return result.wrap();
        }

        return callSuper(PY_TYPE(PointVectorValuePair), (PyObject *) self, "getValue", args, 2);
      }

      static PyObject *t_PointVectorValuePair_getValueRef(t_PointVectorValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValueRef());
        return result.wrap();
      }
      static PyObject *t_PointVectorValuePair_get__parameters_(t_PointVectorValuePair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_PointVectorValuePair_get__point(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return value.wrap();
      }

      static PyObject *t_PointVectorValuePair_get__pointRef(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPointRef());
        return value.wrap();
      }

      static PyObject *t_PointVectorValuePair_get__value(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return value.wrap();
      }

      static PyObject *t_PointVectorValuePair_get__valueRef(t_PointVectorValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValueRef());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey.h"
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

              ::java::lang::Class *AcmDataSubStructureKey::class$ = NULL;
              jmethodID *AcmDataSubStructureKey::mids$ = NULL;
              bool AcmDataSubStructureKey::live$ = false;
              AcmDataSubStructureKey *AcmDataSubStructureKey::AD = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::ATT = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::COV = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::MAN = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::PHYS = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::USER = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::ad = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::att = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::cov = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::man = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::phys = NULL;
              AcmDataSubStructureKey *AcmDataSubStructureKey::user = NULL;

              jclass AcmDataSubStructureKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_3c68c849d0a293e9] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/adm/acm/AcmParser;)Z");
                  mids$[mid_valueOf_f37fca85579f67e0] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;");
                  mids$[mid_values_5ef48a5bbc8d8ce7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AD = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "AD", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  ATT = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "ATT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  COV = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  MAN = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  PHYS = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  USER = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  ad = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "ad", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  att = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "att", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  cov = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "cov", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  man = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "man", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  phys = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "phys", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  user = new AcmDataSubStructureKey(env->getStaticObjectField(cls, "user", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AcmDataSubStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser & a1) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_3c68c849d0a293e9], a0.this$, a1.this$);
              }

              AcmDataSubStructureKey AcmDataSubStructureKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AcmDataSubStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f37fca85579f67e0], a0.this$));
              }

              JArray< AcmDataSubStructureKey > AcmDataSubStructureKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AcmDataSubStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_5ef48a5bbc8d8ce7]));
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
              static PyObject *t_AcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmDataSubStructureKey_of_(t_AcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_AcmDataSubStructureKey_process(t_AcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_AcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AcmDataSubStructureKey_values(PyTypeObject *type);
              static PyObject *t_AcmDataSubStructureKey_get__parameters_(t_AcmDataSubStructureKey *self, void *data);
              static PyGetSetDef t_AcmDataSubStructureKey__fields_[] = {
                DECLARE_GET_FIELD(t_AcmDataSubStructureKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmDataSubStructureKey__methods_[] = {
                DECLARE_METHOD(t_AcmDataSubStructureKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AcmDataSubStructureKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmDataSubStructureKey)[] = {
                { Py_tp_methods, t_AcmDataSubStructureKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AcmDataSubStructureKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmDataSubStructureKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AcmDataSubStructureKey, t_AcmDataSubStructureKey, AcmDataSubStructureKey);
              PyObject *t_AcmDataSubStructureKey::wrap_Object(const AcmDataSubStructureKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmDataSubStructureKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmDataSubStructureKey *self = (t_AcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AcmDataSubStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmDataSubStructureKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmDataSubStructureKey *self = (t_AcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AcmDataSubStructureKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmDataSubStructureKey), &PY_TYPE_DEF(AcmDataSubStructureKey), module, "AcmDataSubStructureKey", 0);
              }

              void t_AcmDataSubStructureKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "class_", make_descriptor(AcmDataSubStructureKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "wrapfn_", make_descriptor(t_AcmDataSubStructureKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AcmDataSubStructureKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "AD", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::AD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "ATT", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::ATT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "COV", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "MAN", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "PHYS", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "USER", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::USER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "ad", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::ad)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "att", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::att)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "cov", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::cov)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "man", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::man)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "phys", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::phys)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmDataSubStructureKey), "user", make_descriptor(t_AcmDataSubStructureKey::wrap_Object(*AcmDataSubStructureKey::user)));
              }

              static PyObject *t_AcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmDataSubStructureKey::initializeClass, 1)))
                  return NULL;
                return t_AcmDataSubStructureKey::wrap_Object(AcmDataSubStructureKey(((t_AcmDataSubStructureKey *) arg)->object.this$));
              }
              static PyObject *t_AcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmDataSubStructureKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmDataSubStructureKey_of_(t_AcmDataSubStructureKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AcmDataSubStructureKey_process(t_AcmDataSubStructureKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmParser::parameters_))
                {
                  OBJ_CALL(result = self->object.process(a0, a1));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AcmDataSubStructureKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmDataSubStructureKey::valueOf(a0));
                  return t_AcmDataSubStructureKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AcmDataSubStructureKey_values(PyTypeObject *type)
              {
                JArray< AcmDataSubStructureKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmDataSubStructureKey::values());
                return JArray<jobject>(result.this$).wrap(t_AcmDataSubStructureKey::wrap_jobject);
              }
              static PyObject *t_AcmDataSubStructureKey_get__parameters_(t_AcmDataSubStructureKey *self, void *data)
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
#include "org/hipparchus/linear/AnyMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *AnyMatrix::class$ = NULL;
      jmethodID *AnyMatrix::mids$ = NULL;
      bool AnyMatrix::live$ = false;

      jclass AnyMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/AnyMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getRowDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isSquare_b108b35ef48e27bd] = env->getMethodID(cls, "isSquare", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint AnyMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_570ce0828f81a2c1]);
      }

      jint AnyMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_570ce0828f81a2c1]);
      }

      jboolean AnyMatrix::isSquare() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSquare_b108b35ef48e27bd]);
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
      static PyObject *t_AnyMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AnyMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AnyMatrix_getColumnDimension(t_AnyMatrix *self);
      static PyObject *t_AnyMatrix_getRowDimension(t_AnyMatrix *self);
      static PyObject *t_AnyMatrix_isSquare(t_AnyMatrix *self);
      static PyObject *t_AnyMatrix_get__columnDimension(t_AnyMatrix *self, void *data);
      static PyObject *t_AnyMatrix_get__rowDimension(t_AnyMatrix *self, void *data);
      static PyObject *t_AnyMatrix_get__square(t_AnyMatrix *self, void *data);
      static PyGetSetDef t_AnyMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_AnyMatrix, columnDimension),
        DECLARE_GET_FIELD(t_AnyMatrix, rowDimension),
        DECLARE_GET_FIELD(t_AnyMatrix, square),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AnyMatrix__methods_[] = {
        DECLARE_METHOD(t_AnyMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AnyMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AnyMatrix, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_AnyMatrix, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_AnyMatrix, isSquare, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AnyMatrix)[] = {
        { Py_tp_methods, t_AnyMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AnyMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AnyMatrix)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AnyMatrix, t_AnyMatrix, AnyMatrix);

      void t_AnyMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(AnyMatrix), &PY_TYPE_DEF(AnyMatrix), module, "AnyMatrix", 0);
      }

      void t_AnyMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AnyMatrix), "class_", make_descriptor(AnyMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AnyMatrix), "wrapfn_", make_descriptor(t_AnyMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AnyMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AnyMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AnyMatrix::initializeClass, 1)))
          return NULL;
        return t_AnyMatrix::wrap_Object(AnyMatrix(((t_AnyMatrix *) arg)->object.this$));
      }
      static PyObject *t_AnyMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AnyMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AnyMatrix_getColumnDimension(t_AnyMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AnyMatrix_getRowDimension(t_AnyMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AnyMatrix_isSquare(t_AnyMatrix *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSquare());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_AnyMatrix_get__columnDimension(t_AnyMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AnyMatrix_get__rowDimension(t_AnyMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AnyMatrix_get__square(t_AnyMatrix *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSquare());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/GeometricMean.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/moment/GeometricMean.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfLogs.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *GeometricMean::class$ = NULL;
          jmethodID *GeometricMean::mids$ = NULL;
          bool GeometricMean::live$ = false;

          jclass GeometricMean::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/GeometricMean");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_b873a77489eff3da] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/summary/SumOfLogs;)V");
              mids$[mid_aggregate_e47a6fc0848379ab] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/GeometricMean;)V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_b7aadfaef0aaff44] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/GeometricMean;");
              mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_dff5885c2c873297] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_17db3a65980d3441] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GeometricMean::GeometricMean() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          GeometricMean::GeometricMean(const ::org::hipparchus::stat::descriptive::summary::SumOfLogs & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_b873a77489eff3da, a0.this$)) {}

          void GeometricMean::aggregate(const GeometricMean & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_e47a6fc0848379ab], a0.this$);
          }

          void GeometricMean::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          GeometricMean GeometricMean::copy() const
          {
            return GeometricMean(env->callObjectMethod(this$, mids$[mid_copy_b7aadfaef0aaff44]));
          }

          jdouble GeometricMean::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
          }

          jlong GeometricMean::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
          }

          jdouble GeometricMean::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_dff5885c2c873297]);
          }

          void GeometricMean::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_17db3a65980d3441], a0);
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
          static PyObject *t_GeometricMean_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeometricMean_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GeometricMean_init_(t_GeometricMean *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GeometricMean_aggregate(t_GeometricMean *self, PyObject *arg);
          static PyObject *t_GeometricMean_clear(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_copy(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_evaluate(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_getN(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_getResult(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_increment(t_GeometricMean *self, PyObject *args);
          static PyObject *t_GeometricMean_get__n(t_GeometricMean *self, void *data);
          static PyObject *t_GeometricMean_get__result(t_GeometricMean *self, void *data);
          static PyGetSetDef t_GeometricMean__fields_[] = {
            DECLARE_GET_FIELD(t_GeometricMean, n),
            DECLARE_GET_FIELD(t_GeometricMean, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GeometricMean__methods_[] = {
            DECLARE_METHOD(t_GeometricMean, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometricMean, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeometricMean, aggregate, METH_O),
            DECLARE_METHOD(t_GeometricMean, clear, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, copy, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, getN, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, getResult, METH_VARARGS),
            DECLARE_METHOD(t_GeometricMean, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeometricMean)[] = {
            { Py_tp_methods, t_GeometricMean__methods_ },
            { Py_tp_init, (void *) t_GeometricMean_init_ },
            { Py_tp_getset, t_GeometricMean__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeometricMean)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(GeometricMean, t_GeometricMean, GeometricMean);

          void t_GeometricMean::install(PyObject *module)
          {
            installType(&PY_TYPE(GeometricMean), &PY_TYPE_DEF(GeometricMean), module, "GeometricMean", 0);
          }

          void t_GeometricMean::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricMean), "class_", make_descriptor(GeometricMean::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricMean), "wrapfn_", make_descriptor(t_GeometricMean::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricMean), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeometricMean_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeometricMean::initializeClass, 1)))
              return NULL;
            return t_GeometricMean::wrap_Object(GeometricMean(((t_GeometricMean *) arg)->object.this$));
          }
          static PyObject *t_GeometricMean_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeometricMean::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GeometricMean_init_(t_GeometricMean *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                GeometricMean object((jobject) NULL);

                INT_CALL(object = GeometricMean());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::summary::SumOfLogs a0((jobject) NULL);
                GeometricMean object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::summary::SumOfLogs::initializeClass, &a0))
                {
                  INT_CALL(object = GeometricMean(a0));
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

          static PyObject *t_GeometricMean_aggregate(t_GeometricMean *self, PyObject *arg)
          {
            GeometricMean a0((jobject) NULL);

            if (!parseArg(arg, "k", GeometricMean::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_GeometricMean_clear(t_GeometricMean *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_GeometricMean_copy(t_GeometricMean *self, PyObject *args)
          {
            GeometricMean result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_GeometricMean::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_GeometricMean_evaluate(t_GeometricMean *self, PyObject *args)
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

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_GeometricMean_getN(t_GeometricMean *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_GeometricMean_getResult(t_GeometricMean *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_GeometricMean_increment(t_GeometricMean *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GeometricMean), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_GeometricMean_get__n(t_GeometricMean *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_GeometricMean_get__result(t_GeometricMean *self, void *data)
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
#include "org/orekit/forces/drag/DragSensitive.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *DragSensitive::class$ = NULL;
        jmethodID *DragSensitive::mids$ = NULL;
        bool DragSensitive::live$ = false;
        ::java::lang::String *DragSensitive::DRAG_COEFFICIENT = NULL;
        ::java::lang::String *DragSensitive::GLOBAL_DRAG_FACTOR = NULL;
        ::java::lang::String *DragSensitive::LIFT_RATIO = NULL;

        jclass DragSensitive::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/DragSensitive");

            mids$ = new jmethodID[max_mid];
            mids$[mid_dragAcceleration_6cbf0b5d7046f26b] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dragAcceleration_fc130a15f669db38] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getDragParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DRAG_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "DRAG_COEFFICIENT", "Ljava/lang/String;"));
            GLOBAL_DRAG_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "GLOBAL_DRAG_FACTOR", "Ljava/lang/String;"));
            LIFT_RATIO = new ::java::lang::String(env->getStaticObjectField(cls, "LIFT_RATIO", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DragSensitive::dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_6cbf0b5d7046f26b], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DragSensitive::dragAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_fc130a15f669db38], a0.this$, a1, a2.this$, a3.this$));
        }

        ::java::util::List DragSensitive::getDragParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDragParametersDrivers_2afa36052df4765d]));
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
      namespace drag {
        static PyObject *t_DragSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DragSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DragSensitive_dragAcceleration(t_DragSensitive *self, PyObject *args);
        static PyObject *t_DragSensitive_getDragParametersDrivers(t_DragSensitive *self);
        static PyObject *t_DragSensitive_get__dragParametersDrivers(t_DragSensitive *self, void *data);
        static PyGetSetDef t_DragSensitive__fields_[] = {
          DECLARE_GET_FIELD(t_DragSensitive, dragParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DragSensitive__methods_[] = {
          DECLARE_METHOD(t_DragSensitive, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DragSensitive, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DragSensitive, dragAcceleration, METH_VARARGS),
          DECLARE_METHOD(t_DragSensitive, getDragParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DragSensitive)[] = {
          { Py_tp_methods, t_DragSensitive__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DragSensitive__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DragSensitive)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DragSensitive, t_DragSensitive, DragSensitive);

        void t_DragSensitive::install(PyObject *module)
        {
          installType(&PY_TYPE(DragSensitive), &PY_TYPE_DEF(DragSensitive), module, "DragSensitive", 0);
        }

        void t_DragSensitive::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "class_", make_descriptor(DragSensitive::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "wrapfn_", make_descriptor(t_DragSensitive::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "boxfn_", make_descriptor(boxObject));
          env->getClass(DragSensitive::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "DRAG_COEFFICIENT", make_descriptor(j2p(*DragSensitive::DRAG_COEFFICIENT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "GLOBAL_DRAG_FACTOR", make_descriptor(j2p(*DragSensitive::GLOBAL_DRAG_FACTOR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "LIFT_RATIO", make_descriptor(j2p(*DragSensitive::LIFT_RATIO)));
        }

        static PyObject *t_DragSensitive_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DragSensitive::initializeClass, 1)))
            return NULL;
          return t_DragSensitive::wrap_Object(DragSensitive(((t_DragSensitive *) arg)->object.this$));
        }
        static PyObject *t_DragSensitive_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DragSensitive::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DragSensitive_dragAcceleration(t_DragSensitive *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kDk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KKK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "dragAcceleration", args);
          return NULL;
        }

        static PyObject *t_DragSensitive_getDragParametersDrivers(t_DragSensitive *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDragParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_DragSensitive_get__dragParametersDrivers(t_DragSensitive *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDragParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *XmlSubStructureKey::class$ = NULL;
            jmethodID *XmlSubStructureKey::mids$ = NULL;
            bool XmlSubStructureKey::live$ = false;
            XmlSubStructureKey *XmlSubStructureKey::COMMENT = NULL;
            XmlSubStructureKey *XmlSubStructureKey::additionalParameters = NULL;
            XmlSubStructureKey *XmlSubStructureKey::covarianceMatrix = NULL;
            XmlSubStructureKey *XmlSubStructureKey::odParameters = NULL;
            XmlSubStructureKey *XmlSubStructureKey::relativeMetadataData = NULL;
            XmlSubStructureKey *XmlSubStructureKey::relativeStateVector = NULL;
            XmlSubStructureKey *XmlSubStructureKey::segment = NULL;
            XmlSubStructureKey *XmlSubStructureKey::stateVector = NULL;
            XmlSubStructureKey *XmlSubStructureKey::userDefinedParameters = NULL;

            jclass XmlSubStructureKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_609bc51c22104b41] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/cdm/CdmParser;)Z");
                mids$[mid_valueOf_8ed0115cc2676fed] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;");
                mids$[mid_values_4d1a3390e0f11cec] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new XmlSubStructureKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                additionalParameters = new XmlSubStructureKey(env->getStaticObjectField(cls, "additionalParameters", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                covarianceMatrix = new XmlSubStructureKey(env->getStaticObjectField(cls, "covarianceMatrix", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                odParameters = new XmlSubStructureKey(env->getStaticObjectField(cls, "odParameters", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                relativeMetadataData = new XmlSubStructureKey(env->getStaticObjectField(cls, "relativeMetadataData", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                relativeStateVector = new XmlSubStructureKey(env->getStaticObjectField(cls, "relativeStateVector", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                segment = new XmlSubStructureKey(env->getStaticObjectField(cls, "segment", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                stateVector = new XmlSubStructureKey(env->getStaticObjectField(cls, "stateVector", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                userDefinedParameters = new XmlSubStructureKey(env->getStaticObjectField(cls, "userDefinedParameters", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean XmlSubStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmParser & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_609bc51c22104b41], a0.this$, a1.this$);
            }

            XmlSubStructureKey XmlSubStructureKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return XmlSubStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8ed0115cc2676fed], a0.this$));
            }

            JArray< XmlSubStructureKey > XmlSubStructureKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< XmlSubStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_4d1a3390e0f11cec]));
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
            static PyObject *t_XmlSubStructureKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlSubStructureKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlSubStructureKey_of_(t_XmlSubStructureKey *self, PyObject *args);
            static PyObject *t_XmlSubStructureKey_process(t_XmlSubStructureKey *self, PyObject *args);
            static PyObject *t_XmlSubStructureKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_XmlSubStructureKey_values(PyTypeObject *type);
            static PyObject *t_XmlSubStructureKey_get__parameters_(t_XmlSubStructureKey *self, void *data);
            static PyGetSetDef t_XmlSubStructureKey__fields_[] = {
              DECLARE_GET_FIELD(t_XmlSubStructureKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XmlSubStructureKey__methods_[] = {
              DECLARE_METHOD(t_XmlSubStructureKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlSubStructureKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlSubStructureKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_XmlSubStructureKey, process, METH_VARARGS),
              DECLARE_METHOD(t_XmlSubStructureKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_XmlSubStructureKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlSubStructureKey)[] = {
              { Py_tp_methods, t_XmlSubStructureKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_XmlSubStructureKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlSubStructureKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(XmlSubStructureKey, t_XmlSubStructureKey, XmlSubStructureKey);
            PyObject *t_XmlSubStructureKey::wrap_Object(const XmlSubStructureKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XmlSubStructureKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XmlSubStructureKey *self = (t_XmlSubStructureKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_XmlSubStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XmlSubStructureKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XmlSubStructureKey *self = (t_XmlSubStructureKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_XmlSubStructureKey::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlSubStructureKey), &PY_TYPE_DEF(XmlSubStructureKey), module, "XmlSubStructureKey", 0);
            }

            void t_XmlSubStructureKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "class_", make_descriptor(XmlSubStructureKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "wrapfn_", make_descriptor(t_XmlSubStructureKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(XmlSubStructureKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "COMMENT", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "additionalParameters", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::additionalParameters)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "covarianceMatrix", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::covarianceMatrix)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "odParameters", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::odParameters)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "relativeMetadataData", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::relativeMetadataData)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "relativeStateVector", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::relativeStateVector)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "segment", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::segment)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "stateVector", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::stateVector)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "userDefinedParameters", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::userDefinedParameters)));
            }

            static PyObject *t_XmlSubStructureKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlSubStructureKey::initializeClass, 1)))
                return NULL;
              return t_XmlSubStructureKey::wrap_Object(XmlSubStructureKey(((t_XmlSubStructureKey *) arg)->object.this$));
            }
            static PyObject *t_XmlSubStructureKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlSubStructureKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_XmlSubStructureKey_of_(t_XmlSubStructureKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_XmlSubStructureKey_process(t_XmlSubStructureKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmParser a1((jobject) NULL);
              PyTypeObject **p1;
              jboolean result;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::cdm::t_CdmParser::parameters_))
              {
                OBJ_CALL(result = self->object.process(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_XmlSubStructureKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              XmlSubStructureKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XmlSubStructureKey::valueOf(a0));
                return t_XmlSubStructureKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_XmlSubStructureKey_values(PyTypeObject *type)
            {
              JArray< XmlSubStructureKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XmlSubStructureKey::values());
              return JArray<jobject>(result.this$).wrap(t_XmlSubStructureKey::wrap_jobject);
            }
            static PyObject *t_XmlSubStructureKey_get__parameters_(t_XmlSubStructureKey *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedDoubleArrayConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedDoubleArrayConsumer::mids$ = NULL;
            bool ParseToken$IndexedDoubleArrayConsumer::live$ = false;

            jclass ParseToken$IndexedDoubleArrayConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_7169a8c8a60b8b2c] = env->getMethodID(cls, "accept", "(I[D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedDoubleArrayConsumer::accept(jint a0, const JArray< jdouble > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_7169a8c8a60b8b2c], a0, a1.this$);
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
            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_accept(t_ParseToken$IndexedDoubleArrayConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedDoubleArrayConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedDoubleArrayConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedDoubleArrayConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedDoubleArrayConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedDoubleArrayConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedDoubleArrayConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedDoubleArrayConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedDoubleArrayConsumer, t_ParseToken$IndexedDoubleArrayConsumer, ParseToken$IndexedDoubleArrayConsumer);

            void t_ParseToken$IndexedDoubleArrayConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedDoubleArrayConsumer), &PY_TYPE_DEF(ParseToken$IndexedDoubleArrayConsumer), module, "ParseToken$IndexedDoubleArrayConsumer", 0);
            }

            void t_ParseToken$IndexedDoubleArrayConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleArrayConsumer), "class_", make_descriptor(ParseToken$IndexedDoubleArrayConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleArrayConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedDoubleArrayConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedDoubleArrayConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedDoubleArrayConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedDoubleArrayConsumer::wrap_Object(ParseToken$IndexedDoubleArrayConsumer(((t_ParseToken$IndexedDoubleArrayConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedDoubleArrayConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedDoubleArrayConsumer_accept(t_ParseToken$IndexedDoubleArrayConsumer *self, PyObject *args)
            {
              jint a0;
              JArray< jdouble > a1((jobject) NULL);

              if (!parseArgs(args, "I[D", &a0, &a1))
              {
                OBJ_CALL(self->object.accept(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
#include "org/orekit/propagation/integration/PythonFieldStateMapper.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonFieldStateMapper::class$ = NULL;
        jmethodID *PythonFieldStateMapper::mids$ = NULL;
        bool PythonFieldStateMapper::live$ = false;

        jclass PythonFieldStateMapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonFieldStateMapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2312a9429af04dde] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_mapArrayToState_2bc4466f5de6b26b] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_mapStateToArray_e85151cf356bb2fe] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldStateMapper::PythonFieldStateMapper(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::propagation::integration::FieldStateMapper(env->newObject(initializeClass, &mids$, mid_init$_2312a9429af04dde, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        void PythonFieldStateMapper::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonFieldStateMapper::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonFieldStateMapper::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonFieldStateMapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldStateMapper_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldStateMapper_of_(t_PythonFieldStateMapper *self, PyObject *args);
        static int t_PythonFieldStateMapper_init_(t_PythonFieldStateMapper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldStateMapper_finalize(t_PythonFieldStateMapper *self);
        static PyObject *t_PythonFieldStateMapper_pythonExtension(t_PythonFieldStateMapper *self, PyObject *args);
        static jobject JNICALL t_PythonFieldStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static void JNICALL t_PythonFieldStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldStateMapper_get__self(t_PythonFieldStateMapper *self, void *data);
        static PyObject *t_PythonFieldStateMapper_get__parameters_(t_PythonFieldStateMapper *self, void *data);
        static PyGetSetDef t_PythonFieldStateMapper__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldStateMapper, self),
          DECLARE_GET_FIELD(t_PythonFieldStateMapper, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldStateMapper__methods_[] = {
          DECLARE_METHOD(t_PythonFieldStateMapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldStateMapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldStateMapper, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldStateMapper, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldStateMapper, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldStateMapper)[] = {
          { Py_tp_methods, t_PythonFieldStateMapper__methods_ },
          { Py_tp_init, (void *) t_PythonFieldStateMapper_init_ },
          { Py_tp_getset, t_PythonFieldStateMapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldStateMapper)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldStateMapper),
          NULL
        };

        DEFINE_TYPE(PythonFieldStateMapper, t_PythonFieldStateMapper, PythonFieldStateMapper);
        PyObject *t_PythonFieldStateMapper::wrap_Object(const PythonFieldStateMapper& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldStateMapper::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldStateMapper *self = (t_PythonFieldStateMapper *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldStateMapper::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldStateMapper::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldStateMapper *self = (t_PythonFieldStateMapper *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldStateMapper::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldStateMapper), &PY_TYPE_DEF(PythonFieldStateMapper), module, "PythonFieldStateMapper", 1);
        }

        void t_PythonFieldStateMapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStateMapper), "class_", make_descriptor(PythonFieldStateMapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStateMapper), "wrapfn_", make_descriptor(t_PythonFieldStateMapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStateMapper), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldStateMapper::initializeClass);
          JNINativeMethod methods[] = {
            { "mapArrayToState", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldStateMapper_mapArrayToState0 },
            { "mapStateToArray", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldStateMapper_mapStateToArray1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldStateMapper_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldStateMapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldStateMapper::initializeClass, 1)))
            return NULL;
          return t_PythonFieldStateMapper::wrap_Object(PythonFieldStateMapper(((t_PythonFieldStateMapper *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldStateMapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldStateMapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldStateMapper_of_(t_PythonFieldStateMapper *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldStateMapper_init_(t_PythonFieldStateMapper *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          PythonFieldStateMapper object((jobject) NULL);

          if (!parseArgs(args, "KKKKkk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a4, &a5))
          {
            INT_CALL(object = PythonFieldStateMapper(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_PythonFieldStateMapper_finalize(t_PythonFieldStateMapper *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldStateMapper_pythonExtension(t_PythonFieldStateMapper *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *o3 = ::org::orekit::propagation::t_PropagationType::wrap_Object(::org::orekit::propagation::PropagationType(a3));
          PyObject *result = PyObject_CallMethod(obj, "mapArrayToState", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("mapArrayToState", result);
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

        static void JNICALL t_PythonFieldStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "mapStateToArray", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldStateMapper_get__self(t_PythonFieldStateMapper *self, void *data)
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
        static PyObject *t_PythonFieldStateMapper_get__parameters_(t_PythonFieldStateMapper *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/jacobians/TriggerDate.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/forces/maneuvers/Maneuver.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "org/orekit/forces/maneuvers/jacobians/MassDepletionDelay.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *TriggerDate::class$ = NULL;
          jmethodID *TriggerDate::mids$ = NULL;
          bool TriggerDate::live$ = false;

          jclass TriggerDate::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/TriggerDate");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17d24e607d87d9cd] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;ZLorg/orekit/forces/maneuvers/Maneuver;D)V");
              mids$[mid_getAdditionalState_cb44069ef445f941] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getMassDepletionDelay_deeb0c185d27db9a] = env->getMethodID(cls, "getMassDepletionDelay", "()Lorg/orekit/forces/maneuvers/jacobians/MassDepletionDelay;");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_maneuverTriggered_33f4696e4edaa03c] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_resetState_f43130c50e9fafeb] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_yields_680f8463a473c3cb] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TriggerDate::TriggerDate(const ::java::lang::String & a0, const ::java::lang::String & a1, jboolean a2, const ::org::orekit::forces::maneuvers::Maneuver & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17d24e607d87d9cd, a0.this$, a1.this$, a2, a3.this$, a4)) {}

          JArray< jdouble > TriggerDate::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_cb44069ef445f941], a0.this$));
          }

          ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay TriggerDate::getMassDepletionDelay() const
          {
            return ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay(env->callObjectMethod(this$, mids$[mid_getMassDepletionDelay_deeb0c185d27db9a]));
          }

          ::java::lang::String TriggerDate::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
          }

          void TriggerDate::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
          }

          void TriggerDate::maneuverTriggered(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_33f4696e4edaa03c], a0.this$, a1);
          }

          ::org::orekit::propagation::SpacecraftState TriggerDate::resetState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_f43130c50e9fafeb], a0.this$));
          }

          jboolean TriggerDate::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_yields_680f8463a473c3cb], a0.this$);
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
        namespace jacobians {
          static PyObject *t_TriggerDate_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TriggerDate_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TriggerDate_init_(t_TriggerDate *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TriggerDate_getAdditionalState(t_TriggerDate *self, PyObject *arg);
          static PyObject *t_TriggerDate_getMassDepletionDelay(t_TriggerDate *self);
          static PyObject *t_TriggerDate_getName(t_TriggerDate *self);
          static PyObject *t_TriggerDate_init(t_TriggerDate *self, PyObject *args);
          static PyObject *t_TriggerDate_maneuverTriggered(t_TriggerDate *self, PyObject *args);
          static PyObject *t_TriggerDate_resetState(t_TriggerDate *self, PyObject *arg);
          static PyObject *t_TriggerDate_yields(t_TriggerDate *self, PyObject *arg);
          static PyObject *t_TriggerDate_get__massDepletionDelay(t_TriggerDate *self, void *data);
          static PyObject *t_TriggerDate_get__name(t_TriggerDate *self, void *data);
          static PyGetSetDef t_TriggerDate__fields_[] = {
            DECLARE_GET_FIELD(t_TriggerDate, massDepletionDelay),
            DECLARE_GET_FIELD(t_TriggerDate, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TriggerDate__methods_[] = {
            DECLARE_METHOD(t_TriggerDate, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TriggerDate, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TriggerDate, getAdditionalState, METH_O),
            DECLARE_METHOD(t_TriggerDate, getMassDepletionDelay, METH_NOARGS),
            DECLARE_METHOD(t_TriggerDate, getName, METH_NOARGS),
            DECLARE_METHOD(t_TriggerDate, init, METH_VARARGS),
            DECLARE_METHOD(t_TriggerDate, maneuverTriggered, METH_VARARGS),
            DECLARE_METHOD(t_TriggerDate, resetState, METH_O),
            DECLARE_METHOD(t_TriggerDate, yields, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TriggerDate)[] = {
            { Py_tp_methods, t_TriggerDate__methods_ },
            { Py_tp_init, (void *) t_TriggerDate_init_ },
            { Py_tp_getset, t_TriggerDate__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TriggerDate)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TriggerDate, t_TriggerDate, TriggerDate);

          void t_TriggerDate::install(PyObject *module)
          {
            installType(&PY_TYPE(TriggerDate), &PY_TYPE_DEF(TriggerDate), module, "TriggerDate", 0);
          }

          void t_TriggerDate::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TriggerDate), "class_", make_descriptor(TriggerDate::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TriggerDate), "wrapfn_", make_descriptor(t_TriggerDate::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TriggerDate), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TriggerDate_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TriggerDate::initializeClass, 1)))
              return NULL;
            return t_TriggerDate::wrap_Object(TriggerDate(((t_TriggerDate *) arg)->object.this$));
          }
          static PyObject *t_TriggerDate_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TriggerDate::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TriggerDate_init_(t_TriggerDate *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jboolean a2;
            ::org::orekit::forces::maneuvers::Maneuver a3((jobject) NULL);
            jdouble a4;
            TriggerDate object((jobject) NULL);

            if (!parseArgs(args, "ssZkD", ::org::orekit::forces::maneuvers::Maneuver::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = TriggerDate(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TriggerDate_getAdditionalState(t_TriggerDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAdditionalState(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
            return NULL;
          }

          static PyObject *t_TriggerDate_getMassDepletionDelay(t_TriggerDate *self)
          {
            ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay result((jobject) NULL);
            OBJ_CALL(result = self->object.getMassDepletionDelay());
            return ::org::orekit::forces::maneuvers::jacobians::t_MassDepletionDelay::wrap_Object(result);
          }

          static PyObject *t_TriggerDate_getName(t_TriggerDate *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_TriggerDate_init(t_TriggerDate *self, PyObject *args)
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

          static PyObject *t_TriggerDate_maneuverTriggered(t_TriggerDate *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean a1;

            if (!parseArgs(args, "kZ", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.maneuverTriggered(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "maneuverTriggered", args);
            return NULL;
          }

          static PyObject *t_TriggerDate_resetState(t_TriggerDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.resetState(a0));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", arg);
            return NULL;
          }

          static PyObject *t_TriggerDate_yields(t_TriggerDate *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.yields(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "yields", arg);
            return NULL;
          }

          static PyObject *t_TriggerDate_get__massDepletionDelay(t_TriggerDate *self, void *data)
          {
            ::org::orekit::forces::maneuvers::jacobians::MassDepletionDelay value((jobject) NULL);
            OBJ_CALL(value = self->object.getMassDepletionDelay());
            return ::org::orekit::forces::maneuvers::jacobians::t_MassDepletionDelay::wrap_Object(value);
          }

          static PyObject *t_TriggerDate_get__name(t_TriggerDate *self, void *data)
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
#include "org/orekit/utils/IERSConventions.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/PoissonSeries$CompiledSeries.h"
#include "org/orekit/utils/LoveNumbers.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/TimeScalarFunction.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/data/FundamentalNutationArguments.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeVectorFunction.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *IERSConventions::class$ = NULL;
      jmethodID *IERSConventions::mids$ = NULL;
      bool IERSConventions::live$ = false;
      IERSConventions *IERSConventions::IERS_1996 = NULL;
      IERSConventions *IERSConventions::IERS_2003 = NULL;
      IERSConventions *IERSConventions::IERS_2010 = NULL;

      jclass IERSConventions::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/IERSConventions");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluateTC_bf1d7732f1acb697] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_evaluateTC_2a5f05be83ff251d] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluateTC_77a84556e854cabe] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScales;)D");
          mids$[mid_evaluateTC_202c67cceb997c33] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/TimeScales;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEOPTidalCorrection_2029114ac725bb80] = env->getMethodID(cls, "getEOPTidalCorrection", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getEOPTidalCorrection_388ffaf18cf259ad] = env->getMethodID(cls, "getEOPTidalCorrection", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getEarthOrientationAngleFunction_4f84269f5949ae74] = env->getMethodID(cls, "getEarthOrientationAngleFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getEarthOrientationAngleFunction_49033c7bb7135703] = env->getMethodID(cls, "getEarthOrientationAngleFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGASTFunction_0f1253b45c45601c] = env->getMethodID(cls, "getGASTFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGASTFunction_01618c29039035a5] = env->getMethodID(cls, "getGASTFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/frames/EOPHistory;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTFunction_4f84269f5949ae74] = env->getMethodID(cls, "getGMSTFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTFunction_4026e3bd370d7174] = env->getMethodID(cls, "getGMSTFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTRateFunction_4f84269f5949ae74] = env->getMethodID(cls, "getGMSTRateFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTRateFunction_4026e3bd370d7174] = env->getMethodID(cls, "getGMSTRateFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getLoveNumbers_07dbee69df37c1f2] = env->getMethodID(cls, "getLoveNumbers", "()Lorg/orekit/utils/LoveNumbers;");
          mids$[mid_getMeanObliquityFunction_e5e32d8601923166] = env->getMethodID(cls, "getMeanObliquityFunction", "()Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getMeanObliquityFunction_6070dbe839741045] = env->getMethodID(cls, "getMeanObliquityFunction", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getNominalTidalDisplacement_60c7040667a7dc5c] = env->getMethodID(cls, "getNominalTidalDisplacement", "()[D");
          mids$[mid_getNutationArguments_8dda5d7b821bcb03] = env->getMethodID(cls, "getNutationArguments", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/data/FundamentalNutationArguments;");
          mids$[mid_getNutationArguments_bf8e13b455a844df] = env->getMethodID(cls, "getNutationArguments", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/data/FundamentalNutationArguments;");
          mids$[mid_getNutationCorrectionConverter_0c47cb966ded8a1b] = env->getMethodID(cls, "getNutationCorrectionConverter", "()Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;");
          mids$[mid_getNutationCorrectionConverter_90ad6aea41ec9c7a] = env->getMethodID(cls, "getNutationCorrectionConverter", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;");
          mids$[mid_getNutationFunction_2029114ac725bb80] = env->getMethodID(cls, "getNutationFunction", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getNutationFunction_388ffaf18cf259ad] = env->getMethodID(cls, "getNutationFunction", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getNutationReferenceEpoch_85703d13e302437e] = env->getMethodID(cls, "getNutationReferenceEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getNutationReferenceEpoch_d8a78748e466a958] = env->getMethodID(cls, "getNutationReferenceEpoch", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getOceanPoleTide_51b2cbed57d6565b] = env->getMethodID(cls, "getOceanPoleTide", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getPermanentTide_dff5885c2c873297] = env->getMethodID(cls, "getPermanentTide", "()D");
          mids$[mid_getPrecessionFunction_2029114ac725bb80] = env->getMethodID(cls, "getPrecessionFunction", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getPrecessionFunction_388ffaf18cf259ad] = env->getMethodID(cls, "getPrecessionFunction", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getSolidPoleTide_51b2cbed57d6565b] = env->getMethodID(cls, "getSolidPoleTide", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionDiurnal_750c1a26cb878eba] = env->getMethodID(cls, "getTidalDisplacementFrequencyCorrectionDiurnal", "()Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionZonal_750c1a26cb878eba] = env->getMethodID(cls, "getTidalDisplacementFrequencyCorrectionZonal", "()Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getTideFrequencyDependenceFunction_894febc40533d83e] = env->getMethodID(cls, "getTideFrequencyDependenceFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getTideFrequencyDependenceFunction_a641939742e1d64f] = env->getMethodID(cls, "getTideFrequencyDependenceFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getXYSpXY2Function_2029114ac725bb80] = env->getMethodID(cls, "getXYSpXY2Function", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getXYSpXY2Function_388ffaf18cf259ad] = env->getMethodID(cls, "getXYSpXY2Function", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_valueOf_9198903a32309f8c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/IERSConventions;");
          mids$[mid_values_02521f9540354471] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/IERSConventions;");
          mids$[mid_getNutationArguments_9f8d6c56795a04cd] = env->getMethodID(cls, "getNutationArguments", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/data/FundamentalNutationArguments;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionDiurnal_198e36ee8b14f9cf] = env->getStaticMethodID(cls, "getTidalDisplacementFrequencyCorrectionDiurnal", "(Ljava/lang/String;IIIII)Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionZonal_198e36ee8b14f9cf] = env->getStaticMethodID(cls, "getTidalDisplacementFrequencyCorrectionZonal", "(Ljava/lang/String;IIIII)Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_loadLoveNumbers_7f265c46e8c28dcf] = env->getMethodID(cls, "loadLoveNumbers", "(Ljava/lang/String;)Lorg/orekit/utils/LoveNumbers;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IERS_1996 = new IERSConventions(env->getStaticObjectField(cls, "IERS_1996", "Lorg/orekit/utils/IERSConventions;"));
          IERS_2003 = new IERSConventions(env->getStaticObjectField(cls, "IERS_2003", "Lorg/orekit/utils/IERSConventions;"));
          IERS_2010 = new IERSConventions(env->getStaticObjectField(cls, "IERS_2010", "Lorg/orekit/utils/IERSConventions;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble IERSConventions::evaluateTC(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluateTC_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement IERSConventions::evaluateTC(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluateTC_2a5f05be83ff251d], a0.this$));
      }

      jdouble IERSConventions::evaluateTC(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluateTC_77a84556e854cabe], a0.this$, a1.this$);
      }

      ::org::hipparchus::CalculusFieldElement IERSConventions::evaluateTC(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluateTC_202c67cceb997c33], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getEOPTidalCorrection() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getEOPTidalCorrection_2029114ac725bb80]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getEOPTidalCorrection(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getEOPTidalCorrection_388ffaf18cf259ad], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getEarthOrientationAngleFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getEarthOrientationAngleFunction_4f84269f5949ae74], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getEarthOrientationAngleFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getEarthOrientationAngleFunction_49033c7bb7135703], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGASTFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::frames::EOPHistory & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGASTFunction_0f1253b45c45601c], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGASTFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::frames::EOPHistory & a1, const ::org::orekit::time::TimeScales & a2) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGASTFunction_01618c29039035a5], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTFunction_4f84269f5949ae74], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTFunction_4026e3bd370d7174], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTRateFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTRateFunction_4f84269f5949ae74], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTRateFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTRateFunction_4026e3bd370d7174], a0.this$, a1.this$));
      }

      ::org::orekit::utils::LoveNumbers IERSConventions::getLoveNumbers() const
      {
        return ::org::orekit::utils::LoveNumbers(env->callObjectMethod(this$, mids$[mid_getLoveNumbers_07dbee69df37c1f2]));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getMeanObliquityFunction() const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getMeanObliquityFunction_e5e32d8601923166]));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getMeanObliquityFunction(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getMeanObliquityFunction_6070dbe839741045], a0.this$));
      }

      JArray< jdouble > IERSConventions::getNominalTidalDisplacement() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNominalTidalDisplacement_60c7040667a7dc5c]));
      }

      ::org::orekit::data::FundamentalNutationArguments IERSConventions::getNutationArguments(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::data::FundamentalNutationArguments(env->callObjectMethod(this$, mids$[mid_getNutationArguments_8dda5d7b821bcb03], a0.this$));
      }

      ::org::orekit::data::FundamentalNutationArguments IERSConventions::getNutationArguments(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::data::FundamentalNutationArguments(env->callObjectMethod(this$, mids$[mid_getNutationArguments_bf8e13b455a844df], a0.this$, a1.this$));
      }

      ::org::orekit::utils::IERSConventions$NutationCorrectionConverter IERSConventions::getNutationCorrectionConverter() const
      {
        return ::org::orekit::utils::IERSConventions$NutationCorrectionConverter(env->callObjectMethod(this$, mids$[mid_getNutationCorrectionConverter_0c47cb966ded8a1b]));
      }

      ::org::orekit::utils::IERSConventions$NutationCorrectionConverter IERSConventions::getNutationCorrectionConverter(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::utils::IERSConventions$NutationCorrectionConverter(env->callObjectMethod(this$, mids$[mid_getNutationCorrectionConverter_90ad6aea41ec9c7a], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getNutationFunction() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getNutationFunction_2029114ac725bb80]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getNutationFunction(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getNutationFunction_388ffaf18cf259ad], a0.this$));
      }

      ::org::orekit::time::AbsoluteDate IERSConventions::getNutationReferenceEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNutationReferenceEpoch_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate IERSConventions::getNutationReferenceEpoch(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNutationReferenceEpoch_d8a78748e466a958], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getOceanPoleTide(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getOceanPoleTide_51b2cbed57d6565b], a0.this$));
      }

      jdouble IERSConventions::getPermanentTide() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPermanentTide_dff5885c2c873297]);
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getPrecessionFunction() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getPrecessionFunction_2029114ac725bb80]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getPrecessionFunction(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getPrecessionFunction_388ffaf18cf259ad], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getSolidPoleTide(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getSolidPoleTide_51b2cbed57d6565b], a0.this$));
      }

      ::org::orekit::data::PoissonSeries$CompiledSeries IERSConventions::getTidalDisplacementFrequencyCorrectionDiurnal() const
      {
        return ::org::orekit::data::PoissonSeries$CompiledSeries(env->callObjectMethod(this$, mids$[mid_getTidalDisplacementFrequencyCorrectionDiurnal_750c1a26cb878eba]));
      }

      ::org::orekit::data::PoissonSeries$CompiledSeries IERSConventions::getTidalDisplacementFrequencyCorrectionZonal() const
      {
        return ::org::orekit::data::PoissonSeries$CompiledSeries(env->callObjectMethod(this$, mids$[mid_getTidalDisplacementFrequencyCorrectionZonal_750c1a26cb878eba]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getTideFrequencyDependenceFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getTideFrequencyDependenceFunction_894febc40533d83e], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getTideFrequencyDependenceFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getTideFrequencyDependenceFunction_a641939742e1d64f], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getXYSpXY2Function() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getXYSpXY2Function_2029114ac725bb80]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getXYSpXY2Function(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getXYSpXY2Function_388ffaf18cf259ad], a0.this$));
      }

      IERSConventions IERSConventions::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return IERSConventions(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9198903a32309f8c], a0.this$));
      }

      JArray< IERSConventions > IERSConventions::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< IERSConventions >(env->callStaticObjectMethod(cls, mids$[mid_values_02521f9540354471]));
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
      static PyObject *t_IERSConventions_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions_of_(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_evaluateTC(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getEOPTidalCorrection(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getEarthOrientationAngleFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getGASTFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getGMSTFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getGMSTRateFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getLoveNumbers(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getMeanObliquityFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNominalTidalDisplacement(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getNutationArguments(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNutationCorrectionConverter(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNutationFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNutationReferenceEpoch(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getOceanPoleTide(t_IERSConventions *self, PyObject *arg);
      static PyObject *t_IERSConventions_getPermanentTide(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getPrecessionFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getSolidPoleTide(t_IERSConventions *self, PyObject *arg);
      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getTideFrequencyDependenceFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getXYSpXY2Function(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_IERSConventions_values(PyTypeObject *type);
      static PyObject *t_IERSConventions_get__eOPTidalCorrection(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__loveNumbers(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__meanObliquityFunction(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nominalTidalDisplacement(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nutationCorrectionConverter(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nutationFunction(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nutationReferenceEpoch(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__permanentTide(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__precessionFunction(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__xYSpXY2Function(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__parameters_(t_IERSConventions *self, void *data);
      static PyGetSetDef t_IERSConventions__fields_[] = {
        DECLARE_GET_FIELD(t_IERSConventions, eOPTidalCorrection),
        DECLARE_GET_FIELD(t_IERSConventions, loveNumbers),
        DECLARE_GET_FIELD(t_IERSConventions, meanObliquityFunction),
        DECLARE_GET_FIELD(t_IERSConventions, nominalTidalDisplacement),
        DECLARE_GET_FIELD(t_IERSConventions, nutationCorrectionConverter),
        DECLARE_GET_FIELD(t_IERSConventions, nutationFunction),
        DECLARE_GET_FIELD(t_IERSConventions, nutationReferenceEpoch),
        DECLARE_GET_FIELD(t_IERSConventions, permanentTide),
        DECLARE_GET_FIELD(t_IERSConventions, precessionFunction),
        DECLARE_GET_FIELD(t_IERSConventions, tidalDisplacementFrequencyCorrectionDiurnal),
        DECLARE_GET_FIELD(t_IERSConventions, tidalDisplacementFrequencyCorrectionZonal),
        DECLARE_GET_FIELD(t_IERSConventions, xYSpXY2Function),
        DECLARE_GET_FIELD(t_IERSConventions, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IERSConventions__methods_[] = {
        DECLARE_METHOD(t_IERSConventions, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions, of_, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, evaluateTC, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getEOPTidalCorrection, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getEarthOrientationAngleFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getGASTFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getGMSTFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getGMSTRateFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getLoveNumbers, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getMeanObliquityFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNominalTidalDisplacement, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationArguments, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationCorrectionConverter, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationReferenceEpoch, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getOceanPoleTide, METH_O),
        DECLARE_METHOD(t_IERSConventions, getPermanentTide, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getPrecessionFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getSolidPoleTide, METH_O),
        DECLARE_METHOD(t_IERSConventions, getTidalDisplacementFrequencyCorrectionDiurnal, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getTidalDisplacementFrequencyCorrectionZonal, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getTideFrequencyDependenceFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getXYSpXY2Function, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IERSConventions)[] = {
        { Py_tp_methods, t_IERSConventions__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IERSConventions__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IERSConventions)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(IERSConventions, t_IERSConventions, IERSConventions);
      PyObject *t_IERSConventions::wrap_Object(const IERSConventions& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions *self = (t_IERSConventions *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_IERSConventions::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions *self = (t_IERSConventions *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_IERSConventions::install(PyObject *module)
      {
        installType(&PY_TYPE(IERSConventions), &PY_TYPE_DEF(IERSConventions), module, "IERSConventions", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "NutationCorrectionConverter", make_descriptor(&PY_TYPE_DEF(IERSConventions$NutationCorrectionConverter)));
      }

      void t_IERSConventions::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "class_", make_descriptor(IERSConventions::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "wrapfn_", make_descriptor(t_IERSConventions::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "boxfn_", make_descriptor(boxObject));
        env->getClass(IERSConventions::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "IERS_1996", make_descriptor(t_IERSConventions::wrap_Object(*IERSConventions::IERS_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "IERS_2003", make_descriptor(t_IERSConventions::wrap_Object(*IERSConventions::IERS_2003)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "IERS_2010", make_descriptor(t_IERSConventions::wrap_Object(*IERSConventions::IERS_2010)));
      }

      static PyObject *t_IERSConventions_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IERSConventions::initializeClass, 1)))
          return NULL;
        return t_IERSConventions::wrap_Object(IERSConventions(((t_IERSConventions *) arg)->object.this$));
      }
      static PyObject *t_IERSConventions_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IERSConventions::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IERSConventions_of_(t_IERSConventions *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_IERSConventions_evaluateTC(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluateTC", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getEOPTidalCorrection(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getEOPTidalCorrection());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEOPTidalCorrection(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getEOPTidalCorrection", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getEarthOrientationAngleFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEarthOrientationAngleFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getEarthOrientationAngleFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getEarthOrientationAngleFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getGASTFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::EOPHistory a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::EOPHistory::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGASTFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::EOPHistory a1((jobject) NULL);
            ::org::orekit::time::TimeScales a2((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getGASTFunction(a0, a1, a2));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGASTFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getGMSTFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getGMSTFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGMSTFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGMSTFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getGMSTRateFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getGMSTRateFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGMSTRateFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGMSTRateFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getLoveNumbers(t_IERSConventions *self)
      {
        ::org::orekit::utils::LoveNumbers result((jobject) NULL);
        OBJ_CALL(result = self->object.getLoveNumbers());
        return ::org::orekit::utils::t_LoveNumbers::wrap_Object(result);
      }

      static PyObject *t_IERSConventions_getMeanObliquityFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanObliquityFunction());
            return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMeanObliquityFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getMeanObliquityFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNominalTidalDisplacement(t_IERSConventions *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getNominalTidalDisplacement());
        return result.wrap();
      }

      static PyObject *t_IERSConventions_getNutationArguments(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::data::FundamentalNutationArguments result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationArguments(a0));
              return ::org::orekit::data::t_FundamentalNutationArguments::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::data::FundamentalNutationArguments result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNutationArguments(a0, a1));
              return ::org::orekit::data::t_FundamentalNutationArguments::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationArguments", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNutationCorrectionConverter(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::IERSConventions$NutationCorrectionConverter result((jobject) NULL);
            OBJ_CALL(result = self->object.getNutationCorrectionConverter());
            return ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::utils::IERSConventions$NutationCorrectionConverter result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationCorrectionConverter(a0));
              return ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationCorrectionConverter", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNutationFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getNutationFunction());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationFunction(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNutationReferenceEpoch(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getNutationReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationReferenceEpoch(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationReferenceEpoch", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getOceanPoleTide(t_IERSConventions *self, PyObject *arg)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getOceanPoleTide(a0));
          return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getOceanPoleTide", arg);
        return NULL;
      }

      static PyObject *t_IERSConventions_getPermanentTide(t_IERSConventions *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPermanentTide());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IERSConventions_getPrecessionFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getPrecessionFunction());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPrecessionFunction(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPrecessionFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getSolidPoleTide(t_IERSConventions *self, PyObject *arg)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getSolidPoleTide(a0));
          return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSolidPoleTide", arg);
        return NULL;
      }

      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries result((jobject) NULL);
        OBJ_CALL(result = self->object.getTidalDisplacementFrequencyCorrectionDiurnal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(result);
      }

      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries result((jobject) NULL);
        OBJ_CALL(result = self->object.getTidalDisplacementFrequencyCorrectionZonal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(result);
      }

      static PyObject *t_IERSConventions_getTideFrequencyDependenceFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTideFrequencyDependenceFunction(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getTideFrequencyDependenceFunction(a0, a1));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTideFrequencyDependenceFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getXYSpXY2Function(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getXYSpXY2Function());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getXYSpXY2Function(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getXYSpXY2Function", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        IERSConventions result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::IERSConventions::valueOf(a0));
          return t_IERSConventions::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_IERSConventions_values(PyTypeObject *type)
      {
        JArray< IERSConventions > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::IERSConventions::values());
        return JArray<jobject>(result.this$).wrap(t_IERSConventions::wrap_jobject);
      }
      static PyObject *t_IERSConventions_get__parameters_(t_IERSConventions *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_IERSConventions_get__eOPTidalCorrection(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPTidalCorrection());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__loveNumbers(t_IERSConventions *self, void *data)
      {
        ::org::orekit::utils::LoveNumbers value((jobject) NULL);
        OBJ_CALL(value = self->object.getLoveNumbers());
        return ::org::orekit::utils::t_LoveNumbers::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__meanObliquityFunction(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeScalarFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeanObliquityFunction());
        return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__nominalTidalDisplacement(t_IERSConventions *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getNominalTidalDisplacement());
        return value.wrap();
      }

      static PyObject *t_IERSConventions_get__nutationCorrectionConverter(t_IERSConventions *self, void *data)
      {
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter value((jobject) NULL);
        OBJ_CALL(value = self->object.getNutationCorrectionConverter());
        return ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__nutationFunction(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getNutationFunction());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__nutationReferenceEpoch(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getNutationReferenceEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__permanentTide(t_IERSConventions *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPermanentTide());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IERSConventions_get__precessionFunction(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrecessionFunction());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self, void *data)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries value((jobject) NULL);
        OBJ_CALL(value = self->object.getTidalDisplacementFrequencyCorrectionDiurnal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self, void *data)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries value((jobject) NULL);
        OBJ_CALL(value = self->object.getTidalDisplacementFrequencyCorrectionZonal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__xYSpXY2Function(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getXYSpXY2Function());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/TaylorMap.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/TaylorMap.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *TaylorMap::class$ = NULL;
        jmethodID *TaylorMap::mids$ = NULL;
        bool TaylorMap::live$ = false;

        jclass TaylorMap::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/TaylorMap");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c53d6f00246d2509] = env->getMethodID(cls, "<init>", "([D[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_8336200ef3dde36b] = env->getMethodID(cls, "<init>", "(III)V");
            mids$[mid_compose_1b4086c2315c67d8] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/analysis/differentiation/TaylorMap;)Lorg/hipparchus/analysis/differentiation/TaylorMap;");
            mids$[mid_getFunction_7e2a7a2e34cb2504] = env->getMethodID(cls, "getFunction", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getNbFunctions_570ce0828f81a2c1] = env->getMethodID(cls, "getNbFunctions", "()I");
            mids$[mid_getNbParameters_570ce0828f81a2c1] = env->getMethodID(cls, "getNbParameters", "()I");
            mids$[mid_getPoint_60c7040667a7dc5c] = env->getMethodID(cls, "getPoint", "()[D");
            mids$[mid_invert_802414c7d3fa4705] = env->getMethodID(cls, "invert", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/hipparchus/analysis/differentiation/TaylorMap;");
            mids$[mid_value_ac3d742ccc742f22] = env->getMethodID(cls, "value", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TaylorMap::TaylorMap(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c53d6f00246d2509, a0.this$, a1.this$)) {}

        TaylorMap::TaylorMap(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8336200ef3dde36b, a0, a1, a2)) {}

        TaylorMap TaylorMap::compose(const TaylorMap & a0) const
        {
          return TaylorMap(env->callObjectMethod(this$, mids$[mid_compose_1b4086c2315c67d8], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure TaylorMap::getFunction(jint a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getFunction_7e2a7a2e34cb2504], a0));
        }

        jint TaylorMap::getNbFunctions() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbFunctions_570ce0828f81a2c1]);
        }

        jint TaylorMap::getNbParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbParameters_570ce0828f81a2c1]);
        }

        JArray< jdouble > TaylorMap::getPoint() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPoint_60c7040667a7dc5c]));
        }

        TaylorMap TaylorMap::invert(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return TaylorMap(env->callObjectMethod(this$, mids$[mid_invert_802414c7d3fa4705], a0.this$));
        }

        JArray< jdouble > TaylorMap::value(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_ac3d742ccc742f22], a0.this$));
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
        static PyObject *t_TaylorMap_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TaylorMap_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TaylorMap_init_(t_TaylorMap *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TaylorMap_compose(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_getFunction(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_getNbFunctions(t_TaylorMap *self);
        static PyObject *t_TaylorMap_getNbParameters(t_TaylorMap *self);
        static PyObject *t_TaylorMap_getPoint(t_TaylorMap *self);
        static PyObject *t_TaylorMap_invert(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_value(t_TaylorMap *self, PyObject *arg);
        static PyObject *t_TaylorMap_get__nbFunctions(t_TaylorMap *self, void *data);
        static PyObject *t_TaylorMap_get__nbParameters(t_TaylorMap *self, void *data);
        static PyObject *t_TaylorMap_get__point(t_TaylorMap *self, void *data);
        static PyGetSetDef t_TaylorMap__fields_[] = {
          DECLARE_GET_FIELD(t_TaylorMap, nbFunctions),
          DECLARE_GET_FIELD(t_TaylorMap, nbParameters),
          DECLARE_GET_FIELD(t_TaylorMap, point),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TaylorMap__methods_[] = {
          DECLARE_METHOD(t_TaylorMap, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TaylorMap, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TaylorMap, compose, METH_O),
          DECLARE_METHOD(t_TaylorMap, getFunction, METH_O),
          DECLARE_METHOD(t_TaylorMap, getNbFunctions, METH_NOARGS),
          DECLARE_METHOD(t_TaylorMap, getNbParameters, METH_NOARGS),
          DECLARE_METHOD(t_TaylorMap, getPoint, METH_NOARGS),
          DECLARE_METHOD(t_TaylorMap, invert, METH_O),
          DECLARE_METHOD(t_TaylorMap, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TaylorMap)[] = {
          { Py_tp_methods, t_TaylorMap__methods_ },
          { Py_tp_init, (void *) t_TaylorMap_init_ },
          { Py_tp_getset, t_TaylorMap__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TaylorMap)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TaylorMap, t_TaylorMap, TaylorMap);

        void t_TaylorMap::install(PyObject *module)
        {
          installType(&PY_TYPE(TaylorMap), &PY_TYPE_DEF(TaylorMap), module, "TaylorMap", 0);
        }

        void t_TaylorMap::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TaylorMap), "class_", make_descriptor(TaylorMap::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TaylorMap), "wrapfn_", make_descriptor(t_TaylorMap::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TaylorMap), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TaylorMap_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TaylorMap::initializeClass, 1)))
            return NULL;
          return t_TaylorMap::wrap_Object(TaylorMap(((t_TaylorMap *) arg)->object.this$));
        }
        static PyObject *t_TaylorMap_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TaylorMap::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TaylorMap_init_(t_TaylorMap *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > a1((jobject) NULL);
              TaylorMap object((jobject) NULL);

              if (!parseArgs(args, "[D[k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0, &a1))
              {
                INT_CALL(object = TaylorMap(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jint a0;
              jint a1;
              jint a2;
              TaylorMap object((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                INT_CALL(object = TaylorMap(a0, a1, a2));
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

        static PyObject *t_TaylorMap_compose(t_TaylorMap *self, PyObject *arg)
        {
          TaylorMap a0((jobject) NULL);
          TaylorMap result((jobject) NULL);

          if (!parseArg(arg, "k", TaylorMap::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_TaylorMap::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_getFunction(t_TaylorMap *self, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getFunction(a0));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFunction", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_getNbFunctions(t_TaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbFunctions());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_TaylorMap_getNbParameters(t_TaylorMap *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_TaylorMap_getPoint(t_TaylorMap *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPoint());
          return result.wrap();
        }

        static PyObject *t_TaylorMap_invert(t_TaylorMap *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          TaylorMap result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.invert(a0));
            return t_TaylorMap::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "invert", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_value(t_TaylorMap *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }

        static PyObject *t_TaylorMap_get__nbFunctions(t_TaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbFunctions());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_TaylorMap_get__nbParameters(t_TaylorMap *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_TaylorMap_get__point(t_TaylorMap *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPoint());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CovarianceMethod.h"
#include "org/orekit/files/ccsds/ndm/cdm/CovarianceMethod.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CovarianceMethod::class$ = NULL;
            jmethodID *CovarianceMethod::mids$ = NULL;
            bool CovarianceMethod::live$ = false;
            CovarianceMethod *CovarianceMethod::CALCULATED = NULL;
            CovarianceMethod *CovarianceMethod::DEFAULT = NULL;

            jclass CovarianceMethod::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CovarianceMethod");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_58827bc5fdf63b87] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;");
                mids$[mid_values_af8fb6e0fafc958d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CALCULATED = new CovarianceMethod(env->getStaticObjectField(cls, "CALCULATED", "Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;"));
                DEFAULT = new CovarianceMethod(env->getStaticObjectField(cls, "DEFAULT", "Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CovarianceMethod CovarianceMethod::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CovarianceMethod(env->callStaticObjectMethod(cls, mids$[mid_valueOf_58827bc5fdf63b87], a0.this$));
            }

            JArray< CovarianceMethod > CovarianceMethod::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CovarianceMethod >(env->callStaticObjectMethod(cls, mids$[mid_values_af8fb6e0fafc958d]));
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
            static PyObject *t_CovarianceMethod_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CovarianceMethod_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CovarianceMethod_of_(t_CovarianceMethod *self, PyObject *args);
            static PyObject *t_CovarianceMethod_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CovarianceMethod_values(PyTypeObject *type);
            static PyObject *t_CovarianceMethod_get__parameters_(t_CovarianceMethod *self, void *data);
            static PyGetSetDef t_CovarianceMethod__fields_[] = {
              DECLARE_GET_FIELD(t_CovarianceMethod, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CovarianceMethod__methods_[] = {
              DECLARE_METHOD(t_CovarianceMethod, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CovarianceMethod, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CovarianceMethod, of_, METH_VARARGS),
              DECLARE_METHOD(t_CovarianceMethod, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CovarianceMethod, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CovarianceMethod)[] = {
              { Py_tp_methods, t_CovarianceMethod__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CovarianceMethod__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CovarianceMethod)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CovarianceMethod, t_CovarianceMethod, CovarianceMethod);
            PyObject *t_CovarianceMethod::wrap_Object(const CovarianceMethod& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CovarianceMethod::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CovarianceMethod *self = (t_CovarianceMethod *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CovarianceMethod::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CovarianceMethod::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CovarianceMethod *self = (t_CovarianceMethod *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CovarianceMethod::install(PyObject *module)
            {
              installType(&PY_TYPE(CovarianceMethod), &PY_TYPE_DEF(CovarianceMethod), module, "CovarianceMethod", 0);
            }

            void t_CovarianceMethod::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "class_", make_descriptor(CovarianceMethod::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "wrapfn_", make_descriptor(t_CovarianceMethod::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "boxfn_", make_descriptor(boxObject));
              env->getClass(CovarianceMethod::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "CALCULATED", make_descriptor(t_CovarianceMethod::wrap_Object(*CovarianceMethod::CALCULATED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "DEFAULT", make_descriptor(t_CovarianceMethod::wrap_Object(*CovarianceMethod::DEFAULT)));
            }

            static PyObject *t_CovarianceMethod_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CovarianceMethod::initializeClass, 1)))
                return NULL;
              return t_CovarianceMethod::wrap_Object(CovarianceMethod(((t_CovarianceMethod *) arg)->object.this$));
            }
            static PyObject *t_CovarianceMethod_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CovarianceMethod::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CovarianceMethod_of_(t_CovarianceMethod *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CovarianceMethod_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CovarianceMethod result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::valueOf(a0));
                return t_CovarianceMethod::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CovarianceMethod_values(PyTypeObject *type)
            {
              JArray< CovarianceMethod > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::values());
              return JArray<jobject>(result.this$).wrap(t_CovarianceMethod::wrap_jobject);
            }
            static PyObject *t_CovarianceMethod_get__parameters_(t_CovarianceMethod *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/TokenType.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/TokenType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *TokenType::class$ = NULL;
            jmethodID *TokenType::mids$ = NULL;
            bool TokenType::live$ = false;
            TokenType *TokenType::ENTRY = NULL;
            TokenType *TokenType::RAW_LINE = NULL;
            TokenType *TokenType::START = NULL;
            TokenType *TokenType::STOP = NULL;

            jclass TokenType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/TokenType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_4babde021c68952a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/utils/lexical/TokenType;");
                mids$[mid_values_7723d6ba8a1c6e23] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/utils/lexical/TokenType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ENTRY = new TokenType(env->getStaticObjectField(cls, "ENTRY", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                RAW_LINE = new TokenType(env->getStaticObjectField(cls, "RAW_LINE", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                START = new TokenType(env->getStaticObjectField(cls, "START", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                STOP = new TokenType(env->getStaticObjectField(cls, "STOP", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TokenType TokenType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TokenType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4babde021c68952a], a0.this$));
            }

            JArray< TokenType > TokenType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TokenType >(env->callStaticObjectMethod(cls, mids$[mid_values_7723d6ba8a1c6e23]));
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
            static PyObject *t_TokenType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TokenType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TokenType_of_(t_TokenType *self, PyObject *args);
            static PyObject *t_TokenType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TokenType_values(PyTypeObject *type);
            static PyObject *t_TokenType_get__parameters_(t_TokenType *self, void *data);
            static PyGetSetDef t_TokenType__fields_[] = {
              DECLARE_GET_FIELD(t_TokenType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TokenType__methods_[] = {
              DECLARE_METHOD(t_TokenType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TokenType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TokenType, of_, METH_VARARGS),
              DECLARE_METHOD(t_TokenType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TokenType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TokenType)[] = {
              { Py_tp_methods, t_TokenType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TokenType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TokenType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TokenType, t_TokenType, TokenType);
            PyObject *t_TokenType::wrap_Object(const TokenType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TokenType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TokenType *self = (t_TokenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TokenType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TokenType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TokenType *self = (t_TokenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TokenType::install(PyObject *module)
            {
              installType(&PY_TYPE(TokenType), &PY_TYPE_DEF(TokenType), module, "TokenType", 0);
            }

            void t_TokenType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "class_", make_descriptor(TokenType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "wrapfn_", make_descriptor(t_TokenType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "boxfn_", make_descriptor(boxObject));
              env->getClass(TokenType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "ENTRY", make_descriptor(t_TokenType::wrap_Object(*TokenType::ENTRY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "RAW_LINE", make_descriptor(t_TokenType::wrap_Object(*TokenType::RAW_LINE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "START", make_descriptor(t_TokenType::wrap_Object(*TokenType::START)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "STOP", make_descriptor(t_TokenType::wrap_Object(*TokenType::STOP)));
            }

            static PyObject *t_TokenType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TokenType::initializeClass, 1)))
                return NULL;
              return t_TokenType::wrap_Object(TokenType(((t_TokenType *) arg)->object.this$));
            }
            static PyObject *t_TokenType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TokenType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TokenType_of_(t_TokenType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TokenType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TokenType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::utils::lexical::TokenType::valueOf(a0));
                return t_TokenType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TokenType_values(PyTypeObject *type)
            {
              JArray< TokenType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::utils::lexical::TokenType::values());
              return JArray<jobject>(result.this$).wrap(t_TokenType::wrap_jobject);
            }
            static PyObject *t_TokenType_get__parameters_(t_TokenType *self, void *data)
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
#include "org/orekit/utils/MultipleShooting.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *MultipleShooting::class$ = NULL;
      jmethodID *MultipleShooting::mids$ = NULL;
      bool MultipleShooting::live$ = false;

      jclass MultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/MultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compute_2afa36052df4765d] = env->getMethodID(cls, "compute", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List MultipleShooting::compute() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_compute_2afa36052df4765d]));
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
      static PyObject *t_MultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultipleShooting_compute(t_MultipleShooting *self);

      static PyMethodDef t_MultipleShooting__methods_[] = {
        DECLARE_METHOD(t_MultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultipleShooting, compute, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultipleShooting)[] = {
        { Py_tp_methods, t_MultipleShooting__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultipleShooting)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultipleShooting, t_MultipleShooting, MultipleShooting);

      void t_MultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(MultipleShooting), &PY_TYPE_DEF(MultipleShooting), module, "MultipleShooting", 0);
      }

      void t_MultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooting), "class_", make_descriptor(MultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooting), "wrapfn_", make_descriptor(t_MultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooting), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultipleShooting::initializeClass, 1)))
          return NULL;
        return t_MultipleShooting::wrap_Object(MultipleShooting(((t_MultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_MultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultipleShooting_compute(t_MultipleShooting *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.compute());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/section/RinexBaseHeader.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/utils/RinexFileType.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {

          ::java::lang::Class *RinexBaseHeader::class$ = NULL;
          jmethodID *RinexBaseHeader::mids$ = NULL;
          bool RinexBaseHeader::live$ = false;

          jclass RinexBaseHeader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/section/RinexBaseHeader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCreationDate_85703d13e302437e] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getCreationDateComponents_386b3d55806dafec] = env->getMethodID(cls, "getCreationDateComponents", "()Lorg/orekit/time/DateTimeComponents;");
              mids$[mid_getCreationTimeZone_11b109bd155ca898] = env->getMethodID(cls, "getCreationTimeZone", "()Ljava/lang/String;");
              mids$[mid_getDoi_11b109bd155ca898] = env->getMethodID(cls, "getDoi", "()Ljava/lang/String;");
              mids$[mid_getFileType_b92f51e56d431d9f] = env->getMethodID(cls, "getFileType", "()Lorg/orekit/files/rinex/utils/RinexFileType;");
              mids$[mid_getFormatVersion_dff5885c2c873297] = env->getMethodID(cls, "getFormatVersion", "()D");
              mids$[mid_getLicense_11b109bd155ca898] = env->getMethodID(cls, "getLicense", "()Ljava/lang/String;");
              mids$[mid_getProgramName_11b109bd155ca898] = env->getMethodID(cls, "getProgramName", "()Ljava/lang/String;");
              mids$[mid_getRunByName_11b109bd155ca898] = env->getMethodID(cls, "getRunByName", "()Ljava/lang/String;");
              mids$[mid_getSatelliteSystem_01acae5c1a253b8e] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getStationInformation_11b109bd155ca898] = env->getMethodID(cls, "getStationInformation", "()Ljava/lang/String;");
              mids$[mid_setCreationDate_600a2a61652bc473] = env->getMethodID(cls, "setCreationDate", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setCreationDateComponents_4d63b530baf1ccb7] = env->getMethodID(cls, "setCreationDateComponents", "(Lorg/orekit/time/DateTimeComponents;)V");
              mids$[mid_setCreationTimeZone_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCreationTimeZone", "(Ljava/lang/String;)V");
              mids$[mid_setDoi_d0bc48d5b00dc40c] = env->getMethodID(cls, "setDoi", "(Ljava/lang/String;)V");
              mids$[mid_setFormatVersion_17db3a65980d3441] = env->getMethodID(cls, "setFormatVersion", "(D)V");
              mids$[mid_setLicense_d0bc48d5b00dc40c] = env->getMethodID(cls, "setLicense", "(Ljava/lang/String;)V");
              mids$[mid_setProgramName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setProgramName", "(Ljava/lang/String;)V");
              mids$[mid_setRunByName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setRunByName", "(Ljava/lang/String;)V");
              mids$[mid_setSatelliteSystem_10d44f5686b1d39e] = env->getMethodID(cls, "setSatelliteSystem", "(Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_setStationInformation_d0bc48d5b00dc40c] = env->getMethodID(cls, "setStationInformation", "(Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::time::AbsoluteDate RinexBaseHeader::getCreationDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_85703d13e302437e]));
          }

          ::org::orekit::time::DateTimeComponents RinexBaseHeader::getCreationDateComponents() const
          {
            return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getCreationDateComponents_386b3d55806dafec]));
          }

          ::java::lang::String RinexBaseHeader::getCreationTimeZone() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationTimeZone_11b109bd155ca898]));
          }

          ::java::lang::String RinexBaseHeader::getDoi() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDoi_11b109bd155ca898]));
          }

          ::org::orekit::files::rinex::utils::RinexFileType RinexBaseHeader::getFileType() const
          {
            return ::org::orekit::files::rinex::utils::RinexFileType(env->callObjectMethod(this$, mids$[mid_getFileType_b92f51e56d431d9f]));
          }

          jdouble RinexBaseHeader::getFormatVersion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFormatVersion_dff5885c2c873297]);
          }

          ::java::lang::String RinexBaseHeader::getLicense() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLicense_11b109bd155ca898]));
          }

          ::java::lang::String RinexBaseHeader::getProgramName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgramName_11b109bd155ca898]));
          }

          ::java::lang::String RinexBaseHeader::getRunByName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRunByName_11b109bd155ca898]));
          }

          ::org::orekit::gnss::SatelliteSystem RinexBaseHeader::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_01acae5c1a253b8e]));
          }

          ::java::lang::String RinexBaseHeader::getStationInformation() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationInformation_11b109bd155ca898]));
          }

          void RinexBaseHeader::setCreationDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDate_600a2a61652bc473], a0.this$);
          }

          void RinexBaseHeader::setCreationDateComponents(const ::org::orekit::time::DateTimeComponents & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDateComponents_4d63b530baf1ccb7], a0.this$);
          }

          void RinexBaseHeader::setCreationTimeZone(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationTimeZone_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexBaseHeader::setDoi(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDoi_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexBaseHeader::setFormatVersion(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFormatVersion_17db3a65980d3441], a0);
          }

          void RinexBaseHeader::setLicense(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLicense_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexBaseHeader::setProgramName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setProgramName_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexBaseHeader::setRunByName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setRunByName_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexBaseHeader::setSatelliteSystem(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteSystem_10d44f5686b1d39e], a0.this$);
          }

          void RinexBaseHeader::setStationInformation(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setStationInformation_d0bc48d5b00dc40c], a0.this$);
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
        namespace section {
          static PyObject *t_RinexBaseHeader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexBaseHeader_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexBaseHeader_getCreationDate(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getCreationDateComponents(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getCreationTimeZone(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getDoi(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getFileType(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getFormatVersion(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getLicense(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getProgramName(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getRunByName(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getSatelliteSystem(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_getStationInformation(t_RinexBaseHeader *self);
          static PyObject *t_RinexBaseHeader_setCreationDate(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setCreationDateComponents(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setCreationTimeZone(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setDoi(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setFormatVersion(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setLicense(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setProgramName(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setRunByName(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setSatelliteSystem(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_setStationInformation(t_RinexBaseHeader *self, PyObject *arg);
          static PyObject *t_RinexBaseHeader_get__creationDate(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__creationDate(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__creationDateComponents(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__creationDateComponents(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__creationTimeZone(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__creationTimeZone(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__doi(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__doi(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__fileType(t_RinexBaseHeader *self, void *data);
          static PyObject *t_RinexBaseHeader_get__formatVersion(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__formatVersion(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__license(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__license(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__programName(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__programName(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__runByName(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__runByName(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__satelliteSystem(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__satelliteSystem(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexBaseHeader_get__stationInformation(t_RinexBaseHeader *self, void *data);
          static int t_RinexBaseHeader_set__stationInformation(t_RinexBaseHeader *self, PyObject *arg, void *data);
          static PyGetSetDef t_RinexBaseHeader__fields_[] = {
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, creationDate),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, creationDateComponents),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, creationTimeZone),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, doi),
            DECLARE_GET_FIELD(t_RinexBaseHeader, fileType),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, formatVersion),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, license),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, programName),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, runByName),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, satelliteSystem),
            DECLARE_GETSET_FIELD(t_RinexBaseHeader, stationInformation),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexBaseHeader__methods_[] = {
            DECLARE_METHOD(t_RinexBaseHeader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexBaseHeader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexBaseHeader, getCreationDate, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getCreationDateComponents, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getCreationTimeZone, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getDoi, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getFileType, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getFormatVersion, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getLicense, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getProgramName, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getRunByName, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getSatelliteSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, getStationInformation, METH_NOARGS),
            DECLARE_METHOD(t_RinexBaseHeader, setCreationDate, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setCreationDateComponents, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setCreationTimeZone, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setDoi, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setFormatVersion, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setLicense, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setProgramName, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setRunByName, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setSatelliteSystem, METH_O),
            DECLARE_METHOD(t_RinexBaseHeader, setStationInformation, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexBaseHeader)[] = {
            { Py_tp_methods, t_RinexBaseHeader__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexBaseHeader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexBaseHeader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexBaseHeader, t_RinexBaseHeader, RinexBaseHeader);

          void t_RinexBaseHeader::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexBaseHeader), &PY_TYPE_DEF(RinexBaseHeader), module, "RinexBaseHeader", 0);
          }

          void t_RinexBaseHeader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexBaseHeader), "class_", make_descriptor(RinexBaseHeader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexBaseHeader), "wrapfn_", make_descriptor(t_RinexBaseHeader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexBaseHeader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexBaseHeader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexBaseHeader::initializeClass, 1)))
              return NULL;
            return t_RinexBaseHeader::wrap_Object(RinexBaseHeader(((t_RinexBaseHeader *) arg)->object.this$));
          }
          static PyObject *t_RinexBaseHeader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexBaseHeader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexBaseHeader_getCreationDate(t_RinexBaseHeader *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexBaseHeader_getCreationDateComponents(t_RinexBaseHeader *self)
          {
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDateComponents());
            return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
          }

          static PyObject *t_RinexBaseHeader_getCreationTimeZone(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationTimeZone());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getDoi(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getDoi());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getFileType(t_RinexBaseHeader *self)
          {
            ::org::orekit::files::rinex::utils::RinexFileType result((jobject) NULL);
            OBJ_CALL(result = self->object.getFileType());
            return ::org::orekit::files::rinex::utils::t_RinexFileType::wrap_Object(result);
          }

          static PyObject *t_RinexBaseHeader_getFormatVersion(t_RinexBaseHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexBaseHeader_getLicense(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLicense());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getProgramName(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getProgramName());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getRunByName(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRunByName());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_getSatelliteSystem(t_RinexBaseHeader *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_RinexBaseHeader_getStationInformation(t_RinexBaseHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStationInformation());
            return j2p(result);
          }

          static PyObject *t_RinexBaseHeader_setCreationDate(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCreationDate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDate", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setCreationDateComponents(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::org::orekit::time::DateTimeComponents a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::DateTimeComponents::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCreationDateComponents(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDateComponents", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setCreationTimeZone(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationTimeZone(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationTimeZone", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setDoi(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setDoi(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDoi", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setFormatVersion(t_RinexBaseHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setFormatVersion(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFormatVersion", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setLicense(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setLicense(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLicense", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setProgramName(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setProgramName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setProgramName", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setRunByName(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setRunByName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setRunByName", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setSatelliteSystem(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(self->object.setSatelliteSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSatelliteSystem", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_setStationInformation(t_RinexBaseHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setStationInformation(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setStationInformation", arg);
            return NULL;
          }

          static PyObject *t_RinexBaseHeader_get__creationDate(t_RinexBaseHeader *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexBaseHeader_set__creationDate(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setCreationDate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDate", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__creationDateComponents(t_RinexBaseHeader *self, void *data)
          {
            ::org::orekit::time::DateTimeComponents value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDateComponents());
            return ::org::orekit::time::t_DateTimeComponents::wrap_Object(value);
          }
          static int t_RinexBaseHeader_set__creationDateComponents(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::DateTimeComponents value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::DateTimeComponents::initializeClass, &value))
              {
                INT_CALL(self->object.setCreationDateComponents(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDateComponents", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__creationTimeZone(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationTimeZone());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__creationTimeZone(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationTimeZone(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationTimeZone", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__doi(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getDoi());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__doi(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setDoi(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "doi", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__fileType(t_RinexBaseHeader *self, void *data)
          {
            ::org::orekit::files::rinex::utils::RinexFileType value((jobject) NULL);
            OBJ_CALL(value = self->object.getFileType());
            return ::org::orekit::files::rinex::utils::t_RinexFileType::wrap_Object(value);
          }

          static PyObject *t_RinexBaseHeader_get__formatVersion(t_RinexBaseHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexBaseHeader_set__formatVersion(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setFormatVersion(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "formatVersion", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__license(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLicense());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__license(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setLicense(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "license", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__programName(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getProgramName());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__programName(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setProgramName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "programName", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__runByName(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRunByName());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__runByName(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setRunByName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "runByName", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__satelliteSystem(t_RinexBaseHeader *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
          static int t_RinexBaseHeader_set__satelliteSystem(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::SatelliteSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setSatelliteSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "satelliteSystem", arg);
            return -1;
          }

          static PyObject *t_RinexBaseHeader_get__stationInformation(t_RinexBaseHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStationInformation());
            return j2p(value);
          }
          static int t_RinexBaseHeader_set__stationInformation(t_RinexBaseHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setStationInformation(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "stationInformation", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DependentVectorsHandler.h"
#include "java/util/List.h"
#include "org/hipparchus/linear/DependentVectorsHandler.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DependentVectorsHandler::class$ = NULL;
      jmethodID *DependentVectorsHandler::mids$ = NULL;
      bool DependentVectorsHandler::live$ = false;
      DependentVectorsHandler *DependentVectorsHandler::ADD_ZERO_VECTOR = NULL;
      DependentVectorsHandler *DependentVectorsHandler::GENERATE_EXCEPTION = NULL;
      DependentVectorsHandler *DependentVectorsHandler::REDUCE_BASE_TO_SPAN = NULL;

      jclass DependentVectorsHandler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DependentVectorsHandler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_manageDependent_6ff729c408795275] = env->getMethodID(cls, "manageDependent", "(ILjava/util/List;)I");
          mids$[mid_manageDependent_55a90ba7dcaff80c] = env->getMethodID(cls, "manageDependent", "(Lorg/hipparchus/Field;ILjava/util/List;)I");
          mids$[mid_valueOf_ac716b038b45c93c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/linear/DependentVectorsHandler;");
          mids$[mid_values_218cb98788baa394] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/linear/DependentVectorsHandler;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ADD_ZERO_VECTOR = new DependentVectorsHandler(env->getStaticObjectField(cls, "ADD_ZERO_VECTOR", "Lorg/hipparchus/linear/DependentVectorsHandler;"));
          GENERATE_EXCEPTION = new DependentVectorsHandler(env->getStaticObjectField(cls, "GENERATE_EXCEPTION", "Lorg/hipparchus/linear/DependentVectorsHandler;"));
          REDUCE_BASE_TO_SPAN = new DependentVectorsHandler(env->getStaticObjectField(cls, "REDUCE_BASE_TO_SPAN", "Lorg/hipparchus/linear/DependentVectorsHandler;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint DependentVectorsHandler::manageDependent(jint a0, const ::java::util::List & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_manageDependent_6ff729c408795275], a0, a1.this$);
      }

      jint DependentVectorsHandler::manageDependent(const ::org::hipparchus::Field & a0, jint a1, const ::java::util::List & a2) const
      {
        return env->callIntMethod(this$, mids$[mid_manageDependent_55a90ba7dcaff80c], a0.this$, a1, a2.this$);
      }

      DependentVectorsHandler DependentVectorsHandler::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DependentVectorsHandler(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ac716b038b45c93c], a0.this$));
      }

      JArray< DependentVectorsHandler > DependentVectorsHandler::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< DependentVectorsHandler >(env->callStaticObjectMethod(cls, mids$[mid_values_218cb98788baa394]));
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
      static PyObject *t_DependentVectorsHandler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DependentVectorsHandler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DependentVectorsHandler_of_(t_DependentVectorsHandler *self, PyObject *args);
      static PyObject *t_DependentVectorsHandler_manageDependent(t_DependentVectorsHandler *self, PyObject *args);
      static PyObject *t_DependentVectorsHandler_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_DependentVectorsHandler_values(PyTypeObject *type);
      static PyObject *t_DependentVectorsHandler_get__parameters_(t_DependentVectorsHandler *self, void *data);
      static PyGetSetDef t_DependentVectorsHandler__fields_[] = {
        DECLARE_GET_FIELD(t_DependentVectorsHandler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DependentVectorsHandler__methods_[] = {
        DECLARE_METHOD(t_DependentVectorsHandler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DependentVectorsHandler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DependentVectorsHandler, of_, METH_VARARGS),
        DECLARE_METHOD(t_DependentVectorsHandler, manageDependent, METH_VARARGS),
        DECLARE_METHOD(t_DependentVectorsHandler, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DependentVectorsHandler, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DependentVectorsHandler)[] = {
        { Py_tp_methods, t_DependentVectorsHandler__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DependentVectorsHandler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DependentVectorsHandler)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(DependentVectorsHandler, t_DependentVectorsHandler, DependentVectorsHandler);
      PyObject *t_DependentVectorsHandler::wrap_Object(const DependentVectorsHandler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DependentVectorsHandler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DependentVectorsHandler *self = (t_DependentVectorsHandler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DependentVectorsHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DependentVectorsHandler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DependentVectorsHandler *self = (t_DependentVectorsHandler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DependentVectorsHandler::install(PyObject *module)
      {
        installType(&PY_TYPE(DependentVectorsHandler), &PY_TYPE_DEF(DependentVectorsHandler), module, "DependentVectorsHandler", 0);
      }

      void t_DependentVectorsHandler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "class_", make_descriptor(DependentVectorsHandler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "wrapfn_", make_descriptor(t_DependentVectorsHandler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "boxfn_", make_descriptor(boxObject));
        env->getClass(DependentVectorsHandler::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "ADD_ZERO_VECTOR", make_descriptor(t_DependentVectorsHandler::wrap_Object(*DependentVectorsHandler::ADD_ZERO_VECTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "GENERATE_EXCEPTION", make_descriptor(t_DependentVectorsHandler::wrap_Object(*DependentVectorsHandler::GENERATE_EXCEPTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "REDUCE_BASE_TO_SPAN", make_descriptor(t_DependentVectorsHandler::wrap_Object(*DependentVectorsHandler::REDUCE_BASE_TO_SPAN)));
      }

      static PyObject *t_DependentVectorsHandler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DependentVectorsHandler::initializeClass, 1)))
          return NULL;
        return t_DependentVectorsHandler::wrap_Object(DependentVectorsHandler(((t_DependentVectorsHandler *) arg)->object.this$));
      }
      static PyObject *t_DependentVectorsHandler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DependentVectorsHandler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DependentVectorsHandler_of_(t_DependentVectorsHandler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_DependentVectorsHandler_manageDependent(t_DependentVectorsHandler *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            jint result;

            if (!parseArgs(args, "IK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.manageDependent(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jint result;

            if (!parseArgs(args, "KIK", ::org::hipparchus::Field::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.manageDependent(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "manageDependent", args);
        return NULL;
      }

      static PyObject *t_DependentVectorsHandler_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        DependentVectorsHandler result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::DependentVectorsHandler::valueOf(a0));
          return t_DependentVectorsHandler::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_DependentVectorsHandler_values(PyTypeObject *type)
      {
        JArray< DependentVectorsHandler > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::linear::DependentVectorsHandler::values());
        return JArray<jobject>(result.this$).wrap(t_DependentVectorsHandler::wrap_jobject);
      }
      static PyObject *t_DependentVectorsHandler_get__parameters_(t_DependentVectorsHandler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        ::java::lang::Class *EnclosingBall::class$ = NULL;
        jmethodID *EnclosingBall::mids$ = NULL;
        bool EnclosingBall::live$ = false;

        jclass EnclosingBall::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/enclosing/EnclosingBall");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b2470e81f68b6dba] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/Point;D[Lorg/hipparchus/geometry/Point;)V");
            mids$[mid_contains_51403b98cc649329] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/Point;)Z");
            mids$[mid_contains_0ba81b37dd665c3c] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/Point;D)Z");
            mids$[mid_getCenter_e164db6eb4ec1f00] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getRadius_dff5885c2c873297] = env->getMethodID(cls, "getRadius", "()D");
            mids$[mid_getSupport_55a29d8e9344cdba] = env->getMethodID(cls, "getSupport", "()[Lorg/hipparchus/geometry/Point;");
            mids$[mid_getSupportSize_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportSize", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EnclosingBall::EnclosingBall(const ::org::hipparchus::geometry::Point & a0, jdouble a1, const JArray< ::org::hipparchus::geometry::Point > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b2470e81f68b6dba, a0.this$, a1, a2.this$)) {}

        jboolean EnclosingBall::contains(const ::org::hipparchus::geometry::Point & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_51403b98cc649329], a0.this$);
        }

        jboolean EnclosingBall::contains(const ::org::hipparchus::geometry::Point & a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_0ba81b37dd665c3c], a0.this$, a1);
        }

        ::org::hipparchus::geometry::Point EnclosingBall::getCenter() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getCenter_e164db6eb4ec1f00]));
        }

        jdouble EnclosingBall::getRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRadius_dff5885c2c873297]);
        }

        JArray< ::org::hipparchus::geometry::Point > EnclosingBall::getSupport() const
        {
          return JArray< ::org::hipparchus::geometry::Point >(env->callObjectMethod(this$, mids$[mid_getSupport_55a29d8e9344cdba]));
        }

        jint EnclosingBall::getSupportSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportSize_570ce0828f81a2c1]);
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
      namespace enclosing {
        static PyObject *t_EnclosingBall_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnclosingBall_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnclosingBall_of_(t_EnclosingBall *self, PyObject *args);
        static int t_EnclosingBall_init_(t_EnclosingBall *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EnclosingBall_contains(t_EnclosingBall *self, PyObject *args);
        static PyObject *t_EnclosingBall_getCenter(t_EnclosingBall *self);
        static PyObject *t_EnclosingBall_getRadius(t_EnclosingBall *self);
        static PyObject *t_EnclosingBall_getSupport(t_EnclosingBall *self);
        static PyObject *t_EnclosingBall_getSupportSize(t_EnclosingBall *self);
        static PyObject *t_EnclosingBall_get__center(t_EnclosingBall *self, void *data);
        static PyObject *t_EnclosingBall_get__radius(t_EnclosingBall *self, void *data);
        static PyObject *t_EnclosingBall_get__support(t_EnclosingBall *self, void *data);
        static PyObject *t_EnclosingBall_get__supportSize(t_EnclosingBall *self, void *data);
        static PyObject *t_EnclosingBall_get__parameters_(t_EnclosingBall *self, void *data);
        static PyGetSetDef t_EnclosingBall__fields_[] = {
          DECLARE_GET_FIELD(t_EnclosingBall, center),
          DECLARE_GET_FIELD(t_EnclosingBall, radius),
          DECLARE_GET_FIELD(t_EnclosingBall, support),
          DECLARE_GET_FIELD(t_EnclosingBall, supportSize),
          DECLARE_GET_FIELD(t_EnclosingBall, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EnclosingBall__methods_[] = {
          DECLARE_METHOD(t_EnclosingBall, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnclosingBall, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnclosingBall, of_, METH_VARARGS),
          DECLARE_METHOD(t_EnclosingBall, contains, METH_VARARGS),
          DECLARE_METHOD(t_EnclosingBall, getCenter, METH_NOARGS),
          DECLARE_METHOD(t_EnclosingBall, getRadius, METH_NOARGS),
          DECLARE_METHOD(t_EnclosingBall, getSupport, METH_NOARGS),
          DECLARE_METHOD(t_EnclosingBall, getSupportSize, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EnclosingBall)[] = {
          { Py_tp_methods, t_EnclosingBall__methods_ },
          { Py_tp_init, (void *) t_EnclosingBall_init_ },
          { Py_tp_getset, t_EnclosingBall__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EnclosingBall)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EnclosingBall, t_EnclosingBall, EnclosingBall);
        PyObject *t_EnclosingBall::wrap_Object(const EnclosingBall& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EnclosingBall::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EnclosingBall *self = (t_EnclosingBall *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_EnclosingBall::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EnclosingBall::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EnclosingBall *self = (t_EnclosingBall *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_EnclosingBall::install(PyObject *module)
        {
          installType(&PY_TYPE(EnclosingBall), &PY_TYPE_DEF(EnclosingBall), module, "EnclosingBall", 0);
        }

        void t_EnclosingBall::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnclosingBall), "class_", make_descriptor(EnclosingBall::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnclosingBall), "wrapfn_", make_descriptor(t_EnclosingBall::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnclosingBall), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EnclosingBall_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EnclosingBall::initializeClass, 1)))
            return NULL;
          return t_EnclosingBall::wrap_Object(EnclosingBall(((t_EnclosingBall *) arg)->object.this$));
        }
        static PyObject *t_EnclosingBall_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EnclosingBall::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EnclosingBall_of_(t_EnclosingBall *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EnclosingBall_init_(t_EnclosingBall *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          JArray< ::org::hipparchus::geometry::Point > a2((jobject) NULL);
          PyTypeObject **p2;
          EnclosingBall object((jobject) NULL);

          if (!parseArgs(args, "KD[K", ::org::hipparchus::geometry::Point::initializeClass, ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            INT_CALL(object = EnclosingBall(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EnclosingBall_contains(t_EnclosingBall *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::Point a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
              {
                OBJ_CALL(result = self->object.contains(a0));
                Py_RETURN_BOOL(result);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::geometry::Point a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jboolean result;

              if (!parseArgs(args, "KD", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.contains(a0, a1));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "contains", args);
          return NULL;
        }

        static PyObject *t_EnclosingBall_getCenter(t_EnclosingBall *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getCenter());
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::geometry::t_Point::wrap_Object(result);
        }

        static PyObject *t_EnclosingBall_getRadius(t_EnclosingBall *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRadius());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EnclosingBall_getSupport(t_EnclosingBall *self)
        {
          JArray< ::org::hipparchus::geometry::Point > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSupport());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::geometry::t_Point::wrap_jobject);
        }

        static PyObject *t_EnclosingBall_getSupportSize(t_EnclosingBall *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSupportSize());
          return PyLong_FromLong((long) result);
        }
        static PyObject *t_EnclosingBall_get__parameters_(t_EnclosingBall *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EnclosingBall_get__center(t_EnclosingBall *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getCenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }

        static PyObject *t_EnclosingBall_get__radius(t_EnclosingBall *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRadius());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnclosingBall_get__support(t_EnclosingBall *self, void *data)
        {
          JArray< ::org::hipparchus::geometry::Point > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSupport());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::geometry::t_Point::wrap_jobject);
        }

        static PyObject *t_EnclosingBall_get__supportSize(t_EnclosingBall *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportSize());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventShifter.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventShifter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventShifter::class$ = NULL;
        jmethodID *EventShifter::mids$ = NULL;
        bool EventShifter::live$ = false;

        jclass EventShifter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventShifter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0effb5e72d82753d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;ZDD)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDecreasingTimeShift_dff5885c2c873297] = env->getMethodID(cls, "getDecreasingTimeShift", "()D");
            mids$[mid_getDetector_d73bb985ffde4156] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getIncreasingTimeShift_dff5885c2c873297] = env->getMethodID(cls, "getIncreasingTimeShift", "()D");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_97557250afb4ac9e] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EventShifter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventShifter::EventShifter(const ::org::orekit::propagation::events::EventDetector & a0, jboolean a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_0effb5e72d82753d, a0.this$, a1, a2, a3)) {}

        jdouble EventShifter::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        jdouble EventShifter::getDecreasingTimeShift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDecreasingTimeShift_dff5885c2c873297]);
        }

        ::org::orekit::propagation::events::EventDetector EventShifter::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_d73bb985ffde4156]));
        }

        jdouble EventShifter::getIncreasingTimeShift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIncreasingTimeShift_dff5885c2c873297]);
        }

        void EventShifter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
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
        static PyObject *t_EventShifter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventShifter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventShifter_of_(t_EventShifter *self, PyObject *args);
        static int t_EventShifter_init_(t_EventShifter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventShifter_g(t_EventShifter *self, PyObject *args);
        static PyObject *t_EventShifter_getDecreasingTimeShift(t_EventShifter *self);
        static PyObject *t_EventShifter_getDetector(t_EventShifter *self);
        static PyObject *t_EventShifter_getIncreasingTimeShift(t_EventShifter *self);
        static PyObject *t_EventShifter_init(t_EventShifter *self, PyObject *args);
        static PyObject *t_EventShifter_get__decreasingTimeShift(t_EventShifter *self, void *data);
        static PyObject *t_EventShifter_get__detector(t_EventShifter *self, void *data);
        static PyObject *t_EventShifter_get__increasingTimeShift(t_EventShifter *self, void *data);
        static PyObject *t_EventShifter_get__parameters_(t_EventShifter *self, void *data);
        static PyGetSetDef t_EventShifter__fields_[] = {
          DECLARE_GET_FIELD(t_EventShifter, decreasingTimeShift),
          DECLARE_GET_FIELD(t_EventShifter, detector),
          DECLARE_GET_FIELD(t_EventShifter, increasingTimeShift),
          DECLARE_GET_FIELD(t_EventShifter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventShifter__methods_[] = {
          DECLARE_METHOD(t_EventShifter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventShifter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventShifter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventShifter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventShifter, getDecreasingTimeShift, METH_NOARGS),
          DECLARE_METHOD(t_EventShifter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventShifter, getIncreasingTimeShift, METH_NOARGS),
          DECLARE_METHOD(t_EventShifter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventShifter)[] = {
          { Py_tp_methods, t_EventShifter__methods_ },
          { Py_tp_init, (void *) t_EventShifter_init_ },
          { Py_tp_getset, t_EventShifter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventShifter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EventShifter, t_EventShifter, EventShifter);
        PyObject *t_EventShifter::wrap_Object(const EventShifter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventShifter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventShifter *self = (t_EventShifter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventShifter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventShifter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventShifter *self = (t_EventShifter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventShifter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventShifter), &PY_TYPE_DEF(EventShifter), module, "EventShifter", 0);
        }

        void t_EventShifter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventShifter), "class_", make_descriptor(EventShifter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventShifter), "wrapfn_", make_descriptor(t_EventShifter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventShifter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventShifter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventShifter::initializeClass, 1)))
            return NULL;
          return t_EventShifter::wrap_Object(EventShifter(((t_EventShifter *) arg)->object.this$));
        }
        static PyObject *t_EventShifter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventShifter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventShifter_of_(t_EventShifter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventShifter_init_(t_EventShifter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          jboolean a1;
          jdouble a2;
          jdouble a3;
          EventShifter object((jobject) NULL);

          if (!parseArgs(args, "kZDD", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = EventShifter(a0, a1, a2, a3));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EventShifter);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventShifter_g(t_EventShifter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventShifter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventShifter_getDecreasingTimeShift(t_EventShifter *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDecreasingTimeShift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventShifter_getDetector(t_EventShifter *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventShifter_getIncreasingTimeShift(t_EventShifter *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getIncreasingTimeShift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventShifter_init(t_EventShifter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventShifter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventShifter_get__parameters_(t_EventShifter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventShifter_get__decreasingTimeShift(t_EventShifter *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDecreasingTimeShift());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EventShifter_get__detector(t_EventShifter *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_EventShifter_get__increasingTimeShift(t_EventShifter *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIncreasingTimeShift());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/MultipleLinearRegression.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *MultipleLinearRegression::class$ = NULL;
        jmethodID *MultipleLinearRegression::mids$ = NULL;
        bool MultipleLinearRegression::live$ = false;

        jclass MultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/MultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_estimateRegressandVariance_dff5885c2c873297] = env->getMethodID(cls, "estimateRegressandVariance", "()D");
            mids$[mid_estimateRegressionParameters_60c7040667a7dc5c] = env->getMethodID(cls, "estimateRegressionParameters", "()[D");
            mids$[mid_estimateRegressionParametersStandardErrors_60c7040667a7dc5c] = env->getMethodID(cls, "estimateRegressionParametersStandardErrors", "()[D");
            mids$[mid_estimateRegressionParametersVariance_0358d8ea02f2cdb1] = env->getMethodID(cls, "estimateRegressionParametersVariance", "()[[D");
            mids$[mid_estimateResiduals_60c7040667a7dc5c] = env->getMethodID(cls, "estimateResiduals", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble MultipleLinearRegression::estimateRegressandVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateRegressandVariance_dff5885c2c873297]);
        }

        JArray< jdouble > MultipleLinearRegression::estimateRegressionParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParameters_60c7040667a7dc5c]));
        }

        JArray< jdouble > MultipleLinearRegression::estimateRegressionParametersStandardErrors() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersStandardErrors_60c7040667a7dc5c]));
        }

        JArray< JArray< jdouble > > MultipleLinearRegression::estimateRegressionParametersVariance() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersVariance_0358d8ea02f2cdb1]));
        }

        JArray< jdouble > MultipleLinearRegression::estimateResiduals() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateResiduals_60c7040667a7dc5c]));
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
      namespace regression {
        static PyObject *t_MultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultipleLinearRegression_estimateRegressandVariance(t_MultipleLinearRegression *self);
        static PyObject *t_MultipleLinearRegression_estimateRegressionParameters(t_MultipleLinearRegression *self);
        static PyObject *t_MultipleLinearRegression_estimateRegressionParametersStandardErrors(t_MultipleLinearRegression *self);
        static PyObject *t_MultipleLinearRegression_estimateRegressionParametersVariance(t_MultipleLinearRegression *self);
        static PyObject *t_MultipleLinearRegression_estimateResiduals(t_MultipleLinearRegression *self);

        static PyMethodDef t_MultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_MultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateRegressandVariance, METH_NOARGS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateRegressionParameters, METH_NOARGS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateRegressionParametersStandardErrors, METH_NOARGS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateRegressionParametersVariance, METH_NOARGS),
          DECLARE_METHOD(t_MultipleLinearRegression, estimateResiduals, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultipleLinearRegression)[] = {
          { Py_tp_methods, t_MultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultipleLinearRegression, t_MultipleLinearRegression, MultipleLinearRegression);

        void t_MultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(MultipleLinearRegression), &PY_TYPE_DEF(MultipleLinearRegression), module, "MultipleLinearRegression", 0);
        }

        void t_MultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleLinearRegression), "class_", make_descriptor(MultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleLinearRegression), "wrapfn_", make_descriptor(t_MultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_MultipleLinearRegression::wrap_Object(MultipleLinearRegression(((t_MultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_MultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultipleLinearRegression_estimateRegressandVariance(t_MultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateRegressandVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MultipleLinearRegression_estimateRegressionParameters(t_MultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParameters());
          return result.wrap();
        }

        static PyObject *t_MultipleLinearRegression_estimateRegressionParametersStandardErrors(t_MultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParametersStandardErrors());
          return result.wrap();
        }

        static PyObject *t_MultipleLinearRegression_estimateRegressionParametersVariance(t_MultipleLinearRegression *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParametersVariance());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_MultipleLinearRegression_estimateResiduals(t_MultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateResiduals());
          return result.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventDetector::class$ = NULL;
        jmethodID *FieldEventDetector::mids$ = NULL;
        bool FieldEventDetector::live$ = false;

        jclass FieldEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_48965f0f9fa2ddf9] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_69f9ee3154bea730] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_eba8e72a22c984ac] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement FieldEventDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
        }

        ::org::orekit::propagation::events::handlers::FieldEventHandler FieldEventDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::FieldEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_48965f0f9fa2ddf9]));
        }

        ::org::orekit::propagation::events::FieldAdaptableInterval FieldEventDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_69f9ee3154bea730]));
        }

        jint FieldEventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_570ce0828f81a2c1]);
        }

        ::org::hipparchus::CalculusFieldElement FieldEventDetector::getThreshold() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getThreshold_eba8e72a22c984ac]));
        }

        void FieldEventDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventDetector_of_(t_FieldEventDetector *self, PyObject *args);
        static PyObject *t_FieldEventDetector_g(t_FieldEventDetector *self, PyObject *arg);
        static PyObject *t_FieldEventDetector_getHandler(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_getMaxCheckInterval(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_getMaxIterationCount(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_getThreshold(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_init(t_FieldEventDetector *self, PyObject *args);
        static PyObject *t_FieldEventDetector_get__handler(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__maxCheckInterval(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__maxIterationCount(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__threshold(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__parameters_(t_FieldEventDetector *self, void *data);
        static PyGetSetDef t_FieldEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventDetector, handler),
          DECLARE_GET_FIELD(t_FieldEventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldEventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldEventDetector, threshold),
          DECLARE_GET_FIELD(t_FieldEventDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventDetector__methods_[] = {
          DECLARE_METHOD(t_FieldEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventDetector, g, METH_O),
          DECLARE_METHOD(t_FieldEventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventDetector)[] = {
          { Py_tp_methods, t_FieldEventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventDetector, t_FieldEventDetector, FieldEventDetector);
        PyObject *t_FieldEventDetector::wrap_Object(const FieldEventDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventDetector *self = (t_FieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventDetector *self = (t_FieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventDetector), &PY_TYPE_DEF(FieldEventDetector), module, "FieldEventDetector", 0);
        }

        void t_FieldEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventDetector), "class_", make_descriptor(FieldEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventDetector), "wrapfn_", make_descriptor(t_FieldEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventDetector::initializeClass, 1)))
            return NULL;
          return t_FieldEventDetector::wrap_Object(FieldEventDetector(((t_FieldEventDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventDetector_of_(t_FieldEventDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventDetector_g(t_FieldEventDetector *self, PyObject *arg)
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

        static PyObject *t_FieldEventDetector_getHandler(t_FieldEventDetector *self)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventDetector_getMaxCheckInterval(t_FieldEventDetector *self)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventDetector_getMaxIterationCount(t_FieldEventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldEventDetector_getThreshold(t_FieldEventDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getThreshold());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldEventDetector_init(t_FieldEventDetector *self, PyObject *args)
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
        static PyObject *t_FieldEventDetector_get__parameters_(t_FieldEventDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventDetector_get__handler(t_FieldEventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldEventDetector_get__maxCheckInterval(t_FieldEventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldEventDetector_get__maxIterationCount(t_FieldEventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldEventDetector_get__threshold(t_FieldEventDetector *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/ModifiedFrame.h"
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *ModifiedFrame::class$ = NULL;
          jmethodID *ModifiedFrame::mids$ = NULL;
          bool ModifiedFrame::live$ = false;

          jclass ModifiedFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/ModifiedFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e9cfa26feec02953] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;Lorg/orekit/bodies/CelestialBody;Ljava/lang/String;)V");
              mids$[mid_getCenterName_11b109bd155ca898] = env->getMethodID(cls, "getCenterName", "()Ljava/lang/String;");
              mids$[mid_getRefFrame_d0abc16340ab4d13] = env->getMethodID(cls, "getRefFrame", "()Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ModifiedFrame::ModifiedFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::files::ccsds::definitions::CelestialBodyFrame & a1, const ::org::orekit::bodies::CelestialBody & a2, const ::java::lang::String & a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_e9cfa26feec02953, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::java::lang::String ModifiedFrame::getCenterName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCenterName_11b109bd155ca898]));
          }

          ::org::orekit::files::ccsds::definitions::CelestialBodyFrame ModifiedFrame::getRefFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::CelestialBodyFrame(env->callObjectMethod(this$, mids$[mid_getRefFrame_d0abc16340ab4d13]));
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
          static PyObject *t_ModifiedFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ModifiedFrame_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ModifiedFrame_init_(t_ModifiedFrame *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ModifiedFrame_getCenterName(t_ModifiedFrame *self);
          static PyObject *t_ModifiedFrame_getRefFrame(t_ModifiedFrame *self);
          static PyObject *t_ModifiedFrame_get__centerName(t_ModifiedFrame *self, void *data);
          static PyObject *t_ModifiedFrame_get__refFrame(t_ModifiedFrame *self, void *data);
          static PyGetSetDef t_ModifiedFrame__fields_[] = {
            DECLARE_GET_FIELD(t_ModifiedFrame, centerName),
            DECLARE_GET_FIELD(t_ModifiedFrame, refFrame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ModifiedFrame__methods_[] = {
            DECLARE_METHOD(t_ModifiedFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifiedFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifiedFrame, getCenterName, METH_NOARGS),
            DECLARE_METHOD(t_ModifiedFrame, getRefFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ModifiedFrame)[] = {
            { Py_tp_methods, t_ModifiedFrame__methods_ },
            { Py_tp_init, (void *) t_ModifiedFrame_init_ },
            { Py_tp_getset, t_ModifiedFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ModifiedFrame)[] = {
            &PY_TYPE_DEF(::org::orekit::frames::Frame),
            NULL
          };

          DEFINE_TYPE(ModifiedFrame, t_ModifiedFrame, ModifiedFrame);

          void t_ModifiedFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(ModifiedFrame), &PY_TYPE_DEF(ModifiedFrame), module, "ModifiedFrame", 0);
          }

          void t_ModifiedFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedFrame), "class_", make_descriptor(ModifiedFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedFrame), "wrapfn_", make_descriptor(t_ModifiedFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedFrame), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ModifiedFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ModifiedFrame::initializeClass, 1)))
              return NULL;
            return t_ModifiedFrame::wrap_Object(ModifiedFrame(((t_ModifiedFrame *) arg)->object.this$));
          }
          static PyObject *t_ModifiedFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ModifiedFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ModifiedFrame_init_(t_ModifiedFrame *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::bodies::CelestialBody a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ModifiedFrame object((jobject) NULL);

            if (!parseArgs(args, "kKks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::parameters_, &a2, &a3))
            {
              INT_CALL(object = ModifiedFrame(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ModifiedFrame_getCenterName(t_ModifiedFrame *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCenterName());
            return j2p(result);
          }

          static PyObject *t_ModifiedFrame_getRefFrame(t_ModifiedFrame *self)
          {
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.getRefFrame());
            return ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::wrap_Object(result);
          }

          static PyObject *t_ModifiedFrame_get__centerName(t_ModifiedFrame *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCenterName());
            return j2p(value);
          }

          static PyObject *t_ModifiedFrame_get__refFrame(t_ModifiedFrame *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame value((jobject) NULL);
            OBJ_CALL(value = self->object.getRefFrame());
            return ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/RtcmMessagesParser.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *RtcmMessagesParser::class$ = NULL;
          jmethodID *RtcmMessagesParser::mids$ = NULL;
          bool RtcmMessagesParser::live$ = false;

          jclass RtcmMessagesParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/RtcmMessagesParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_de3e021e7266b71e] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_getMessageType_b909afe8923771a6] = env->getMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/MessageType;");
              mids$[mid_parseMessageNumber_bbc828ae54845950] = env->getMethodID(cls, "parseMessageNumber", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RtcmMessagesParser::RtcmMessagesParser(const ::java::util::List & a0) : ::org::orekit::gnss::metric::parser::MessagesParser(env->newObject(initializeClass, &mids$, mid_init$_de3e021e7266b71e, a0.this$)) {}
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
          static PyObject *t_RtcmMessagesParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessagesParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RtcmMessagesParser_init_(t_RtcmMessagesParser *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_RtcmMessagesParser__methods_[] = {
            DECLARE_METHOD(t_RtcmMessagesParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessagesParser, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RtcmMessagesParser)[] = {
            { Py_tp_methods, t_RtcmMessagesParser__methods_ },
            { Py_tp_init, (void *) t_RtcmMessagesParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RtcmMessagesParser)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::MessagesParser),
            NULL
          };

          DEFINE_TYPE(RtcmMessagesParser, t_RtcmMessagesParser, RtcmMessagesParser);

          void t_RtcmMessagesParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RtcmMessagesParser), &PY_TYPE_DEF(RtcmMessagesParser), module, "RtcmMessagesParser", 0);
          }

          void t_RtcmMessagesParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessagesParser), "class_", make_descriptor(RtcmMessagesParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessagesParser), "wrapfn_", make_descriptor(t_RtcmMessagesParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessagesParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RtcmMessagesParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RtcmMessagesParser::initializeClass, 1)))
              return NULL;
            return t_RtcmMessagesParser::wrap_Object(RtcmMessagesParser(((t_RtcmMessagesParser *) arg)->object.this$));
          }
          static PyObject *t_RtcmMessagesParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RtcmMessagesParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RtcmMessagesParser_init_(t_RtcmMessagesParser *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            RtcmMessagesParser object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = RtcmMessagesParser(a0));
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
#include "org/orekit/files/ccsds/ndm/tdm/Tdm.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *Tdm::class$ = NULL;
            jmethodID *Tdm::mids$ = NULL;
            bool Tdm::live$ = false;
            ::java::lang::String *Tdm::FORMAT_VERSION_KEY = NULL;
            ::java::lang::String *Tdm::ROOT = NULL;

            jclass Tdm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/Tdm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_b2fcbc8571194da5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Tdm::Tdm(const ::org::orekit::files::ccsds::ndm::tdm::TdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_b2fcbc8571194da5, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
            static PyObject *t_Tdm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Tdm_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Tdm_of_(t_Tdm *self, PyObject *args);
            static int t_Tdm_init_(t_Tdm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_Tdm_get__parameters_(t_Tdm *self, void *data);
            static PyGetSetDef t_Tdm__fields_[] = {
              DECLARE_GET_FIELD(t_Tdm, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Tdm__methods_[] = {
              DECLARE_METHOD(t_Tdm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Tdm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Tdm, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Tdm)[] = {
              { Py_tp_methods, t_Tdm__methods_ },
              { Py_tp_init, (void *) t_Tdm_init_ },
              { Py_tp_getset, t_Tdm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Tdm)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
              NULL
            };

            DEFINE_TYPE(Tdm, t_Tdm, Tdm);
            PyObject *t_Tdm::wrap_Object(const Tdm& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Tdm::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Tdm *self = (t_Tdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_Tdm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Tdm::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Tdm *self = (t_Tdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_Tdm::install(PyObject *module)
            {
              installType(&PY_TYPE(Tdm), &PY_TYPE_DEF(Tdm), module, "Tdm", 0);
            }

            void t_Tdm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "class_", make_descriptor(Tdm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "wrapfn_", make_descriptor(t_Tdm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "boxfn_", make_descriptor(boxObject));
              env->getClass(Tdm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Tdm::FORMAT_VERSION_KEY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "ROOT", make_descriptor(j2p(*Tdm::ROOT)));
            }

            static PyObject *t_Tdm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Tdm::initializeClass, 1)))
                return NULL;
              return t_Tdm::wrap_Object(Tdm(((t_Tdm *) arg)->object.this$));
            }
            static PyObject *t_Tdm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Tdm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Tdm_of_(t_Tdm *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_Tdm_init_(t_Tdm *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmHeader a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::IERSConventions a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              Tdm object((jobject) NULL);

              if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::tdm::TdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
              {
                INT_CALL(object = Tdm(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(TdmHeader);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
            static PyObject *t_Tdm_get__parameters_(t_Tdm *self, void *data)
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
#include "org/hipparchus/distribution/continuous/BetaDistribution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *BetaDistribution::class$ = NULL;
        jmethodID *BetaDistribution::mids$ = NULL;
        bool BetaDistribution::live$ = false;

        jclass BetaDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/BetaDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getAlpha_dff5885c2c873297] = env->getMethodID(cls, "getAlpha", "()D");
            mids$[mid_getBeta_dff5885c2c873297] = env->getMethodID(cls, "getBeta", "()D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_dcbc7ce2902fa136] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BetaDistribution::BetaDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        BetaDistribution::BetaDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        jdouble BetaDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble BetaDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble BetaDistribution::getAlpha() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAlpha_dff5885c2c873297]);
        }

        jdouble BetaDistribution::getBeta() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBeta_dff5885c2c873297]);
        }

        jdouble BetaDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble BetaDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble BetaDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble BetaDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jboolean BetaDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble BetaDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_dcbc7ce2902fa136], a0);
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
        static PyObject *t_BetaDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BetaDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BetaDistribution_init_(t_BetaDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BetaDistribution_cumulativeProbability(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_density(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getAlpha(t_BetaDistribution *self);
        static PyObject *t_BetaDistribution_getBeta(t_BetaDistribution *self);
        static PyObject *t_BetaDistribution_getNumericalMean(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getNumericalVariance(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getSupportLowerBound(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getSupportUpperBound(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_isSupportConnected(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_logDensity(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_get__alpha(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__beta(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__numericalMean(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__numericalVariance(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__supportConnected(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__supportLowerBound(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__supportUpperBound(t_BetaDistribution *self, void *data);
        static PyGetSetDef t_BetaDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_BetaDistribution, alpha),
          DECLARE_GET_FIELD(t_BetaDistribution, beta),
          DECLARE_GET_FIELD(t_BetaDistribution, numericalMean),
          DECLARE_GET_FIELD(t_BetaDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_BetaDistribution, supportConnected),
          DECLARE_GET_FIELD(t_BetaDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_BetaDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BetaDistribution__methods_[] = {
          DECLARE_METHOD(t_BetaDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BetaDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BetaDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getAlpha, METH_NOARGS),
          DECLARE_METHOD(t_BetaDistribution, getBeta, METH_NOARGS),
          DECLARE_METHOD(t_BetaDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BetaDistribution)[] = {
          { Py_tp_methods, t_BetaDistribution__methods_ },
          { Py_tp_init, (void *) t_BetaDistribution_init_ },
          { Py_tp_getset, t_BetaDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BetaDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(BetaDistribution, t_BetaDistribution, BetaDistribution);

        void t_BetaDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(BetaDistribution), &PY_TYPE_DEF(BetaDistribution), module, "BetaDistribution", 0);
        }

        void t_BetaDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BetaDistribution), "class_", make_descriptor(BetaDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BetaDistribution), "wrapfn_", make_descriptor(t_BetaDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BetaDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BetaDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BetaDistribution::initializeClass, 1)))
            return NULL;
          return t_BetaDistribution::wrap_Object(BetaDistribution(((t_BetaDistribution *) arg)->object.this$));
        }
        static PyObject *t_BetaDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BetaDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BetaDistribution_init_(t_BetaDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              BetaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BetaDistribution(a0, a1));
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
              BetaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = BetaDistribution(a0, a1, a2));
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

        static PyObject *t_BetaDistribution_cumulativeProbability(t_BetaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_BetaDistribution_density(t_BetaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_BetaDistribution_getAlpha(t_BetaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAlpha());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BetaDistribution_getBeta(t_BetaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBeta());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BetaDistribution_getNumericalMean(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_BetaDistribution_getNumericalVariance(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_BetaDistribution_getSupportLowerBound(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_BetaDistribution_getSupportUpperBound(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_BetaDistribution_isSupportConnected(t_BetaDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_BetaDistribution_logDensity(t_BetaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_BetaDistribution_get__alpha(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAlpha());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__beta(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBeta());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__numericalMean(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__numericalVariance(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__supportConnected(t_BetaDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_BetaDistribution_get__supportLowerBound(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__supportUpperBound(t_BetaDistribution *self, void *data)
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
#include "org/orekit/attitudes/LofOffsetPointing.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *LofOffsetPointing::class$ = NULL;
      jmethodID *LofOffsetPointing::mids$ = NULL;
      bool LofOffsetPointing::live$ = false;

      jclass LofOffsetPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/LofOffsetPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0178a01d39650a2f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/BodyShape;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_53a81d4d17b13463] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_29422c22de775b74] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getTargetPV_ad3e02e6f0d115f2] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_129d59e5c897146f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LofOffsetPointing::LofOffsetPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::BodyShape & a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_0178a01d39650a2f, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::orekit::attitudes::FieldAttitude LofOffsetPointing::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude LofOffsetPointing::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LofOffsetPointing::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_53a81d4d17b13463], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LofOffsetPointing::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_29422c22de775b74], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates LofOffsetPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_ad3e02e6f0d115f2], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates LofOffsetPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_129d59e5c897146f], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_LofOffsetPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LofOffsetPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LofOffsetPointing_init_(t_LofOffsetPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LofOffsetPointing_getAttitude(t_LofOffsetPointing *self, PyObject *args);
      static PyObject *t_LofOffsetPointing_getAttitudeRotation(t_LofOffsetPointing *self, PyObject *args);
      static PyObject *t_LofOffsetPointing_getTargetPV(t_LofOffsetPointing *self, PyObject *args);

      static PyMethodDef t_LofOffsetPointing__methods_[] = {
        DECLARE_METHOD(t_LofOffsetPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LofOffsetPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LofOffsetPointing, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_LofOffsetPointing, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_LofOffsetPointing, getTargetPV, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LofOffsetPointing)[] = {
        { Py_tp_methods, t_LofOffsetPointing__methods_ },
        { Py_tp_init, (void *) t_LofOffsetPointing_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LofOffsetPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(LofOffsetPointing, t_LofOffsetPointing, LofOffsetPointing);

      void t_LofOffsetPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(LofOffsetPointing), &PY_TYPE_DEF(LofOffsetPointing), module, "LofOffsetPointing", 0);
      }

      void t_LofOffsetPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffsetPointing), "class_", make_descriptor(LofOffsetPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffsetPointing), "wrapfn_", make_descriptor(t_LofOffsetPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffsetPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LofOffsetPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LofOffsetPointing::initializeClass, 1)))
          return NULL;
        return t_LofOffsetPointing::wrap_Object(LofOffsetPointing(((t_LofOffsetPointing *) arg)->object.this$));
      }
      static PyObject *t_LofOffsetPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LofOffsetPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LofOffsetPointing_init_(t_LofOffsetPointing *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::bodies::BodyShape a1((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        LofOffsetPointing object((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = LofOffsetPointing(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LofOffsetPointing_getAttitude(t_LofOffsetPointing *self, PyObject *args)
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

        return callSuper(PY_TYPE(LofOffsetPointing), (PyObject *) self, "getAttitude", args, 2);
      }

      static PyObject *t_LofOffsetPointing_getAttitudeRotation(t_LofOffsetPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        return callSuper(PY_TYPE(LofOffsetPointing), (PyObject *) self, "getAttitudeRotation", args, 2);
      }

      static PyObject *t_LofOffsetPointing_getTargetPV(t_LofOffsetPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/GroundReceiverCommonParametersWithDerivatives.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/frames/FieldTransform.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *GroundReceiverCommonParametersWithDerivatives::class$ = NULL;
        jmethodID *GroundReceiverCommonParametersWithDerivatives::mids$ = NULL;
        bool GroundReceiverCommonParametersWithDerivatives::live$ = false;

        jclass GroundReceiverCommonParametersWithDerivatives::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/GroundReceiverCommonParametersWithDerivatives");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cb17d21f7c118e74] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Ljava/util/Map;Lorg/orekit/frames/FieldTransform;Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)V");
            mids$[mid_getIndices_6f5a75ccd8c04465] = env->getMethodID(cls, "getIndices", "()Ljava/util/Map;");
            mids$[mid_getOffsetToInertialDownlink_8c35d0b6fdd377c3] = env->getMethodID(cls, "getOffsetToInertialDownlink", "()Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getState_c6311115fea01a34] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStationDownlink_f89522ff77904397] = env->getMethodID(cls, "getStationDownlink", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getTauD_cc2f4e0a456f51de] = env->getMethodID(cls, "getTauD", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getTransitPV_f89522ff77904397] = env->getMethodID(cls, "getTransitPV", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getTransitState_c6311115fea01a34] = env->getMethodID(cls, "getTransitState", "()Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundReceiverCommonParametersWithDerivatives::GroundReceiverCommonParametersWithDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const ::java::util::Map & a1, const ::org::orekit::frames::FieldTransform & a2, const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a3, const ::org::hipparchus::analysis::differentiation::Gradient & a4, const ::org::orekit::propagation::SpacecraftState & a5, const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cb17d21f7c118e74, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        ::java::util::Map GroundReceiverCommonParametersWithDerivatives::getIndices() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getIndices_6f5a75ccd8c04465]));
        }

        ::org::orekit::frames::FieldTransform GroundReceiverCommonParametersWithDerivatives::getOffsetToInertialDownlink() const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertialDownlink_8c35d0b6fdd377c3]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithDerivatives::getState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_c6311115fea01a34]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates GroundReceiverCommonParametersWithDerivatives::getStationDownlink() const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getStationDownlink_f89522ff77904397]));
        }

        ::org::hipparchus::analysis::differentiation::Gradient GroundReceiverCommonParametersWithDerivatives::getTauD() const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getTauD_cc2f4e0a456f51de]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates GroundReceiverCommonParametersWithDerivatives::getTransitPV() const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTransitPV_f89522ff77904397]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithDerivatives::getTransitState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getTransitState_c6311115fea01a34]));
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
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GroundReceiverCommonParametersWithDerivatives_init_(t_GroundReceiverCommonParametersWithDerivatives *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getIndices(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getOffsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getState(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getStationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTauD(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitPV(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitState(t_GroundReceiverCommonParametersWithDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__indices(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__offsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__state(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__stationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__tauD(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitPV(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitState(t_GroundReceiverCommonParametersWithDerivatives *self, void *data);
        static PyGetSetDef t_GroundReceiverCommonParametersWithDerivatives__fields_[] = {
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, indices),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, offsetToInertialDownlink),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, state),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, stationDownlink),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, tauD),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, transitPV),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithDerivatives, transitState),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundReceiverCommonParametersWithDerivatives__methods_[] = {
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getIndices, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getOffsetToInertialDownlink, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getState, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getStationDownlink, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getTauD, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getTransitPV, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithDerivatives, getTransitState, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundReceiverCommonParametersWithDerivatives)[] = {
          { Py_tp_methods, t_GroundReceiverCommonParametersWithDerivatives__methods_ },
          { Py_tp_init, (void *) t_GroundReceiverCommonParametersWithDerivatives_init_ },
          { Py_tp_getset, t_GroundReceiverCommonParametersWithDerivatives__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundReceiverCommonParametersWithDerivatives)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GroundReceiverCommonParametersWithDerivatives, t_GroundReceiverCommonParametersWithDerivatives, GroundReceiverCommonParametersWithDerivatives);

        void t_GroundReceiverCommonParametersWithDerivatives::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundReceiverCommonParametersWithDerivatives), &PY_TYPE_DEF(GroundReceiverCommonParametersWithDerivatives), module, "GroundReceiverCommonParametersWithDerivatives", 0);
        }

        void t_GroundReceiverCommonParametersWithDerivatives::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithDerivatives), "class_", make_descriptor(GroundReceiverCommonParametersWithDerivatives::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithDerivatives), "wrapfn_", make_descriptor(t_GroundReceiverCommonParametersWithDerivatives::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithDerivatives), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundReceiverCommonParametersWithDerivatives::initializeClass, 1)))
            return NULL;
          return t_GroundReceiverCommonParametersWithDerivatives::wrap_Object(GroundReceiverCommonParametersWithDerivatives(((t_GroundReceiverCommonParametersWithDerivatives *) arg)->object.this$));
        }
        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundReceiverCommonParametersWithDerivatives::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GroundReceiverCommonParametersWithDerivatives_init_(t_GroundReceiverCommonParametersWithDerivatives *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::java::util::Map a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::frames::FieldTransform a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::utils::TimeStampedFieldPVCoordinates a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::analysis::differentiation::Gradient a4((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a5((jobject) NULL);
          ::org::orekit::utils::TimeStampedFieldPVCoordinates a6((jobject) NULL);
          PyTypeObject **p6;
          GroundReceiverCommonParametersWithDerivatives object((jobject) NULL);

          if (!parseArgs(args, "kKKKkkK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::java::util::Map::initializeClass, ::org::orekit::frames::FieldTransform::initializeClass, ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_, &a2, &p2, ::org::orekit::frames::t_FieldTransform::parameters_, &a3, &p3, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a4, &a5, &a6, &p6, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
          {
            INT_CALL(object = GroundReceiverCommonParametersWithDerivatives(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getIndices(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getIndices());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(Integer));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getOffsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::frames::FieldTransform result((jobject) NULL);
          OBJ_CALL(result = self->object.getOffsetToInertialDownlink());
          return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getState(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getStationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getStationDownlink());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTauD(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getTauD());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitPV(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getTransitPV());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_getTransitState(t_GroundReceiverCommonParametersWithDerivatives *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getTransitState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__indices(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getIndices());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__offsetToInertialDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::frames::FieldTransform value((jobject) NULL);
          OBJ_CALL(value = self->object.getOffsetToInertialDownlink());
          return ::org::orekit::frames::t_FieldTransform::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__state(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__stationDownlink(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getStationDownlink());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__tauD(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getTauD());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitPV(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransitPV());
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithDerivatives_get__transitState(t_GroundReceiverCommonParametersWithDerivatives *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransitState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
