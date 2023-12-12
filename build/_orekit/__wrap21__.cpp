#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmHeader::class$ = NULL;
            jmethodID *CdmHeader::mids$ = NULL;
            bool CdmHeader::live$ = false;

            jclass CdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getMessageFor_3cffd47377eca18a] = env->getMethodID(cls, "getMessageFor", "()Ljava/lang/String;");
                mids$[mid_setMessageFor_f5ffdf29129ef90a] = env->getMethodID(cls, "setMessageFor", "(Ljava/lang/String;)V");
                mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmHeader::CdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            ::java::lang::String CdmHeader::getMessageFor() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessageFor_3cffd47377eca18a]));
            }

            void CdmHeader::setMessageFor(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMessageFor_f5ffdf29129ef90a], a0.this$);
            }

            void CdmHeader::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
            static PyObject *t_CdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmHeader_init_(t_CdmHeader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmHeader_getMessageFor(t_CdmHeader *self);
            static PyObject *t_CdmHeader_setMessageFor(t_CdmHeader *self, PyObject *arg);
            static PyObject *t_CdmHeader_validate(t_CdmHeader *self, PyObject *args);
            static PyObject *t_CdmHeader_get__messageFor(t_CdmHeader *self, void *data);
            static int t_CdmHeader_set__messageFor(t_CdmHeader *self, PyObject *arg, void *data);
            static PyGetSetDef t_CdmHeader__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmHeader, messageFor),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmHeader__methods_[] = {
              DECLARE_METHOD(t_CdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeader, getMessageFor, METH_NOARGS),
              DECLARE_METHOD(t_CdmHeader, setMessageFor, METH_O),
              DECLARE_METHOD(t_CdmHeader, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmHeader)[] = {
              { Py_tp_methods, t_CdmHeader__methods_ },
              { Py_tp_init, (void *) t_CdmHeader_init_ },
              { Py_tp_getset, t_CdmHeader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(CdmHeader, t_CdmHeader, CdmHeader);

            void t_CdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmHeader), &PY_TYPE_DEF(CdmHeader), module, "CdmHeader", 0);
            }

            void t_CdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeader), "class_", make_descriptor(CdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeader), "wrapfn_", make_descriptor(t_CdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmHeader::initializeClass, 1)))
                return NULL;
              return t_CdmHeader::wrap_Object(CdmHeader(((t_CdmHeader *) arg)->object.this$));
            }
            static PyObject *t_CdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmHeader_init_(t_CdmHeader *self, PyObject *args, PyObject *kwds)
            {
              CdmHeader object((jobject) NULL);

              INT_CALL(object = CdmHeader());
              self->object = object;

              return 0;
            }

            static PyObject *t_CdmHeader_getMessageFor(t_CdmHeader *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getMessageFor());
              return j2p(result);
            }

            static PyObject *t_CdmHeader_setMessageFor(t_CdmHeader *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setMessageFor(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMessageFor", arg);
              return NULL;
            }

            static PyObject *t_CdmHeader_validate(t_CdmHeader *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmHeader), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_CdmHeader_get__messageFor(t_CdmHeader *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getMessageFor());
              return j2p(value);
            }
            static int t_CdmHeader_set__messageFor(t_CdmHeader *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setMessageFor(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "messageFor", arg);
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
#include "org/orekit/time/TimeScalesFactory.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/GMSTScale.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/TCGScale.h"
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
          mids$[mid_addDefaultUTCTAIOffsetsLoaders_0640e6acf969ed28] = env->getStaticMethodID(cls, "addDefaultUTCTAIOffsetsLoaders", "()V");
          mids$[mid_addUTCTAIOffsetsLoader_e93935f5cbbffcd2] = env->getStaticMethodID(cls, "addUTCTAIOffsetsLoader", "(Lorg/orekit/time/UTCTAIOffsetsLoader;)V");
          mids$[mid_clearUTCTAIOffsetsLoaders_0640e6acf969ed28] = env->getStaticMethodID(cls, "clearUTCTAIOffsetsLoaders", "()V");
          mids$[mid_getBDT_9391834b1a937fd3] = env->getStaticMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getGLONASS_237364a28a8cf0b4] = env->getStaticMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_265dd6a5eaf62dee] = env->getStaticMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_0cd5c45ac1466124] = env->getStaticMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_3eb0a3a9b450fe42] = env->getStaticMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getIRNSS_64d2db466ba002ef] = env->getStaticMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getQZSS_513baddf28d44704] = env->getStaticMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getTAI_d5c1bf5214e95dd6] = env->getStaticMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_1561497728a78b6a] = env->getStaticMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_2cdd0fa7c8f02aa9] = env->getStaticMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_777ef8538a45134b] = env->getStaticMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_f6e670da699ff3f8] = env->getStaticMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getTimeScales_52cbe31230c76b6b] = env->getStaticMethodID(cls, "getTimeScales", "()Lorg/orekit/time/LazyLoadedTimeScales;");
          mids$[mid_getUT1_c21aaa13d4f3f95e] = env->getStaticMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUT1_672057b4f848abf0] = env->getStaticMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_81e037be1ebdb551] = env->getStaticMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void TimeScalesFactory::addDefaultUTCTAIOffsetsLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultUTCTAIOffsetsLoaders_0640e6acf969ed28]);
      }

      void TimeScalesFactory::addUTCTAIOffsetsLoader(const ::org::orekit::time::UTCTAIOffsetsLoader & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addUTCTAIOffsetsLoader_e93935f5cbbffcd2], a0.this$);
      }

      void TimeScalesFactory::clearUTCTAIOffsetsLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearUTCTAIOffsetsLoaders_0640e6acf969ed28]);
      }

      ::org::orekit::time::BDTScale TimeScalesFactory::getBDT()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::BDTScale(env->callStaticObjectMethod(cls, mids$[mid_getBDT_9391834b1a937fd3]));
      }

      ::org::orekit::time::GLONASSScale TimeScalesFactory::getGLONASS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GLONASSScale(env->callStaticObjectMethod(cls, mids$[mid_getGLONASS_237364a28a8cf0b4]));
      }

      ::org::orekit::time::GMSTScale TimeScalesFactory::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GMSTScale(env->callStaticObjectMethod(cls, mids$[mid_getGMST_265dd6a5eaf62dee], a0.this$, a1));
      }

      ::org::orekit::time::GPSScale TimeScalesFactory::getGPS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GPSScale(env->callStaticObjectMethod(cls, mids$[mid_getGPS_0cd5c45ac1466124]));
      }

      ::org::orekit::time::GalileoScale TimeScalesFactory::getGST()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GalileoScale(env->callStaticObjectMethod(cls, mids$[mid_getGST_3eb0a3a9b450fe42]));
      }

      ::org::orekit::time::IRNSSScale TimeScalesFactory::getIRNSS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::IRNSSScale(env->callStaticObjectMethod(cls, mids$[mid_getIRNSS_64d2db466ba002ef]));
      }

      ::org::orekit::time::QZSSScale TimeScalesFactory::getQZSS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::QZSSScale(env->callStaticObjectMethod(cls, mids$[mid_getQZSS_513baddf28d44704]));
      }

      ::org::orekit::time::TAIScale TimeScalesFactory::getTAI()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TAIScale(env->callStaticObjectMethod(cls, mids$[mid_getTAI_d5c1bf5214e95dd6]));
      }

      ::org::orekit::time::TCBScale TimeScalesFactory::getTCB()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TCBScale(env->callStaticObjectMethod(cls, mids$[mid_getTCB_1561497728a78b6a]));
      }

      ::org::orekit::time::TCGScale TimeScalesFactory::getTCG()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TCGScale(env->callStaticObjectMethod(cls, mids$[mid_getTCG_2cdd0fa7c8f02aa9]));
      }

      ::org::orekit::time::TDBScale TimeScalesFactory::getTDB()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TDBScale(env->callStaticObjectMethod(cls, mids$[mid_getTDB_777ef8538a45134b]));
      }

      ::org::orekit::time::TTScale TimeScalesFactory::getTT()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TTScale(env->callStaticObjectMethod(cls, mids$[mid_getTT_f6e670da699ff3f8]));
      }

      ::org::orekit::time::LazyLoadedTimeScales TimeScalesFactory::getTimeScales()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::LazyLoadedTimeScales(env->callStaticObjectMethod(cls, mids$[mid_getTimeScales_52cbe31230c76b6b]));
      }

      ::org::orekit::time::UT1Scale TimeScalesFactory::getUT1(const ::org::orekit::frames::EOPHistory & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::UT1Scale(env->callStaticObjectMethod(cls, mids$[mid_getUT1_c21aaa13d4f3f95e], a0.this$));
      }

      ::org::orekit::time::UT1Scale TimeScalesFactory::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::UT1Scale(env->callStaticObjectMethod(cls, mids$[mid_getUT1_672057b4f848abf0], a0.this$, a1));
      }

      ::org::orekit::time::UTCScale TimeScalesFactory::getUTC()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::UTCScale(env->callStaticObjectMethod(cls, mids$[mid_getUTC_81e037be1ebdb551]));
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
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *CelestialBodyFrame::class$ = NULL;
          jmethodID *CelestialBodyFrame::mids$ = NULL;
          bool CelestialBodyFrame::live$ = false;
          CelestialBodyFrame *CelestialBodyFrame::EME2000 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::GCRF = NULL;
          CelestialBodyFrame *CelestialBodyFrame::GRC = NULL;
          CelestialBodyFrame *CelestialBodyFrame::GTOD = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ICRF = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1988 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1989 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1990 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1991 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1992 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1993 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1994 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1996 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1997 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2000 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2005 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2008 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2014 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2020 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::J2000 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::MCI = NULL;
          CelestialBodyFrame *CelestialBodyFrame::TDR = NULL;
          CelestialBodyFrame *CelestialBodyFrame::TEME = NULL;
          CelestialBodyFrame *CelestialBodyFrame::TOD = NULL;

          jclass CelestialBodyFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/CelestialBodyFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getFrame_27072b92c7530322] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/utils/IERSConventions;ZLorg/orekit/data/DataContext;)Lorg/orekit/frames/Frame;");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_guessFrame_1fb9161cbce7f53e] = env->getStaticMethodID(cls, "guessFrame", "(Lorg/orekit/frames/Frame;)Ljava/lang/String;");
              mids$[mid_map_eb632e2b819d1e95] = env->getStaticMethodID(cls, "map", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_parse_3e303cc1781714bf] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_valueOf_3e303cc1781714bf] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_values_fda49998e05fb093] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EME2000 = new CelestialBodyFrame(env->getStaticObjectField(cls, "EME2000", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              GCRF = new CelestialBodyFrame(env->getStaticObjectField(cls, "GCRF", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              GRC = new CelestialBodyFrame(env->getStaticObjectField(cls, "GRC", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              GTOD = new CelestialBodyFrame(env->getStaticObjectField(cls, "GTOD", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ICRF = new CelestialBodyFrame(env->getStaticObjectField(cls, "ICRF", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1988 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1988", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1989 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1989", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1990 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1990", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1991 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1991", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1992 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1992", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1993 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1993", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1994 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1994", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1996 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1996", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1997 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1997", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2000 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2000", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2005 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2005", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2008 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2008", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2014 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2014", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2020 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2020", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              J2000 = new CelestialBodyFrame(env->getStaticObjectField(cls, "J2000", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              MCI = new CelestialBodyFrame(env->getStaticObjectField(cls, "MCI", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              TDR = new CelestialBodyFrame(env->getStaticObjectField(cls, "TDR", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              TEME = new CelestialBodyFrame(env->getStaticObjectField(cls, "TEME", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              TOD = new CelestialBodyFrame(env->getStaticObjectField(cls, "TOD", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame CelestialBodyFrame::getFrame(const ::org::orekit::utils::IERSConventions & a0, jboolean a1, const ::org::orekit::data::DataContext & a2) const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_27072b92c7530322], a0.this$, a1, a2.this$));
          }

          ::java::lang::String CelestialBodyFrame::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
          }

          ::java::lang::String CelestialBodyFrame::guessFrame(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_guessFrame_1fb9161cbce7f53e], a0.this$));
          }

          CelestialBodyFrame CelestialBodyFrame::map(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CelestialBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_map_eb632e2b819d1e95], a0.this$));
          }

          CelestialBodyFrame CelestialBodyFrame::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CelestialBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_parse_3e303cc1781714bf], a0.this$));
          }

          CelestialBodyFrame CelestialBodyFrame::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CelestialBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3e303cc1781714bf], a0.this$));
          }

          JArray< CelestialBodyFrame > CelestialBodyFrame::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CelestialBodyFrame >(env->callStaticObjectMethod(cls, mids$[mid_values_fda49998e05fb093]));
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
          static PyObject *t_CelestialBodyFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_of_(t_CelestialBodyFrame *self, PyObject *args);
          static PyObject *t_CelestialBodyFrame_getFrame(t_CelestialBodyFrame *self, PyObject *args);
          static PyObject *t_CelestialBodyFrame_getName(t_CelestialBodyFrame *self);
          static PyObject *t_CelestialBodyFrame_guessFrame(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_map(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CelestialBodyFrame_values(PyTypeObject *type);
          static PyObject *t_CelestialBodyFrame_get__name(t_CelestialBodyFrame *self, void *data);
          static PyObject *t_CelestialBodyFrame_get__parameters_(t_CelestialBodyFrame *self, void *data);
          static PyGetSetDef t_CelestialBodyFrame__fields_[] = {
            DECLARE_GET_FIELD(t_CelestialBodyFrame, name),
            DECLARE_GET_FIELD(t_CelestialBodyFrame, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CelestialBodyFrame__methods_[] = {
            DECLARE_METHOD(t_CelestialBodyFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, of_, METH_VARARGS),
            DECLARE_METHOD(t_CelestialBodyFrame, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_CelestialBodyFrame, getName, METH_NOARGS),
            DECLARE_METHOD(t_CelestialBodyFrame, guessFrame, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, map, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, parse, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CelestialBodyFrame)[] = {
            { Py_tp_methods, t_CelestialBodyFrame__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CelestialBodyFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CelestialBodyFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CelestialBodyFrame, t_CelestialBodyFrame, CelestialBodyFrame);
          PyObject *t_CelestialBodyFrame::wrap_Object(const CelestialBodyFrame& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CelestialBodyFrame::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CelestialBodyFrame *self = (t_CelestialBodyFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CelestialBodyFrame::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CelestialBodyFrame::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CelestialBodyFrame *self = (t_CelestialBodyFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CelestialBodyFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(CelestialBodyFrame), &PY_TYPE_DEF(CelestialBodyFrame), module, "CelestialBodyFrame", 0);
          }

          void t_CelestialBodyFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "class_", make_descriptor(CelestialBodyFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "wrapfn_", make_descriptor(t_CelestialBodyFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "boxfn_", make_descriptor(boxObject));
            env->getClass(CelestialBodyFrame::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "EME2000", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::EME2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "GCRF", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::GCRF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "GRC", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::GRC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "GTOD", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::GTOD)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ICRF", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ICRF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1988", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1988)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1989", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1989)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1990", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1990)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1991", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1991)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1992", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1992)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1993", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1993)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1994", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1994)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1996", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1996)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1997", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1997)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2000", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2005", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2005)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2008", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2008)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2014", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2014)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2020", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2020)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "J2000", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::J2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "MCI", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::MCI)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "TDR", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::TDR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "TEME", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::TEME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "TOD", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::TOD)));
          }

          static PyObject *t_CelestialBodyFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CelestialBodyFrame::initializeClass, 1)))
              return NULL;
            return t_CelestialBodyFrame::wrap_Object(CelestialBodyFrame(((t_CelestialBodyFrame *) arg)->object.this$));
          }
          static PyObject *t_CelestialBodyFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CelestialBodyFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CelestialBodyFrame_of_(t_CelestialBodyFrame *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CelestialBodyFrame_getFrame(t_CelestialBodyFrame *self, PyObject *args)
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::data::DataContext a2((jobject) NULL);
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, "KZk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getFrame(a0, a1, a2));
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getFrame", args);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_getName(t_CelestialBodyFrame *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_CelestialBodyFrame_guessFrame(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::guessFrame(a0));
              return j2p(result);
            }

            PyErr_SetArgsError(type, "guessFrame", arg);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_map(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            CelestialBodyFrame result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::map(a0));
              return t_CelestialBodyFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "map", arg);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            CelestialBodyFrame result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::parse(a0));
              return t_CelestialBodyFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CelestialBodyFrame result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::valueOf(a0));
              return t_CelestialBodyFrame::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CelestialBodyFrame_values(PyTypeObject *type)
          {
            JArray< CelestialBodyFrame > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::values());
            return JArray<jobject>(result.this$).wrap(t_CelestialBodyFrame::wrap_jobject);
          }
          static PyObject *t_CelestialBodyFrame_get__parameters_(t_CelestialBodyFrame *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_CelestialBodyFrame_get__name(t_CelestialBodyFrame *self, void *data)
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
#include "org/hipparchus/random/UncorrelatedRandomVectorGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *UncorrelatedRandomVectorGenerator::class$ = NULL;
      jmethodID *UncorrelatedRandomVectorGenerator::mids$ = NULL;
      bool UncorrelatedRandomVectorGenerator::live$ = false;

      jclass UncorrelatedRandomVectorGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/UncorrelatedRandomVectorGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4511f107bd1b1224] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_init$_653c6f42cbdc8d76] = env->getMethodID(cls, "<init>", "([D[DLorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_nextVector_a53a7513ecedada2] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UncorrelatedRandomVectorGenerator::UncorrelatedRandomVectorGenerator(jint a0, const ::org::hipparchus::random::NormalizedRandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4511f107bd1b1224, a0, a1.this$)) {}

      UncorrelatedRandomVectorGenerator::UncorrelatedRandomVectorGenerator(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::hipparchus::random::NormalizedRandomGenerator & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_653c6f42cbdc8d76, a0.this$, a1.this$, a2.this$)) {}

      JArray< jdouble > UncorrelatedRandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_a53a7513ecedada2]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_UncorrelatedRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UncorrelatedRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UncorrelatedRandomVectorGenerator_init_(t_UncorrelatedRandomVectorGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UncorrelatedRandomVectorGenerator_nextVector(t_UncorrelatedRandomVectorGenerator *self);

      static PyMethodDef t_UncorrelatedRandomVectorGenerator__methods_[] = {
        DECLARE_METHOD(t_UncorrelatedRandomVectorGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UncorrelatedRandomVectorGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UncorrelatedRandomVectorGenerator, nextVector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UncorrelatedRandomVectorGenerator)[] = {
        { Py_tp_methods, t_UncorrelatedRandomVectorGenerator__methods_ },
        { Py_tp_init, (void *) t_UncorrelatedRandomVectorGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UncorrelatedRandomVectorGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UncorrelatedRandomVectorGenerator, t_UncorrelatedRandomVectorGenerator, UncorrelatedRandomVectorGenerator);

      void t_UncorrelatedRandomVectorGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(UncorrelatedRandomVectorGenerator), &PY_TYPE_DEF(UncorrelatedRandomVectorGenerator), module, "UncorrelatedRandomVectorGenerator", 0);
      }

      void t_UncorrelatedRandomVectorGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UncorrelatedRandomVectorGenerator), "class_", make_descriptor(UncorrelatedRandomVectorGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UncorrelatedRandomVectorGenerator), "wrapfn_", make_descriptor(t_UncorrelatedRandomVectorGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UncorrelatedRandomVectorGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UncorrelatedRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UncorrelatedRandomVectorGenerator::initializeClass, 1)))
          return NULL;
        return t_UncorrelatedRandomVectorGenerator::wrap_Object(UncorrelatedRandomVectorGenerator(((t_UncorrelatedRandomVectorGenerator *) arg)->object.this$));
      }
      static PyObject *t_UncorrelatedRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UncorrelatedRandomVectorGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UncorrelatedRandomVectorGenerator_init_(t_UncorrelatedRandomVectorGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            ::org::hipparchus::random::NormalizedRandomGenerator a1((jobject) NULL);
            UncorrelatedRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::random::NormalizedRandomGenerator::initializeClass, &a0, &a1))
            {
              INT_CALL(object = UncorrelatedRandomVectorGenerator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ::org::hipparchus::random::NormalizedRandomGenerator a2((jobject) NULL);
            UncorrelatedRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "[D[Dk", ::org::hipparchus::random::NormalizedRandomGenerator::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = UncorrelatedRandomVectorGenerator(a0, a1, a2));
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

      static PyObject *t_UncorrelatedRandomVectorGenerator_nextVector(t_UncorrelatedRandomVectorGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/HelmertTransformation$Predefined.h"
#include "org/orekit/frames/HelmertTransformation.h"
#include "org/orekit/frames/HelmertTransformation$Predefined.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *HelmertTransformation$Predefined::class$ = NULL;
      jmethodID *HelmertTransformation$Predefined::mids$ = NULL;
      bool HelmertTransformation$Predefined::live$ = false;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1988 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1989 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1990 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1991 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1992 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1993 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1994 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1996 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1997 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2000 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2005 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1988 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1989 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1990 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1991 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1992 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1993 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1994 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1996 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1997 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2000 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2005 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2008 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1988 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1989 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1990 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1991 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1992 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1993 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1994 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1996 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1997 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2000 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2005 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2008 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2014 = NULL;

      jclass HelmertTransformation$Predefined::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/HelmertTransformation$Predefined");

          mids$ = new jmethodID[max_mid];
          mids$[mid_createTransformedITRF_be8eab9f6f8c1262] = env->getMethodID(cls, "createTransformedITRF", "(Lorg/orekit/frames/Frame;Ljava/lang/String;)Lorg/orekit/frames/Frame;");
          mids$[mid_createTransformedITRF_3421bf0922818af1] = env->getMethodID(cls, "createTransformedITRF", "(Lorg/orekit/frames/Frame;Ljava/lang/String;Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/Frame;");
          mids$[mid_getDestination_b311296551ce8af2] = env->getMethodID(cls, "getDestination", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getOrigin_b311296551ce8af2] = env->getMethodID(cls, "getOrigin", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getTransformation_685acbd1c11a45e2] = env->getMethodID(cls, "getTransformation", "()Lorg/orekit/frames/HelmertTransformation;");
          mids$[mid_getTransformation_95565310de8c1bab] = env->getMethodID(cls, "getTransformation", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/HelmertTransformation;");
          mids$[mid_selectPredefined_d3cd54fb21c16fef] = env->getStaticMethodID(cls, "selectPredefined", "(II)Lorg/orekit/frames/HelmertTransformation$Predefined;");
          mids$[mid_valueOf_a382223668cf3823] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/HelmertTransformation$Predefined;");
          mids$[mid_values_4d6128b387e04c2c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/HelmertTransformation$Predefined;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ITRF_2008_TO_ITRF_1988 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1988", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1989 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1989", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1990 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1990", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1991 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1991", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1992 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1992", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1993 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1993", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1994 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1994", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1996 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1996", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1997 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1997", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_2000 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_2000", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_2005 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_2005", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1988 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1988", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1989 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1989", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1990 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1990", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1991 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1991", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1992 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1992", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1993 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1993", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1994 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1994", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1996 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1996", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1997 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1997", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_2000 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_2000", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_2005 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_2005", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_2008 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_2008", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1988 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1988", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1989 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1989", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1990 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1990", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1991 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1991", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1992 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1992", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1993 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1993", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1994 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1994", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1996 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1996", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1997 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1997", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2000 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2000", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2005 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2005", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2008 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2008", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2014 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2014", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame HelmertTransformation$Predefined::createTransformedITRF(const ::org::orekit::frames::Frame & a0, const ::java::lang::String & a1) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_createTransformedITRF_be8eab9f6f8c1262], a0.this$, a1.this$));
      }

      ::org::orekit::frames::Frame HelmertTransformation$Predefined::createTransformedITRF(const ::org::orekit::frames::Frame & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScale & a2) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_createTransformedITRF_3421bf0922818af1], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::ITRFVersion HelmertTransformation$Predefined::getDestination() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getDestination_b311296551ce8af2]));
      }

      ::org::orekit::frames::ITRFVersion HelmertTransformation$Predefined::getOrigin() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getOrigin_b311296551ce8af2]));
      }

      ::org::orekit::frames::HelmertTransformation HelmertTransformation$Predefined::getTransformation() const
      {
        return ::org::orekit::frames::HelmertTransformation(env->callObjectMethod(this$, mids$[mid_getTransformation_685acbd1c11a45e2]));
      }

      ::org::orekit::frames::HelmertTransformation HelmertTransformation$Predefined::getTransformation(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::frames::HelmertTransformation(env->callObjectMethod(this$, mids$[mid_getTransformation_95565310de8c1bab], a0.this$));
      }

      HelmertTransformation$Predefined HelmertTransformation$Predefined::selectPredefined(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return HelmertTransformation$Predefined(env->callStaticObjectMethod(cls, mids$[mid_selectPredefined_d3cd54fb21c16fef], a0, a1));
      }

      HelmertTransformation$Predefined HelmertTransformation$Predefined::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return HelmertTransformation$Predefined(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a382223668cf3823], a0.this$));
      }

      JArray< HelmertTransformation$Predefined > HelmertTransformation$Predefined::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< HelmertTransformation$Predefined >(env->callStaticObjectMethod(cls, mids$[mid_values_4d6128b387e04c2c]));
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
      static PyObject *t_HelmertTransformation$Predefined_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HelmertTransformation$Predefined_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HelmertTransformation$Predefined_of_(t_HelmertTransformation$Predefined *self, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_createTransformedITRF(t_HelmertTransformation$Predefined *self, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_getDestination(t_HelmertTransformation$Predefined *self);
      static PyObject *t_HelmertTransformation$Predefined_getOrigin(t_HelmertTransformation$Predefined *self);
      static PyObject *t_HelmertTransformation$Predefined_getTransformation(t_HelmertTransformation$Predefined *self, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_selectPredefined(PyTypeObject *type, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_values(PyTypeObject *type);
      static PyObject *t_HelmertTransformation$Predefined_get__destination(t_HelmertTransformation$Predefined *self, void *data);
      static PyObject *t_HelmertTransformation$Predefined_get__origin(t_HelmertTransformation$Predefined *self, void *data);
      static PyObject *t_HelmertTransformation$Predefined_get__transformation(t_HelmertTransformation$Predefined *self, void *data);
      static PyObject *t_HelmertTransformation$Predefined_get__parameters_(t_HelmertTransformation$Predefined *self, void *data);
      static PyGetSetDef t_HelmertTransformation$Predefined__fields_[] = {
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, destination),
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, origin),
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, transformation),
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HelmertTransformation$Predefined__methods_[] = {
        DECLARE_METHOD(t_HelmertTransformation$Predefined, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, of_, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, createTransformedITRF, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, getDestination, METH_NOARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, getOrigin, METH_NOARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, getTransformation, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, selectPredefined, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HelmertTransformation$Predefined)[] = {
        { Py_tp_methods, t_HelmertTransformation$Predefined__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_HelmertTransformation$Predefined__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HelmertTransformation$Predefined)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(HelmertTransformation$Predefined, t_HelmertTransformation$Predefined, HelmertTransformation$Predefined);
      PyObject *t_HelmertTransformation$Predefined::wrap_Object(const HelmertTransformation$Predefined& object, PyTypeObject *p0)
      {
        PyObject *obj = t_HelmertTransformation$Predefined::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_HelmertTransformation$Predefined *self = (t_HelmertTransformation$Predefined *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_HelmertTransformation$Predefined::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_HelmertTransformation$Predefined::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_HelmertTransformation$Predefined *self = (t_HelmertTransformation$Predefined *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_HelmertTransformation$Predefined::install(PyObject *module)
      {
        installType(&PY_TYPE(HelmertTransformation$Predefined), &PY_TYPE_DEF(HelmertTransformation$Predefined), module, "HelmertTransformation$Predefined", 0);
      }

      void t_HelmertTransformation$Predefined::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "class_", make_descriptor(HelmertTransformation$Predefined::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "wrapfn_", make_descriptor(t_HelmertTransformation$Predefined::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "boxfn_", make_descriptor(boxObject));
        env->getClass(HelmertTransformation$Predefined::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1988", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1989", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1990", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1991", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1992", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1993", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1994", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1996", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1997", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_2000", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_2005", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1988", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1989", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1990", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1991", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1992", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1993", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1994", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1996", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1997", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_2000", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_2005", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_2008", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2008)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1988", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1989", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1990", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1991", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1992", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1993", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1994", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1996", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1997", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2000", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2005", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2008", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2008)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2014", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2014)));
      }

      static PyObject *t_HelmertTransformation$Predefined_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HelmertTransformation$Predefined::initializeClass, 1)))
          return NULL;
        return t_HelmertTransformation$Predefined::wrap_Object(HelmertTransformation$Predefined(((t_HelmertTransformation$Predefined *) arg)->object.this$));
      }
      static PyObject *t_HelmertTransformation$Predefined_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HelmertTransformation$Predefined::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_HelmertTransformation$Predefined_of_(t_HelmertTransformation$Predefined *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_HelmertTransformation$Predefined_createTransformedITRF(t_HelmertTransformation$Predefined *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, "ks", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.createTransformedITRF(a0, a1));
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, "ksk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.createTransformedITRF(a0, a1, a2));
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "createTransformedITRF", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation$Predefined_getDestination(t_HelmertTransformation$Predefined *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_HelmertTransformation$Predefined_getOrigin(t_HelmertTransformation$Predefined *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_HelmertTransformation$Predefined_getTransformation(t_HelmertTransformation$Predefined *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::frames::HelmertTransformation result((jobject) NULL);
            OBJ_CALL(result = self->object.getTransformation());
            return ::org::orekit::frames::t_HelmertTransformation::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::HelmertTransformation result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransformation(a0));
              return ::org::orekit::frames::t_HelmertTransformation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransformation", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation$Predefined_selectPredefined(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        HelmertTransformation$Predefined result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::HelmertTransformation$Predefined::selectPredefined(a0, a1));
          return t_HelmertTransformation$Predefined::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "selectPredefined", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation$Predefined_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        HelmertTransformation$Predefined result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::HelmertTransformation$Predefined::valueOf(a0));
          return t_HelmertTransformation$Predefined::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_HelmertTransformation$Predefined_values(PyTypeObject *type)
      {
        JArray< HelmertTransformation$Predefined > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::HelmertTransformation$Predefined::values());
        return JArray<jobject>(result.this$).wrap(t_HelmertTransformation$Predefined::wrap_jobject);
      }
      static PyObject *t_HelmertTransformation$Predefined_get__parameters_(t_HelmertTransformation$Predefined *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_HelmertTransformation$Predefined_get__destination(t_HelmertTransformation$Predefined *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_HelmertTransformation$Predefined_get__origin(t_HelmertTransformation$Predefined *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_HelmertTransformation$Predefined_get__transformation(t_HelmertTransformation$Predefined *self, void *data)
      {
        ::org::orekit::frames::HelmertTransformation value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransformation());
        return ::org::orekit::frames::t_HelmertTransformation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *BistaticRange::class$ = NULL;
        jmethodID *BistaticRange::mids$ = NULL;
        bool BistaticRange::live$ = false;
        ::java::lang::String *BistaticRange::MEASUREMENT_TYPE = NULL;

        jclass BistaticRange::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/BistaticRange");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_631cad984dc812e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getEmitterStation_2161f2a4a8c885ec] = env->getMethodID(cls, "getEmitterStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getReceiverStation_2161f2a4a8c885ec] = env->getMethodID(cls, "getReceiverStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BistaticRange::BistaticRange(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_631cad984dc812e4, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation BistaticRange::getEmitterStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getEmitterStation_2161f2a4a8c885ec]));
        }

        ::org::orekit::estimation::measurements::GroundStation BistaticRange::getReceiverStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getReceiverStation_2161f2a4a8c885ec]));
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
        static PyObject *t_BistaticRange_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRange_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRange_of_(t_BistaticRange *self, PyObject *args);
        static int t_BistaticRange_init_(t_BistaticRange *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BistaticRange_getEmitterStation(t_BistaticRange *self);
        static PyObject *t_BistaticRange_getReceiverStation(t_BistaticRange *self);
        static PyObject *t_BistaticRange_get__emitterStation(t_BistaticRange *self, void *data);
        static PyObject *t_BistaticRange_get__receiverStation(t_BistaticRange *self, void *data);
        static PyObject *t_BistaticRange_get__parameters_(t_BistaticRange *self, void *data);
        static PyGetSetDef t_BistaticRange__fields_[] = {
          DECLARE_GET_FIELD(t_BistaticRange, emitterStation),
          DECLARE_GET_FIELD(t_BistaticRange, receiverStation),
          DECLARE_GET_FIELD(t_BistaticRange, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BistaticRange__methods_[] = {
          DECLARE_METHOD(t_BistaticRange, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRange, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRange, of_, METH_VARARGS),
          DECLARE_METHOD(t_BistaticRange, getEmitterStation, METH_NOARGS),
          DECLARE_METHOD(t_BistaticRange, getReceiverStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BistaticRange)[] = {
          { Py_tp_methods, t_BistaticRange__methods_ },
          { Py_tp_init, (void *) t_BistaticRange_init_ },
          { Py_tp_getset, t_BistaticRange__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BistaticRange)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(BistaticRange, t_BistaticRange, BistaticRange);
        PyObject *t_BistaticRange::wrap_Object(const BistaticRange& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRange::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRange *self = (t_BistaticRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BistaticRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRange::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRange *self = (t_BistaticRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BistaticRange::install(PyObject *module)
        {
          installType(&PY_TYPE(BistaticRange), &PY_TYPE_DEF(BistaticRange), module, "BistaticRange", 0);
        }

        void t_BistaticRange::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "class_", make_descriptor(BistaticRange::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "wrapfn_", make_descriptor(t_BistaticRange::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "boxfn_", make_descriptor(boxObject));
          env->getClass(BistaticRange::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*BistaticRange::MEASUREMENT_TYPE)));
        }

        static PyObject *t_BistaticRange_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BistaticRange::initializeClass, 1)))
            return NULL;
          return t_BistaticRange::wrap_Object(BistaticRange(((t_BistaticRange *) arg)->object.this$));
        }
        static PyObject *t_BistaticRange_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BistaticRange::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BistaticRange_of_(t_BistaticRange *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BistaticRange_init_(t_BistaticRange *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          BistaticRange object((jobject) NULL);

          if (!parseArgs(args, "kkkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = BistaticRange(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(BistaticRange);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BistaticRange_getEmitterStation(t_BistaticRange *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_BistaticRange_getReceiverStation(t_BistaticRange *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_BistaticRange_get__parameters_(t_BistaticRange *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BistaticRange_get__emitterStation(t_BistaticRange *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_BistaticRange_get__receiverStation(t_BistaticRange *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "java/lang/IllegalStateException.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedCache::class$ = NULL;
      jmethodID *TimeStampedCache::mids$ = NULL;
      bool TimeStampedCache::live$ = false;

      jclass TimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEarliest_da8f710d3d2958bf] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getLatest_da8f710d3d2958bf] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_412668abc8d889e9] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getNeighbors_0545d4cc79d2fdd1] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighbors_b9470a4d1609cf1f] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::TimeStamped TimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_da8f710d3d2958bf]));
      }

      ::org::orekit::time::TimeStamped TimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_da8f710d3d2958bf]));
      }

      jint TimeStampedCache::getMaxNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxNeighborsSize_412668abc8d889e9]);
      }

      ::java::util::stream::Stream TimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_0545d4cc79d2fdd1], a0.this$));
      }

      ::java::util::stream::Stream TimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_b9470a4d1609cf1f], a0.this$, a1));
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
      static PyObject *t_TimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedCache_of_(t_TimeStampedCache *self, PyObject *args);
      static PyObject *t_TimeStampedCache_getEarliest(t_TimeStampedCache *self);
      static PyObject *t_TimeStampedCache_getLatest(t_TimeStampedCache *self);
      static PyObject *t_TimeStampedCache_getMaxNeighborsSize(t_TimeStampedCache *self);
      static PyObject *t_TimeStampedCache_getNeighbors(t_TimeStampedCache *self, PyObject *args);
      static PyObject *t_TimeStampedCache_get__earliest(t_TimeStampedCache *self, void *data);
      static PyObject *t_TimeStampedCache_get__latest(t_TimeStampedCache *self, void *data);
      static PyObject *t_TimeStampedCache_get__maxNeighborsSize(t_TimeStampedCache *self, void *data);
      static PyObject *t_TimeStampedCache_get__parameters_(t_TimeStampedCache *self, void *data);
      static PyGetSetDef t_TimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_TimeStampedCache, latest),
        DECLARE_GET_FIELD(t_TimeStampedCache, maxNeighborsSize),
        DECLARE_GET_FIELD(t_TimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_TimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedCache, getMaxNeighborsSize, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedCache, getNeighbors, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedCache)[] = {
        { Py_tp_methods, t_TimeStampedCache__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedCache, t_TimeStampedCache, TimeStampedCache);
      PyObject *t_TimeStampedCache::wrap_Object(const TimeStampedCache& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedCache *self = (t_TimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedCache *self = (t_TimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedCache), &PY_TYPE_DEF(TimeStampedCache), module, "TimeStampedCache", 0);
      }

      void t_TimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCache), "class_", make_descriptor(TimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCache), "wrapfn_", make_descriptor(t_TimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_TimeStampedCache::wrap_Object(TimeStampedCache(((t_TimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedCache_of_(t_TimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeStampedCache_getEarliest(t_TimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_TimeStampedCache_getLatest(t_TimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_TimeStampedCache_getMaxNeighborsSize(t_TimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeStampedCache_getNeighbors(t_TimeStampedCache *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNeighbors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jint a1;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNeighbors(a0, a1));
              return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", args);
        return NULL;
      }
      static PyObject *t_TimeStampedCache_get__parameters_(t_TimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedCache_get__earliest(t_TimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_TimeStampedCache_get__latest(t_TimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_TimeStampedCache_get__maxNeighborsSize(t_TimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FieldInertiaAxis.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/attitudes/FieldInertiaAxis.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldInertiaAxis::class$ = NULL;
      jmethodID *FieldInertiaAxis::mids$ = NULL;
      bool FieldInertiaAxis::live$ = false;

      jclass FieldInertiaAxis::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldInertiaAxis");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bc0c6bda4a59e038] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_getA_2d64addf4c3391d9] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getI_613c8f46c659f636] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_negate_4745cc6d841a74c0] = env->getMethodID(cls, "negate", "()Lorg/orekit/attitudes/FieldInertiaAxis;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldInertiaAxis::FieldInertiaAxis(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc0c6bda4a59e038, a0.this$, a1.this$)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldInertiaAxis::getA() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getA_2d64addf4c3391d9]));
      }

      ::org::hipparchus::CalculusFieldElement FieldInertiaAxis::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_613c8f46c659f636]));
      }

      FieldInertiaAxis FieldInertiaAxis::negate() const
      {
        return FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_negate_4745cc6d841a74c0]));
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
      static PyObject *t_FieldInertiaAxis_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertiaAxis_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertiaAxis_of_(t_FieldInertiaAxis *self, PyObject *args);
      static int t_FieldInertiaAxis_init_(t_FieldInertiaAxis *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldInertiaAxis_getA(t_FieldInertiaAxis *self);
      static PyObject *t_FieldInertiaAxis_getI(t_FieldInertiaAxis *self);
      static PyObject *t_FieldInertiaAxis_negate(t_FieldInertiaAxis *self);
      static PyObject *t_FieldInertiaAxis_get__a(t_FieldInertiaAxis *self, void *data);
      static PyObject *t_FieldInertiaAxis_get__i(t_FieldInertiaAxis *self, void *data);
      static PyObject *t_FieldInertiaAxis_get__parameters_(t_FieldInertiaAxis *self, void *data);
      static PyGetSetDef t_FieldInertiaAxis__fields_[] = {
        DECLARE_GET_FIELD(t_FieldInertiaAxis, a),
        DECLARE_GET_FIELD(t_FieldInertiaAxis, i),
        DECLARE_GET_FIELD(t_FieldInertiaAxis, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldInertiaAxis__methods_[] = {
        DECLARE_METHOD(t_FieldInertiaAxis, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertiaAxis, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertiaAxis, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldInertiaAxis, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertiaAxis, getI, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertiaAxis, negate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldInertiaAxis)[] = {
        { Py_tp_methods, t_FieldInertiaAxis__methods_ },
        { Py_tp_init, (void *) t_FieldInertiaAxis_init_ },
        { Py_tp_getset, t_FieldInertiaAxis__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldInertiaAxis)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldInertiaAxis, t_FieldInertiaAxis, FieldInertiaAxis);
      PyObject *t_FieldInertiaAxis::wrap_Object(const FieldInertiaAxis& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertiaAxis::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertiaAxis *self = (t_FieldInertiaAxis *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldInertiaAxis::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertiaAxis::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertiaAxis *self = (t_FieldInertiaAxis *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldInertiaAxis::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldInertiaAxis), &PY_TYPE_DEF(FieldInertiaAxis), module, "FieldInertiaAxis", 0);
      }

      void t_FieldInertiaAxis::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertiaAxis), "class_", make_descriptor(FieldInertiaAxis::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertiaAxis), "wrapfn_", make_descriptor(t_FieldInertiaAxis::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertiaAxis), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldInertiaAxis_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldInertiaAxis::initializeClass, 1)))
          return NULL;
        return t_FieldInertiaAxis::wrap_Object(FieldInertiaAxis(((t_FieldInertiaAxis *) arg)->object.this$));
      }
      static PyObject *t_FieldInertiaAxis_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldInertiaAxis::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldInertiaAxis_of_(t_FieldInertiaAxis *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldInertiaAxis_init_(t_FieldInertiaAxis *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
        PyTypeObject **p1;
        FieldInertiaAxis object((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
        {
          INT_CALL(object = FieldInertiaAxis(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldInertiaAxis_getA(t_FieldInertiaAxis *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertiaAxis_getI(t_FieldInertiaAxis *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getI());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldInertiaAxis_negate(t_FieldInertiaAxis *self)
      {
        FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldInertiaAxis_get__parameters_(t_FieldInertiaAxis *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldInertiaAxis_get__a(t_FieldInertiaAxis *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldInertiaAxis_get__i(t_FieldInertiaAxis *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/PythonILRSHeader.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *PythonILRSHeader::class$ = NULL;
        jmethodID *PythonILRSHeader::mids$ = NULL;
        bool PythonILRSHeader::live$ = false;

        jclass PythonILRSHeader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/PythonILRSHeader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonILRSHeader::PythonILRSHeader() : ::org::orekit::files::ilrs::ILRSHeader(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonILRSHeader::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonILRSHeader::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonILRSHeader::pythonExtension(jlong a0) const
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
    namespace files {
      namespace ilrs {
        static PyObject *t_PythonILRSHeader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonILRSHeader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonILRSHeader_init_(t_PythonILRSHeader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonILRSHeader_finalize(t_PythonILRSHeader *self);
        static PyObject *t_PythonILRSHeader_pythonExtension(t_PythonILRSHeader *self, PyObject *args);
        static void JNICALL t_PythonILRSHeader_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonILRSHeader_get__self(t_PythonILRSHeader *self, void *data);
        static PyGetSetDef t_PythonILRSHeader__fields_[] = {
          DECLARE_GET_FIELD(t_PythonILRSHeader, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonILRSHeader__methods_[] = {
          DECLARE_METHOD(t_PythonILRSHeader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonILRSHeader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonILRSHeader, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonILRSHeader, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonILRSHeader)[] = {
          { Py_tp_methods, t_PythonILRSHeader__methods_ },
          { Py_tp_init, (void *) t_PythonILRSHeader_init_ },
          { Py_tp_getset, t_PythonILRSHeader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonILRSHeader)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::ILRSHeader),
          NULL
        };

        DEFINE_TYPE(PythonILRSHeader, t_PythonILRSHeader, PythonILRSHeader);

        void t_PythonILRSHeader::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonILRSHeader), &PY_TYPE_DEF(PythonILRSHeader), module, "PythonILRSHeader", 1);
        }

        void t_PythonILRSHeader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonILRSHeader), "class_", make_descriptor(PythonILRSHeader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonILRSHeader), "wrapfn_", make_descriptor(t_PythonILRSHeader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonILRSHeader), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonILRSHeader::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonILRSHeader_pythonDecRef0 },
          };
          env->registerNatives(cls, methods, 1);
        }

        static PyObject *t_PythonILRSHeader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonILRSHeader::initializeClass, 1)))
            return NULL;
          return t_PythonILRSHeader::wrap_Object(PythonILRSHeader(((t_PythonILRSHeader *) arg)->object.this$));
        }
        static PyObject *t_PythonILRSHeader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonILRSHeader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonILRSHeader_init_(t_PythonILRSHeader *self, PyObject *args, PyObject *kwds)
        {
          PythonILRSHeader object((jobject) NULL);

          INT_CALL(object = PythonILRSHeader());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonILRSHeader_finalize(t_PythonILRSHeader *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonILRSHeader_pythonExtension(t_PythonILRSHeader *self, PyObject *args)
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

        static void JNICALL t_PythonILRSHeader_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonILRSHeader::mids$[PythonILRSHeader::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonILRSHeader::mids$[PythonILRSHeader::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonILRSHeader_get__self(t_PythonILRSHeader *self, void *data)
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
#include "org/orekit/estimation/leastsquares/BatchLSObserver.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *BatchLSObserver::class$ = NULL;
        jmethodID *BatchLSObserver::mids$ = NULL;
        bool BatchLSObserver::live$ = false;

        jclass BatchLSObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/BatchLSObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_evaluationPerformed_4d8a932bdf6a0b43] = env->getMethodID(cls, "evaluationPerformed", "(II[Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/measurements/EstimationsProvider;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void BatchLSObserver::evaluationPerformed(jint a0, jint a1, const JArray< ::org::orekit::orbits::Orbit > & a2, const ::org::orekit::utils::ParameterDriversList & a3, const ::org::orekit::utils::ParameterDriversList & a4, const ::org::orekit::utils::ParameterDriversList & a5, const ::org::orekit::estimation::measurements::EstimationsProvider & a6, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a7) const
        {
          env->callVoidMethod(this$, mids$[mid_evaluationPerformed_4d8a932bdf6a0b43], a0, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$);
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
      namespace leastsquares {
        static PyObject *t_BatchLSObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSObserver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSObserver_evaluationPerformed(t_BatchLSObserver *self, PyObject *args);

        static PyMethodDef t_BatchLSObserver__methods_[] = {
          DECLARE_METHOD(t_BatchLSObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSObserver, evaluationPerformed, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BatchLSObserver)[] = {
          { Py_tp_methods, t_BatchLSObserver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BatchLSObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BatchLSObserver, t_BatchLSObserver, BatchLSObserver);

        void t_BatchLSObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(BatchLSObserver), &PY_TYPE_DEF(BatchLSObserver), module, "BatchLSObserver", 0);
        }

        void t_BatchLSObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSObserver), "class_", make_descriptor(BatchLSObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSObserver), "wrapfn_", make_descriptor(t_BatchLSObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSObserver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BatchLSObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BatchLSObserver::initializeClass, 1)))
            return NULL;
          return t_BatchLSObserver::wrap_Object(BatchLSObserver(((t_BatchLSObserver *) arg)->object.this$));
        }
        static PyObject *t_BatchLSObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BatchLSObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BatchLSObserver_evaluationPerformed(t_BatchLSObserver *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::orbits::Orbit > a2((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a3((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a4((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a5((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimationsProvider a6((jobject) NULL);
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a7((jobject) NULL);

          if (!parseArgs(args, "II[kkkkkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::measurements::EstimationsProvider::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(self->object.evaluationPerformed(a0, a1, a2, a3, a4, a5, a6, a7));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "evaluationPerformed", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Euclidean2D::class$ = NULL;
          jmethodID *Euclidean2D::mids$ = NULL;
          bool Euclidean2D::live$ = false;

          jclass Euclidean2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Euclidean2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_60c21a86e2a4669d] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/euclidean/twod/Euclidean2D;");
              mids$[mid_getSubSpace_81c8ae54d6b9890c] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/euclidean/oned/Euclidean1D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint Euclidean2D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
          }

          Euclidean2D Euclidean2D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Euclidean2D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_60c21a86e2a4669d]));
          }

          ::org::hipparchus::geometry::euclidean::oned::Euclidean1D Euclidean2D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Euclidean1D(env->callObjectMethod(this$, mids$[mid_getSubSpace_81c8ae54d6b9890c]));
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
          static PyObject *t_Euclidean2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean2D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean2D_getDimension(t_Euclidean2D *self);
          static PyObject *t_Euclidean2D_getInstance(PyTypeObject *type);
          static PyObject *t_Euclidean2D_getSubSpace(t_Euclidean2D *self);
          static PyObject *t_Euclidean2D_get__dimension(t_Euclidean2D *self, void *data);
          static PyObject *t_Euclidean2D_get__instance(t_Euclidean2D *self, void *data);
          static PyObject *t_Euclidean2D_get__subSpace(t_Euclidean2D *self, void *data);
          static PyGetSetDef t_Euclidean2D__fields_[] = {
            DECLARE_GET_FIELD(t_Euclidean2D, dimension),
            DECLARE_GET_FIELD(t_Euclidean2D, instance),
            DECLARE_GET_FIELD(t_Euclidean2D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Euclidean2D__methods_[] = {
            DECLARE_METHOD(t_Euclidean2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean2D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Euclidean2D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Euclidean2D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean2D)[] = {
            { Py_tp_methods, t_Euclidean2D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Euclidean2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Euclidean2D, t_Euclidean2D, Euclidean2D);

          void t_Euclidean2D::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean2D), &PY_TYPE_DEF(Euclidean2D), module, "Euclidean2D", 0);
          }

          void t_Euclidean2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean2D), "class_", make_descriptor(Euclidean2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean2D), "wrapfn_", make_descriptor(t_Euclidean2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean2D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean2D::initializeClass, 1)))
              return NULL;
            return t_Euclidean2D::wrap_Object(Euclidean2D(((t_Euclidean2D *) arg)->object.this$));
          }
          static PyObject *t_Euclidean2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Euclidean2D_getDimension(t_Euclidean2D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Euclidean2D_getInstance(PyTypeObject *type)
          {
            Euclidean2D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Euclidean2D::getInstance());
            return t_Euclidean2D::wrap_Object(result);
          }

          static PyObject *t_Euclidean2D_getSubSpace(t_Euclidean2D *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::Euclidean1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::oned::t_Euclidean1D::wrap_Object(result);
          }

          static PyObject *t_Euclidean2D_get__dimension(t_Euclidean2D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Euclidean2D_get__instance(t_Euclidean2D *self, void *data)
          {
            Euclidean2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Euclidean2D::wrap_Object(value);
          }

          static PyObject *t_Euclidean2D_get__subSpace(t_Euclidean2D *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::oned::Euclidean1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::oned::t_Euclidean1D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "java/lang/String.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpField$RoundingMode::class$ = NULL;
      jmethodID *DfpField$RoundingMode::mids$ = NULL;
      bool DfpField$RoundingMode::live$ = false;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_CEIL = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_DOWN = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_FLOOR = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_DOWN = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_EVEN = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_ODD = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_UP = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_UP = NULL;

      jclass DfpField$RoundingMode::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpField$RoundingMode");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_f09b5bf7ce7b406c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/dfp/DfpField$RoundingMode;");
          mids$[mid_values_c898b66ae65cba1c] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/dfp/DfpField$RoundingMode;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ROUND_CEIL = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_CEIL", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_DOWN = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_DOWN", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_FLOOR = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_FLOOR", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_DOWN = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_DOWN", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_EVEN = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_EVEN", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_ODD = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_ODD", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_UP = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_UP", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_UP = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_UP", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DfpField$RoundingMode DfpField$RoundingMode::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DfpField$RoundingMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f09b5bf7ce7b406c], a0.this$));
      }

      JArray< DfpField$RoundingMode > DfpField$RoundingMode::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< DfpField$RoundingMode >(env->callStaticObjectMethod(cls, mids$[mid_values_c898b66ae65cba1c]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      static PyObject *t_DfpField$RoundingMode_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpField$RoundingMode_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpField$RoundingMode_of_(t_DfpField$RoundingMode *self, PyObject *args);
      static PyObject *t_DfpField$RoundingMode_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpField$RoundingMode_values(PyTypeObject *type);
      static PyObject *t_DfpField$RoundingMode_get__parameters_(t_DfpField$RoundingMode *self, void *data);
      static PyGetSetDef t_DfpField$RoundingMode__fields_[] = {
        DECLARE_GET_FIELD(t_DfpField$RoundingMode, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DfpField$RoundingMode__methods_[] = {
        DECLARE_METHOD(t_DfpField$RoundingMode, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField$RoundingMode, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField$RoundingMode, of_, METH_VARARGS),
        DECLARE_METHOD(t_DfpField$RoundingMode, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpField$RoundingMode, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpField$RoundingMode)[] = {
        { Py_tp_methods, t_DfpField$RoundingMode__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DfpField$RoundingMode__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpField$RoundingMode)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(DfpField$RoundingMode, t_DfpField$RoundingMode, DfpField$RoundingMode);
      PyObject *t_DfpField$RoundingMode::wrap_Object(const DfpField$RoundingMode& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DfpField$RoundingMode::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DfpField$RoundingMode *self = (t_DfpField$RoundingMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DfpField$RoundingMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DfpField$RoundingMode::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DfpField$RoundingMode *self = (t_DfpField$RoundingMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DfpField$RoundingMode::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpField$RoundingMode), &PY_TYPE_DEF(DfpField$RoundingMode), module, "DfpField$RoundingMode", 0);
      }

      void t_DfpField$RoundingMode::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "class_", make_descriptor(DfpField$RoundingMode::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "wrapfn_", make_descriptor(t_DfpField$RoundingMode::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "boxfn_", make_descriptor(boxObject));
        env->getClass(DfpField$RoundingMode::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_CEIL", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_CEIL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_DOWN", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_DOWN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_FLOOR", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_FLOOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_DOWN", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_DOWN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_EVEN", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_EVEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_ODD", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_ODD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_UP", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_UP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_UP", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_UP)));
      }

      static PyObject *t_DfpField$RoundingMode_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpField$RoundingMode::initializeClass, 1)))
          return NULL;
        return t_DfpField$RoundingMode::wrap_Object(DfpField$RoundingMode(((t_DfpField$RoundingMode *) arg)->object.this$));
      }
      static PyObject *t_DfpField$RoundingMode_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpField$RoundingMode::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DfpField$RoundingMode_of_(t_DfpField$RoundingMode *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_DfpField$RoundingMode_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        DfpField$RoundingMode result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpField$RoundingMode::valueOf(a0));
          return t_DfpField$RoundingMode::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_DfpField$RoundingMode_values(PyTypeObject *type)
      {
        JArray< DfpField$RoundingMode > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::dfp::DfpField$RoundingMode::values());
        return JArray<jobject>(result.this$).wrap(t_DfpField$RoundingMode::wrap_jobject);
      }
      static PyObject *t_DfpField$RoundingMode_get__parameters_(t_DfpField$RoundingMode *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrixPreservingVisitor::class$ = NULL;
      jmethodID *FieldMatrixPreservingVisitor::mids$ = NULL;
      bool FieldMatrixPreservingVisitor::live$ = false;

      jclass FieldMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_ce0470d468f80a56] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_b02282271d2e33e3] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_a6d8caed839ba827] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldMatrixPreservingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_ce0470d468f80a56]));
      }

      void FieldMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_b02282271d2e33e3], a0, a1, a2, a3, a4, a5);
      }

      void FieldMatrixPreservingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_a6d8caed839ba827], a0, a1, a2.this$);
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
      static PyObject *t_FieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixPreservingVisitor_of_(t_FieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixPreservingVisitor_end(t_FieldMatrixPreservingVisitor *self);
      static PyObject *t_FieldMatrixPreservingVisitor_start(t_FieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixPreservingVisitor_visit(t_FieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixPreservingVisitor_get__parameters_(t_FieldMatrixPreservingVisitor *self, void *data);
      static PyGetSetDef t_FieldMatrixPreservingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrixPreservingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_FieldMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrixPreservingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMatrixPreservingVisitor, t_FieldMatrixPreservingVisitor, FieldMatrixPreservingVisitor);
      PyObject *t_FieldMatrixPreservingVisitor::wrap_Object(const FieldMatrixPreservingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixPreservingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixPreservingVisitor *self = (t_FieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrixPreservingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixPreservingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixPreservingVisitor *self = (t_FieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrixPreservingVisitor), &PY_TYPE_DEF(FieldMatrixPreservingVisitor), module, "FieldMatrixPreservingVisitor", 0);
      }

      void t_FieldMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixPreservingVisitor), "class_", make_descriptor(FieldMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_FieldMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldMatrixPreservingVisitor::wrap_Object(FieldMatrixPreservingVisitor(((t_FieldMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrixPreservingVisitor_of_(t_FieldMatrixPreservingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrixPreservingVisitor_end(t_FieldMatrixPreservingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldMatrixPreservingVisitor_start(t_FieldMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_FieldMatrixPreservingVisitor_visit(t_FieldMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldMatrixPreservingVisitor_get__parameters_(t_FieldMatrixPreservingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
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
          mids$[mid_init$_4fde7f3f87bbd6f7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FrameAncestorException::FrameAncestorException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_4fde7f3f87bbd6f7, a0.this$, a1.this$)) {}
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
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/FieldTrackingCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TrackingCoordinates.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TopocentricFrame::class$ = NULL;
      jmethodID *TopocentricFrame::mids$ = NULL;
      bool TopocentricFrame::live$ = false;

      jclass TopocentricFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TopocentricFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a53eda3e60007f98] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/BodyShape;Lorg/orekit/bodies/GeodeticPoint;Ljava/lang/String;)V");
          mids$[mid_computeLimitVisibilityPoint_f6999efb9d99759b] = env->getMethodID(cls, "computeLimitVisibilityPoint", "(DDD)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getAzimuth_337a9b2d5433d9d9] = env->getMethodID(cls, "getAzimuth", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAzimuth_ad77259560c76546] = env->getMethodID(cls, "getAzimuth", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getCartesianPoint_f88961cca75a2c0a] = env->getMethodID(cls, "getCartesianPoint", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getEast_f88961cca75a2c0a] = env->getMethodID(cls, "getEast", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getElevation_ad77259560c76546] = env->getMethodID(cls, "getElevation", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getElevation_337a9b2d5433d9d9] = env->getMethodID(cls, "getElevation", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getNadir_f88961cca75a2c0a] = env->getMethodID(cls, "getNadir", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNorth_f88961cca75a2c0a] = env->getMethodID(cls, "getNorth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPVCoordinates_17742a9a6655bdb1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getParentShape_f166528db337c659] = env->getMethodID(cls, "getParentShape", "()Lorg/orekit/bodies/BodyShape;");
          mids$[mid_getPoint_8672b163b0e4a5a3] = env->getMethodID(cls, "getPoint", "()Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getPoint_d2c5bc800d874d78] = env->getMethodID(cls, "getPoint", "(Lorg/hipparchus/Field;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_getPosition_7ca40559664606d9] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRange_337a9b2d5433d9d9] = env->getMethodID(cls, "getRange", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRange_ad77259560c76546] = env->getMethodID(cls, "getRange", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getRangeRate_1a5c08523703bdbc] = env->getMethodID(cls, "getRangeRate", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getRangeRate_b73013eacd76d813] = env->getMethodID(cls, "getRangeRate", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getSouth_f88961cca75a2c0a] = env->getMethodID(cls, "getSouth", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getTrackingCoordinates_91161df1a985515e] = env->getMethodID(cls, "getTrackingCoordinates", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TrackingCoordinates;");
          mids$[mid_getTrackingCoordinates_10b9f744c9063d36] = env->getMethodID(cls, "getTrackingCoordinates", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/utils/FieldTrackingCoordinates;");
          mids$[mid_getWest_f88961cca75a2c0a] = env->getMethodID(cls, "getWest", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getZenith_f88961cca75a2c0a] = env->getMethodID(cls, "getZenith", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pointAtDistance_f6999efb9d99759b] = env->getMethodID(cls, "pointAtDistance", "(DDD)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TopocentricFrame::TopocentricFrame(const ::org::orekit::bodies::BodyShape & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::java::lang::String & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_a53eda3e60007f98, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::bodies::GeodeticPoint TopocentricFrame::computeLimitVisibilityPoint(jdouble a0, jdouble a1, jdouble a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_computeLimitVisibilityPoint_f6999efb9d99759b], a0, a1, a2));
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getAzimuth(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAzimuth_337a9b2d5433d9d9], a0.this$, a1.this$, a2.this$));
      }

      jdouble TopocentricFrame::getAzimuth(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAzimuth_ad77259560c76546], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getCartesianPoint() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCartesianPoint_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getEast() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEast_f88961cca75a2c0a]));
      }

      jdouble TopocentricFrame::getElevation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElevation_ad77259560c76546], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getElevation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getElevation_337a9b2d5433d9d9], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getNadir() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNadir_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getNorth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNorth_f88961cca75a2c0a]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates TopocentricFrame::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_17742a9a6655bdb1], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::BodyShape TopocentricFrame::getParentShape() const
      {
        return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getParentShape_f166528db337c659]));
      }

      ::org::orekit::bodies::GeodeticPoint TopocentricFrame::getPoint() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getPoint_8672b163b0e4a5a3]));
      }

      ::org::orekit::bodies::FieldGeodeticPoint TopocentricFrame::getPoint(const ::org::hipparchus::Field & a0) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getPoint_d2c5bc800d874d78], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_7ca40559664606d9], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getRange(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRange_337a9b2d5433d9d9], a0.this$, a1.this$, a2.this$));
      }

      jdouble TopocentricFrame::getRange(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRange_ad77259560c76546], a0.this$, a1.this$, a2.this$);
      }

      jdouble TopocentricFrame::getRangeRate(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRangeRate_1a5c08523703bdbc], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement TopocentricFrame::getRangeRate(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRangeRate_b73013eacd76d813], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getSouth() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSouth_f88961cca75a2c0a]));
      }

      ::org::orekit::utils::TrackingCoordinates TopocentricFrame::getTrackingCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::utils::TrackingCoordinates(env->callObjectMethod(this$, mids$[mid_getTrackingCoordinates_91161df1a985515e], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::FieldTrackingCoordinates TopocentricFrame::getTrackingCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::orekit::utils::FieldTrackingCoordinates(env->callObjectMethod(this$, mids$[mid_getTrackingCoordinates_10b9f744c9063d36], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getWest() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getWest_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D TopocentricFrame::getZenith() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getZenith_f88961cca75a2c0a]));
      }

      ::org::orekit::bodies::GeodeticPoint TopocentricFrame::pointAtDistance(jdouble a0, jdouble a1, jdouble a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_pointAtDistance_f6999efb9d99759b], a0, a1, a2));
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
      static PyObject *t_TopocentricFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TopocentricFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TopocentricFrame_init_(t_TopocentricFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TopocentricFrame_computeLimitVisibilityPoint(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getAzimuth(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getCartesianPoint(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getEast(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getElevation(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getNadir(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getNorth(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getPVCoordinates(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getParentShape(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getPoint(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getPosition(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getRange(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getRangeRate(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getSouth(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getTrackingCoordinates(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_getWest(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_getZenith(t_TopocentricFrame *self);
      static PyObject *t_TopocentricFrame_pointAtDistance(t_TopocentricFrame *self, PyObject *args);
      static PyObject *t_TopocentricFrame_get__cartesianPoint(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__east(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__nadir(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__north(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__parentShape(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__point(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__south(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__west(t_TopocentricFrame *self, void *data);
      static PyObject *t_TopocentricFrame_get__zenith(t_TopocentricFrame *self, void *data);
      static PyGetSetDef t_TopocentricFrame__fields_[] = {
        DECLARE_GET_FIELD(t_TopocentricFrame, cartesianPoint),
        DECLARE_GET_FIELD(t_TopocentricFrame, east),
        DECLARE_GET_FIELD(t_TopocentricFrame, nadir),
        DECLARE_GET_FIELD(t_TopocentricFrame, north),
        DECLARE_GET_FIELD(t_TopocentricFrame, parentShape),
        DECLARE_GET_FIELD(t_TopocentricFrame, point),
        DECLARE_GET_FIELD(t_TopocentricFrame, south),
        DECLARE_GET_FIELD(t_TopocentricFrame, west),
        DECLARE_GET_FIELD(t_TopocentricFrame, zenith),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TopocentricFrame__methods_[] = {
        DECLARE_METHOD(t_TopocentricFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TopocentricFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TopocentricFrame, computeLimitVisibilityPoint, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getAzimuth, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getCartesianPoint, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getEast, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getElevation, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getNadir, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getNorth, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getParentShape, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getPoint, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getRange, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getRangeRate, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getSouth, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getTrackingCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_TopocentricFrame, getWest, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, getZenith, METH_NOARGS),
        DECLARE_METHOD(t_TopocentricFrame, pointAtDistance, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TopocentricFrame)[] = {
        { Py_tp_methods, t_TopocentricFrame__methods_ },
        { Py_tp_init, (void *) t_TopocentricFrame_init_ },
        { Py_tp_getset, t_TopocentricFrame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TopocentricFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(TopocentricFrame, t_TopocentricFrame, TopocentricFrame);

      void t_TopocentricFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(TopocentricFrame), &PY_TYPE_DEF(TopocentricFrame), module, "TopocentricFrame", 0);
      }

      void t_TopocentricFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TopocentricFrame), "class_", make_descriptor(TopocentricFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TopocentricFrame), "wrapfn_", make_descriptor(t_TopocentricFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TopocentricFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TopocentricFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TopocentricFrame::initializeClass, 1)))
          return NULL;
        return t_TopocentricFrame::wrap_Object(TopocentricFrame(((t_TopocentricFrame *) arg)->object.this$));
      }
      static PyObject *t_TopocentricFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TopocentricFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TopocentricFrame_init_(t_TopocentricFrame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::BodyShape a0((jobject) NULL);
        ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        TopocentricFrame object((jobject) NULL);

        if (!parseArgs(args, "kks", ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = TopocentricFrame(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TopocentricFrame_computeLimitVisibilityPoint(t_TopocentricFrame *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.computeLimitVisibilityPoint(a0, a1, a2));
          return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "computeLimitVisibilityPoint", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getAzimuth(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAzimuth(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getAzimuth(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAzimuth", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getCartesianPoint(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getCartesianPoint());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getEast(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getElevation(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getElevation(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getElevation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getElevation", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getNadir(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getNorth(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getPVCoordinates(t_TopocentricFrame *self, PyObject *args)
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

      static PyObject *t_TopocentricFrame_getParentShape(t_TopocentricFrame *self)
      {
        ::org::orekit::bodies::BodyShape result((jobject) NULL);
        OBJ_CALL(result = self->object.getParentShape());
        return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getPoint(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.getPoint());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getPoint(a0));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPoint", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getPosition(t_TopocentricFrame *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getRange(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getRange(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getRange(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getRange", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getRangeRate(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getRangeRate(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getRangeRate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getRangeRate", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getSouth(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getTrackingCoordinates(t_TopocentricFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldTrackingCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTrackingCoordinates(a0, a1, a2));
              return ::org::orekit::utils::t_FieldTrackingCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::utils::TrackingCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTrackingCoordinates(a0, a1, a2));
              return ::org::orekit::utils::t_TrackingCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTrackingCoordinates", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_getWest(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_getZenith(t_TopocentricFrame *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_TopocentricFrame_pointAtDistance(t_TopocentricFrame *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.pointAtDistance(a0, a1, a2));
          return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "pointAtDistance", args);
        return NULL;
      }

      static PyObject *t_TopocentricFrame_get__cartesianPoint(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getCartesianPoint());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__east(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getEast());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__nadir(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNadir());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__north(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getNorth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__parentShape(t_TopocentricFrame *self, void *data)
      {
        ::org::orekit::bodies::BodyShape value((jobject) NULL);
        OBJ_CALL(value = self->object.getParentShape());
        return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__point(t_TopocentricFrame *self, void *data)
      {
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__south(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSouth());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__west(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getWest());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_TopocentricFrame_get__zenith(t_TopocentricFrame *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getZenith());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldSecondaryODE.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
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
          mids$[mid_computeDerivatives_b035a3c9f1fe5fd2] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_13831dd045f2fba3] = env->getMethodID(cls, "init", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldSecondaryODE::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_b035a3c9f1fe5fd2], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      jint FieldSecondaryODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
      }

      void FieldSecondaryODE::init(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_init_13831dd045f2fba3], a0.this$, a1.this$, a2.this$, a3.this$);
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
#include "org/orekit/rugged/intersection/duvenhage/DuvenhageAlgorithm.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {

          ::java::lang::Class *DuvenhageAlgorithm::class$ = NULL;
          jmethodID *DuvenhageAlgorithm::mids$ = NULL;
          bool DuvenhageAlgorithm::live$ = false;

          jclass DuvenhageAlgorithm::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/duvenhage/DuvenhageAlgorithm");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a25fc061142e5dd5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/raster/TileUpdater;IZ)V");
              mids$[mid_getAlgorithmId_58f1b48b3d6060f9] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
              mids$[mid_getElevation_2268d18be49a6087] = env->getMethodID(cls, "getElevation", "(DD)D");
              mids$[mid_intersection_bffffb02b1b74895] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
              mids$[mid_refineIntersection_5fc8cb427a1ada2e] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DuvenhageAlgorithm::DuvenhageAlgorithm(const ::org::orekit::rugged::raster::TileUpdater & a0, jint a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a25fc061142e5dd5, a0.this$, a1, a2)) {}

          ::org::orekit::rugged::api::AlgorithmId DuvenhageAlgorithm::getAlgorithmId() const
          {
            return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_58f1b48b3d6060f9]));
          }

          jdouble DuvenhageAlgorithm::getElevation(jdouble a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getElevation_2268d18be49a6087], a0, a1);
          }

          ::org::orekit::rugged::utils::NormalizedGeodeticPoint DuvenhageAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_bffffb02b1b74895], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::rugged::utils::NormalizedGeodeticPoint DuvenhageAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
          {
            return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_5fc8cb427a1ada2e], a0.this$, a1.this$, a2.this$, a3.this$));
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
    namespace rugged {
      namespace intersection {
        namespace duvenhage {
          static PyObject *t_DuvenhageAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DuvenhageAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DuvenhageAlgorithm_init_(t_DuvenhageAlgorithm *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DuvenhageAlgorithm_getAlgorithmId(t_DuvenhageAlgorithm *self);
          static PyObject *t_DuvenhageAlgorithm_getElevation(t_DuvenhageAlgorithm *self, PyObject *args);
          static PyObject *t_DuvenhageAlgorithm_intersection(t_DuvenhageAlgorithm *self, PyObject *args);
          static PyObject *t_DuvenhageAlgorithm_refineIntersection(t_DuvenhageAlgorithm *self, PyObject *args);
          static PyObject *t_DuvenhageAlgorithm_get__algorithmId(t_DuvenhageAlgorithm *self, void *data);
          static PyGetSetDef t_DuvenhageAlgorithm__fields_[] = {
            DECLARE_GET_FIELD(t_DuvenhageAlgorithm, algorithmId),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DuvenhageAlgorithm__methods_[] = {
            DECLARE_METHOD(t_DuvenhageAlgorithm, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, getAlgorithmId, METH_NOARGS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, getElevation, METH_VARARGS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, intersection, METH_VARARGS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, refineIntersection, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DuvenhageAlgorithm)[] = {
            { Py_tp_methods, t_DuvenhageAlgorithm__methods_ },
            { Py_tp_init, (void *) t_DuvenhageAlgorithm_init_ },
            { Py_tp_getset, t_DuvenhageAlgorithm__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DuvenhageAlgorithm)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DuvenhageAlgorithm, t_DuvenhageAlgorithm, DuvenhageAlgorithm);

          void t_DuvenhageAlgorithm::install(PyObject *module)
          {
            installType(&PY_TYPE(DuvenhageAlgorithm), &PY_TYPE_DEF(DuvenhageAlgorithm), module, "DuvenhageAlgorithm", 0);
          }

          void t_DuvenhageAlgorithm::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DuvenhageAlgorithm), "class_", make_descriptor(DuvenhageAlgorithm::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DuvenhageAlgorithm), "wrapfn_", make_descriptor(t_DuvenhageAlgorithm::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DuvenhageAlgorithm), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DuvenhageAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DuvenhageAlgorithm::initializeClass, 1)))
              return NULL;
            return t_DuvenhageAlgorithm::wrap_Object(DuvenhageAlgorithm(((t_DuvenhageAlgorithm *) arg)->object.this$));
          }
          static PyObject *t_DuvenhageAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DuvenhageAlgorithm::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DuvenhageAlgorithm_init_(t_DuvenhageAlgorithm *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::rugged::raster::TileUpdater a0((jobject) NULL);
            jint a1;
            jboolean a2;
            DuvenhageAlgorithm object((jobject) NULL);

            if (!parseArgs(args, "kIZ", ::org::orekit::rugged::raster::TileUpdater::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = DuvenhageAlgorithm(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DuvenhageAlgorithm_getAlgorithmId(t_DuvenhageAlgorithm *self)
          {
            ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlgorithmId());
            return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
          }

          static PyObject *t_DuvenhageAlgorithm_getElevation(t_DuvenhageAlgorithm *self, PyObject *args)
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

          static PyObject *t_DuvenhageAlgorithm_intersection(t_DuvenhageAlgorithm *self, PyObject *args)
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

          static PyObject *t_DuvenhageAlgorithm_refineIntersection(t_DuvenhageAlgorithm *self, PyObject *args)
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

          static PyObject *t_DuvenhageAlgorithm_get__algorithmId(t_DuvenhageAlgorithm *self, void *data)
          {
            ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlgorithmId());
            return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/FieldButcherArrayProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *FieldButcherArrayProvider::class$ = NULL;
        jmethodID *FieldButcherArrayProvider::mids$ = NULL;
        bool FieldButcherArrayProvider::live$ = false;

        jclass FieldButcherArrayProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/FieldButcherArrayProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getA_f180d140dce78d62] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_41762fd4377ff26e] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_41762fd4377ff26e] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldButcherArrayProvider::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_f180d140dce78d62]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldButcherArrayProvider::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_41762fd4377ff26e]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldButcherArrayProvider::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_41762fd4377ff26e]));
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
        static PyObject *t_FieldButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldButcherArrayProvider_of_(t_FieldButcherArrayProvider *self, PyObject *args);
        static PyObject *t_FieldButcherArrayProvider_getA(t_FieldButcherArrayProvider *self);
        static PyObject *t_FieldButcherArrayProvider_getB(t_FieldButcherArrayProvider *self);
        static PyObject *t_FieldButcherArrayProvider_getC(t_FieldButcherArrayProvider *self);
        static PyObject *t_FieldButcherArrayProvider_get__a(t_FieldButcherArrayProvider *self, void *data);
        static PyObject *t_FieldButcherArrayProvider_get__b(t_FieldButcherArrayProvider *self, void *data);
        static PyObject *t_FieldButcherArrayProvider_get__c(t_FieldButcherArrayProvider *self, void *data);
        static PyObject *t_FieldButcherArrayProvider_get__parameters_(t_FieldButcherArrayProvider *self, void *data);
        static PyGetSetDef t_FieldButcherArrayProvider__fields_[] = {
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, a),
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, b),
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, c),
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldButcherArrayProvider__methods_[] = {
          DECLARE_METHOD(t_FieldButcherArrayProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, getA, METH_NOARGS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, getB, METH_NOARGS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, getC, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldButcherArrayProvider)[] = {
          { Py_tp_methods, t_FieldButcherArrayProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldButcherArrayProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldButcherArrayProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldButcherArrayProvider, t_FieldButcherArrayProvider, FieldButcherArrayProvider);
        PyObject *t_FieldButcherArrayProvider::wrap_Object(const FieldButcherArrayProvider& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldButcherArrayProvider::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldButcherArrayProvider *self = (t_FieldButcherArrayProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldButcherArrayProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldButcherArrayProvider::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldButcherArrayProvider *self = (t_FieldButcherArrayProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldButcherArrayProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldButcherArrayProvider), &PY_TYPE_DEF(FieldButcherArrayProvider), module, "FieldButcherArrayProvider", 0);
        }

        void t_FieldButcherArrayProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldButcherArrayProvider), "class_", make_descriptor(FieldButcherArrayProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldButcherArrayProvider), "wrapfn_", make_descriptor(t_FieldButcherArrayProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldButcherArrayProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldButcherArrayProvider::initializeClass, 1)))
            return NULL;
          return t_FieldButcherArrayProvider::wrap_Object(FieldButcherArrayProvider(((t_FieldButcherArrayProvider *) arg)->object.this$));
        }
        static PyObject *t_FieldButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldButcherArrayProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldButcherArrayProvider_of_(t_FieldButcherArrayProvider *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldButcherArrayProvider_getA(t_FieldButcherArrayProvider *self)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getA());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_FieldButcherArrayProvider_getB(t_FieldButcherArrayProvider *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getB());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldButcherArrayProvider_getC(t_FieldButcherArrayProvider *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getC());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
        static PyObject *t_FieldButcherArrayProvider_get__parameters_(t_FieldButcherArrayProvider *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldButcherArrayProvider_get__a(t_FieldButcherArrayProvider *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_FieldButcherArrayProvider_get__b(t_FieldButcherArrayProvider *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldButcherArrayProvider_get__c(t_FieldButcherArrayProvider *self, void *data)
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
#include "org/orekit/propagation/sampling/PythonFieldOrekitStepHandler.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonFieldOrekitStepHandler::class$ = NULL;
        jmethodID *PythonFieldOrekitStepHandler::mids$ = NULL;
        bool PythonFieldOrekitStepHandler::live$ = false;

        jclass PythonFieldOrekitStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonFieldOrekitStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_b66c84a5711243d5] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_c006764357a9d9b2] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOrekitStepHandler::PythonFieldOrekitStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonFieldOrekitStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonFieldOrekitStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonFieldOrekitStepHandler::pythonExtension(jlong a0) const
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
      namespace sampling {
        static PyObject *t_PythonFieldOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepHandler_of_(t_PythonFieldOrekitStepHandler *self, PyObject *args);
        static int t_PythonFieldOrekitStepHandler_init_(t_PythonFieldOrekitStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOrekitStepHandler_finalize(t_PythonFieldOrekitStepHandler *self);
        static PyObject *t_PythonFieldOrekitStepHandler_pythonExtension(t_PythonFieldOrekitStepHandler *self, PyObject *args);
        static void JNICALL t_PythonFieldOrekitStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOrekitStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOrekitStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldOrekitStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldOrekitStepHandler_get__self(t_PythonFieldOrekitStepHandler *self, void *data);
        static PyObject *t_PythonFieldOrekitStepHandler_get__parameters_(t_PythonFieldOrekitStepHandler *self, void *data);
        static PyGetSetDef t_PythonFieldOrekitStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepHandler, self),
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOrekitStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOrekitStepHandler)[] = {
          { Py_tp_methods, t_PythonFieldOrekitStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOrekitStepHandler_init_ },
          { Py_tp_getset, t_PythonFieldOrekitStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOrekitStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOrekitStepHandler, t_PythonFieldOrekitStepHandler, PythonFieldOrekitStepHandler);
        PyObject *t_PythonFieldOrekitStepHandler::wrap_Object(const PythonFieldOrekitStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepHandler *self = (t_PythonFieldOrekitStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldOrekitStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepHandler *self = (t_PythonFieldOrekitStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldOrekitStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOrekitStepHandler), &PY_TYPE_DEF(PythonFieldOrekitStepHandler), module, "PythonFieldOrekitStepHandler", 1);
        }

        void t_PythonFieldOrekitStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepHandler), "class_", make_descriptor(PythonFieldOrekitStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepHandler), "wrapfn_", make_descriptor(t_PythonFieldOrekitStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOrekitStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonFieldOrekitStepHandler_finish0 },
            { "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V", (void *) t_PythonFieldOrekitStepHandler_handleStep1 },
            { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldOrekitStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOrekitStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonFieldOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOrekitStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOrekitStepHandler::wrap_Object(PythonFieldOrekitStepHandler(((t_PythonFieldOrekitStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOrekitStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldOrekitStepHandler_of_(t_PythonFieldOrekitStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldOrekitStepHandler_init_(t_PythonFieldOrekitStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOrekitStepHandler object((jobject) NULL);

          INT_CALL(object = PythonFieldOrekitStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOrekitStepHandler_finalize(t_PythonFieldOrekitStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOrekitStepHandler_pythonExtension(t_PythonFieldOrekitStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonFieldOrekitStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::wrap_Object(::org::orekit::propagation::sampling::FieldOrekitStepInterpolator(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldOrekitStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
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

        static void JNICALL t_PythonFieldOrekitStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOrekitStepHandler::mids$[PythonFieldOrekitStepHandler::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldOrekitStepHandler_get__self(t_PythonFieldOrekitStepHandler *self, void *data)
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
        static PyObject *t_PythonFieldOrekitStepHandler_get__parameters_(t_PythonFieldOrekitStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguitySolver.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AmbiguitySolver::class$ = NULL;
          jmethodID *AmbiguitySolver::mids$ = NULL;
          bool AmbiguitySolver::live$ = false;

          jclass AmbiguitySolver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AmbiguitySolver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8662fd7590d13547] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver;Lorg/orekit/estimation/measurements/gnss/AmbiguityAcceptance;)V");
              mids$[mid_fixIntegerAmbiguities_c7eebcd223da271c] = env->getMethodID(cls, "fixIntegerAmbiguities", "(ILjava/util/List;Lorg/hipparchus/linear/RealMatrix;)Ljava/util/List;");
              mids$[mid_getAllAmbiguityDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getAllAmbiguityDrivers", "()Ljava/util/List;");
              mids$[mid_unFixAmbiguity_558cfe74a49f563f] = env->getMethodID(cls, "unFixAmbiguity", "(Lorg/orekit/utils/ParameterDriver;)V");
              mids$[mid_getFreeAmbiguityDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getFreeAmbiguityDrivers", "()Ljava/util/List;");
              mids$[mid_getFreeAmbiguityIndirection_9965dae7fb08a013] = env->getMethodID(cls, "getFreeAmbiguityIndirection", "(ILjava/util/List;)[I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AmbiguitySolver::AmbiguitySolver(const ::java::util::List & a0, const ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolver & a1, const ::org::orekit::estimation::measurements::gnss::AmbiguityAcceptance & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8662fd7590d13547, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List AmbiguitySolver::fixIntegerAmbiguities(jint a0, const ::java::util::List & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_fixIntegerAmbiguities_c7eebcd223da271c], a0, a1.this$, a2.this$));
          }

          ::java::util::List AmbiguitySolver::getAllAmbiguityDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllAmbiguityDrivers_0d9551367f7ecdef]));
          }

          void AmbiguitySolver::unFixAmbiguity(const ::org::orekit::utils::ParameterDriver & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_unFixAmbiguity_558cfe74a49f563f], a0.this$);
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
          static PyObject *t_AmbiguitySolver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AmbiguitySolver_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AmbiguitySolver_init_(t_AmbiguitySolver *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AmbiguitySolver_fixIntegerAmbiguities(t_AmbiguitySolver *self, PyObject *args);
          static PyObject *t_AmbiguitySolver_getAllAmbiguityDrivers(t_AmbiguitySolver *self);
          static PyObject *t_AmbiguitySolver_unFixAmbiguity(t_AmbiguitySolver *self, PyObject *arg);
          static PyObject *t_AmbiguitySolver_get__allAmbiguityDrivers(t_AmbiguitySolver *self, void *data);
          static PyGetSetDef t_AmbiguitySolver__fields_[] = {
            DECLARE_GET_FIELD(t_AmbiguitySolver, allAmbiguityDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AmbiguitySolver__methods_[] = {
            DECLARE_METHOD(t_AmbiguitySolver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguitySolver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguitySolver, fixIntegerAmbiguities, METH_VARARGS),
            DECLARE_METHOD(t_AmbiguitySolver, getAllAmbiguityDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AmbiguitySolver, unFixAmbiguity, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AmbiguitySolver)[] = {
            { Py_tp_methods, t_AmbiguitySolver__methods_ },
            { Py_tp_init, (void *) t_AmbiguitySolver_init_ },
            { Py_tp_getset, t_AmbiguitySolver__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AmbiguitySolver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AmbiguitySolver, t_AmbiguitySolver, AmbiguitySolver);

          void t_AmbiguitySolver::install(PyObject *module)
          {
            installType(&PY_TYPE(AmbiguitySolver), &PY_TYPE_DEF(AmbiguitySolver), module, "AmbiguitySolver", 0);
          }

          void t_AmbiguitySolver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguitySolver), "class_", make_descriptor(AmbiguitySolver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguitySolver), "wrapfn_", make_descriptor(t_AmbiguitySolver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguitySolver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AmbiguitySolver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AmbiguitySolver::initializeClass, 1)))
              return NULL;
            return t_AmbiguitySolver::wrap_Object(AmbiguitySolver(((t_AmbiguitySolver *) arg)->object.this$));
          }
          static PyObject *t_AmbiguitySolver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AmbiguitySolver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AmbiguitySolver_init_(t_AmbiguitySolver *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolver a1((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::AmbiguityAcceptance a2((jobject) NULL);
            AmbiguitySolver object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::java::util::List::initializeClass, ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolver::initializeClass, ::org::orekit::estimation::measurements::gnss::AmbiguityAcceptance::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
            {
              INT_CALL(object = AmbiguitySolver(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AmbiguitySolver_fixIntegerAmbiguities(t_AmbiguitySolver *self, PyObject *args)
          {
            jint a0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "IKk", ::java::util::List::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.fixIntegerAmbiguities(a0, a1, a2));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            PyErr_SetArgsError((PyObject *) self, "fixIntegerAmbiguities", args);
            return NULL;
          }

          static PyObject *t_AmbiguitySolver_getAllAmbiguityDrivers(t_AmbiguitySolver *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getAllAmbiguityDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AmbiguitySolver_unFixAmbiguity(t_AmbiguitySolver *self, PyObject *arg)
          {
            ::org::orekit::utils::ParameterDriver a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
            {
              OBJ_CALL(self->object.unFixAmbiguity(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "unFixAmbiguity", arg);
            return NULL;
          }

          static PyObject *t_AmbiguitySolver_get__allAmbiguityDrivers(t_AmbiguitySolver *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getAllAmbiguityDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Opm.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "java/util/List.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmData.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *Opm::class$ = NULL;
              jmethodID *Opm::mids$ = NULL;
              bool Opm::live$ = false;
              ::java::lang::String *Opm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Opm::ROOT = NULL;

              jclass Opm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/Opm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_66443a7cc3b43b5d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;D)V");
                  mids$[mid_generateCartesianOrbit_0b5f23f972fe7789] = env->getMethodID(cls, "generateCartesianOrbit", "()Lorg/orekit/orbits/CartesianOrbit;");
                  mids$[mid_generateKeplerianOrbit_48360cd036a5e97b] = env->getMethodID(cls, "generateKeplerianOrbit", "()Lorg/orekit/orbits/KeplerianOrbit;");
                  mids$[mid_generateSpacecraftState_15e85d5301b90ef8] = env->getMethodID(cls, "generateSpacecraftState", "()Lorg/orekit/propagation/SpacecraftState;");
                  mids$[mid_getData_2b9b4229a136e2bd] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/odm/opm/OpmData;");
                  mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManeuver_8f5fc12e3129007b] = env->getMethodID(cls, "getManeuver", "(I)Lorg/orekit/files/ccsds/ndm/odm/opm/Maneuver;");
                  mids$[mid_getManeuvers_0d9551367f7ecdef] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getMetadata_ece27d931e37ca4f] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/OdmCommonMetadata;");
                  mids$[mid_getNbManeuvers_412668abc8d889e9] = env->getMethodID(cls, "getNbManeuvers", "()I");
                  mids$[mid_getPVCoordinates_daf15abc21907508] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
                  mids$[mid_hasManeuvers_89b302893bdbe1f1] = env->getMethodID(cls, "hasManeuvers", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Opm::Opm(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3, jdouble a4) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_66443a7cc3b43b5d, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::orbits::CartesianOrbit Opm::generateCartesianOrbit() const
              {
                return ::org::orekit::orbits::CartesianOrbit(env->callObjectMethod(this$, mids$[mid_generateCartesianOrbit_0b5f23f972fe7789]));
              }

              ::org::orekit::orbits::KeplerianOrbit Opm::generateKeplerianOrbit() const
              {
                return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_generateKeplerianOrbit_48360cd036a5e97b]));
              }

              ::org::orekit::propagation::SpacecraftState Opm::generateSpacecraftState() const
              {
                return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_generateSpacecraftState_15e85d5301b90ef8]));
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::OpmData Opm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::OpmData(env->callObjectMethod(this$, mids$[mid_getData_2b9b4229a136e2bd]));
              }

              ::org::orekit::time::AbsoluteDate Opm::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver Opm::getManeuver(jint a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver(env->callObjectMethod(this$, mids$[mid_getManeuver_8f5fc12e3129007b], a0));
              }

              ::java::util::List Opm::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_0d9551367f7ecdef]));
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata Opm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_ece27d931e37ca4f]));
              }

              jint Opm::getNbManeuvers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbManeuvers_412668abc8d889e9]);
              }

              ::org::orekit::utils::TimeStampedPVCoordinates Opm::getPVCoordinates() const
              {
                return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_daf15abc21907508]));
              }

              jboolean Opm::hasManeuvers() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasManeuvers_89b302893bdbe1f1]);
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
            namespace opm {
              static PyObject *t_Opm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Opm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Opm_of_(t_Opm *self, PyObject *args);
              static int t_Opm_init_(t_Opm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Opm_generateCartesianOrbit(t_Opm *self);
              static PyObject *t_Opm_generateKeplerianOrbit(t_Opm *self);
              static PyObject *t_Opm_generateSpacecraftState(t_Opm *self);
              static PyObject *t_Opm_getData(t_Opm *self);
              static PyObject *t_Opm_getDate(t_Opm *self);
              static PyObject *t_Opm_getManeuver(t_Opm *self, PyObject *arg);
              static PyObject *t_Opm_getManeuvers(t_Opm *self);
              static PyObject *t_Opm_getMetadata(t_Opm *self);
              static PyObject *t_Opm_getNbManeuvers(t_Opm *self);
              static PyObject *t_Opm_getPVCoordinates(t_Opm *self);
              static PyObject *t_Opm_hasManeuvers(t_Opm *self);
              static PyObject *t_Opm_get__data(t_Opm *self, void *data);
              static PyObject *t_Opm_get__date(t_Opm *self, void *data);
              static PyObject *t_Opm_get__maneuvers(t_Opm *self, void *data);
              static PyObject *t_Opm_get__metadata(t_Opm *self, void *data);
              static PyObject *t_Opm_get__nbManeuvers(t_Opm *self, void *data);
              static PyObject *t_Opm_get__pVCoordinates(t_Opm *self, void *data);
              static PyObject *t_Opm_get__parameters_(t_Opm *self, void *data);
              static PyGetSetDef t_Opm__fields_[] = {
                DECLARE_GET_FIELD(t_Opm, data),
                DECLARE_GET_FIELD(t_Opm, date),
                DECLARE_GET_FIELD(t_Opm, maneuvers),
                DECLARE_GET_FIELD(t_Opm, metadata),
                DECLARE_GET_FIELD(t_Opm, nbManeuvers),
                DECLARE_GET_FIELD(t_Opm, pVCoordinates),
                DECLARE_GET_FIELD(t_Opm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Opm__methods_[] = {
                DECLARE_METHOD(t_Opm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Opm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Opm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Opm, generateCartesianOrbit, METH_NOARGS),
                DECLARE_METHOD(t_Opm, generateKeplerianOrbit, METH_NOARGS),
                DECLARE_METHOD(t_Opm, generateSpacecraftState, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getDate, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getManeuver, METH_O),
                DECLARE_METHOD(t_Opm, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getNbManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_Opm, getPVCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_Opm, hasManeuvers, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Opm)[] = {
                { Py_tp_methods, t_Opm__methods_ },
                { Py_tp_init, (void *) t_Opm_init_ },
                { Py_tp_getset, t_Opm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Opm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Opm, t_Opm, Opm);
              PyObject *t_Opm::wrap_Object(const Opm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Opm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Opm *self = (t_Opm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Opm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Opm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Opm *self = (t_Opm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Opm::install(PyObject *module)
              {
                installType(&PY_TYPE(Opm), &PY_TYPE_DEF(Opm), module, "Opm", 0);
              }

              void t_Opm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "class_", make_descriptor(Opm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "wrapfn_", make_descriptor(t_Opm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Opm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Opm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Opm), "ROOT", make_descriptor(j2p(*Opm::ROOT)));
              }

              static PyObject *t_Opm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Opm::initializeClass, 1)))
                  return NULL;
                return t_Opm::wrap_Object(Opm(((t_Opm *) arg)->object.this$));
              }
              static PyObject *t_Opm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Opm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Opm_of_(t_Opm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Opm_init_(t_Opm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                jdouble a4;
                Opm object((jobject) NULL);

                if (!parseArgs(args, "kKKkD", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
                {
                  INT_CALL(object = Opm(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Opm_generateCartesianOrbit(t_Opm *self)
              {
                ::org::orekit::orbits::CartesianOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.generateCartesianOrbit());
                return ::org::orekit::orbits::t_CartesianOrbit::wrap_Object(result);
              }

              static PyObject *t_Opm_generateKeplerianOrbit(t_Opm *self)
              {
                ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.generateKeplerianOrbit());
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }

              static PyObject *t_Opm_generateSpacecraftState(t_Opm *self)
              {
                ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
                OBJ_CALL(result = self->object.generateSpacecraftState());
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }

              static PyObject *t_Opm_getData(t_Opm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::opm::OpmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::opm::t_OpmData::wrap_Object(result);
              }

              static PyObject *t_Opm_getDate(t_Opm *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Opm_getManeuver(t_Opm *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getManeuver(a0));
                  return ::org::orekit::files::ccsds::ndm::odm::opm::t_Maneuver::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getManeuver", arg);
                return NULL;
              }

              static PyObject *t_Opm_getManeuvers(t_Opm *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::opm::PY_TYPE(Maneuver));
              }

              static PyObject *t_Opm_getMetadata(t_Opm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmCommonMetadata::wrap_Object(result);
              }

              static PyObject *t_Opm_getNbManeuvers(t_Opm *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbManeuvers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Opm_getPVCoordinates(t_Opm *self)
              {
                ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
                OBJ_CALL(result = self->object.getPVCoordinates());
                return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
              }

              static PyObject *t_Opm_hasManeuvers(t_Opm *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasManeuvers());
                Py_RETURN_BOOL(result);
              }
              static PyObject *t_Opm_get__parameters_(t_Opm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Opm_get__data(t_Opm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::opm::OpmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::opm::t_OpmData::wrap_Object(value);
              }

              static PyObject *t_Opm_get__date(t_Opm *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_Opm_get__maneuvers(t_Opm *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_Opm_get__metadata(t_Opm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmCommonMetadata::wrap_Object(value);
              }

              static PyObject *t_Opm_get__nbManeuvers(t_Opm *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbManeuvers());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_Opm_get__pVCoordinates(t_Opm *self, void *data)
              {
                ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
                OBJ_CALL(value = self->object.getPVCoordinates());
                return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
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
#include "java/io/FilterOutputStream.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FilterOutputStream::class$ = NULL;
    jmethodID *FilterOutputStream::mids$ = NULL;
    bool FilterOutputStream::live$ = false;

    jclass FilterOutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FilterOutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a093374b16e6c27d] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_0640e6acf969ed28] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_write_d759c70c6670fd89] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_a3da1a935cb37f7b] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_ac782c7077255dd3] = env->getMethodID(cls, "write", "([BII)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FilterOutputStream::FilterOutputStream(const ::java::io::OutputStream & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_a093374b16e6c27d, a0.this$)) {}

    void FilterOutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
    }

    void FilterOutputStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0640e6acf969ed28]);
    }

    void FilterOutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_d759c70c6670fd89], a0.this$);
    }

    void FilterOutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_a3da1a935cb37f7b], a0);
    }

    void FilterOutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_ac782c7077255dd3], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FilterOutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FilterOutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FilterOutputStream_init_(t_FilterOutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_FilterOutputStream_close(t_FilterOutputStream *self, PyObject *args);
    static PyObject *t_FilterOutputStream_flush(t_FilterOutputStream *self, PyObject *args);
    static PyObject *t_FilterOutputStream_write(t_FilterOutputStream *self, PyObject *args);

    static PyMethodDef t_FilterOutputStream__methods_[] = {
      DECLARE_METHOD(t_FilterOutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FilterOutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FilterOutputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_FilterOutputStream, flush, METH_VARARGS),
      DECLARE_METHOD(t_FilterOutputStream, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FilterOutputStream)[] = {
      { Py_tp_methods, t_FilterOutputStream__methods_ },
      { Py_tp_init, (void *) t_FilterOutputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FilterOutputStream)[] = {
      &PY_TYPE_DEF(::java::io::OutputStream),
      NULL
    };

    DEFINE_TYPE(FilterOutputStream, t_FilterOutputStream, FilterOutputStream);

    void t_FilterOutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(FilterOutputStream), &PY_TYPE_DEF(FilterOutputStream), module, "FilterOutputStream", 0);
    }

    void t_FilterOutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilterOutputStream), "class_", make_descriptor(FilterOutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilterOutputStream), "wrapfn_", make_descriptor(t_FilterOutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FilterOutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FilterOutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FilterOutputStream::initializeClass, 1)))
        return NULL;
      return t_FilterOutputStream::wrap_Object(FilterOutputStream(((t_FilterOutputStream *) arg)->object.this$));
    }
    static PyObject *t_FilterOutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FilterOutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FilterOutputStream_init_(t_FilterOutputStream *self, PyObject *args, PyObject *kwds)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      FilterOutputStream object((jobject) NULL);

      if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
      {
        INT_CALL(object = FilterOutputStream(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_FilterOutputStream_close(t_FilterOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FilterOutputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_FilterOutputStream_flush(t_FilterOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FilterOutputStream), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_FilterOutputStream_write(t_FilterOutputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(FilterOutputStream), (PyObject *) self, "write", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeaderKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeaderKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmHeaderKey::class$ = NULL;
            jmethodID *CdmHeaderKey::mids$ = NULL;
            bool CdmHeaderKey::live$ = false;
            CdmHeaderKey *CdmHeaderKey::CLASSIFICATION = NULL;
            CdmHeaderKey *CdmHeaderKey::MESSAGE_FOR = NULL;

            jclass CdmHeaderKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmHeaderKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_67121ab4d9b3519d] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;)Z");
                mids$[mid_valueOf_609d0da771ba4943] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CdmHeaderKey;");
                mids$[mid_values_0f777799d9c5548e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CdmHeaderKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CLASSIFICATION = new CdmHeaderKey(env->getStaticObjectField(cls, "CLASSIFICATION", "Lorg/orekit/files/ccsds/ndm/cdm/CdmHeaderKey;"));
                MESSAGE_FOR = new CdmHeaderKey(env->getStaticObjectField(cls, "MESSAGE_FOR", "Lorg/orekit/files/ccsds/ndm/cdm/CdmHeaderKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CdmHeaderKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmHeader & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_67121ab4d9b3519d], a0.this$, a1.this$, a2.this$);
            }

            CdmHeaderKey CdmHeaderKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CdmHeaderKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_609d0da771ba4943], a0.this$));
            }

            JArray< CdmHeaderKey > CdmHeaderKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CdmHeaderKey >(env->callStaticObjectMethod(cls, mids$[mid_values_0f777799d9c5548e]));
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
            static PyObject *t_CdmHeaderKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmHeaderKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmHeaderKey_of_(t_CdmHeaderKey *self, PyObject *args);
            static PyObject *t_CdmHeaderKey_process(t_CdmHeaderKey *self, PyObject *args);
            static PyObject *t_CdmHeaderKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CdmHeaderKey_values(PyTypeObject *type);
            static PyObject *t_CdmHeaderKey_get__parameters_(t_CdmHeaderKey *self, void *data);
            static PyGetSetDef t_CdmHeaderKey__fields_[] = {
              DECLARE_GET_FIELD(t_CdmHeaderKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmHeaderKey__methods_[] = {
              DECLARE_METHOD(t_CdmHeaderKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CdmHeaderKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CdmHeaderKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmHeaderKey)[] = {
              { Py_tp_methods, t_CdmHeaderKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CdmHeaderKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmHeaderKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CdmHeaderKey, t_CdmHeaderKey, CdmHeaderKey);
            PyObject *t_CdmHeaderKey::wrap_Object(const CdmHeaderKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmHeaderKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmHeaderKey *self = (t_CdmHeaderKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CdmHeaderKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmHeaderKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmHeaderKey *self = (t_CdmHeaderKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CdmHeaderKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmHeaderKey), &PY_TYPE_DEF(CdmHeaderKey), module, "CdmHeaderKey", 0);
            }

            void t_CdmHeaderKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "class_", make_descriptor(CdmHeaderKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "wrapfn_", make_descriptor(t_CdmHeaderKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmHeaderKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "CLASSIFICATION", make_descriptor(t_CdmHeaderKey::wrap_Object(*CdmHeaderKey::CLASSIFICATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "MESSAGE_FOR", make_descriptor(t_CdmHeaderKey::wrap_Object(*CdmHeaderKey::MESSAGE_FOR)));
            }

            static PyObject *t_CdmHeaderKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmHeaderKey::initializeClass, 1)))
                return NULL;
              return t_CdmHeaderKey::wrap_Object(CdmHeaderKey(((t_CdmHeaderKey *) arg)->object.this$));
            }
            static PyObject *t_CdmHeaderKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmHeaderKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmHeaderKey_of_(t_CdmHeaderKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CdmHeaderKey_process(t_CdmHeaderKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmHeader::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CdmHeaderKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CdmHeaderKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmHeaderKey::valueOf(a0));
                return t_CdmHeaderKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CdmHeaderKey_values(PyTypeObject *type)
            {
              JArray< CdmHeaderKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmHeaderKey::values());
              return JArray<jobject>(result.this$).wrap(t_CdmHeaderKey::wrap_jobject);
            }
            static PyObject *t_CdmHeaderKey_get__parameters_(t_CdmHeaderKey *self, void *data)
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
#include "org/hipparchus/analysis/function/Sqrt.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sqrt::class$ = NULL;
        jmethodID *Sqrt::mids$ = NULL;
        bool Sqrt::live$ = false;

        jclass Sqrt::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sqrt");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sqrt::Sqrt() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Sqrt::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sqrt::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
        static PyObject *t_Sqrt_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sqrt_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sqrt_init_(t_Sqrt *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sqrt_value(t_Sqrt *self, PyObject *args);

        static PyMethodDef t_Sqrt__methods_[] = {
          DECLARE_METHOD(t_Sqrt, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sqrt, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sqrt, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sqrt)[] = {
          { Py_tp_methods, t_Sqrt__methods_ },
          { Py_tp_init, (void *) t_Sqrt_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sqrt)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sqrt, t_Sqrt, Sqrt);

        void t_Sqrt::install(PyObject *module)
        {
          installType(&PY_TYPE(Sqrt), &PY_TYPE_DEF(Sqrt), module, "Sqrt", 0);
        }

        void t_Sqrt::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sqrt), "class_", make_descriptor(Sqrt::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sqrt), "wrapfn_", make_descriptor(t_Sqrt::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sqrt), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sqrt_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sqrt::initializeClass, 1)))
            return NULL;
          return t_Sqrt::wrap_Object(Sqrt(((t_Sqrt *) arg)->object.this$));
        }
        static PyObject *t_Sqrt_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sqrt::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sqrt_init_(t_Sqrt *self, PyObject *args, PyObject *kwds)
        {
          Sqrt object((jobject) NULL);

          INT_CALL(object = Sqrt());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sqrt_value(t_Sqrt *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElementsKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElementsKey.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *KeplerianElementsKey::class$ = NULL;
            jmethodID *KeplerianElementsKey::mids$ = NULL;
            bool KeplerianElementsKey::live$ = false;
            KeplerianElementsKey *KeplerianElementsKey::ARG_OF_PERICENTER = NULL;
            KeplerianElementsKey *KeplerianElementsKey::COMMENT = NULL;
            KeplerianElementsKey *KeplerianElementsKey::ECCENTRICITY = NULL;
            KeplerianElementsKey *KeplerianElementsKey::EPOCH = NULL;
            KeplerianElementsKey *KeplerianElementsKey::GM = NULL;
            KeplerianElementsKey *KeplerianElementsKey::INCLINATION = NULL;
            KeplerianElementsKey *KeplerianElementsKey::MEAN_ANOMALY = NULL;
            KeplerianElementsKey *KeplerianElementsKey::MEAN_MOTION = NULL;
            KeplerianElementsKey *KeplerianElementsKey::RA_OF_ASC_NODE = NULL;
            KeplerianElementsKey *KeplerianElementsKey::SEMI_MAJOR_AXIS = NULL;
            KeplerianElementsKey *KeplerianElementsKey::TRUE_ANOMALY = NULL;

            jclass KeplerianElementsKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/KeplerianElementsKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_608c7d6f2374fc7c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;)Z");
                mids$[mid_valueOf_820830e27036f17a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;");
                mids$[mid_values_47f2621d2489ee68] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ARG_OF_PERICENTER = new KeplerianElementsKey(env->getStaticObjectField(cls, "ARG_OF_PERICENTER", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                COMMENT = new KeplerianElementsKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                ECCENTRICITY = new KeplerianElementsKey(env->getStaticObjectField(cls, "ECCENTRICITY", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                EPOCH = new KeplerianElementsKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                GM = new KeplerianElementsKey(env->getStaticObjectField(cls, "GM", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                INCLINATION = new KeplerianElementsKey(env->getStaticObjectField(cls, "INCLINATION", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                MEAN_ANOMALY = new KeplerianElementsKey(env->getStaticObjectField(cls, "MEAN_ANOMALY", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                MEAN_MOTION = new KeplerianElementsKey(env->getStaticObjectField(cls, "MEAN_MOTION", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                RA_OF_ASC_NODE = new KeplerianElementsKey(env->getStaticObjectField(cls, "RA_OF_ASC_NODE", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                SEMI_MAJOR_AXIS = new KeplerianElementsKey(env->getStaticObjectField(cls, "SEMI_MAJOR_AXIS", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                TRUE_ANOMALY = new KeplerianElementsKey(env->getStaticObjectField(cls, "TRUE_ANOMALY", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean KeplerianElementsKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::KeplerianElements & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_608c7d6f2374fc7c], a0.this$, a1.this$, a2.this$);
            }

            KeplerianElementsKey KeplerianElementsKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return KeplerianElementsKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_820830e27036f17a], a0.this$));
            }

            JArray< KeplerianElementsKey > KeplerianElementsKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< KeplerianElementsKey >(env->callStaticObjectMethod(cls, mids$[mid_values_47f2621d2489ee68]));
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
            static PyObject *t_KeplerianElementsKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KeplerianElementsKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KeplerianElementsKey_of_(t_KeplerianElementsKey *self, PyObject *args);
            static PyObject *t_KeplerianElementsKey_process(t_KeplerianElementsKey *self, PyObject *args);
            static PyObject *t_KeplerianElementsKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_KeplerianElementsKey_values(PyTypeObject *type);
            static PyObject *t_KeplerianElementsKey_get__parameters_(t_KeplerianElementsKey *self, void *data);
            static PyGetSetDef t_KeplerianElementsKey__fields_[] = {
              DECLARE_GET_FIELD(t_KeplerianElementsKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_KeplerianElementsKey__methods_[] = {
              DECLARE_METHOD(t_KeplerianElementsKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElementsKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElementsKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_KeplerianElementsKey, process, METH_VARARGS),
              DECLARE_METHOD(t_KeplerianElementsKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElementsKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KeplerianElementsKey)[] = {
              { Py_tp_methods, t_KeplerianElementsKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_KeplerianElementsKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KeplerianElementsKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(KeplerianElementsKey, t_KeplerianElementsKey, KeplerianElementsKey);
            PyObject *t_KeplerianElementsKey::wrap_Object(const KeplerianElementsKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_KeplerianElementsKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_KeplerianElementsKey *self = (t_KeplerianElementsKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_KeplerianElementsKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_KeplerianElementsKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_KeplerianElementsKey *self = (t_KeplerianElementsKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_KeplerianElementsKey::install(PyObject *module)
            {
              installType(&PY_TYPE(KeplerianElementsKey), &PY_TYPE_DEF(KeplerianElementsKey), module, "KeplerianElementsKey", 0);
            }

            void t_KeplerianElementsKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "class_", make_descriptor(KeplerianElementsKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "wrapfn_", make_descriptor(t_KeplerianElementsKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(KeplerianElementsKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "ARG_OF_PERICENTER", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::ARG_OF_PERICENTER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "COMMENT", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "ECCENTRICITY", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::ECCENTRICITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "EPOCH", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "GM", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::GM)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "INCLINATION", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::INCLINATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "MEAN_ANOMALY", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::MEAN_ANOMALY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "MEAN_MOTION", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::MEAN_MOTION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "RA_OF_ASC_NODE", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::RA_OF_ASC_NODE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "SEMI_MAJOR_AXIS", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::SEMI_MAJOR_AXIS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "TRUE_ANOMALY", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::TRUE_ANOMALY)));
            }

            static PyObject *t_KeplerianElementsKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KeplerianElementsKey::initializeClass, 1)))
                return NULL;
              return t_KeplerianElementsKey::wrap_Object(KeplerianElementsKey(((t_KeplerianElementsKey *) arg)->object.this$));
            }
            static PyObject *t_KeplerianElementsKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KeplerianElementsKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_KeplerianElementsKey_of_(t_KeplerianElementsKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_KeplerianElementsKey_process(t_KeplerianElementsKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::KeplerianElements a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::KeplerianElements::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_KeplerianElementsKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              KeplerianElementsKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::KeplerianElementsKey::valueOf(a0));
                return t_KeplerianElementsKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_KeplerianElementsKey_values(PyTypeObject *type)
            {
              JArray< KeplerianElementsKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::KeplerianElementsKey::values());
              return JArray<jobject>(result.this$).wrap(t_KeplerianElementsKey::wrap_jobject);
            }
            static PyObject *t_KeplerianElementsKey_get__parameters_(t_KeplerianElementsKey *self, void *data)
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
#include "org/orekit/gnss/metric/ntrip/PythonMessageObserver.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "java/lang/Throwable.h"
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *PythonMessageObserver::class$ = NULL;
          jmethodID *PythonMessageObserver::mids$ = NULL;
          bool PythonMessageObserver::live$ = false;

          jclass PythonMessageObserver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/PythonMessageObserver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_messageAvailable_5e983d1774bbd3db] = env->getMethodID(cls, "messageAvailable", "(Ljava/lang/String;Lorg/orekit/gnss/metric/messages/ParsedMessage;)V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMessageObserver::PythonMessageObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonMessageObserver::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonMessageObserver::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonMessageObserver::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
          static PyObject *t_PythonMessageObserver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMessageObserver_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMessageObserver_init_(t_PythonMessageObserver *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMessageObserver_finalize(t_PythonMessageObserver *self);
          static PyObject *t_PythonMessageObserver_pythonExtension(t_PythonMessageObserver *self, PyObject *args);
          static void JNICALL t_PythonMessageObserver_messageAvailable0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonMessageObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMessageObserver_get__self(t_PythonMessageObserver *self, void *data);
          static PyGetSetDef t_PythonMessageObserver__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMessageObserver, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMessageObserver__methods_[] = {
            DECLARE_METHOD(t_PythonMessageObserver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageObserver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMessageObserver, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMessageObserver, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMessageObserver)[] = {
            { Py_tp_methods, t_PythonMessageObserver__methods_ },
            { Py_tp_init, (void *) t_PythonMessageObserver_init_ },
            { Py_tp_getset, t_PythonMessageObserver__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMessageObserver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMessageObserver, t_PythonMessageObserver, PythonMessageObserver);

          void t_PythonMessageObserver::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMessageObserver), &PY_TYPE_DEF(PythonMessageObserver), module, "PythonMessageObserver", 1);
          }

          void t_PythonMessageObserver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageObserver), "class_", make_descriptor(PythonMessageObserver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageObserver), "wrapfn_", make_descriptor(t_PythonMessageObserver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageObserver), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMessageObserver::initializeClass);
            JNINativeMethod methods[] = {
              { "messageAvailable", "(Ljava/lang/String;Lorg/orekit/gnss/metric/messages/ParsedMessage;)V", (void *) t_PythonMessageObserver_messageAvailable0 },
              { "pythonDecRef", "()V", (void *) t_PythonMessageObserver_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonMessageObserver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMessageObserver::initializeClass, 1)))
              return NULL;
            return t_PythonMessageObserver::wrap_Object(PythonMessageObserver(((t_PythonMessageObserver *) arg)->object.this$));
          }
          static PyObject *t_PythonMessageObserver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMessageObserver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMessageObserver_init_(t_PythonMessageObserver *self, PyObject *args, PyObject *kwds)
          {
            PythonMessageObserver object((jobject) NULL);

            INT_CALL(object = PythonMessageObserver());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMessageObserver_finalize(t_PythonMessageObserver *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMessageObserver_pythonExtension(t_PythonMessageObserver *self, PyObject *args)
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

          static void JNICALL t_PythonMessageObserver_messageAvailable0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageObserver::mids$[PythonMessageObserver::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = env->fromJString((jstring) a0, 0);
            PyObject *o1 = ::org::orekit::gnss::metric::messages::t_ParsedMessage::wrap_Object(::org::orekit::gnss::metric::messages::ParsedMessage(a1));
            PyObject *result = PyObject_CallMethod(obj, "messageAvailable", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonMessageObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMessageObserver::mids$[PythonMessageObserver::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMessageObserver::mids$[PythonMessageObserver::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMessageObserver_get__self(t_PythonMessageObserver *self, void *data)
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
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {

          ::java::lang::Class *ContextBinding::class$ = NULL;
          jmethodID *ContextBinding::mids$ = NULL;
          bool ContextBinding::live$ = false;

          jclass ContextBinding::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/ContextBinding");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getClockCount_557b8123390d8d0c] = env->getMethodID(cls, "getClockCount", "()D");
              mids$[mid_getClockRate_557b8123390d8d0c] = env->getMethodID(cls, "getClockRate", "()D");
              mids$[mid_getConventions_690653480c12ac72] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_b259b25d6495e5b3] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getParsedUnitsBehavior_430d6c1485d1d8cb] = env->getMethodID(cls, "getParsedUnitsBehavior", "()Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
              mids$[mid_getReferenceDate_7a97f7e149e79afb] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTimeSystem_d0d0dc777cc1d8f8] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_isSimpleEOP_89b302893bdbe1f1] = env->getMethodID(cls, "isSimpleEOP", "()Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble ContextBinding::getClockCount() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockCount_557b8123390d8d0c]);
          }

          jdouble ContextBinding::getClockRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockRate_557b8123390d8d0c]);
          }

          ::org::orekit::utils::IERSConventions ContextBinding::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_690653480c12ac72]));
          }

          ::org::orekit::data::DataContext ContextBinding::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_b259b25d6495e5b3]));
          }

          ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior ContextBinding::getParsedUnitsBehavior() const
          {
            return ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior(env->callObjectMethod(this$, mids$[mid_getParsedUnitsBehavior_430d6c1485d1d8cb]));
          }

          ::org::orekit::time::AbsoluteDate ContextBinding::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_7a97f7e149e79afb]));
          }

          ::org::orekit::files::ccsds::definitions::TimeSystem ContextBinding::getTimeSystem() const
          {
            return ::org::orekit::files::ccsds::definitions::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_d0d0dc777cc1d8f8]));
          }

          jboolean ContextBinding::isSimpleEOP() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimpleEOP_89b302893bdbe1f1]);
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
          static PyObject *t_ContextBinding_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContextBinding_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContextBinding_getClockCount(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getClockRate(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getConventions(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getDataContext(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getParsedUnitsBehavior(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getReferenceDate(t_ContextBinding *self);
          static PyObject *t_ContextBinding_getTimeSystem(t_ContextBinding *self);
          static PyObject *t_ContextBinding_isSimpleEOP(t_ContextBinding *self);
          static PyObject *t_ContextBinding_get__clockCount(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__clockRate(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__conventions(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__dataContext(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__parsedUnitsBehavior(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__referenceDate(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__simpleEOP(t_ContextBinding *self, void *data);
          static PyObject *t_ContextBinding_get__timeSystem(t_ContextBinding *self, void *data);
          static PyGetSetDef t_ContextBinding__fields_[] = {
            DECLARE_GET_FIELD(t_ContextBinding, clockCount),
            DECLARE_GET_FIELD(t_ContextBinding, clockRate),
            DECLARE_GET_FIELD(t_ContextBinding, conventions),
            DECLARE_GET_FIELD(t_ContextBinding, dataContext),
            DECLARE_GET_FIELD(t_ContextBinding, parsedUnitsBehavior),
            DECLARE_GET_FIELD(t_ContextBinding, referenceDate),
            DECLARE_GET_FIELD(t_ContextBinding, simpleEOP),
            DECLARE_GET_FIELD(t_ContextBinding, timeSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ContextBinding__methods_[] = {
            DECLARE_METHOD(t_ContextBinding, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContextBinding, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContextBinding, getClockCount, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getClockRate, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getConventions, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getDataContext, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getParsedUnitsBehavior, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, getTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_ContextBinding, isSimpleEOP, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ContextBinding)[] = {
            { Py_tp_methods, t_ContextBinding__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ContextBinding__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ContextBinding)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ContextBinding, t_ContextBinding, ContextBinding);

          void t_ContextBinding::install(PyObject *module)
          {
            installType(&PY_TYPE(ContextBinding), &PY_TYPE_DEF(ContextBinding), module, "ContextBinding", 0);
          }

          void t_ContextBinding::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContextBinding), "class_", make_descriptor(ContextBinding::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContextBinding), "wrapfn_", make_descriptor(t_ContextBinding::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContextBinding), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ContextBinding_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ContextBinding::initializeClass, 1)))
              return NULL;
            return t_ContextBinding::wrap_Object(ContextBinding(((t_ContextBinding *) arg)->object.this$));
          }
          static PyObject *t_ContextBinding_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ContextBinding::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ContextBinding_getClockCount(t_ContextBinding *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockCount());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ContextBinding_getClockRate(t_ContextBinding *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockRate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ContextBinding_getConventions(t_ContextBinding *self)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);
            OBJ_CALL(result = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getDataContext(t_ContextBinding *self)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getParsedUnitsBehavior(t_ContextBinding *self)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior result((jobject) NULL);
            OBJ_CALL(result = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getReferenceDate(t_ContextBinding *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_getTimeSystem(t_ContextBinding *self)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_ContextBinding_isSimpleEOP(t_ContextBinding *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isSimpleEOP());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ContextBinding_get__clockCount(t_ContextBinding *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockCount());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ContextBinding_get__clockRate(t_ContextBinding *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ContextBinding_get__conventions(t_ContextBinding *self, void *data)
          {
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            OBJ_CALL(value = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__dataContext(t_ContextBinding *self, void *data)
          {
            ::org::orekit::data::DataContext value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__parsedUnitsBehavior(t_ContextBinding *self, void *data)
          {
            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior value((jobject) NULL);
            OBJ_CALL(value = self->object.getParsedUnitsBehavior());
            return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__referenceDate(t_ContextBinding *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_ContextBinding_get__simpleEOP(t_ContextBinding *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isSimpleEOP());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_ContextBinding_get__timeSystem(t_ContextBinding *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/correlation/StorelessCovariance.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/correlation/StorelessCovariance.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *StorelessCovariance::class$ = NULL;
        jmethodID *StorelessCovariance::mids$ = NULL;
        bool StorelessCovariance::live$ = false;

        jclass StorelessCovariance::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/StorelessCovariance");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_746492bb94848925] = env->getMethodID(cls, "<init>", "(IZ)V");
            mids$[mid_append_f4663404551d300b] = env->getMethodID(cls, "append", "(Lorg/hipparchus/stat/correlation/StorelessCovariance;)V");
            mids$[mid_getCovariance_21b81d54c06b64b0] = env->getMethodID(cls, "getCovariance", "(II)D");
            mids$[mid_getCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getData_8cf5267aa13a77f3] = env->getMethodID(cls, "getData", "()[[D");
            mids$[mid_getN_412668abc8d889e9] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_increment_cc18240f4a737f14] = env->getMethodID(cls, "increment", "([D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StorelessCovariance::StorelessCovariance(jint a0) : ::org::hipparchus::stat::correlation::Covariance(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

        StorelessCovariance::StorelessCovariance(jint a0, jboolean a1) : ::org::hipparchus::stat::correlation::Covariance(env->newObject(initializeClass, &mids$, mid_init$_746492bb94848925, a0, a1)) {}

        void StorelessCovariance::append(const StorelessCovariance & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_append_f4663404551d300b], a0.this$);
        }

        jdouble StorelessCovariance::getCovariance(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCovariance_21b81d54c06b64b0], a0, a1);
        }

        ::org::hipparchus::linear::RealMatrix StorelessCovariance::getCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_70a207fcbc031df2]));
        }

        JArray< JArray< jdouble > > StorelessCovariance::getData() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_8cf5267aa13a77f3]));
        }

        jint StorelessCovariance::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_412668abc8d889e9]);
        }

        void StorelessCovariance::increment(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_cc18240f4a737f14], a0.this$);
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
      namespace correlation {
        static PyObject *t_StorelessCovariance_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessCovariance_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StorelessCovariance_init_(t_StorelessCovariance *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StorelessCovariance_append(t_StorelessCovariance *self, PyObject *arg);
        static PyObject *t_StorelessCovariance_getCovariance(t_StorelessCovariance *self, PyObject *args);
        static PyObject *t_StorelessCovariance_getCovarianceMatrix(t_StorelessCovariance *self, PyObject *args);
        static PyObject *t_StorelessCovariance_getData(t_StorelessCovariance *self);
        static PyObject *t_StorelessCovariance_getN(t_StorelessCovariance *self, PyObject *args);
        static PyObject *t_StorelessCovariance_increment(t_StorelessCovariance *self, PyObject *arg);
        static PyObject *t_StorelessCovariance_get__covarianceMatrix(t_StorelessCovariance *self, void *data);
        static PyObject *t_StorelessCovariance_get__data(t_StorelessCovariance *self, void *data);
        static PyObject *t_StorelessCovariance_get__n(t_StorelessCovariance *self, void *data);
        static PyGetSetDef t_StorelessCovariance__fields_[] = {
          DECLARE_GET_FIELD(t_StorelessCovariance, covarianceMatrix),
          DECLARE_GET_FIELD(t_StorelessCovariance, data),
          DECLARE_GET_FIELD(t_StorelessCovariance, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StorelessCovariance__methods_[] = {
          DECLARE_METHOD(t_StorelessCovariance, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessCovariance, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessCovariance, append, METH_O),
          DECLARE_METHOD(t_StorelessCovariance, getCovariance, METH_VARARGS),
          DECLARE_METHOD(t_StorelessCovariance, getCovarianceMatrix, METH_VARARGS),
          DECLARE_METHOD(t_StorelessCovariance, getData, METH_NOARGS),
          DECLARE_METHOD(t_StorelessCovariance, getN, METH_VARARGS),
          DECLARE_METHOD(t_StorelessCovariance, increment, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StorelessCovariance)[] = {
          { Py_tp_methods, t_StorelessCovariance__methods_ },
          { Py_tp_init, (void *) t_StorelessCovariance_init_ },
          { Py_tp_getset, t_StorelessCovariance__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StorelessCovariance)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::correlation::Covariance),
          NULL
        };

        DEFINE_TYPE(StorelessCovariance, t_StorelessCovariance, StorelessCovariance);

        void t_StorelessCovariance::install(PyObject *module)
        {
          installType(&PY_TYPE(StorelessCovariance), &PY_TYPE_DEF(StorelessCovariance), module, "StorelessCovariance", 0);
        }

        void t_StorelessCovariance::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessCovariance), "class_", make_descriptor(StorelessCovariance::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessCovariance), "wrapfn_", make_descriptor(t_StorelessCovariance::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessCovariance), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StorelessCovariance_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StorelessCovariance::initializeClass, 1)))
            return NULL;
          return t_StorelessCovariance::wrap_Object(StorelessCovariance(((t_StorelessCovariance *) arg)->object.this$));
        }
        static PyObject *t_StorelessCovariance_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StorelessCovariance::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StorelessCovariance_init_(t_StorelessCovariance *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jint a0;
              StorelessCovariance object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = StorelessCovariance(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jint a0;
              jboolean a1;
              StorelessCovariance object((jobject) NULL);

              if (!parseArgs(args, "IZ", &a0, &a1))
              {
                INT_CALL(object = StorelessCovariance(a0, a1));
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

        static PyObject *t_StorelessCovariance_append(t_StorelessCovariance *self, PyObject *arg)
        {
          StorelessCovariance a0((jobject) NULL);

          if (!parseArg(arg, "k", StorelessCovariance::initializeClass, &a0))
          {
            OBJ_CALL(self->object.append(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "append", arg);
          return NULL;
        }

        static PyObject *t_StorelessCovariance_getCovariance(t_StorelessCovariance *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getCovariance(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getCovariance", args);
          return NULL;
        }

        static PyObject *t_StorelessCovariance_getCovarianceMatrix(t_StorelessCovariance *self, PyObject *args)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getCovarianceMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(StorelessCovariance), (PyObject *) self, "getCovarianceMatrix", args, 2);
        }

        static PyObject *t_StorelessCovariance_getData(t_StorelessCovariance *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_StorelessCovariance_getN(t_StorelessCovariance *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getN());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(StorelessCovariance), (PyObject *) self, "getN", args, 2);
        }

        static PyObject *t_StorelessCovariance_increment(t_StorelessCovariance *self, PyObject *arg)
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

        static PyObject *t_StorelessCovariance_get__covarianceMatrix(t_StorelessCovariance *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_StorelessCovariance_get__data(t_StorelessCovariance *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getData());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_StorelessCovariance_get__n(t_StorelessCovariance *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/FieldKeplerianPropagator.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *FieldKeplerianPropagator::class$ = NULL;
        jmethodID *FieldKeplerianPropagator::mids$ = NULL;
        bool FieldKeplerianPropagator::live$ = false;

        jclass FieldKeplerianPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/FieldKeplerianPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8c98afebb6212490] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
            mids$[mid_init$_676b80212ae6696e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_802495dc0272e4b1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_9653f31e5e184049] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_b79477cdea32e877] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_resetInitialState_b66c84a5711243d5] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_propagateOrbit_ec5b52b8a8c77d72] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
            mids$[mid_resetIntermediateState_585702d5a402c590] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
            mids$[mid_getMass_b884068a2c99f6ca] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_8c98afebb6212490, a0.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_676b80212ae6696e, a0.this$, a1.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_802495dc0272e4b1, a0.this$, a1.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_9653f31e5e184049, a0.this$, a1.this$, a2.this$)) {}

        FieldKeplerianPropagator::FieldKeplerianPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_b79477cdea32e877, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::java::util::List FieldKeplerianPropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
        }

        void FieldKeplerianPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_b66c84a5711243d5], a0.this$);
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
        static PyObject *t_FieldKeplerianPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldKeplerianPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldKeplerianPropagator_of_(t_FieldKeplerianPropagator *self, PyObject *args);
        static int t_FieldKeplerianPropagator_init_(t_FieldKeplerianPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldKeplerianPropagator_getParametersDrivers(t_FieldKeplerianPropagator *self, PyObject *args);
        static PyObject *t_FieldKeplerianPropagator_resetInitialState(t_FieldKeplerianPropagator *self, PyObject *args);
        static PyObject *t_FieldKeplerianPropagator_get__parametersDrivers(t_FieldKeplerianPropagator *self, void *data);
        static PyObject *t_FieldKeplerianPropagator_get__parameters_(t_FieldKeplerianPropagator *self, void *data);
        static PyGetSetDef t_FieldKeplerianPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldKeplerianPropagator, parametersDrivers),
          DECLARE_GET_FIELD(t_FieldKeplerianPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldKeplerianPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldKeplerianPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldKeplerianPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldKeplerianPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldKeplerianPropagator, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_FieldKeplerianPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldKeplerianPropagator)[] = {
          { Py_tp_methods, t_FieldKeplerianPropagator__methods_ },
          { Py_tp_init, (void *) t_FieldKeplerianPropagator_init_ },
          { Py_tp_getset, t_FieldKeplerianPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldKeplerianPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(FieldKeplerianPropagator, t_FieldKeplerianPropagator, FieldKeplerianPropagator);
        PyObject *t_FieldKeplerianPropagator::wrap_Object(const FieldKeplerianPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldKeplerianPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldKeplerianPropagator *self = (t_FieldKeplerianPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldKeplerianPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldKeplerianPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldKeplerianPropagator *self = (t_FieldKeplerianPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldKeplerianPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldKeplerianPropagator), &PY_TYPE_DEF(FieldKeplerianPropagator), module, "FieldKeplerianPropagator", 0);
        }

        void t_FieldKeplerianPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianPropagator), "class_", make_descriptor(FieldKeplerianPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianPropagator), "wrapfn_", make_descriptor(t_FieldKeplerianPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldKeplerianPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldKeplerianPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldKeplerianPropagator::wrap_Object(FieldKeplerianPropagator(((t_FieldKeplerianPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldKeplerianPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldKeplerianPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldKeplerianPropagator_of_(t_FieldKeplerianPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldKeplerianPropagator_init_(t_FieldKeplerianPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              FieldKeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldKeplerianPropagator(a0, a1, a2, a3));
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

        static PyObject *t_FieldKeplerianPropagator_getParametersDrivers(t_FieldKeplerianPropagator *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(FieldKeplerianPropagator), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_FieldKeplerianPropagator_resetInitialState(t_FieldKeplerianPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldKeplerianPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }
        static PyObject *t_FieldKeplerianPropagator_get__parameters_(t_FieldKeplerianPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldKeplerianPropagator_get__parametersDrivers(t_FieldKeplerianPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$MeteorologicalConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$MeteorologicalConfiguration::mids$ = NULL;
        bool CRDConfiguration$MeteorologicalConfiguration::live$ = false;

        jclass CRDConfiguration$MeteorologicalConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getHumiSensorManufacturer_3cffd47377eca18a] = env->getMethodID(cls, "getHumiSensorManufacturer", "()Ljava/lang/String;");
            mids$[mid_getHumiSensorModel_3cffd47377eca18a] = env->getMethodID(cls, "getHumiSensorModel", "()Ljava/lang/String;");
            mids$[mid_getHumiSensorSerialNumber_3cffd47377eca18a] = env->getMethodID(cls, "getHumiSensorSerialNumber", "()Ljava/lang/String;");
            mids$[mid_getMeteorologicalId_3cffd47377eca18a] = env->getMethodID(cls, "getMeteorologicalId", "()Ljava/lang/String;");
            mids$[mid_getPressSensorManufacturer_3cffd47377eca18a] = env->getMethodID(cls, "getPressSensorManufacturer", "()Ljava/lang/String;");
            mids$[mid_getPressSensorModel_3cffd47377eca18a] = env->getMethodID(cls, "getPressSensorModel", "()Ljava/lang/String;");
            mids$[mid_getPressSensorSerialNumber_3cffd47377eca18a] = env->getMethodID(cls, "getPressSensorSerialNumber", "()Ljava/lang/String;");
            mids$[mid_getTempSensorManufacturer_3cffd47377eca18a] = env->getMethodID(cls, "getTempSensorManufacturer", "()Ljava/lang/String;");
            mids$[mid_getTempSensorModel_3cffd47377eca18a] = env->getMethodID(cls, "getTempSensorModel", "()Ljava/lang/String;");
            mids$[mid_getTempSensorSerialNumber_3cffd47377eca18a] = env->getMethodID(cls, "getTempSensorSerialNumber", "()Ljava/lang/String;");
            mids$[mid_setHumiSensorManufacturer_f5ffdf29129ef90a] = env->getMethodID(cls, "setHumiSensorManufacturer", "(Ljava/lang/String;)V");
            mids$[mid_setHumiSensorModel_f5ffdf29129ef90a] = env->getMethodID(cls, "setHumiSensorModel", "(Ljava/lang/String;)V");
            mids$[mid_setHumiSensorSerialNumber_f5ffdf29129ef90a] = env->getMethodID(cls, "setHumiSensorSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_setMeteorologicalId_f5ffdf29129ef90a] = env->getMethodID(cls, "setMeteorologicalId", "(Ljava/lang/String;)V");
            mids$[mid_setPressSensorManufacturer_f5ffdf29129ef90a] = env->getMethodID(cls, "setPressSensorManufacturer", "(Ljava/lang/String;)V");
            mids$[mid_setPressSensorModel_f5ffdf29129ef90a] = env->getMethodID(cls, "setPressSensorModel", "(Ljava/lang/String;)V");
            mids$[mid_setPressSensorSerialNumber_f5ffdf29129ef90a] = env->getMethodID(cls, "setPressSensorSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_setTempSensorManufacturer_f5ffdf29129ef90a] = env->getMethodID(cls, "setTempSensorManufacturer", "(Ljava/lang/String;)V");
            mids$[mid_setTempSensorModel_f5ffdf29129ef90a] = env->getMethodID(cls, "setTempSensorModel", "(Ljava/lang/String;)V");
            mids$[mid_setTempSensorSerialNumber_f5ffdf29129ef90a] = env->getMethodID(cls, "setTempSensorSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_3cffd47377eca18a] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$MeteorologicalConfiguration::CRDConfiguration$MeteorologicalConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getHumiSensorManufacturer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHumiSensorManufacturer_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getHumiSensorModel() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHumiSensorModel_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getHumiSensorSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHumiSensorSerialNumber_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getMeteorologicalId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMeteorologicalId_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getPressSensorManufacturer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPressSensorManufacturer_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getPressSensorModel() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPressSensorModel_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getPressSensorSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPressSensorSerialNumber_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getTempSensorManufacturer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTempSensorManufacturer_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getTempSensorModel() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTempSensorModel_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getTempSensorSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTempSensorSerialNumber_3cffd47377eca18a]));
        }

        void CRDConfiguration$MeteorologicalConfiguration::setHumiSensorManufacturer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHumiSensorManufacturer_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setHumiSensorModel(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHumiSensorModel_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setHumiSensorSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHumiSensorSerialNumber_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setMeteorologicalId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMeteorologicalId_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setPressSensorManufacturer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressSensorManufacturer_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setPressSensorModel(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressSensorModel_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setPressSensorSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressSensorSerialNumber_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setTempSensorManufacturer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTempSensorManufacturer_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setTempSensorModel(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTempSensorModel_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setTempSensorSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTempSensorSerialNumber_f5ffdf29129ef90a], a0.this$);
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$MeteorologicalConfiguration_init_(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toCrdString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$MeteorologicalConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, humiSensorManufacturer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, humiSensorModel),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, humiSensorSerialNumber),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, meteorologicalId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, pressSensorManufacturer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, pressSensorModel),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, pressSensorSerialNumber),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, tempSensorManufacturer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, tempSensorModel),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, tempSensorSerialNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$MeteorologicalConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getHumiSensorManufacturer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getHumiSensorModel, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getHumiSensorSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getMeteorologicalId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getPressSensorManufacturer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getPressSensorModel, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getPressSensorSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getTempSensorManufacturer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getTempSensorModel, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getTempSensorSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setHumiSensorManufacturer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setHumiSensorModel, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setHumiSensorSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setMeteorologicalId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setPressSensorManufacturer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setPressSensorModel, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setPressSensorSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setTempSensorManufacturer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setTempSensorModel, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setTempSensorSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$MeteorologicalConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$MeteorologicalConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$MeteorologicalConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$MeteorologicalConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$MeteorologicalConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$MeteorologicalConfiguration, t_CRDConfiguration$MeteorologicalConfiguration, CRDConfiguration$MeteorologicalConfiguration);

        void t_CRDConfiguration$MeteorologicalConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), &PY_TYPE_DEF(CRDConfiguration$MeteorologicalConfiguration), module, "CRDConfiguration$MeteorologicalConfiguration", 0);
        }

        void t_CRDConfiguration$MeteorologicalConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), "class_", make_descriptor(CRDConfiguration$MeteorologicalConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$MeteorologicalConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$MeteorologicalConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(CRDConfiguration$MeteorologicalConfiguration(((t_CRDConfiguration$MeteorologicalConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$MeteorologicalConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$MeteorologicalConfiguration_init_(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$MeteorologicalConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$MeteorologicalConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getHumiSensorManufacturer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getHumiSensorModel());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getHumiSensorSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeteorologicalId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPressSensorManufacturer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPressSensorModel());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPressSensorSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTempSensorManufacturer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTempSensorModel());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTempSensorSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setHumiSensorManufacturer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHumiSensorManufacturer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setHumiSensorModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHumiSensorModel", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setHumiSensorSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHumiSensorSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setMeteorologicalId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMeteorologicalId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setPressSensorManufacturer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressSensorManufacturer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setPressSensorModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressSensorModel", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setPressSensorSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressSensorSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTempSensorManufacturer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTempSensorManufacturer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTempSensorModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTempSensorModel", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTempSensorSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTempSensorSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toCrdString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getHumiSensorManufacturer());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setHumiSensorManufacturer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "humiSensorManufacturer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getHumiSensorModel());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setHumiSensorModel(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "humiSensorModel", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getHumiSensorSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setHumiSensorSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "humiSensorSerialNumber", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeteorologicalId());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setMeteorologicalId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "meteorologicalId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPressSensorManufacturer());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setPressSensorManufacturer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressSensorManufacturer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPressSensorModel());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setPressSensorModel(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressSensorModel", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPressSensorSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setPressSensorSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressSensorSerialNumber", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTempSensorManufacturer());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTempSensorManufacturer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "tempSensorManufacturer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTempSensorModel());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTempSensorModel(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "tempSensorModel", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTempSensorSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTempSensorSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "tempSensorSerialNumber", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/SplineInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *SplineInterpolator::class$ = NULL;
        jmethodID *SplineInterpolator::mids$ = NULL;
        bool SplineInterpolator::live$ = false;

        jclass SplineInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/SplineInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_c07bcf24349320f1] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_interpolate_9d9c0e5a6bca3c07] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SplineInterpolator::SplineInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction SplineInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_c07bcf24349320f1], a0.this$, a1.this$));
        }

        ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction SplineInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_9d9c0e5a6bca3c07], a0.this$, a1.this$));
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
        static PyObject *t_SplineInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SplineInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SplineInterpolator_init_(t_SplineInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SplineInterpolator_interpolate(t_SplineInterpolator *self, PyObject *args);

        static PyMethodDef t_SplineInterpolator__methods_[] = {
          DECLARE_METHOD(t_SplineInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SplineInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SplineInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SplineInterpolator)[] = {
          { Py_tp_methods, t_SplineInterpolator__methods_ },
          { Py_tp_init, (void *) t_SplineInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SplineInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SplineInterpolator, t_SplineInterpolator, SplineInterpolator);

        void t_SplineInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(SplineInterpolator), &PY_TYPE_DEF(SplineInterpolator), module, "SplineInterpolator", 0);
        }

        void t_SplineInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SplineInterpolator), "class_", make_descriptor(SplineInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SplineInterpolator), "wrapfn_", make_descriptor(t_SplineInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SplineInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SplineInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SplineInterpolator::initializeClass, 1)))
            return NULL;
          return t_SplineInterpolator::wrap_Object(SplineInterpolator(((t_SplineInterpolator *) arg)->object.this$));
        }
        static PyObject *t_SplineInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SplineInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SplineInterpolator_init_(t_SplineInterpolator *self, PyObject *args, PyObject *kwds)
        {
          SplineInterpolator object((jobject) NULL);

          INT_CALL(object = SplineInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_SplineInterpolator_interpolate(t_SplineInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_PolynomialSplineFunction::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_FieldPolynomialSplineFunction::wrap_Object(result);
              }
            }
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
#include "org/orekit/propagation/numerical/PythonFieldTimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *PythonFieldTimeDerivativesEquations::class$ = NULL;
        jmethodID *PythonFieldTimeDerivativesEquations::mids$ = NULL;
        bool PythonFieldTimeDerivativesEquations::live$ = false;

        jclass PythonFieldTimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/PythonFieldTimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addKeplerContribution_1ee4bed350fde589] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addMassDerivative_1ee4bed350fde589] = env->getMethodID(cls, "addMassDerivative", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addNonKeplerianAcceleration_282cea09b82f4134] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldTimeDerivativesEquations::PythonFieldTimeDerivativesEquations() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonFieldTimeDerivativesEquations::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonFieldTimeDerivativesEquations::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonFieldTimeDerivativesEquations::pythonExtension(jlong a0) const
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
      namespace numerical {
        static PyObject *t_PythonFieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldTimeDerivativesEquations_of_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args);
        static int t_PythonFieldTimeDerivativesEquations_init_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldTimeDerivativesEquations_finalize(t_PythonFieldTimeDerivativesEquations *self);
        static PyObject *t_PythonFieldTimeDerivativesEquations_pythonExtension(t_PythonFieldTimeDerivativesEquations *self, PyObject *args);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldTimeDerivativesEquations_get__self(t_PythonFieldTimeDerivativesEquations *self, void *data);
        static PyObject *t_PythonFieldTimeDerivativesEquations_get__parameters_(t_PythonFieldTimeDerivativesEquations *self, void *data);
        static PyGetSetDef t_PythonFieldTimeDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldTimeDerivativesEquations, self),
          DECLARE_GET_FIELD(t_PythonFieldTimeDerivativesEquations, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldTimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldTimeDerivativesEquations, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeDerivativesEquations)[] = {
          { Py_tp_methods, t_PythonFieldTimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) t_PythonFieldTimeDerivativesEquations_init_ },
          { Py_tp_getset, t_PythonFieldTimeDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldTimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldTimeDerivativesEquations, t_PythonFieldTimeDerivativesEquations, PythonFieldTimeDerivativesEquations);
        PyObject *t_PythonFieldTimeDerivativesEquations::wrap_Object(const PythonFieldTimeDerivativesEquations& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldTimeDerivativesEquations::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldTimeDerivativesEquations *self = (t_PythonFieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldTimeDerivativesEquations::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldTimeDerivativesEquations::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldTimeDerivativesEquations *self = (t_PythonFieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldTimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldTimeDerivativesEquations), &PY_TYPE_DEF(PythonFieldTimeDerivativesEquations), module, "PythonFieldTimeDerivativesEquations", 1);
        }

        void t_PythonFieldTimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeDerivativesEquations), "class_", make_descriptor(PythonFieldTimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeDerivativesEquations), "wrapfn_", make_descriptor(t_PythonFieldTimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldTimeDerivativesEquations::initializeClass);
          JNINativeMethod methods[] = {
            { "addKeplerContribution", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldTimeDerivativesEquations_addKeplerContribution0 },
            { "addMassDerivative", "(Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldTimeDerivativesEquations_addMassDerivative1 },
            { "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V", (void *) t_PythonFieldTimeDerivativesEquations_addNonKeplerianAcceleration2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldTimeDerivativesEquations_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldTimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_PythonFieldTimeDerivativesEquations::wrap_Object(PythonFieldTimeDerivativesEquations(((t_PythonFieldTimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldTimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_of_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldTimeDerivativesEquations_init_(t_PythonFieldTimeDerivativesEquations *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldTimeDerivativesEquations object((jobject) NULL);

          INT_CALL(object = PythonFieldTimeDerivativesEquations());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_finalize(t_PythonFieldTimeDerivativesEquations *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_pythonExtension(t_PythonFieldTimeDerivativesEquations *self, PyObject *args)
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

        static void JNICALL t_PythonFieldTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
          PyObject *result = PyObject_CallMethod(obj, "addKeplerContribution", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
          PyObject *result = PyObject_CallMethod(obj, "addMassDerivative", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "addNonKeplerianAcceleration", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldTimeDerivativesEquations::mids$[PythonFieldTimeDerivativesEquations::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldTimeDerivativesEquations_get__self(t_PythonFieldTimeDerivativesEquations *self, void *data)
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
        static PyObject *t_PythonFieldTimeDerivativesEquations_get__parameters_(t_PythonFieldTimeDerivativesEquations *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
