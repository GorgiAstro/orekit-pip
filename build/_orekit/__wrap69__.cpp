#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CR3BPFactory.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CR3BPFactory::class$ = NULL;
      jmethodID *CR3BPFactory::mids$ = NULL;
      bool CR3BPFactory::live$ = false;

      jclass CR3BPFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CR3BPFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEarthMoonCR3BP_46ee78c3fbfe7bfc] = env->getStaticMethodID(cls, "getEarthMoonCR3BP", "()Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getSunEarthCR3BP_d401ab06b2874e8c] = env->getStaticMethodID(cls, "getSunEarthCR3BP", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getSunJupiterCR3BP_d401ab06b2874e8c] = env->getStaticMethodID(cls, "getSunJupiterCR3BP", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getSystem_69a62929da6ecbdd] = env->getStaticMethodID(cls, "getSystem", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;D)Lorg/orekit/bodies/CR3BPSystem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getEarthMoonCR3BP()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getEarthMoonCR3BP_46ee78c3fbfe7bfc]));
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getSunEarthCR3BP(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getSunEarthCR3BP_d401ab06b2874e8c], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getSunJupiterCR3BP(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getSunJupiterCR3BP_d401ab06b2874e8c], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getSystem(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getSystem_69a62929da6ecbdd], a0.this$, a1.this$, a2));
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
      static PyObject *t_CR3BPFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPFactory_getEarthMoonCR3BP(PyTypeObject *type);
      static PyObject *t_CR3BPFactory_getSunEarthCR3BP(PyTypeObject *type, PyObject *args);
      static PyObject *t_CR3BPFactory_getSunJupiterCR3BP(PyTypeObject *type, PyObject *args);
      static PyObject *t_CR3BPFactory_getSystem(PyTypeObject *type, PyObject *args);
      static PyObject *t_CR3BPFactory_get__earthMoonCR3BP(t_CR3BPFactory *self, void *data);
      static PyGetSetDef t_CR3BPFactory__fields_[] = {
        DECLARE_GET_FIELD(t_CR3BPFactory, earthMoonCR3BP),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CR3BPFactory__methods_[] = {
        DECLARE_METHOD(t_CR3BPFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getEarthMoonCR3BP, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getSunEarthCR3BP, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getSunJupiterCR3BP, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getSystem, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPFactory)[] = {
        { Py_tp_methods, t_CR3BPFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CR3BPFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CR3BPFactory, t_CR3BPFactory, CR3BPFactory);

      void t_CR3BPFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPFactory), &PY_TYPE_DEF(CR3BPFactory), module, "CR3BPFactory", 0);
      }

      void t_CR3BPFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPFactory), "class_", make_descriptor(CR3BPFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPFactory), "wrapfn_", make_descriptor(t_CR3BPFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPFactory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPFactory::initializeClass, 1)))
          return NULL;
        return t_CR3BPFactory::wrap_Object(CR3BPFactory(((t_CR3BPFactory *) arg)->object.this$));
      }
      static PyObject *t_CR3BPFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CR3BPFactory_getEarthMoonCR3BP(PyTypeObject *type)
      {
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getEarthMoonCR3BP());
        return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
      }

      static PyObject *t_CR3BPFactory_getSunEarthCR3BP(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getSunEarthCR3BP(a0, a1));
          return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getSunEarthCR3BP", args);
        return NULL;
      }

      static PyObject *t_CR3BPFactory_getSunJupiterCR3BP(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getSunJupiterCR3BP(a0, a1));
          return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getSunJupiterCR3BP", args);
        return NULL;
      }

      static PyObject *t_CR3BPFactory_getSystem(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        jdouble a2;
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getSystem(a0, a1, a2));
          return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getSystem", args);
        return NULL;
      }

      static PyObject *t_CR3BPFactory_get__earthMoonCR3BP(t_CR3BPFactory *self, void *data)
      {
        ::org::orekit::bodies::CR3BPSystem value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonCR3BP());
        return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/IonosphereFreeCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IonosphereFreeCombination::class$ = NULL;
          jmethodID *IonosphereFreeCombination::mids$ = NULL;
          bool IonosphereFreeCombination::live$ = false;

          jclass IonosphereFreeCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IonosphereFreeCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_ac28f5c378fae636] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_9364fb0b7015b098] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

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
          static PyObject *t_IonosphereFreeCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereFreeCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_IonosphereFreeCombination__methods_[] = {
            DECLARE_METHOD(t_IonosphereFreeCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereFreeCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereFreeCombination)[] = {
            { Py_tp_methods, t_IonosphereFreeCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereFreeCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(IonosphereFreeCombination, t_IonosphereFreeCombination, IonosphereFreeCombination);

          void t_IonosphereFreeCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereFreeCombination), &PY_TYPE_DEF(IonosphereFreeCombination), module, "IonosphereFreeCombination", 0);
          }

          void t_IonosphereFreeCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereFreeCombination), "class_", make_descriptor(IonosphereFreeCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereFreeCombination), "wrapfn_", make_descriptor(t_IonosphereFreeCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereFreeCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphereFreeCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereFreeCombination::initializeClass, 1)))
              return NULL;
            return t_IonosphereFreeCombination::wrap_Object(IonosphereFreeCombination(((t_IonosphereFreeCombination *) arg)->object.this$));
          }
          static PyObject *t_IonosphereFreeCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereFreeCombination::initializeClass, 0))
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
#include "org/orekit/files/sp3/SP3.h"
#include "org/orekit/files/sp3/SP3Header.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/util/Map.h"
#include "org/orekit/files/sp3/SP3.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/sp3/SP3Segment.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/String.h"
#include "org/orekit/files/sp3/SP3Ephemeris.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3::class$ = NULL;
        jmethodID *SP3::mids$ = NULL;
        bool SP3::live$ = false;

        jclass SP3::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_94ed63e1549d491c] = env->getMethodID(cls, "<init>", "(DILorg/orekit/frames/Frame;)V");
            mids$[mid_addSatellite_105e1eadb709d9ac] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)V");
            mids$[mid_containsSatellite_df4c65b2aede5c41] = env->getMethodID(cls, "containsSatellite", "(Ljava/lang/String;)Z");
            mids$[mid_getEphemeris_96dd0b3f83cc607f] = env->getMethodID(cls, "getEphemeris", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3Ephemeris;");
            mids$[mid_getEphemeris_decb43723338ca58] = env->getMethodID(cls, "getEphemeris", "(I)Lorg/orekit/files/sp3/SP3Ephemeris;");
            mids$[mid_getHeader_b3570a3260d46482] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/sp3/SP3Header;");
            mids$[mid_getSatelliteCount_d6ab429752e7c267] = env->getMethodID(cls, "getSatelliteCount", "()I");
            mids$[mid_getSatellites_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_splice_95d9e9c9aae457c1] = env->getStaticMethodID(cls, "splice", "(Ljava/util/Collection;)Lorg/orekit/files/sp3/SP3;");
            mids$[mid_validate_46b5f89dc9dc4b89] = env->getMethodID(cls, "validate", "(ZLjava/lang/String;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3::SP3(jdouble a0, jint a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_94ed63e1549d491c, a0, a1, a2.this$)) {}

        void SP3::addSatellite(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatellite_105e1eadb709d9ac], a0.this$);
        }

        jboolean SP3::containsSatellite(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_containsSatellite_df4c65b2aede5c41], a0.this$);
        }

        ::org::orekit::files::sp3::SP3Ephemeris SP3::getEphemeris(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sp3::SP3Ephemeris(env->callObjectMethod(this$, mids$[mid_getEphemeris_96dd0b3f83cc607f], a0.this$));
        }

        ::org::orekit::files::sp3::SP3Ephemeris SP3::getEphemeris(jint a0) const
        {
          return ::org::orekit::files::sp3::SP3Ephemeris(env->callObjectMethod(this$, mids$[mid_getEphemeris_decb43723338ca58], a0));
        }

        ::org::orekit::files::sp3::SP3Header SP3::getHeader() const
        {
          return ::org::orekit::files::sp3::SP3Header(env->callObjectMethod(this$, mids$[mid_getHeader_b3570a3260d46482]));
        }

        jint SP3::getSatelliteCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getSatelliteCount_d6ab429752e7c267]);
        }

        ::java::util::Map SP3::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_dbcb8bbac6b35e0d]));
        }

        SP3 SP3::splice(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3(env->callStaticObjectMethod(cls, mids$[mid_splice_95d9e9c9aae457c1], a0.this$));
        }

        void SP3::validate(jboolean a0, const ::java::lang::String & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_validate_46b5f89dc9dc4b89], a0, a1.this$);
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
      namespace sp3 {
        static PyObject *t_SP3_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3_init_(t_SP3 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3_addSatellite(t_SP3 *self, PyObject *arg);
        static PyObject *t_SP3_containsSatellite(t_SP3 *self, PyObject *arg);
        static PyObject *t_SP3_getEphemeris(t_SP3 *self, PyObject *args);
        static PyObject *t_SP3_getHeader(t_SP3 *self);
        static PyObject *t_SP3_getSatelliteCount(t_SP3 *self);
        static PyObject *t_SP3_getSatellites(t_SP3 *self);
        static PyObject *t_SP3_splice(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3_validate(t_SP3 *self, PyObject *args);
        static PyObject *t_SP3_get__header(t_SP3 *self, void *data);
        static PyObject *t_SP3_get__satelliteCount(t_SP3 *self, void *data);
        static PyObject *t_SP3_get__satellites(t_SP3 *self, void *data);
        static PyGetSetDef t_SP3__fields_[] = {
          DECLARE_GET_FIELD(t_SP3, header),
          DECLARE_GET_FIELD(t_SP3, satelliteCount),
          DECLARE_GET_FIELD(t_SP3, satellites),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3__methods_[] = {
          DECLARE_METHOD(t_SP3, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3, addSatellite, METH_O),
          DECLARE_METHOD(t_SP3, containsSatellite, METH_O),
          DECLARE_METHOD(t_SP3, getEphemeris, METH_VARARGS),
          DECLARE_METHOD(t_SP3, getHeader, METH_NOARGS),
          DECLARE_METHOD(t_SP3, getSatelliteCount, METH_NOARGS),
          DECLARE_METHOD(t_SP3, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_SP3, splice, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3, validate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3)[] = {
          { Py_tp_methods, t_SP3__methods_ },
          { Py_tp_init, (void *) t_SP3_init_ },
          { Py_tp_getset, t_SP3__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3, t_SP3, SP3);

        void t_SP3::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3), &PY_TYPE_DEF(SP3), module, "SP3", 0);
        }

        void t_SP3::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3), "class_", make_descriptor(SP3::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3), "wrapfn_", make_descriptor(t_SP3::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3::initializeClass, 1)))
            return NULL;
          return t_SP3::wrap_Object(SP3(((t_SP3 *) arg)->object.this$));
        }
        static PyObject *t_SP3_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3_init_(t_SP3 *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jint a1;
          ::org::orekit::frames::Frame a2((jobject) NULL);
          SP3 object((jobject) NULL);

          if (!parseArgs(args, "DIk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = SP3(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3_addSatellite(t_SP3 *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.addSatellite(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatellite", arg);
          return NULL;
        }

        static PyObject *t_SP3_containsSatellite(t_SP3 *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.containsSatellite(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "containsSatellite", arg);
          return NULL;
        }

        static PyObject *t_SP3_getEphemeris(t_SP3 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::sp3::SP3Ephemeris result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getEphemeris(a0));
                return ::org::orekit::files::sp3::t_SP3Ephemeris::wrap_Object(result);
              }
            }
            {
              jint a0;
              ::org::orekit::files::sp3::SP3Ephemeris result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.getEphemeris(a0));
                return ::org::orekit::files::sp3::t_SP3Ephemeris::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getEphemeris", args);
          return NULL;
        }

        static PyObject *t_SP3_getHeader(t_SP3 *self)
        {
          ::org::orekit::files::sp3::SP3Header result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return ::org::orekit::files::sp3::t_SP3Header::wrap_Object(result);
        }

        static PyObject *t_SP3_getSatelliteCount(t_SP3 *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSatelliteCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3_getSatellites(t_SP3 *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::sp3::PY_TYPE(SP3Ephemeris));
        }

        static PyObject *t_SP3_splice(PyTypeObject *type, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          SP3 result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3::splice(a0));
            return t_SP3::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "splice", arg);
          return NULL;
        }

        static PyObject *t_SP3_validate(t_SP3 *self, PyObject *args)
        {
          jboolean a0;
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "Zs", &a0, &a1))
          {
            OBJ_CALL(self->object.validate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "validate", args);
          return NULL;
        }

        static PyObject *t_SP3_get__header(t_SP3 *self, void *data)
        {
          ::org::orekit::files::sp3::SP3Header value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::sp3::t_SP3Header::wrap_Object(value);
        }

        static PyObject *t_SP3_get__satelliteCount(t_SP3 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSatelliteCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SP3_get__satellites(t_SP3 *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ThrustPropulsionModel::class$ = NULL;
          jmethodID *ThrustPropulsionModel::mids$ = NULL;
          bool ThrustPropulsionModel::live$ = false;

          jclass ThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAcceleration_95da8f0fa460fb9b] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAcceleration_04b081b8909cb072] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getDirection_38283c57554889c0] = env->getMethodID(cls, "getDirection", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getFlowRate_b443ba1cc794b916] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_4222abdadde032f5] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getFlowRate_6c8e6cd5d59063ae] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getIsp_b443ba1cc794b916] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getMassDerivatives_6c8e6cd5d59063ae] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMassDerivatives_4222abdadde032f5] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getThrustVector_38283c57554889c0] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_9816b8f76e94356a] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_5e147f44c28a35c9] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::Attitude & a1, const JArray< jdouble > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_95da8f0fa460fb9b], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ThrustPropulsionModel::getAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_04b081b8909cb072], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getDirection(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_38283c57554889c0], a0.this$));
          }

          jdouble ThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_b443ba1cc794b916], a0.this$);
          }

          jdouble ThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_4222abdadde032f5], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement ThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_6c8e6cd5d59063ae], a0.this$, a1.this$));
          }

          jdouble ThrustPropulsionModel::getIsp(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIsp_b443ba1cc794b916], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement ThrustPropulsionModel::getMassDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMassDerivatives_6c8e6cd5d59063ae], a0.this$, a1.this$));
          }

          jdouble ThrustPropulsionModel::getMassDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMassDerivatives_4222abdadde032f5], a0.this$, a1.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_38283c57554889c0], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_9816b8f76e94356a], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
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
          static PyObject *t_ThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_getAcceleration(t_ThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ThrustPropulsionModel_getDirection(t_ThrustPropulsionModel *self, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_getFlowRate(t_ThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ThrustPropulsionModel_getIsp(t_ThrustPropulsionModel *self, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_getMassDerivatives(t_ThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ThrustPropulsionModel_getThrustVector(t_ThrustPropulsionModel *self, PyObject *args);

          static PyMethodDef t_ThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_ThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getAcceleration, METH_VARARGS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getDirection, METH_O),
            DECLARE_METHOD(t_ThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getIsp, METH_O),
            DECLARE_METHOD(t_ThrustPropulsionModel, getMassDerivatives, METH_VARARGS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ThrustPropulsionModel)[] = {
            { Py_tp_methods, t_ThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::PropulsionModel),
            NULL
          };

          DEFINE_TYPE(ThrustPropulsionModel, t_ThrustPropulsionModel, ThrustPropulsionModel);

          void t_ThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ThrustPropulsionModel), &PY_TYPE_DEF(ThrustPropulsionModel), module, "ThrustPropulsionModel", 0);
          }

          void t_ThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustPropulsionModel), "class_", make_descriptor(ThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustPropulsionModel), "wrapfn_", make_descriptor(t_ThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_ThrustPropulsionModel::wrap_Object(ThrustPropulsionModel(((t_ThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_ThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ThrustPropulsionModel_getAcceleration(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::attitudes::Attitude a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(ThrustPropulsionModel), (PyObject *) self, "getAcceleration", args, 2);
          }

          static PyObject *t_ThrustPropulsionModel_getDirection(t_ThrustPropulsionModel *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDirection(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getDirection", arg);
            return NULL;
          }

          static PyObject *t_ThrustPropulsionModel_getFlowRate(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
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

          static PyObject *t_ThrustPropulsionModel_getIsp(t_ThrustPropulsionModel *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getIsp(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getIsp", arg);
            return NULL;
          }

          static PyObject *t_ThrustPropulsionModel_getMassDerivatives(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(ThrustPropulsionModel), (PyObject *) self, "getMassDerivatives", args, 2);
          }

          static PyObject *t_ThrustPropulsionModel_getThrustVector(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *MultivariateDifferentiableVectorFunction::class$ = NULL;
        jmethodID *MultivariateDifferentiableVectorFunction::mids$ = NULL;
        bool MultivariateDifferentiableVectorFunction::live$ = false;

        jclass MultivariateDifferentiableVectorFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_53cbdc50682f867d] = env->getMethodID(cls, "value", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > MultivariateDifferentiableVectorFunction::value(const JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > & a0) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure >(env->callObjectMethod(this$, mids$[mid_value_53cbdc50682f867d], a0.this$));
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
        static PyObject *t_MultivariateDifferentiableVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableVectorFunction_value(t_MultivariateDifferentiableVectorFunction *self, PyObject *args);

        static PyMethodDef t_MultivariateDifferentiableVectorFunction__methods_[] = {
          DECLARE_METHOD(t_MultivariateDifferentiableVectorFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableVectorFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableVectorFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateDifferentiableVectorFunction)[] = {
          { Py_tp_methods, t_MultivariateDifferentiableVectorFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateDifferentiableVectorFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::MultivariateVectorFunction),
          NULL
        };

        DEFINE_TYPE(MultivariateDifferentiableVectorFunction, t_MultivariateDifferentiableVectorFunction, MultivariateDifferentiableVectorFunction);

        void t_MultivariateDifferentiableVectorFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateDifferentiableVectorFunction), &PY_TYPE_DEF(MultivariateDifferentiableVectorFunction), module, "MultivariateDifferentiableVectorFunction", 0);
        }

        void t_MultivariateDifferentiableVectorFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableVectorFunction), "class_", make_descriptor(MultivariateDifferentiableVectorFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableVectorFunction), "wrapfn_", make_descriptor(t_MultivariateDifferentiableVectorFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableVectorFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateDifferentiableVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateDifferentiableVectorFunction::initializeClass, 1)))
            return NULL;
          return t_MultivariateDifferentiableVectorFunction::wrap_Object(MultivariateDifferentiableVectorFunction(((t_MultivariateDifferentiableVectorFunction *) arg)->object.this$));
        }
        static PyObject *t_MultivariateDifferentiableVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateDifferentiableVectorFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultivariateDifferentiableVectorFunction_value(t_MultivariateDifferentiableVectorFunction *self, PyObject *args)
        {
          JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > a0((jobject) NULL);
          JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_jobject);
          }

          return callSuper(PY_TYPE(MultivariateDifferentiableVectorFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/PythonTileAiming.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *PythonTileAiming::class$ = NULL;
          jmethodID *PythonTileAiming::mids$ = NULL;
          bool PythonTileAiming::live$ = false;

          jclass PythonTileAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/PythonTileAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_alongTileDirection_73bb6a45361007eb] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getSingularPoints_d751c1a57012b438] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonTileAiming::PythonTileAiming() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonTileAiming::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonTileAiming::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonTileAiming::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace tessellation {
          static PyObject *t_PythonTileAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonTileAiming_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonTileAiming_init_(t_PythonTileAiming *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonTileAiming_finalize(t_PythonTileAiming *self);
          static PyObject *t_PythonTileAiming_pythonExtension(t_PythonTileAiming *self, PyObject *args);
          static jobject JNICALL t_PythonTileAiming_alongTileDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonTileAiming_getSingularPoints1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTileAiming_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonTileAiming_get__self(t_PythonTileAiming *self, void *data);
          static PyGetSetDef t_PythonTileAiming__fields_[] = {
            DECLARE_GET_FIELD(t_PythonTileAiming, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonTileAiming__methods_[] = {
            DECLARE_METHOD(t_PythonTileAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTileAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTileAiming, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonTileAiming, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonTileAiming)[] = {
            { Py_tp_methods, t_PythonTileAiming__methods_ },
            { Py_tp_init, (void *) t_PythonTileAiming_init_ },
            { Py_tp_getset, t_PythonTileAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonTileAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonTileAiming, t_PythonTileAiming, PythonTileAiming);

          void t_PythonTileAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonTileAiming), &PY_TYPE_DEF(PythonTileAiming), module, "PythonTileAiming", 1);
          }

          void t_PythonTileAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileAiming), "class_", make_descriptor(PythonTileAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileAiming), "wrapfn_", make_descriptor(t_PythonTileAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileAiming), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonTileAiming::initializeClass);
            JNINativeMethod methods[] = {
              { "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonTileAiming_alongTileDirection0 },
              { "getSingularPoints", "()Ljava/util/List;", (void *) t_PythonTileAiming_getSingularPoints1 },
              { "pythonDecRef", "()V", (void *) t_PythonTileAiming_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonTileAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonTileAiming::initializeClass, 1)))
              return NULL;
            return t_PythonTileAiming::wrap_Object(PythonTileAiming(((t_PythonTileAiming *) arg)->object.this$));
          }
          static PyObject *t_PythonTileAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonTileAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonTileAiming_init_(t_PythonTileAiming *self, PyObject *args, PyObject *kwds)
          {
            PythonTileAiming object((jobject) NULL);

            INT_CALL(object = PythonTileAiming());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonTileAiming_finalize(t_PythonTileAiming *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonTileAiming_pythonExtension(t_PythonTileAiming *self, PyObject *args)
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

          static jobject JNICALL t_PythonTileAiming_alongTileDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
            PyObject *o1 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a1));
            PyObject *result = PyObject_CallMethod(obj, "alongTileDirection", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("alongTileDirection", result);
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

          static jobject JNICALL t_PythonTileAiming_getSingularPoints1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getSingularPoints", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getSingularPoints", result);
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

          static void JNICALL t_PythonTileAiming_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonTileAiming_get__self(t_PythonTileAiming *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesPhaseModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockInterSatellitesPhaseModifier::class$ = NULL;
          jmethodID *RelativisticClockInterSatellitesPhaseModifier::mids$ = NULL;
          bool RelativisticClockInterSatellitesPhaseModifier::live$ = false;

          jclass RelativisticClockInterSatellitesPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockInterSatellitesPhaseModifier::RelativisticClockInterSatellitesPhaseModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::java::util::List RelativisticClockInterSatellitesPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void RelativisticClockInterSatellitesPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockInterSatellitesPhaseModifier_init_(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockInterSatellitesPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockInterSatellitesPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockInterSatellitesPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockInterSatellitesPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockInterSatellitesPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticClockInterSatellitesPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockInterSatellitesPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticClockInterSatellitesPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockInterSatellitesPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockInterSatellitesPhaseModifier, t_RelativisticClockInterSatellitesPhaseModifier, RelativisticClockInterSatellitesPhaseModifier);

          void t_RelativisticClockInterSatellitesPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), &PY_TYPE_DEF(RelativisticClockInterSatellitesPhaseModifier), module, "RelativisticClockInterSatellitesPhaseModifier", 0);
          }

          void t_RelativisticClockInterSatellitesPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), "class_", make_descriptor(RelativisticClockInterSatellitesPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticClockInterSatellitesPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockInterSatellitesPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockInterSatellitesPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockInterSatellitesPhaseModifier::wrap_Object(RelativisticClockInterSatellitesPhaseModifier(((t_RelativisticClockInterSatellitesPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockInterSatellitesPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockInterSatellitesPhaseModifier_init_(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockInterSatellitesPhaseModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockInterSatellitesPhaseModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockInterSatellitesPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticClockInterSatellitesPhaseModifier *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/AngularRaDecBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AngularRaDecBuilder::class$ = NULL;
          jmethodID *AngularRaDecBuilder::mids$ = NULL;
          bool AngularRaDecBuilder::live$ = false;

          jclass AngularRaDecBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AngularRaDecBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_558232e1ff80b524] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/frames/Frame;[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_36e4f60d773853f8] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/AngularRaDec;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularRaDecBuilder::AngularRaDecBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::frames::Frame & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_558232e1ff80b524, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          ::org::orekit::estimation::measurements::AngularRaDec AngularRaDecBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::AngularRaDec(env->callObjectMethod(this$, mids$[mid_build_36e4f60d773853f8], a0.this$, a1.this$));
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
          static PyObject *t_AngularRaDecBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularRaDecBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularRaDecBuilder_of_(t_AngularRaDecBuilder *self, PyObject *args);
          static int t_AngularRaDecBuilder_init_(t_AngularRaDecBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularRaDecBuilder_build(t_AngularRaDecBuilder *self, PyObject *args);
          static PyObject *t_AngularRaDecBuilder_get__parameters_(t_AngularRaDecBuilder *self, void *data);
          static PyGetSetDef t_AngularRaDecBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AngularRaDecBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularRaDecBuilder__methods_[] = {
            DECLARE_METHOD(t_AngularRaDecBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRaDecBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRaDecBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AngularRaDecBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularRaDecBuilder)[] = {
            { Py_tp_methods, t_AngularRaDecBuilder__methods_ },
            { Py_tp_init, (void *) t_AngularRaDecBuilder_init_ },
            { Py_tp_getset, t_AngularRaDecBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularRaDecBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(AngularRaDecBuilder, t_AngularRaDecBuilder, AngularRaDecBuilder);
          PyObject *t_AngularRaDecBuilder::wrap_Object(const AngularRaDecBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularRaDecBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularRaDecBuilder *self = (t_AngularRaDecBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AngularRaDecBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AngularRaDecBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AngularRaDecBuilder *self = (t_AngularRaDecBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AngularRaDecBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularRaDecBuilder), &PY_TYPE_DEF(AngularRaDecBuilder), module, "AngularRaDecBuilder", 0);
          }

          void t_AngularRaDecBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDecBuilder), "class_", make_descriptor(AngularRaDecBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDecBuilder), "wrapfn_", make_descriptor(t_AngularRaDecBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRaDecBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularRaDecBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularRaDecBuilder::initializeClass, 1)))
              return NULL;
            return t_AngularRaDecBuilder::wrap_Object(AngularRaDecBuilder(((t_AngularRaDecBuilder *) arg)->object.this$));
          }
          static PyObject *t_AngularRaDecBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularRaDecBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AngularRaDecBuilder_of_(t_AngularRaDecBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_AngularRaDecBuilder_init_(t_AngularRaDecBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            JArray< jdouble > a4((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            AngularRaDecBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkk[D[Dk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = AngularRaDecBuilder(a0, a1, a2, a3, a4, a5));
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

          static PyObject *t_AngularRaDecBuilder_build(t_AngularRaDecBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::AngularRaDec result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_AngularRaDec::wrap_Object(result);
            }

            return callSuper(PY_TYPE(AngularRaDecBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_AngularRaDecBuilder_get__parameters_(t_AngularRaDecBuilder *self, void *data)
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
#include "org/orekit/forces/empirical/ParametricAcceleration.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/forces/ForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *ParametricAcceleration::class$ = NULL;
        jmethodID *ParametricAcceleration::mids$ = NULL;
        bool ParametricAcceleration::live$ = false;

        jclass ParametricAcceleration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/ParametricAcceleration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d120eee40e024d34] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ZLorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_init$_fb104f3162f22c26] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/empirical/AccelerationModel;)V");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_11e4ca8182c1933d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_d3db121d9deb0312] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ParametricAcceleration::ParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jboolean a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d120eee40e024d34, a0.this$, a1, a2.this$)) {}

        ParametricAcceleration::ParametricAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::empirical::AccelerationModel & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fb104f3162f22c26, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ParametricAcceleration::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ParametricAcceleration::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        jboolean ParametricAcceleration::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
        }

        ::java::util::stream::Stream ParametricAcceleration::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_11e4ca8182c1933d]));
        }

        ::java::util::stream::Stream ParametricAcceleration::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_d3db121d9deb0312], a0.this$));
        }

        ::java::util::List ParametricAcceleration::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
        }

        void ParametricAcceleration::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
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
      namespace empirical {
        static PyObject *t_ParametricAcceleration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParametricAcceleration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ParametricAcceleration_init_(t_ParametricAcceleration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ParametricAcceleration_acceleration(t_ParametricAcceleration *self, PyObject *args);
        static PyObject *t_ParametricAcceleration_dependsOnPositionOnly(t_ParametricAcceleration *self);
        static PyObject *t_ParametricAcceleration_getEventDetectors(t_ParametricAcceleration *self);
        static PyObject *t_ParametricAcceleration_getFieldEventDetectors(t_ParametricAcceleration *self, PyObject *arg);
        static PyObject *t_ParametricAcceleration_getParametersDrivers(t_ParametricAcceleration *self);
        static PyObject *t_ParametricAcceleration_init(t_ParametricAcceleration *self, PyObject *args);
        static PyObject *t_ParametricAcceleration_get__eventDetectors(t_ParametricAcceleration *self, void *data);
        static PyObject *t_ParametricAcceleration_get__parametersDrivers(t_ParametricAcceleration *self, void *data);
        static PyGetSetDef t_ParametricAcceleration__fields_[] = {
          DECLARE_GET_FIELD(t_ParametricAcceleration, eventDetectors),
          DECLARE_GET_FIELD(t_ParametricAcceleration, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ParametricAcceleration__methods_[] = {
          DECLARE_METHOD(t_ParametricAcceleration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParametricAcceleration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParametricAcceleration, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_ParametricAcceleration, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_ParametricAcceleration, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_ParametricAcceleration, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_ParametricAcceleration, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_ParametricAcceleration, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ParametricAcceleration)[] = {
          { Py_tp_methods, t_ParametricAcceleration__methods_ },
          { Py_tp_init, (void *) t_ParametricAcceleration_init_ },
          { Py_tp_getset, t_ParametricAcceleration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ParametricAcceleration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ParametricAcceleration, t_ParametricAcceleration, ParametricAcceleration);

        void t_ParametricAcceleration::install(PyObject *module)
        {
          installType(&PY_TYPE(ParametricAcceleration), &PY_TYPE_DEF(ParametricAcceleration), module, "ParametricAcceleration", 0);
        }

        void t_ParametricAcceleration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricAcceleration), "class_", make_descriptor(ParametricAcceleration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricAcceleration), "wrapfn_", make_descriptor(t_ParametricAcceleration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParametricAcceleration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ParametricAcceleration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ParametricAcceleration::initializeClass, 1)))
            return NULL;
          return t_ParametricAcceleration::wrap_Object(ParametricAcceleration(((t_ParametricAcceleration *) arg)->object.this$));
        }
        static PyObject *t_ParametricAcceleration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ParametricAcceleration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ParametricAcceleration_init_(t_ParametricAcceleration *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              jboolean a1;
              ::org::orekit::forces::empirical::AccelerationModel a2((jobject) NULL);
              ParametricAcceleration object((jobject) NULL);

              if (!parseArgs(args, "kZk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::empirical::AccelerationModel::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ParametricAcceleration(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::empirical::AccelerationModel a2((jobject) NULL);
              ParametricAcceleration object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::empirical::AccelerationModel::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ParametricAcceleration(a0, a1, a2));
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

        static PyObject *t_ParametricAcceleration_acceleration(t_ParametricAcceleration *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_ParametricAcceleration_dependsOnPositionOnly(t_ParametricAcceleration *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ParametricAcceleration_getEventDetectors(t_ParametricAcceleration *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_ParametricAcceleration_getFieldEventDetectors(t_ParametricAcceleration *self, PyObject *arg)
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

        static PyObject *t_ParametricAcceleration_getParametersDrivers(t_ParametricAcceleration *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_ParametricAcceleration_init(t_ParametricAcceleration *self, PyObject *args)
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

        static PyObject *t_ParametricAcceleration_get__eventDetectors(t_ParametricAcceleration *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_ParametricAcceleration_get__parametersDrivers(t_ParametricAcceleration *self, void *data)
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
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAdaptableInterval::class$ = NULL;
        jmethodID *FieldAdaptableInterval::mids$ = NULL;
        bool FieldAdaptableInterval::live$ = false;

        jclass FieldAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_e7bbba9ca7087a77] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/FieldSpacecraftState;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble FieldAdaptableInterval::currentInterval(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_e7bbba9ca7087a77], a0.this$);
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
        static PyObject *t_FieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_of_(t_FieldAdaptableInterval *self, PyObject *args);
        static PyObject *t_FieldAdaptableInterval_currentInterval(t_FieldAdaptableInterval *self, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_get__parameters_(t_FieldAdaptableInterval *self, void *data);
        static PyGetSetDef t_FieldAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAdaptableInterval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_FieldAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdaptableInterval, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdaptableInterval, currentInterval, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAdaptableInterval)[] = {
          { Py_tp_methods, t_FieldAdaptableInterval__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAdaptableInterval, t_FieldAdaptableInterval, FieldAdaptableInterval);
        PyObject *t_FieldAdaptableInterval::wrap_Object(const FieldAdaptableInterval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdaptableInterval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdaptableInterval *self = (t_FieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAdaptableInterval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdaptableInterval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdaptableInterval *self = (t_FieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAdaptableInterval), &PY_TYPE_DEF(FieldAdaptableInterval), module, "FieldAdaptableInterval", 0);
        }

        void t_FieldAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "class_", make_descriptor(FieldAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "wrapfn_", make_descriptor(t_FieldAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_FieldAdaptableInterval::wrap_Object(FieldAdaptableInterval(((t_FieldAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_FieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAdaptableInterval_of_(t_FieldAdaptableInterval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAdaptableInterval_currentInterval(t_FieldAdaptableInterval *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.currentInterval(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "currentInterval", arg);
          return NULL;
        }
        static PyObject *t_FieldAdaptableInterval_get__parameters_(t_FieldAdaptableInterval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
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
            mids$[mid_dragAcceleration_4a6ab2502c320936] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dragAcceleration_73bcdbeb8ff641bb] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getDragParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");

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
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_4a6ab2502c320936], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DragSensitive::dragAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_73bcdbeb8ff641bb], a0.this$, a1, a2.this$, a3.this$));
        }

        ::java::util::List DragSensitive::getDragParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDragParametersDrivers_d751c1a57012b438]));
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
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Side::class$ = NULL;
        jmethodID *Side::mids$ = NULL;
        bool Side::live$ = false;
        Side *Side::BOTH = NULL;
        Side *Side::HYPER = NULL;
        Side *Side::MINUS = NULL;
        Side *Side::PLUS = NULL;

        jclass Side::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Side");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_258069adc85c9ff6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/partitioning/Side;");
            mids$[mid_values_c91a90c46694e444] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/partitioning/Side;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BOTH = new Side(env->getStaticObjectField(cls, "BOTH", "Lorg/hipparchus/geometry/partitioning/Side;"));
            HYPER = new Side(env->getStaticObjectField(cls, "HYPER", "Lorg/hipparchus/geometry/partitioning/Side;"));
            MINUS = new Side(env->getStaticObjectField(cls, "MINUS", "Lorg/hipparchus/geometry/partitioning/Side;"));
            PLUS = new Side(env->getStaticObjectField(cls, "PLUS", "Lorg/hipparchus/geometry/partitioning/Side;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Side Side::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Side(env->callStaticObjectMethod(cls, mids$[mid_valueOf_258069adc85c9ff6], a0.this$));
        }

        JArray< Side > Side::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Side >(env->callStaticObjectMethod(cls, mids$[mid_values_c91a90c46694e444]));
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
        static PyObject *t_Side_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Side_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Side_of_(t_Side *self, PyObject *args);
        static PyObject *t_Side_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Side_values(PyTypeObject *type);
        static PyObject *t_Side_get__parameters_(t_Side *self, void *data);
        static PyGetSetDef t_Side__fields_[] = {
          DECLARE_GET_FIELD(t_Side, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Side__methods_[] = {
          DECLARE_METHOD(t_Side, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Side, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Side, of_, METH_VARARGS),
          DECLARE_METHOD(t_Side, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Side, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Side)[] = {
          { Py_tp_methods, t_Side__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Side__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Side)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Side, t_Side, Side);
        PyObject *t_Side::wrap_Object(const Side& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Side::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Side *self = (t_Side *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Side::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Side::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Side *self = (t_Side *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Side::install(PyObject *module)
        {
          installType(&PY_TYPE(Side), &PY_TYPE_DEF(Side), module, "Side", 0);
        }

        void t_Side::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "class_", make_descriptor(Side::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "wrapfn_", make_descriptor(t_Side::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "boxfn_", make_descriptor(boxObject));
          env->getClass(Side::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "BOTH", make_descriptor(t_Side::wrap_Object(*Side::BOTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "HYPER", make_descriptor(t_Side::wrap_Object(*Side::HYPER)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "MINUS", make_descriptor(t_Side::wrap_Object(*Side::MINUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Side), "PLUS", make_descriptor(t_Side::wrap_Object(*Side::PLUS)));
        }

        static PyObject *t_Side_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Side::initializeClass, 1)))
            return NULL;
          return t_Side::wrap_Object(Side(((t_Side *) arg)->object.this$));
        }
        static PyObject *t_Side_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Side::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Side_of_(t_Side *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Side_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Side result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Side::valueOf(a0));
            return t_Side::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Side_values(PyTypeObject *type)
        {
          JArray< Side > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Side::values());
          return JArray<jobject>(result.this$).wrap(t_Side::wrap_jobject);
        }
        static PyObject *t_Side_get__parameters_(t_Side *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
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
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_82f92590f4247da1] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Subtract::Subtract() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Subtract::value(jdouble a0, jdouble a1) const
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
#include "org/hipparchus/random/GaussianRandomGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *GaussianRandomGenerator::class$ = NULL;
      jmethodID *GaussianRandomGenerator::mids$ = NULL;
      bool GaussianRandomGenerator::live$ = false;

      jclass GaussianRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/GaussianRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e24b125c6ff6cc8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextNormalizedDouble_9981f74b2d109da6] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GaussianRandomGenerator::GaussianRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e24b125c6ff6cc8c, a0.this$)) {}

      jdouble GaussianRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_9981f74b2d109da6]);
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
      static PyObject *t_GaussianRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GaussianRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GaussianRandomGenerator_init_(t_GaussianRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GaussianRandomGenerator_nextNormalizedDouble(t_GaussianRandomGenerator *self);

      static PyMethodDef t_GaussianRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_GaussianRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianRandomGenerator, nextNormalizedDouble, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GaussianRandomGenerator)[] = {
        { Py_tp_methods, t_GaussianRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_GaussianRandomGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GaussianRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GaussianRandomGenerator, t_GaussianRandomGenerator, GaussianRandomGenerator);

      void t_GaussianRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(GaussianRandomGenerator), &PY_TYPE_DEF(GaussianRandomGenerator), module, "GaussianRandomGenerator", 0);
      }

      void t_GaussianRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianRandomGenerator), "class_", make_descriptor(GaussianRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianRandomGenerator), "wrapfn_", make_descriptor(t_GaussianRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GaussianRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GaussianRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_GaussianRandomGenerator::wrap_Object(GaussianRandomGenerator(((t_GaussianRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_GaussianRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GaussianRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GaussianRandomGenerator_init_(t_GaussianRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        GaussianRandomGenerator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = GaussianRandomGenerator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_GaussianRandomGenerator_nextNormalizedDouble(t_GaussianRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextNormalizedDouble());
        return PyFloat_FromDouble((double) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/PythonAttitudeProviderModifier.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonAttitudeProviderModifier::class$ = NULL;
      jmethodID *PythonAttitudeProviderModifier::mids$ = NULL;
      bool PythonAttitudeProviderModifier::live$ = false;

      jclass PythonAttitudeProviderModifier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonAttitudeProviderModifier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getUnderlyingAttitudeProvider_2f73d1f4460b8d6c] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAttitudeProviderModifier::PythonAttitudeProviderModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonAttitudeProviderModifier::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonAttitudeProviderModifier::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonAttitudeProviderModifier::pythonExtension(jlong a0) const
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
    namespace attitudes {
      static PyObject *t_PythonAttitudeProviderModifier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAttitudeProviderModifier_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAttitudeProviderModifier_init_(t_PythonAttitudeProviderModifier *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAttitudeProviderModifier_finalize(t_PythonAttitudeProviderModifier *self);
      static PyObject *t_PythonAttitudeProviderModifier_pythonExtension(t_PythonAttitudeProviderModifier *self, PyObject *args);
      static jobject JNICALL t_PythonAttitudeProviderModifier_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonAttitudeProviderModifier_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonAttitudeProviderModifier_getUnderlyingAttitudeProvider2(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAttitudeProviderModifier_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAttitudeProviderModifier_get__self(t_PythonAttitudeProviderModifier *self, void *data);
      static PyGetSetDef t_PythonAttitudeProviderModifier__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAttitudeProviderModifier, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAttitudeProviderModifier__methods_[] = {
        DECLARE_METHOD(t_PythonAttitudeProviderModifier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeProviderModifier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeProviderModifier, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAttitudeProviderModifier, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeProviderModifier)[] = {
        { Py_tp_methods, t_PythonAttitudeProviderModifier__methods_ },
        { Py_tp_init, (void *) t_PythonAttitudeProviderModifier_init_ },
        { Py_tp_getset, t_PythonAttitudeProviderModifier__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAttitudeProviderModifier)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAttitudeProviderModifier, t_PythonAttitudeProviderModifier, PythonAttitudeProviderModifier);

      void t_PythonAttitudeProviderModifier::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAttitudeProviderModifier), &PY_TYPE_DEF(PythonAttitudeProviderModifier), module, "PythonAttitudeProviderModifier", 1);
      }

      void t_PythonAttitudeProviderModifier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProviderModifier), "class_", make_descriptor(PythonAttitudeProviderModifier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProviderModifier), "wrapfn_", make_descriptor(t_PythonAttitudeProviderModifier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProviderModifier), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAttitudeProviderModifier::initializeClass);
        JNINativeMethod methods[] = {
          { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonAttitudeProviderModifier_getAttitude0 },
          { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonAttitudeProviderModifier_getAttitude1 },
          { "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonAttitudeProviderModifier_getUnderlyingAttitudeProvider2 },
          { "pythonDecRef", "()V", (void *) t_PythonAttitudeProviderModifier_pythonDecRef3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonAttitudeProviderModifier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAttitudeProviderModifier::initializeClass, 1)))
          return NULL;
        return t_PythonAttitudeProviderModifier::wrap_Object(PythonAttitudeProviderModifier(((t_PythonAttitudeProviderModifier *) arg)->object.this$));
      }
      static PyObject *t_PythonAttitudeProviderModifier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAttitudeProviderModifier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAttitudeProviderModifier_init_(t_PythonAttitudeProviderModifier *self, PyObject *args, PyObject *kwds)
      {
        PythonAttitudeProviderModifier object((jobject) NULL);

        INT_CALL(object = PythonAttitudeProviderModifier());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAttitudeProviderModifier_finalize(t_PythonAttitudeProviderModifier *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAttitudeProviderModifier_pythonExtension(t_PythonAttitudeProviderModifier *self, PyObject *args)
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

      static jobject JNICALL t_PythonAttitudeProviderModifier_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static jobject JNICALL t_PythonAttitudeProviderModifier_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static jobject JNICALL t_PythonAttitudeProviderModifier_getUnderlyingAttitudeProvider2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getUnderlyingAttitudeProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
        {
          throwTypeError("getUnderlyingAttitudeProvider", result);
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

      static void JNICALL t_PythonAttitudeProviderModifier_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAttitudeProviderModifier_get__self(t_PythonAttitudeProviderModifier *self, void *data)
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
#include "org/orekit/frames/GTODProvider.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/GTODProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *GTODProvider::class$ = NULL;
      jmethodID *GTODProvider::mids$ = NULL;
      bool GTODProvider::live$ = false;

      jclass GTODProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/GTODProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEOPHistory_867110817f590882] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getNonInterpolatingProvider_8f82c030e2817dc5] = env->getMethodID(cls, "getNonInterpolatingProvider", "()Lorg/orekit/frames/GTODProvider;");
          mids$[mid_getStaticTransform_6e492420312934f1] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_3b5ee2ab7cc035a5] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_02ca17ac51b6a4b2] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_286745ef54e0a7f6] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::EOPHistory GTODProvider::getEOPHistory() const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_867110817f590882]));
      }

      GTODProvider GTODProvider::getNonInterpolatingProvider() const
      {
        return GTODProvider(env->callObjectMethod(this$, mids$[mid_getNonInterpolatingProvider_8f82c030e2817dc5]));
      }

      ::org::orekit::frames::StaticTransform GTODProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_6e492420312934f1], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform GTODProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_3b5ee2ab7cc035a5], a0.this$));
      }

      ::org::orekit::frames::Transform GTODProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_02ca17ac51b6a4b2], a0.this$));
      }

      ::org::orekit::frames::FieldTransform GTODProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_286745ef54e0a7f6], a0.this$));
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
      static PyObject *t_GTODProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GTODProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GTODProvider_getEOPHistory(t_GTODProvider *self);
      static PyObject *t_GTODProvider_getNonInterpolatingProvider(t_GTODProvider *self);
      static PyObject *t_GTODProvider_getStaticTransform(t_GTODProvider *self, PyObject *args);
      static PyObject *t_GTODProvider_getTransform(t_GTODProvider *self, PyObject *args);
      static PyObject *t_GTODProvider_get__eOPHistory(t_GTODProvider *self, void *data);
      static PyObject *t_GTODProvider_get__nonInterpolatingProvider(t_GTODProvider *self, void *data);
      static PyGetSetDef t_GTODProvider__fields_[] = {
        DECLARE_GET_FIELD(t_GTODProvider, eOPHistory),
        DECLARE_GET_FIELD(t_GTODProvider, nonInterpolatingProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GTODProvider__methods_[] = {
        DECLARE_METHOD(t_GTODProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GTODProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GTODProvider, getEOPHistory, METH_NOARGS),
        DECLARE_METHOD(t_GTODProvider, getNonInterpolatingProvider, METH_NOARGS),
        DECLARE_METHOD(t_GTODProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_GTODProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GTODProvider)[] = {
        { Py_tp_methods, t_GTODProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GTODProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GTODProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GTODProvider, t_GTODProvider, GTODProvider);

      void t_GTODProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(GTODProvider), &PY_TYPE_DEF(GTODProvider), module, "GTODProvider", 0);
      }

      void t_GTODProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GTODProvider), "class_", make_descriptor(GTODProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GTODProvider), "wrapfn_", make_descriptor(t_GTODProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GTODProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GTODProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GTODProvider::initializeClass, 1)))
          return NULL;
        return t_GTODProvider::wrap_Object(GTODProvider(((t_GTODProvider *) arg)->object.this$));
      }
      static PyObject *t_GTODProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GTODProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GTODProvider_getEOPHistory(t_GTODProvider *self)
      {
        ::org::orekit::frames::EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_GTODProvider_getNonInterpolatingProvider(t_GTODProvider *self)
      {
        GTODProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getNonInterpolatingProvider());
        return t_GTODProvider::wrap_Object(result);
      }

      static PyObject *t_GTODProvider_getStaticTransform(t_GTODProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_GTODProvider_getTransform(t_GTODProvider *self, PyObject *args)
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

      static PyObject *t_GTODProvider_get__eOPHistory(t_GTODProvider *self, void *data)
      {
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_GTODProvider_get__nonInterpolatingProvider(t_GTODProvider *self, void *data)
      {
        GTODProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getNonInterpolatingProvider());
        return t_GTODProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FieldTuple.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldTuple.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldTuple::class$ = NULL;
      jmethodID *FieldTuple::mids$ = NULL;
      bool FieldTuple::live$ = false;

      jclass FieldTuple::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldTuple");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_77e61a645c496adc] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_abs_2f8d59c9ac519600] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_acos_2f8d59c9ac519600] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_acosh_2f8d59c9ac519600] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_add_e351ffcdc2c0be06] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_add_ec1b1370a0721aea] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_asin_2f8d59c9ac519600] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_asinh_2f8d59c9ac519600] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_atan_2f8d59c9ac519600] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_atan2_e351ffcdc2c0be06] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_atanh_2f8d59c9ac519600] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_cbrt_2f8d59c9ac519600] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_ceil_2f8d59c9ac519600] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_copySign_e351ffcdc2c0be06] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_copySign_ec1b1370a0721aea] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_cos_2f8d59c9ac519600] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_cosh_2f8d59c9ac519600] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_divide_e351ffcdc2c0be06] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_divide_ec1b1370a0721aea] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_2f8d59c9ac519600] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_expm1_2f8d59c9ac519600] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_floor_2f8d59c9ac519600] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_getComponent_dfcf702144fd7bc1] = env->getMethodID(cls, "getComponent", "(I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getComponents_94ed2e0620f8833d] = env->getMethodID(cls, "getComponents", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_2f8d59c9ac519600] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_getReal_9981f74b2d109da6] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_e351ffcdc2c0be06] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_5b0201e41d284aec] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_ae6f6e846cc023c3] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/util/FieldTuple;[Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_3d02a23fdc64128b] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_d3cb773a190d9706] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_fb2eef78dbcef4b5] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_4bd8afa7a6bb8922] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_7e43e94819fe3145] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_adb1f6d4a0566c51] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_log_2f8d59c9ac519600] = env->getMethodID(cls, "log", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_log10_2f8d59c9ac519600] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_log1p_2f8d59c9ac519600] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_multiply_e351ffcdc2c0be06] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_multiply_ec1b1370a0721aea] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_multiply_3e235218b49146f4] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_negate_2f8d59c9ac519600] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_newInstance_ec1b1370a0721aea] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_pow_e351ffcdc2c0be06] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_pow_ec1b1370a0721aea] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_pow_3e235218b49146f4] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_reciprocal_2f8d59c9ac519600] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_remainder_e351ffcdc2c0be06] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_remainder_ec1b1370a0721aea] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_rint_2f8d59c9ac519600] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_rootN_3e235218b49146f4] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_scalb_3e235218b49146f4] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sign_2f8d59c9ac519600] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sin_2f8d59c9ac519600] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sinCos_31b7b02b4932da60] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_2f8d59c9ac519600] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sinhCosh_b24d5962ea451135] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_2f8d59c9ac519600] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_subtract_e351ffcdc2c0be06] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_subtract_ec1b1370a0721aea] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_tan_2f8d59c9ac519600] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_tanh_2f8d59c9ac519600] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_toDegrees_2f8d59c9ac519600] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_toRadians_2f8d59c9ac519600] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_ulp_2f8d59c9ac519600] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/util/FieldTuple;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTuple::FieldTuple(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e61a645c496adc, a0.this$)) {}

      FieldTuple FieldTuple::abs() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_abs_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::acos() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_acos_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::acosh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_acosh_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::add(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_add_e351ffcdc2c0be06], a0.this$));
      }

      FieldTuple FieldTuple::add(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_add_ec1b1370a0721aea], a0));
      }

      FieldTuple FieldTuple::asin() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_asin_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::asinh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_asinh_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::atan() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_atan_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::atan2(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_atan2_e351ffcdc2c0be06], a0.this$));
      }

      FieldTuple FieldTuple::atanh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_atanh_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::cbrt() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_cbrt_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::ceil() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_ceil_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::copySign(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_copySign_e351ffcdc2c0be06], a0.this$));
      }

      FieldTuple FieldTuple::copySign(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_copySign_ec1b1370a0721aea], a0));
      }

      FieldTuple FieldTuple::cos() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_cos_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::cosh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_cosh_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::divide(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_divide_e351ffcdc2c0be06], a0.this$));
      }

      FieldTuple FieldTuple::divide(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_divide_ec1b1370a0721aea], a0));
      }

      jboolean FieldTuple::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      FieldTuple FieldTuple::exp() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_exp_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::expm1() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_expm1_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::floor() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_floor_2f8d59c9ac519600]));
      }

      ::org::hipparchus::CalculusFieldElement FieldTuple::getComponent(jint a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getComponent_dfcf702144fd7bc1], a0));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldTuple::getComponents() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getComponents_94ed2e0620f8833d]));
      }

      jint FieldTuple::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
      }

      ::org::hipparchus::Field FieldTuple::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
      }

      FieldTuple FieldTuple::getPi() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_getPi_2f8d59c9ac519600]));
      }

      jdouble FieldTuple::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_9981f74b2d109da6]);
      }

      jint FieldTuple::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      FieldTuple FieldTuple::hypot(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_hypot_e351ffcdc2c0be06], a0.this$));
      }

      FieldTuple FieldTuple::linearCombination(const JArray< jdouble > & a0, const JArray< FieldTuple > & a1) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_5b0201e41d284aec], a0.this$, a1.this$));
      }

      FieldTuple FieldTuple::linearCombination(const JArray< FieldTuple > & a0, const JArray< FieldTuple > & a1) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_ae6f6e846cc023c3], a0.this$, a1.this$));
      }

      FieldTuple FieldTuple::linearCombination(const FieldTuple & a0, const FieldTuple & a1, const FieldTuple & a2, const FieldTuple & a3) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_3d02a23fdc64128b], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldTuple FieldTuple::linearCombination(jdouble a0, const FieldTuple & a1, jdouble a2, const FieldTuple & a3) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_d3cb773a190d9706], a0, a1.this$, a2, a3.this$));
      }

      FieldTuple FieldTuple::linearCombination(const FieldTuple & a0, const FieldTuple & a1, const FieldTuple & a2, const FieldTuple & a3, const FieldTuple & a4, const FieldTuple & a5) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_fb2eef78dbcef4b5], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      FieldTuple FieldTuple::linearCombination(jdouble a0, const FieldTuple & a1, jdouble a2, const FieldTuple & a3, jdouble a4, const FieldTuple & a5) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_4bd8afa7a6bb8922], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      FieldTuple FieldTuple::linearCombination(const FieldTuple & a0, const FieldTuple & a1, const FieldTuple & a2, const FieldTuple & a3, const FieldTuple & a4, const FieldTuple & a5, const FieldTuple & a6, const FieldTuple & a7) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_7e43e94819fe3145], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      FieldTuple FieldTuple::linearCombination(jdouble a0, const FieldTuple & a1, jdouble a2, const FieldTuple & a3, jdouble a4, const FieldTuple & a5, jdouble a6, const FieldTuple & a7) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_adb1f6d4a0566c51], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      FieldTuple FieldTuple::log() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_log_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::log10() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_log10_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::log1p() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_log1p_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::multiply(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_multiply_e351ffcdc2c0be06], a0.this$));
      }

      FieldTuple FieldTuple::multiply(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_multiply_ec1b1370a0721aea], a0));
      }

      FieldTuple FieldTuple::multiply(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_multiply_3e235218b49146f4], a0));
      }

      FieldTuple FieldTuple::negate() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_negate_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::newInstance(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_newInstance_ec1b1370a0721aea], a0));
      }

      FieldTuple FieldTuple::pow(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_pow_e351ffcdc2c0be06], a0.this$));
      }

      FieldTuple FieldTuple::pow(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_pow_ec1b1370a0721aea], a0));
      }

      FieldTuple FieldTuple::pow(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_pow_3e235218b49146f4], a0));
      }

      FieldTuple FieldTuple::reciprocal() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_reciprocal_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::remainder(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_remainder_e351ffcdc2c0be06], a0.this$));
      }

      FieldTuple FieldTuple::remainder(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_remainder_ec1b1370a0721aea], a0));
      }

      FieldTuple FieldTuple::rint() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_rint_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::rootN(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_rootN_3e235218b49146f4], a0));
      }

      FieldTuple FieldTuple::scalb(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_scalb_3e235218b49146f4], a0));
      }

      FieldTuple FieldTuple::sign() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sign_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::sin() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sin_2f8d59c9ac519600]));
      }

      ::org::hipparchus::util::FieldSinCos FieldTuple::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_31b7b02b4932da60]));
      }

      FieldTuple FieldTuple::sinh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sinh_2f8d59c9ac519600]));
      }

      ::org::hipparchus::util::FieldSinhCosh FieldTuple::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_b24d5962ea451135]));
      }

      FieldTuple FieldTuple::sqrt() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sqrt_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::subtract(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_subtract_e351ffcdc2c0be06], a0.this$));
      }

      FieldTuple FieldTuple::subtract(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_subtract_ec1b1370a0721aea], a0));
      }

      FieldTuple FieldTuple::tan() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_tan_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::tanh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_tanh_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::toDegrees() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_toDegrees_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::toRadians() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_toRadians_2f8d59c9ac519600]));
      }

      FieldTuple FieldTuple::ulp() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_ulp_2f8d59c9ac519600]));
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
      static PyObject *t_FieldTuple_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTuple_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTuple_of_(t_FieldTuple *self, PyObject *args);
      static int t_FieldTuple_init_(t_FieldTuple *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTuple_abs(t_FieldTuple *self);
      static PyObject *t_FieldTuple_acos(t_FieldTuple *self);
      static PyObject *t_FieldTuple_acosh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_add(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_asin(t_FieldTuple *self);
      static PyObject *t_FieldTuple_asinh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_atan(t_FieldTuple *self);
      static PyObject *t_FieldTuple_atan2(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_atanh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_cbrt(t_FieldTuple *self);
      static PyObject *t_FieldTuple_ceil(t_FieldTuple *self);
      static PyObject *t_FieldTuple_copySign(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_cos(t_FieldTuple *self);
      static PyObject *t_FieldTuple_cosh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_divide(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_equals(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_exp(t_FieldTuple *self);
      static PyObject *t_FieldTuple_expm1(t_FieldTuple *self);
      static PyObject *t_FieldTuple_floor(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getComponent(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_getComponents(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getDimension(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getField(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getPi(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getReal(t_FieldTuple *self);
      static PyObject *t_FieldTuple_hashCode(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_hypot(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_linearCombination(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_log(t_FieldTuple *self);
      static PyObject *t_FieldTuple_log10(t_FieldTuple *self);
      static PyObject *t_FieldTuple_log1p(t_FieldTuple *self);
      static PyObject *t_FieldTuple_multiply(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_negate(t_FieldTuple *self);
      static PyObject *t_FieldTuple_newInstance(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_pow(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_reciprocal(t_FieldTuple *self);
      static PyObject *t_FieldTuple_remainder(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_rint(t_FieldTuple *self);
      static PyObject *t_FieldTuple_rootN(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_scalb(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_sign(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sin(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sinCos(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sinh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sinhCosh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sqrt(t_FieldTuple *self);
      static PyObject *t_FieldTuple_subtract(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_tan(t_FieldTuple *self);
      static PyObject *t_FieldTuple_tanh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_toDegrees(t_FieldTuple *self);
      static PyObject *t_FieldTuple_toRadians(t_FieldTuple *self);
      static PyObject *t_FieldTuple_ulp(t_FieldTuple *self);
      static PyObject *t_FieldTuple_get__components(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__dimension(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__field(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__pi(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__real(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__parameters_(t_FieldTuple *self, void *data);
      static PyGetSetDef t_FieldTuple__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTuple, components),
        DECLARE_GET_FIELD(t_FieldTuple, dimension),
        DECLARE_GET_FIELD(t_FieldTuple, field),
        DECLARE_GET_FIELD(t_FieldTuple, pi),
        DECLARE_GET_FIELD(t_FieldTuple, real),
        DECLARE_GET_FIELD(t_FieldTuple, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTuple__methods_[] = {
        DECLARE_METHOD(t_FieldTuple, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTuple, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTuple, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, abs, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, acos, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, acosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, add, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, asin, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, asinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, atan, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, atan2, METH_O),
        DECLARE_METHOD(t_FieldTuple, atanh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, ceil, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, copySign, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, cos, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, cosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, divide, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, exp, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, expm1, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, floor, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getComponent, METH_O),
        DECLARE_METHOD(t_FieldTuple, getComponents, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getPi, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getReal, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, hypot, METH_O),
        DECLARE_METHOD(t_FieldTuple, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, log, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, log10, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, log1p, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, multiply, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, negate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, newInstance, METH_O),
        DECLARE_METHOD(t_FieldTuple, pow, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, remainder, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, rint, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, rootN, METH_O),
        DECLARE_METHOD(t_FieldTuple, scalb, METH_O),
        DECLARE_METHOD(t_FieldTuple, sign, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sin, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, subtract, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, tan, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, tanh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, ulp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTuple)[] = {
        { Py_tp_methods, t_FieldTuple__methods_ },
        { Py_tp_init, (void *) t_FieldTuple_init_ },
        { Py_tp_getset, t_FieldTuple__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTuple)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTuple, t_FieldTuple, FieldTuple);
      PyObject *t_FieldTuple::wrap_Object(const FieldTuple& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTuple::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTuple *self = (t_FieldTuple *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTuple::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTuple::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTuple *self = (t_FieldTuple *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTuple::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTuple), &PY_TYPE_DEF(FieldTuple), module, "FieldTuple", 0);
      }

      void t_FieldTuple::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTuple), "class_", make_descriptor(FieldTuple::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTuple), "wrapfn_", make_descriptor(t_FieldTuple::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTuple), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTuple_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTuple::initializeClass, 1)))
          return NULL;
        return t_FieldTuple::wrap_Object(FieldTuple(((t_FieldTuple *) arg)->object.this$));
      }
      static PyObject *t_FieldTuple_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTuple::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTuple_of_(t_FieldTuple *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTuple_init_(t_FieldTuple *self, PyObject *args, PyObject *kwds)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTuple object((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldTuple(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldTuple_abs(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_acos(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_acosh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_add(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_asin(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_asinh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_atan(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_atan2(t_FieldTuple *self, PyObject *arg)
      {
        FieldTuple a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_atanh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_cbrt(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_ceil(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_copySign(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_cos(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_cosh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_divide(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_equals(t_FieldTuple *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldTuple), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldTuple_exp(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_expm1(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_floor(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_getComponent(t_FieldTuple *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getComponent(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getComponent", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_getComponents(t_FieldTuple *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getComponents());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldTuple_getDimension(t_FieldTuple *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldTuple_getField(t_FieldTuple *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result);
      }

      static PyObject *t_FieldTuple_getPi(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_getReal(t_FieldTuple *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_FieldTuple_hashCode(t_FieldTuple *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldTuple), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FieldTuple_hypot(t_FieldTuple *self, PyObject *arg)
      {
        FieldTuple a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_linearCombination(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< FieldTuple > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "[D[K", FieldTuple::initializeClass, &a0, &a1, &p1, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            JArray< FieldTuple > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< FieldTuple > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "[K[K", FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_, &a1, &p1, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 4:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "KKKK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_, &a1, &p1, t_FieldTuple::parameters_, &a2, &p2, t_FieldTuple::parameters_, &a3, &p3, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "DKDK", FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &a1, &p1, t_FieldTuple::parameters_, &a2, &a3, &p3, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 6:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTuple a4((jobject) NULL);
            PyTypeObject **p4;
            FieldTuple a5((jobject) NULL);
            PyTypeObject **p5;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "KKKKKK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_, &a1, &p1, t_FieldTuple::parameters_, &a2, &p2, t_FieldTuple::parameters_, &a3, &p3, t_FieldTuple::parameters_, &a4, &p4, t_FieldTuple::parameters_, &a5, &p5, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldTuple a5((jobject) NULL);
            PyTypeObject **p5;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "DKDKDK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &a1, &p1, t_FieldTuple::parameters_, &a2, &a3, &p3, t_FieldTuple::parameters_, &a4, &a5, &p5, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 8:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTuple a4((jobject) NULL);
            PyTypeObject **p4;
            FieldTuple a5((jobject) NULL);
            PyTypeObject **p5;
            FieldTuple a6((jobject) NULL);
            PyTypeObject **p6;
            FieldTuple a7((jobject) NULL);
            PyTypeObject **p7;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_, &a1, &p1, t_FieldTuple::parameters_, &a2, &p2, t_FieldTuple::parameters_, &a3, &p3, t_FieldTuple::parameters_, &a4, &p4, t_FieldTuple::parameters_, &a5, &p5, t_FieldTuple::parameters_, &a6, &p6, t_FieldTuple::parameters_, &a7, &p7, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldTuple a5((jobject) NULL);
            PyTypeObject **p5;
            jdouble a6;
            FieldTuple a7((jobject) NULL);
            PyTypeObject **p7;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "DKDKDKDK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &a1, &p1, t_FieldTuple::parameters_, &a2, &a3, &p3, t_FieldTuple::parameters_, &a4, &a5, &p5, t_FieldTuple::parameters_, &a6, &a7, &p7, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_log(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_log10(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_log1p(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_multiply(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_negate(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_newInstance(t_FieldTuple *self, PyObject *arg)
      {
        jdouble a0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_pow(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_reciprocal(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_remainder(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_rint(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_rootN(t_FieldTuple *self, PyObject *arg)
      {
        jint a0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_scalb(t_FieldTuple *self, PyObject *arg)
      {
        jint a0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_sign(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_sin(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_sinCos(t_FieldTuple *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
      }

      static PyObject *t_FieldTuple_sinh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_sinhCosh(t_FieldTuple *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
      }

      static PyObject *t_FieldTuple_sqrt(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_subtract(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_tan(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_tanh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_toDegrees(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_toRadians(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_ulp(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldTuple_get__parameters_(t_FieldTuple *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTuple_get__components(t_FieldTuple *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getComponents());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldTuple_get__dimension(t_FieldTuple *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldTuple_get__field(t_FieldTuple *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_FieldTuple_get__pi(t_FieldTuple *self, void *data)
      {
        FieldTuple value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_FieldTuple::wrap_Object(value);
      }

      static PyObject *t_FieldTuple_get__real(t_FieldTuple *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *AccuracyProvider::class$ = NULL;
            jmethodID *AccuracyProvider::mids$ = NULL;
            bool AccuracyProvider::live$ = false;

            jclass AccuracyProvider::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/AccuracyProvider");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble AccuracyProvider::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_9981f74b2d109da6]);
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
          namespace common {
            static PyObject *t_AccuracyProvider_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AccuracyProvider_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AccuracyProvider_getAccuracy(t_AccuracyProvider *self);
            static PyObject *t_AccuracyProvider_get__accuracy(t_AccuracyProvider *self, void *data);
            static PyGetSetDef t_AccuracyProvider__fields_[] = {
              DECLARE_GET_FIELD(t_AccuracyProvider, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AccuracyProvider__methods_[] = {
              DECLARE_METHOD(t_AccuracyProvider, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AccuracyProvider, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AccuracyProvider, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AccuracyProvider)[] = {
              { Py_tp_methods, t_AccuracyProvider__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AccuracyProvider__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AccuracyProvider)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AccuracyProvider, t_AccuracyProvider, AccuracyProvider);

            void t_AccuracyProvider::install(PyObject *module)
            {
              installType(&PY_TYPE(AccuracyProvider), &PY_TYPE_DEF(AccuracyProvider), module, "AccuracyProvider", 0);
            }

            void t_AccuracyProvider::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AccuracyProvider), "class_", make_descriptor(AccuracyProvider::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AccuracyProvider), "wrapfn_", make_descriptor(t_AccuracyProvider::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AccuracyProvider), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AccuracyProvider_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AccuracyProvider::initializeClass, 1)))
                return NULL;
              return t_AccuracyProvider::wrap_Object(AccuracyProvider(((t_AccuracyProvider *) arg)->object.this$));
            }
            static PyObject *t_AccuracyProvider_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AccuracyProvider::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AccuracyProvider_getAccuracy(t_AccuracyProvider *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AccuracyProvider_get__accuracy(t_AccuracyProvider *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAccuracy());
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
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Vector3D::class$ = NULL;
          jmethodID *Vector3D::mids$ = NULL;
          bool Vector3D::live$ = false;
          Vector3D *Vector3D::MINUS_I = NULL;
          Vector3D *Vector3D::MINUS_J = NULL;
          Vector3D *Vector3D::MINUS_K = NULL;
          Vector3D *Vector3D::NEGATIVE_INFINITY = NULL;
          Vector3D *Vector3D::NaN = NULL;
          Vector3D *Vector3D::PLUS_I = NULL;
          Vector3D *Vector3D::PLUS_J = NULL;
          Vector3D *Vector3D::PLUS_K = NULL;
          Vector3D *Vector3D::POSITIVE_INFINITY = NULL;
          Vector3D *Vector3D::ZERO = NULL;

          jclass Vector3D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Vector3D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a71c45509eaf92d1] = env->getMethodID(cls, "<init>", "([D)V");
              mids$[mid_init$_7447d4fd1b9b171b] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_init$_3e3751134d06855f] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_e6b7408e37ec3021] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_966a8e0bf93eced1] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_add_8e71f2ea9c6b3602] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_add_3bdd114c6f443cfe] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_angle_855cbb355cce7dd8] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_crossProduct_8e71f2ea9c6b3602] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_crossProduct_ff0107f3aab86815] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_distance_277cb62c4ec87155] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_855cbb355cce7dd8] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_distance1_54eca2a6b3ac81a2] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distance1_855cbb355cce7dd8] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_distanceInf_54eca2a6b3ac81a2] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_855cbb355cce7dd8] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_distanceSq_54eca2a6b3ac81a2] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceSq_855cbb355cce7dd8] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_dotProduct_54eca2a6b3ac81a2] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_dotProduct_855cbb355cce7dd8] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_72faff9b05f5ed5e] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getAlpha_9981f74b2d109da6] = env->getMethodID(cls, "getAlpha", "()D");
              mids$[mid_getDelta_9981f74b2d109da6] = env->getMethodID(cls, "getDelta", "()D");
              mids$[mid_getNorm_9981f74b2d109da6] = env->getMethodID(cls, "getNorm", "()D");
              mids$[mid_getNorm1_9981f74b2d109da6] = env->getMethodID(cls, "getNorm1", "()D");
              mids$[mid_getNormInf_9981f74b2d109da6] = env->getMethodID(cls, "getNormInf", "()D");
              mids$[mid_getNormSq_9981f74b2d109da6] = env->getMethodID(cls, "getNormSq", "()D");
              mids$[mid_getSpace_a30bf0b437744017] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getX_9981f74b2d109da6] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getY_9981f74b2d109da6] = env->getMethodID(cls, "getY", "()D");
              mids$[mid_getZ_9981f74b2d109da6] = env->getMethodID(cls, "getZ", "()D");
              mids$[mid_getZero_032312bdeb3f2f93] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_eee3de00fe971136] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_eee3de00fe971136] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_032312bdeb3f2f93] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_orthogonal_032312bdeb3f2f93] = env->getMethodID(cls, "orthogonal", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_scalarMultiply_98a3eeef43dce47a] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_subtract_8e71f2ea9c6b3602] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_subtract_3bdd114c6f443cfe] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toArray_be783177b060994b] = env->getMethodID(cls, "toArray", "()[D");
              mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_aeac32100fe35ffe] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MINUS_I = new Vector3D(env->getStaticObjectField(cls, "MINUS_I", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              MINUS_J = new Vector3D(env->getStaticObjectField(cls, "MINUS_J", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              MINUS_K = new Vector3D(env->getStaticObjectField(cls, "MINUS_K", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              NEGATIVE_INFINITY = new Vector3D(env->getStaticObjectField(cls, "NEGATIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              NaN = new Vector3D(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              PLUS_I = new Vector3D(env->getStaticObjectField(cls, "PLUS_I", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              PLUS_J = new Vector3D(env->getStaticObjectField(cls, "PLUS_J", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              PLUS_K = new Vector3D(env->getStaticObjectField(cls, "PLUS_K", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              POSITIVE_INFINITY = new Vector3D(env->getStaticObjectField(cls, "POSITIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              ZERO = new Vector3D(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/geometry/euclidean/threed/Vector3D;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector3D::Vector3D(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a71c45509eaf92d1, a0.this$)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7447d4fd1b9b171b, a0, a1.this$)) {}

          Vector3D::Vector3D(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

          Vector3D::Vector3D(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1, jdouble a2, const Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e3751134d06855f, a0, a1.this$, a2, a3.this$)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1, jdouble a2, const Vector3D & a3, jdouble a4, const Vector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e6b7408e37ec3021, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          Vector3D::Vector3D(jdouble a0, const Vector3D & a1, jdouble a2, const Vector3D & a3, jdouble a4, const Vector3D & a5, jdouble a6, const Vector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_966a8e0bf93eced1, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          Vector3D Vector3D::add(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_add_8e71f2ea9c6b3602], a0.this$));
          }

          Vector3D Vector3D::add(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_add_3bdd114c6f443cfe], a0, a1.this$));
          }

          jdouble Vector3D::angle(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_angle_855cbb355cce7dd8], a0.this$, a1.this$);
          }

          Vector3D Vector3D::crossProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_crossProduct_8e71f2ea9c6b3602], a0.this$));
          }

          Vector3D Vector3D::crossProduct(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_ff0107f3aab86815], a0.this$, a1.this$));
          }

          jdouble Vector3D::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_277cb62c4ec87155], a0.this$);
          }

          jdouble Vector3D::distance(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_855cbb355cce7dd8], a0.this$, a1.this$);
          }

          jdouble Vector3D::distance1(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance1_54eca2a6b3ac81a2], a0.this$);
          }

          jdouble Vector3D::distance1(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance1_855cbb355cce7dd8], a0.this$, a1.this$);
          }

          jdouble Vector3D::distanceInf(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceInf_54eca2a6b3ac81a2], a0.this$);
          }

          jdouble Vector3D::distanceInf(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_855cbb355cce7dd8], a0.this$, a1.this$);
          }

          jdouble Vector3D::distanceSq(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceSq_54eca2a6b3ac81a2], a0.this$);
          }

          jdouble Vector3D::distanceSq(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceSq_855cbb355cce7dd8], a0.this$, a1.this$);
          }

          jdouble Vector3D::dotProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_dotProduct_54eca2a6b3ac81a2], a0.this$);
          }

          jdouble Vector3D::dotProduct(const Vector3D & a0, const Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_dotProduct_855cbb355cce7dd8], a0.this$, a1.this$);
          }

          jboolean Vector3D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
          }

          jboolean Vector3D::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_72faff9b05f5ed5e], a0.this$);
          }

          jdouble Vector3D::getAlpha() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha_9981f74b2d109da6]);
          }

          jdouble Vector3D::getDelta() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDelta_9981f74b2d109da6]);
          }

          jdouble Vector3D::getNorm() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm_9981f74b2d109da6]);
          }

          jdouble Vector3D::getNorm1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm1_9981f74b2d109da6]);
          }

          jdouble Vector3D::getNormInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormInf_9981f74b2d109da6]);
          }

          jdouble Vector3D::getNormSq() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormSq_9981f74b2d109da6]);
          }

          ::org::hipparchus::geometry::Space Vector3D::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_a30bf0b437744017]));
          }

          jdouble Vector3D::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_9981f74b2d109da6]);
          }

          jdouble Vector3D::getY() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY_9981f74b2d109da6]);
          }

          jdouble Vector3D::getZ() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZ_9981f74b2d109da6]);
          }

          Vector3D Vector3D::getZero() const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_getZero_032312bdeb3f2f93]));
          }

          jint Vector3D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
          }

          jboolean Vector3D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_eee3de00fe971136]);
          }

          jboolean Vector3D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_eee3de00fe971136]);
          }

          Vector3D Vector3D::negate() const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_negate_032312bdeb3f2f93]));
          }

          Vector3D Vector3D::orthogonal() const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_orthogonal_032312bdeb3f2f93]));
          }

          Vector3D Vector3D::scalarMultiply(jdouble a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_98a3eeef43dce47a], a0));
          }

          Vector3D Vector3D::subtract(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_subtract_8e71f2ea9c6b3602], a0.this$));
          }

          Vector3D Vector3D::subtract(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector3D(env->callObjectMethod(this$, mids$[mid_subtract_3bdd114c6f443cfe], a0, a1.this$));
          }

          JArray< jdouble > Vector3D::toArray() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_be783177b060994b]));
          }

          ::java::lang::String Vector3D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
          }

          ::java::lang::String Vector3D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_aeac32100fe35ffe], a0.this$));
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
          static PyObject *t_Vector3D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector3D_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Vector3D_init_(t_Vector3D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector3D_add(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_crossProduct(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_crossProduct_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_distance(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_distance1(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_distanceInf(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_distanceSq(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_dotProduct(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_dotProduct_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3D_equals(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_equalsIeee754(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_getAlpha(t_Vector3D *self);
          static PyObject *t_Vector3D_getDelta(t_Vector3D *self);
          static PyObject *t_Vector3D_getNorm(t_Vector3D *self);
          static PyObject *t_Vector3D_getNorm1(t_Vector3D *self);
          static PyObject *t_Vector3D_getNormInf(t_Vector3D *self);
          static PyObject *t_Vector3D_getNormSq(t_Vector3D *self);
          static PyObject *t_Vector3D_getSpace(t_Vector3D *self);
          static PyObject *t_Vector3D_getX(t_Vector3D *self);
          static PyObject *t_Vector3D_getY(t_Vector3D *self);
          static PyObject *t_Vector3D_getZ(t_Vector3D *self);
          static PyObject *t_Vector3D_getZero(t_Vector3D *self);
          static PyObject *t_Vector3D_hashCode(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_isInfinite(t_Vector3D *self);
          static PyObject *t_Vector3D_isNaN(t_Vector3D *self);
          static PyObject *t_Vector3D_negate(t_Vector3D *self);
          static PyObject *t_Vector3D_orthogonal(t_Vector3D *self);
          static PyObject *t_Vector3D_scalarMultiply(t_Vector3D *self, PyObject *arg);
          static PyObject *t_Vector3D_subtract(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_toArray(t_Vector3D *self);
          static PyObject *t_Vector3D_toString(t_Vector3D *self, PyObject *args);
          static PyObject *t_Vector3D_get__alpha(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__delta(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__infinite(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__naN(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__norm(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__norm1(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__normInf(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__normSq(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__space(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__x(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__y(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__z(t_Vector3D *self, void *data);
          static PyObject *t_Vector3D_get__zero(t_Vector3D *self, void *data);
          static PyGetSetDef t_Vector3D__fields_[] = {
            DECLARE_GET_FIELD(t_Vector3D, alpha),
            DECLARE_GET_FIELD(t_Vector3D, delta),
            DECLARE_GET_FIELD(t_Vector3D, infinite),
            DECLARE_GET_FIELD(t_Vector3D, naN),
            DECLARE_GET_FIELD(t_Vector3D, norm),
            DECLARE_GET_FIELD(t_Vector3D, norm1),
            DECLARE_GET_FIELD(t_Vector3D, normInf),
            DECLARE_GET_FIELD(t_Vector3D, normSq),
            DECLARE_GET_FIELD(t_Vector3D, space),
            DECLARE_GET_FIELD(t_Vector3D, x),
            DECLARE_GET_FIELD(t_Vector3D, y),
            DECLARE_GET_FIELD(t_Vector3D, z),
            DECLARE_GET_FIELD(t_Vector3D, zero),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector3D__methods_[] = {
            DECLARE_METHOD(t_Vector3D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, add, METH_VARARGS),
            DECLARE_METHOD(t_Vector3D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, crossProduct, METH_O),
            DECLARE_METHOD(t_Vector3D, crossProduct_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, distance, METH_O),
            DECLARE_METHOD(t_Vector3D, distance1, METH_O),
            DECLARE_METHOD(t_Vector3D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, distanceInf, METH_O),
            DECLARE_METHOD(t_Vector3D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, distanceSq, METH_O),
            DECLARE_METHOD(t_Vector3D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, dotProduct, METH_O),
            DECLARE_METHOD(t_Vector3D, dotProduct_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3D, equals, METH_VARARGS),
            DECLARE_METHOD(t_Vector3D, equalsIeee754, METH_O),
            DECLARE_METHOD(t_Vector3D, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getDelta, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getX, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getY, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getZ, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, getZero, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_Vector3D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, negate, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, orthogonal, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, scalarMultiply, METH_O),
            DECLARE_METHOD(t_Vector3D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_Vector3D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_Vector3D, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector3D)[] = {
            { Py_tp_methods, t_Vector3D__methods_ },
            { Py_tp_init, (void *) t_Vector3D_init_ },
            { Py_tp_getset, t_Vector3D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector3D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Vector3D, t_Vector3D, Vector3D);

          void t_Vector3D::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector3D), &PY_TYPE_DEF(Vector3D), module, "Vector3D", 0);
          }

          void t_Vector3D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "class_", make_descriptor(Vector3D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "wrapfn_", make_descriptor(t_Vector3D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Vector3D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "MINUS_I", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::MINUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "MINUS_J", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::MINUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "MINUS_K", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::MINUS_K)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "NEGATIVE_INFINITY", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::NEGATIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "NaN", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::NaN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "PLUS_I", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::PLUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "PLUS_J", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::PLUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "PLUS_K", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::PLUS_K)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "POSITIVE_INFINITY", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::POSITIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3D), "ZERO", make_descriptor(t_Vector3D::wrap_Object(*Vector3D::ZERO)));
          }

          static PyObject *t_Vector3D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector3D::initializeClass, 1)))
              return NULL;
            return t_Vector3D::wrap_Object(Vector3D(((t_Vector3D *) arg)->object.this$));
          }
          static PyObject *t_Vector3D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector3D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Vector3D_init_(t_Vector3D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  INT_CALL(object = Vector3D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                Vector3D a1((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "Dk", Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Vector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                jdouble a0;
                jdouble a1;
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  INT_CALL(object = Vector3D(a0, a1));
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
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = Vector3D(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                Vector3D a1((jobject) NULL);
                jdouble a2;
                Vector3D a3((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DkDk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                Vector3D a1((jobject) NULL);
                jdouble a2;
                Vector3D a3((jobject) NULL);
                jdouble a4;
                Vector3D a5((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDk", Vector3D::initializeClass, Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = Vector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                Vector3D a1((jobject) NULL);
                jdouble a2;
                Vector3D a3((jobject) NULL);
                jdouble a4;
                Vector3D a5((jobject) NULL);
                jdouble a6;
                Vector3D a7((jobject) NULL);
                Vector3D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDkDk", Vector3D::initializeClass, Vector3D::initializeClass, Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
                {
                  INT_CALL(object = Vector3D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_Vector3D_add(t_Vector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector3D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_Vector3D_angle(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::angle(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_Vector3D_crossProduct(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            Vector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.crossProduct(a0));
              return t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_crossProduct_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::crossProduct(a0, a1));
              return t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "crossProduct_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_distance(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_distance1(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distance1(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_distance1_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::distance1(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_distanceInf(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceInf(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::distanceInf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_distanceSq(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceSq(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::distanceSq(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_distance_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_dotProduct(t_Vector3D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_dotProduct_(PyTypeObject *type, PyObject *args)
          {
            Vector3D a0((jobject) NULL);
            Vector3D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector3D::initializeClass, Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3D::dotProduct(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "dotProduct_", args);
            return NULL;
          }

          static PyObject *t_Vector3D_equals(t_Vector3D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Vector3D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Vector3D_equalsIeee754(t_Vector3D *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.equalsIeee754(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "equalsIeee754", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_getAlpha(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAlpha());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getDelta(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDelta());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getNorm(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getNorm1(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getNormInf(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getNormSq(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormSq());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getSpace(t_Vector3D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Vector3D_getX(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getX());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getY(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getY());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getZ(t_Vector3D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getZ());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector3D_getZero(t_Vector3D *self)
          {
            Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getZero());
            return t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Vector3D_hashCode(t_Vector3D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Vector3D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Vector3D_isInfinite(t_Vector3D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector3D_isNaN(t_Vector3D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector3D_negate(t_Vector3D *self)
          {
            Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Vector3D_orthogonal(t_Vector3D *self)
          {
            Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.orthogonal());
            return t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Vector3D_scalarMultiply(t_Vector3D *self, PyObject *arg)
          {
            jdouble a0;
            Vector3D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.scalarMultiply(a0));
              return t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
            return NULL;
          }

          static PyObject *t_Vector3D_subtract(t_Vector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector3D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_Vector3D_toArray(t_Vector3D *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return result.wrap();
          }

          static PyObject *t_Vector3D_toString(t_Vector3D *self, PyObject *args)
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

            return callSuper(PY_TYPE(Vector3D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_Vector3D_get__alpha(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAlpha());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__delta(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDelta());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__infinite(t_Vector3D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector3D_get__naN(t_Vector3D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector3D_get__norm(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__norm1(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__normInf(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__normSq(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormSq());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__space(t_Vector3D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_Vector3D_get__x(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getX());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__y(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getY());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__z(t_Vector3D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getZ());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector3D_get__zero(t_Vector3D *self, void *data)
          {
            Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getZero());
            return t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventsLogger.h"
#include "org/orekit/propagation/events/EventsLogger$LoggedEvent.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventsLogger::class$ = NULL;
        jmethodID *EventsLogger::mids$ = NULL;
        bool EventsLogger::live$ = false;

        jclass EventsLogger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventsLogger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_clearLoggedEvents_ff7cb6c242604316] = env->getMethodID(cls, "clearLoggedEvents", "()V");
            mids$[mid_getLoggedEvents_d751c1a57012b438] = env->getMethodID(cls, "getLoggedEvents", "()Ljava/util/List;");
            mids$[mid_monitorDetector_2a1c444a738d08c2] = env->getMethodID(cls, "monitorDetector", "(Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/EventDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventsLogger::EventsLogger() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void EventsLogger::clearLoggedEvents() const
        {
          env->callVoidMethod(this$, mids$[mid_clearLoggedEvents_ff7cb6c242604316]);
        }

        ::java::util::List EventsLogger::getLoggedEvents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLoggedEvents_d751c1a57012b438]));
        }

        ::org::orekit::propagation::events::EventDetector EventsLogger::monitorDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_monitorDetector_2a1c444a738d08c2], a0.this$));
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
        static PyObject *t_EventsLogger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventsLogger_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EventsLogger_init_(t_EventsLogger *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventsLogger_clearLoggedEvents(t_EventsLogger *self);
        static PyObject *t_EventsLogger_getLoggedEvents(t_EventsLogger *self);
        static PyObject *t_EventsLogger_monitorDetector(t_EventsLogger *self, PyObject *arg);
        static PyObject *t_EventsLogger_get__loggedEvents(t_EventsLogger *self, void *data);
        static PyGetSetDef t_EventsLogger__fields_[] = {
          DECLARE_GET_FIELD(t_EventsLogger, loggedEvents),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventsLogger__methods_[] = {
          DECLARE_METHOD(t_EventsLogger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger, clearLoggedEvents, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger, getLoggedEvents, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger, monitorDetector, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventsLogger)[] = {
          { Py_tp_methods, t_EventsLogger__methods_ },
          { Py_tp_init, (void *) t_EventsLogger_init_ },
          { Py_tp_getset, t_EventsLogger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventsLogger)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventsLogger, t_EventsLogger, EventsLogger);

        void t_EventsLogger::install(PyObject *module)
        {
          installType(&PY_TYPE(EventsLogger), &PY_TYPE_DEF(EventsLogger), module, "EventsLogger", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "LoggedEvent", make_descriptor(&PY_TYPE_DEF(EventsLogger$LoggedEvent)));
        }

        void t_EventsLogger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "class_", make_descriptor(EventsLogger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "wrapfn_", make_descriptor(t_EventsLogger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventsLogger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventsLogger::initializeClass, 1)))
            return NULL;
          return t_EventsLogger::wrap_Object(EventsLogger(((t_EventsLogger *) arg)->object.this$));
        }
        static PyObject *t_EventsLogger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventsLogger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EventsLogger_init_(t_EventsLogger *self, PyObject *args, PyObject *kwds)
        {
          EventsLogger object((jobject) NULL);

          INT_CALL(object = EventsLogger());
          self->object = object;

          return 0;
        }

        static PyObject *t_EventsLogger_clearLoggedEvents(t_EventsLogger *self)
        {
          OBJ_CALL(self->object.clearLoggedEvents());
          Py_RETURN_NONE;
        }

        static PyObject *t_EventsLogger_getLoggedEvents(t_EventsLogger *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getLoggedEvents());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventsLogger$LoggedEvent));
        }

        static PyObject *t_EventsLogger_monitorDetector(t_EventsLogger *self, PyObject *arg)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.monitorDetector(a0));
            return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "monitorDetector", arg);
          return NULL;
        }

        static PyObject *t_EventsLogger_get__loggedEvents(t_EventsLogger *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getLoggedEvents());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *GoalType::class$ = NULL;
          jmethodID *GoalType::mids$ = NULL;
          bool GoalType::live$ = false;
          GoalType *GoalType::MAXIMIZE = NULL;
          GoalType *GoalType::MINIMIZE = NULL;

          jclass GoalType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/GoalType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_b25b1c4fbae773d5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");
              mids$[mid_values_ba8d3784dbac0092] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MAXIMIZE = new GoalType(env->getStaticObjectField(cls, "MAXIMIZE", "Lorg/hipparchus/optim/nonlinear/scalar/GoalType;"));
              MINIMIZE = new GoalType(env->getStaticObjectField(cls, "MINIMIZE", "Lorg/hipparchus/optim/nonlinear/scalar/GoalType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GoalType GoalType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return GoalType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b25b1c4fbae773d5], a0.this$));
          }

          JArray< GoalType > GoalType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< GoalType >(env->callStaticObjectMethod(cls, mids$[mid_values_ba8d3784dbac0092]));
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
          static PyObject *t_GoalType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GoalType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GoalType_of_(t_GoalType *self, PyObject *args);
          static PyObject *t_GoalType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_GoalType_values(PyTypeObject *type);
          static PyObject *t_GoalType_get__parameters_(t_GoalType *self, void *data);
          static PyGetSetDef t_GoalType__fields_[] = {
            DECLARE_GET_FIELD(t_GoalType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GoalType__methods_[] = {
            DECLARE_METHOD(t_GoalType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GoalType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GoalType, of_, METH_VARARGS),
            DECLARE_METHOD(t_GoalType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GoalType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GoalType)[] = {
            { Py_tp_methods, t_GoalType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GoalType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GoalType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(GoalType, t_GoalType, GoalType);
          PyObject *t_GoalType::wrap_Object(const GoalType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GoalType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GoalType *self = (t_GoalType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_GoalType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GoalType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GoalType *self = (t_GoalType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_GoalType::install(PyObject *module)
          {
            installType(&PY_TYPE(GoalType), &PY_TYPE_DEF(GoalType), module, "GoalType", 0);
          }

          void t_GoalType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "class_", make_descriptor(GoalType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "wrapfn_", make_descriptor(t_GoalType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "boxfn_", make_descriptor(boxObject));
            env->getClass(GoalType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "MAXIMIZE", make_descriptor(t_GoalType::wrap_Object(*GoalType::MAXIMIZE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "MINIMIZE", make_descriptor(t_GoalType::wrap_Object(*GoalType::MINIMIZE)));
          }

          static PyObject *t_GoalType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GoalType::initializeClass, 1)))
              return NULL;
            return t_GoalType::wrap_Object(GoalType(((t_GoalType *) arg)->object.this$));
          }
          static PyObject *t_GoalType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GoalType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GoalType_of_(t_GoalType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_GoalType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            GoalType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::GoalType::valueOf(a0));
              return t_GoalType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_GoalType_values(PyTypeObject *type)
          {
            JArray< GoalType > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::GoalType::values());
            return JArray<jobject>(result.this$).wrap(t_GoalType::wrap_jobject);
          }
          static PyObject *t_GoalType_get__parameters_(t_GoalType *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/MultivariateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *MultivariateInterpolator::class$ = NULL;
        jmethodID *MultivariateInterpolator::mids$ = NULL;
        bool MultivariateInterpolator::live$ = false;

        jclass MultivariateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/MultivariateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_cc20eacf9f3f822e] = env->getMethodID(cls, "interpolate", "([[D[D)Lorg/hipparchus/analysis/MultivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::MultivariateFunction MultivariateInterpolator::interpolate(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::MultivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_cc20eacf9f3f822e], a0.this$, a1.this$));
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
        static PyObject *t_MultivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateInterpolator_interpolate(t_MultivariateInterpolator *self, PyObject *args);

        static PyMethodDef t_MultivariateInterpolator__methods_[] = {
          DECLARE_METHOD(t_MultivariateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateInterpolator)[] = {
          { Py_tp_methods, t_MultivariateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultivariateInterpolator, t_MultivariateInterpolator, MultivariateInterpolator);

        void t_MultivariateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateInterpolator), &PY_TYPE_DEF(MultivariateInterpolator), module, "MultivariateInterpolator", 0);
        }

        void t_MultivariateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateInterpolator), "class_", make_descriptor(MultivariateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateInterpolator), "wrapfn_", make_descriptor(t_MultivariateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateInterpolator::initializeClass, 1)))
            return NULL;
          return t_MultivariateInterpolator::wrap_Object(MultivariateInterpolator(((t_MultivariateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_MultivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultivariateInterpolator_interpolate(t_MultivariateInterpolator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
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
#include "org/hipparchus/analysis/interpolation/AkimaSplineInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *AkimaSplineInterpolator::class$ = NULL;
        jmethodID *AkimaSplineInterpolator::mids$ = NULL;
        bool AkimaSplineInterpolator::live$ = false;

        jclass AkimaSplineInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/AkimaSplineInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_b35db77cae58639e] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_interpolate_d112b93e44ec98b7] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_interpolate_675f76d3ea97467b] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AkimaSplineInterpolator::AkimaSplineInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        AkimaSplineInterpolator::AkimaSplineInterpolator(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b35db77cae58639e, a0)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction AkimaSplineInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_d112b93e44ec98b7], a0.this$, a1.this$));
        }

        ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction AkimaSplineInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_675f76d3ea97467b], a0.this$, a1.this$));
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
        static PyObject *t_AkimaSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AkimaSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AkimaSplineInterpolator_init_(t_AkimaSplineInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AkimaSplineInterpolator_interpolate(t_AkimaSplineInterpolator *self, PyObject *args);

        static PyMethodDef t_AkimaSplineInterpolator__methods_[] = {
          DECLARE_METHOD(t_AkimaSplineInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AkimaSplineInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AkimaSplineInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AkimaSplineInterpolator)[] = {
          { Py_tp_methods, t_AkimaSplineInterpolator__methods_ },
          { Py_tp_init, (void *) t_AkimaSplineInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AkimaSplineInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AkimaSplineInterpolator, t_AkimaSplineInterpolator, AkimaSplineInterpolator);

        void t_AkimaSplineInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(AkimaSplineInterpolator), &PY_TYPE_DEF(AkimaSplineInterpolator), module, "AkimaSplineInterpolator", 0);
        }

        void t_AkimaSplineInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AkimaSplineInterpolator), "class_", make_descriptor(AkimaSplineInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AkimaSplineInterpolator), "wrapfn_", make_descriptor(t_AkimaSplineInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AkimaSplineInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AkimaSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AkimaSplineInterpolator::initializeClass, 1)))
            return NULL;
          return t_AkimaSplineInterpolator::wrap_Object(AkimaSplineInterpolator(((t_AkimaSplineInterpolator *) arg)->object.this$));
        }
        static PyObject *t_AkimaSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AkimaSplineInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AkimaSplineInterpolator_init_(t_AkimaSplineInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              AkimaSplineInterpolator object((jobject) NULL);

              INT_CALL(object = AkimaSplineInterpolator());
              self->object = object;
              break;
            }
           case 1:
            {
              jboolean a0;
              AkimaSplineInterpolator object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = AkimaSplineInterpolator(a0));
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

        static PyObject *t_AkimaSplineInterpolator_interpolate(t_AkimaSplineInterpolator *self, PyObject *args)
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
#include "org/hipparchus/linear/RealVector$Entry.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVector$Entry::class$ = NULL;
      jmethodID *RealVector$Entry::mids$ = NULL;
      bool RealVector$Entry::live$ = false;

      jclass RealVector$Entry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVector$Entry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_99bb541b0ecf3230] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_getIndex_d6ab429752e7c267] = env->getMethodID(cls, "getIndex", "()I");
          mids$[mid_getValue_9981f74b2d109da6] = env->getMethodID(cls, "getValue", "()D");
          mids$[mid_setIndex_8fd427ab23829bf5] = env->getMethodID(cls, "setIndex", "(I)V");
          mids$[mid_setValue_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setValue", "(D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealVector$Entry::RealVector$Entry(const ::org::hipparchus::linear::RealVector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99bb541b0ecf3230, a0.this$)) {}

      jint RealVector$Entry::getIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getIndex_d6ab429752e7c267]);
      }

      jdouble RealVector$Entry::getValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_9981f74b2d109da6]);
      }

      void RealVector$Entry::setIndex(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setIndex_8fd427ab23829bf5], a0);
      }

      void RealVector$Entry::setValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setValue_1ad26e8c8c0cd65b], a0);
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
      static PyObject *t_RealVector$Entry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVector$Entry_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealVector$Entry_init_(t_RealVector$Entry *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealVector$Entry_getIndex(t_RealVector$Entry *self);
      static PyObject *t_RealVector$Entry_getValue(t_RealVector$Entry *self);
      static PyObject *t_RealVector$Entry_setIndex(t_RealVector$Entry *self, PyObject *arg);
      static PyObject *t_RealVector$Entry_setValue(t_RealVector$Entry *self, PyObject *arg);
      static PyObject *t_RealVector$Entry_get__index(t_RealVector$Entry *self, void *data);
      static int t_RealVector$Entry_set__index(t_RealVector$Entry *self, PyObject *arg, void *data);
      static PyObject *t_RealVector$Entry_get__value(t_RealVector$Entry *self, void *data);
      static int t_RealVector$Entry_set__value(t_RealVector$Entry *self, PyObject *arg, void *data);
      static PyGetSetDef t_RealVector$Entry__fields_[] = {
        DECLARE_GETSET_FIELD(t_RealVector$Entry, index),
        DECLARE_GETSET_FIELD(t_RealVector$Entry, value),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealVector$Entry__methods_[] = {
        DECLARE_METHOD(t_RealVector$Entry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector$Entry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector$Entry, getIndex, METH_NOARGS),
        DECLARE_METHOD(t_RealVector$Entry, getValue, METH_NOARGS),
        DECLARE_METHOD(t_RealVector$Entry, setIndex, METH_O),
        DECLARE_METHOD(t_RealVector$Entry, setValue, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVector$Entry)[] = {
        { Py_tp_methods, t_RealVector$Entry__methods_ },
        { Py_tp_init, (void *) t_RealVector$Entry_init_ },
        { Py_tp_getset, t_RealVector$Entry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVector$Entry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVector$Entry, t_RealVector$Entry, RealVector$Entry);

      void t_RealVector$Entry::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVector$Entry), &PY_TYPE_DEF(RealVector$Entry), module, "RealVector$Entry", 0);
      }

      void t_RealVector$Entry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector$Entry), "class_", make_descriptor(RealVector$Entry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector$Entry), "wrapfn_", make_descriptor(t_RealVector$Entry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector$Entry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVector$Entry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVector$Entry::initializeClass, 1)))
          return NULL;
        return t_RealVector$Entry::wrap_Object(RealVector$Entry(((t_RealVector$Entry *) arg)->object.this$));
      }
      static PyObject *t_RealVector$Entry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVector$Entry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealVector$Entry_init_(t_RealVector$Entry *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        RealVector$Entry object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          INT_CALL(object = RealVector$Entry(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_RealVector$Entry_getIndex(t_RealVector$Entry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector$Entry_getValue(t_RealVector$Entry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector$Entry_setIndex(t_RealVector$Entry *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setIndex(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setIndex", arg);
        return NULL;
      }

      static PyObject *t_RealVector$Entry_setValue(t_RealVector$Entry *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setValue", arg);
        return NULL;
      }

      static PyObject *t_RealVector$Entry_get__index(t_RealVector$Entry *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIndex());
        return PyLong_FromLong((long) value);
      }
      static int t_RealVector$Entry_set__index(t_RealVector$Entry *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setIndex(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "index", arg);
        return -1;
      }

      static PyObject *t_RealVector$Entry_get__value(t_RealVector$Entry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_RealVector$Entry_set__value(t_RealVector$Entry *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldOrekitFixedStepHandler::class$ = NULL;
        jmethodID *FieldOrekitFixedStepHandler::mids$ = NULL;
        bool FieldOrekitFixedStepHandler::live$ = false;

        jclass FieldOrekitFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldOrekitFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_8062511934471166] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_8062511934471166] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_init_8e7d4ddea41a1ea0] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldOrekitFixedStepHandler::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_8062511934471166], a0.this$);
        }

        void FieldOrekitFixedStepHandler::handleStep(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_8062511934471166], a0.this$);
        }

        void FieldOrekitFixedStepHandler::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8e7d4ddea41a1ea0], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_FieldOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_of_(t_FieldOrekitFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldOrekitFixedStepHandler_finish(t_FieldOrekitFixedStepHandler *self, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_handleStep(t_FieldOrekitFixedStepHandler *self, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_init(t_FieldOrekitFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldOrekitFixedStepHandler_get__parameters_(t_FieldOrekitFixedStepHandler *self, void *data);
        static PyGetSetDef t_FieldOrekitFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOrekitFixedStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOrekitFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, finish, METH_O),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOrekitFixedStepHandler)[] = {
          { Py_tp_methods, t_FieldOrekitFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOrekitFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOrekitFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldOrekitFixedStepHandler, t_FieldOrekitFixedStepHandler, FieldOrekitFixedStepHandler);
        PyObject *t_FieldOrekitFixedStepHandler::wrap_Object(const FieldOrekitFixedStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitFixedStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitFixedStepHandler *self = (t_FieldOrekitFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOrekitFixedStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitFixedStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitFixedStepHandler *self = (t_FieldOrekitFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOrekitFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOrekitFixedStepHandler), &PY_TYPE_DEF(FieldOrekitFixedStepHandler), module, "FieldOrekitFixedStepHandler", 0);
        }

        void t_FieldOrekitFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitFixedStepHandler), "class_", make_descriptor(FieldOrekitFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitFixedStepHandler), "wrapfn_", make_descriptor(t_FieldOrekitFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOrekitFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldOrekitFixedStepHandler::wrap_Object(FieldOrekitFixedStepHandler(((t_FieldOrekitFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOrekitFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOrekitFixedStepHandler_of_(t_FieldOrekitFixedStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldOrekitFixedStepHandler_finish(t_FieldOrekitFixedStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitFixedStepHandler_handleStep(t_FieldOrekitFixedStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitFixedStepHandler_init(t_FieldOrekitFixedStepHandler *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "KKK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldOrekitFixedStepHandler_get__parameters_(t_FieldOrekitFixedStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *S2Point::class$ = NULL;
          jmethodID *S2Point::mids$ = NULL;
          bool S2Point::live$ = false;
          S2Point *S2Point::MINUS_I = NULL;
          S2Point *S2Point::MINUS_J = NULL;
          S2Point *S2Point::MINUS_K = NULL;
          S2Point *S2Point::NaN = NULL;
          S2Point *S2Point::PLUS_I = NULL;
          S2Point *S2Point::PLUS_J = NULL;
          S2Point *S2Point::PLUS_K = NULL;

          jclass S2Point::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/S2Point");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_30f8886dfb88a63c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_distance_277cb62c4ec87155] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_6a34f228015871ea] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;Lorg/hipparchus/geometry/spherical/twod/S2Point;)D");
              mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_72faff9b05f5ed5e] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getPhi_9981f74b2d109da6] = env->getMethodID(cls, "getPhi", "()D");
              mids$[mid_getSpace_a30bf0b437744017] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getTheta_9981f74b2d109da6] = env->getMethodID(cls, "getTheta", "()D");
              mids$[mid_getVector_032312bdeb3f2f93] = env->getMethodID(cls, "getVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isNaN_eee3de00fe971136] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_e080ae8a5cf76560] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MINUS_I = new S2Point(env->getStaticObjectField(cls, "MINUS_I", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              MINUS_J = new S2Point(env->getStaticObjectField(cls, "MINUS_J", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              MINUS_K = new S2Point(env->getStaticObjectField(cls, "MINUS_K", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              NaN = new S2Point(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              PLUS_I = new S2Point(env->getStaticObjectField(cls, "PLUS_I", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              PLUS_J = new S2Point(env->getStaticObjectField(cls, "PLUS_J", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              PLUS_K = new S2Point(env->getStaticObjectField(cls, "PLUS_K", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          S2Point::S2Point(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30f8886dfb88a63c, a0.this$)) {}

          S2Point::S2Point(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

          jdouble S2Point::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_277cb62c4ec87155], a0.this$);
          }

          jdouble S2Point::distance(const S2Point & a0, const S2Point & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_6a34f228015871ea], a0.this$, a1.this$);
          }

          jboolean S2Point::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
          }

          jboolean S2Point::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_72faff9b05f5ed5e], a0.this$);
          }

          jdouble S2Point::getPhi() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhi_9981f74b2d109da6]);
          }

          ::org::hipparchus::geometry::Space S2Point::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_a30bf0b437744017]));
          }

          jdouble S2Point::getTheta() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTheta_9981f74b2d109da6]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D S2Point::getVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVector_032312bdeb3f2f93]));
          }

          jint S2Point::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
          }

          jboolean S2Point::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_eee3de00fe971136]);
          }

          S2Point S2Point::negate() const
          {
            return S2Point(env->callObjectMethod(this$, mids$[mid_negate_e080ae8a5cf76560]));
          }

          ::java::lang::String S2Point::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      namespace spherical {
        namespace twod {
          static PyObject *t_S2Point_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_S2Point_instance_(PyTypeObject *type, PyObject *arg);
          static int t_S2Point_init_(t_S2Point *self, PyObject *args, PyObject *kwds);
          static PyObject *t_S2Point_distance(t_S2Point *self, PyObject *arg);
          static PyObject *t_S2Point_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_S2Point_equals(t_S2Point *self, PyObject *args);
          static PyObject *t_S2Point_equalsIeee754(t_S2Point *self, PyObject *arg);
          static PyObject *t_S2Point_getPhi(t_S2Point *self);
          static PyObject *t_S2Point_getSpace(t_S2Point *self);
          static PyObject *t_S2Point_getTheta(t_S2Point *self);
          static PyObject *t_S2Point_getVector(t_S2Point *self);
          static PyObject *t_S2Point_hashCode(t_S2Point *self, PyObject *args);
          static PyObject *t_S2Point_isNaN(t_S2Point *self);
          static PyObject *t_S2Point_negate(t_S2Point *self);
          static PyObject *t_S2Point_toString(t_S2Point *self, PyObject *args);
          static PyObject *t_S2Point_get__naN(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__phi(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__space(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__theta(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__vector(t_S2Point *self, void *data);
          static PyGetSetDef t_S2Point__fields_[] = {
            DECLARE_GET_FIELD(t_S2Point, naN),
            DECLARE_GET_FIELD(t_S2Point, phi),
            DECLARE_GET_FIELD(t_S2Point, space),
            DECLARE_GET_FIELD(t_S2Point, theta),
            DECLARE_GET_FIELD(t_S2Point, vector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_S2Point__methods_[] = {
            DECLARE_METHOD(t_S2Point, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_S2Point, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_S2Point, distance, METH_O),
            DECLARE_METHOD(t_S2Point, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_S2Point, equals, METH_VARARGS),
            DECLARE_METHOD(t_S2Point, equalsIeee754, METH_O),
            DECLARE_METHOD(t_S2Point, getPhi, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, getTheta, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, getVector, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_S2Point, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, negate, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(S2Point)[] = {
            { Py_tp_methods, t_S2Point__methods_ },
            { Py_tp_init, (void *) t_S2Point_init_ },
            { Py_tp_getset, t_S2Point__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(S2Point)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(S2Point, t_S2Point, S2Point);

          void t_S2Point::install(PyObject *module)
          {
            installType(&PY_TYPE(S2Point), &PY_TYPE_DEF(S2Point), module, "S2Point", 0);
          }

          void t_S2Point::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "class_", make_descriptor(S2Point::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "wrapfn_", make_descriptor(t_S2Point::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "boxfn_", make_descriptor(boxObject));
            env->getClass(S2Point::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "MINUS_I", make_descriptor(t_S2Point::wrap_Object(*S2Point::MINUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "MINUS_J", make_descriptor(t_S2Point::wrap_Object(*S2Point::MINUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "MINUS_K", make_descriptor(t_S2Point::wrap_Object(*S2Point::MINUS_K)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "NaN", make_descriptor(t_S2Point::wrap_Object(*S2Point::NaN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "PLUS_I", make_descriptor(t_S2Point::wrap_Object(*S2Point::PLUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "PLUS_J", make_descriptor(t_S2Point::wrap_Object(*S2Point::PLUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "PLUS_K", make_descriptor(t_S2Point::wrap_Object(*S2Point::PLUS_K)));
          }

          static PyObject *t_S2Point_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, S2Point::initializeClass, 1)))
              return NULL;
            return t_S2Point::wrap_Object(S2Point(((t_S2Point *) arg)->object.this$));
          }
          static PyObject *t_S2Point_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, S2Point::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_S2Point_init_(t_S2Point *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                S2Point object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  INT_CALL(object = S2Point(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                jdouble a1;
                S2Point object((jobject) NULL);

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  INT_CALL(object = S2Point(a0, a1));
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

          static PyObject *t_S2Point_distance(t_S2Point *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_S2Point_distance_(PyTypeObject *type, PyObject *args)
          {
            S2Point a0((jobject) NULL);
            S2Point a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", S2Point::initializeClass, S2Point::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::spherical::twod::S2Point::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_S2Point_equals(t_S2Point *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(S2Point), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_S2Point_equalsIeee754(t_S2Point *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.equalsIeee754(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "equalsIeee754", arg);
            return NULL;
          }

          static PyObject *t_S2Point_getPhi(t_S2Point *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPhi());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_S2Point_getSpace(t_S2Point *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_S2Point_getTheta(t_S2Point *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTheta());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_S2Point_getVector(t_S2Point *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_S2Point_hashCode(t_S2Point *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(S2Point), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_S2Point_isNaN(t_S2Point *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_S2Point_negate(t_S2Point *self)
          {
            S2Point result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_S2Point::wrap_Object(result);
          }

          static PyObject *t_S2Point_toString(t_S2Point *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(S2Point), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_S2Point_get__naN(t_S2Point *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_S2Point_get__phi(t_S2Point *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPhi());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_S2Point_get__space(t_S2Point *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_S2Point_get__theta(t_S2Point *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTheta());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_S2Point_get__vector(t_S2Point *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Expm1.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Expm1::class$ = NULL;
        jmethodID *Expm1::mids$ = NULL;
        bool Expm1::live$ = false;

        jclass Expm1::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Expm1");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Expm1::Expm1() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Expm1::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Expm1::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Expm1_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Expm1_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Expm1_init_(t_Expm1 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Expm1_value(t_Expm1 *self, PyObject *args);

        static PyMethodDef t_Expm1__methods_[] = {
          DECLARE_METHOD(t_Expm1, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Expm1, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Expm1, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Expm1)[] = {
          { Py_tp_methods, t_Expm1__methods_ },
          { Py_tp_init, (void *) t_Expm1_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Expm1)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Expm1, t_Expm1, Expm1);

        void t_Expm1::install(PyObject *module)
        {
          installType(&PY_TYPE(Expm1), &PY_TYPE_DEF(Expm1), module, "Expm1", 0);
        }

        void t_Expm1::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Expm1), "class_", make_descriptor(Expm1::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Expm1), "wrapfn_", make_descriptor(t_Expm1::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Expm1), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Expm1_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Expm1::initializeClass, 1)))
            return NULL;
          return t_Expm1::wrap_Object(Expm1(((t_Expm1 *) arg)->object.this$));
        }
        static PyObject *t_Expm1_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Expm1::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Expm1_init_(t_Expm1 *self, PyObject *args, PyObject *kwds)
        {
          Expm1 object((jobject) NULL);

          INT_CALL(object = Expm1());
          self->object = object;

          return 0;
        }

        static PyObject *t_Expm1_value(t_Expm1 *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovariance.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovariance::class$ = NULL;
              jmethodID *AttitudeCovariance::mids$ = NULL;
              bool AttitudeCovariance::live$ = false;

              jclass AttitudeCovariance::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovariance");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_671b73630fd8606f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;I)V");
                  mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getMatrix_4fb5d9750db49b3f] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/DiagonalMatrix;");
                  mids$[mid_getType_74687e132732dee9] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeCovariance::AttitudeCovariance(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< ::java::lang::String > & a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_671b73630fd8606f, a0.this$, a1.this$, a2.this$, a3)) {}

              ::org::orekit::time::AbsoluteDate AttitudeCovariance::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
              }

              ::org::hipparchus::linear::DiagonalMatrix AttitudeCovariance::getMatrix() const
              {
                return ::org::hipparchus::linear::DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_4fb5d9750db49b3f]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType AttitudeCovariance::getType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType(env->callObjectMethod(this$, mids$[mid_getType_74687e132732dee9]));
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
              static PyObject *t_AttitudeCovariance_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovariance_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeCovariance_init_(t_AttitudeCovariance *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeCovariance_getDate(t_AttitudeCovariance *self);
              static PyObject *t_AttitudeCovariance_getMatrix(t_AttitudeCovariance *self);
              static PyObject *t_AttitudeCovariance_getType(t_AttitudeCovariance *self);
              static PyObject *t_AttitudeCovariance_get__date(t_AttitudeCovariance *self, void *data);
              static PyObject *t_AttitudeCovariance_get__matrix(t_AttitudeCovariance *self, void *data);
              static PyObject *t_AttitudeCovariance_get__type(t_AttitudeCovariance *self, void *data);
              static PyGetSetDef t_AttitudeCovariance__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovariance, date),
                DECLARE_GET_FIELD(t_AttitudeCovariance, matrix),
                DECLARE_GET_FIELD(t_AttitudeCovariance, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovariance__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovariance, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovariance, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovariance, getDate, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovariance, getMatrix, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovariance, getType, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovariance)[] = {
                { Py_tp_methods, t_AttitudeCovariance__methods_ },
                { Py_tp_init, (void *) t_AttitudeCovariance_init_ },
                { Py_tp_getset, t_AttitudeCovariance__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovariance)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeCovariance, t_AttitudeCovariance, AttitudeCovariance);

              void t_AttitudeCovariance::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovariance), &PY_TYPE_DEF(AttitudeCovariance), module, "AttitudeCovariance", 0);
              }

              void t_AttitudeCovariance::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovariance), "class_", make_descriptor(AttitudeCovariance::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovariance), "wrapfn_", make_descriptor(t_AttitudeCovariance::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovariance), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeCovariance_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovariance::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovariance::wrap_Object(AttitudeCovariance(((t_AttitudeCovariance *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovariance_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovariance::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeCovariance_init_(t_AttitudeCovariance *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                JArray< ::java::lang::String > a2((jobject) NULL);
                jint a3;
                AttitudeCovariance object((jobject) NULL);

                if (!parseArgs(args, "Kk[sI", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::parameters_, &a1, &a2, &a3))
                {
                  INT_CALL(object = AttitudeCovariance(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeCovariance_getDate(t_AttitudeCovariance *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovariance_getMatrix(t_AttitudeCovariance *self)
              {
                ::org::hipparchus::linear::DiagonalMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getMatrix());
                return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovariance_getType(t_AttitudeCovariance *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType result((jobject) NULL);
                OBJ_CALL(result = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovariance_get__date(t_AttitudeCovariance *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AttitudeCovariance_get__matrix(t_AttitudeCovariance *self, void *data)
              {
                ::org::hipparchus::linear::DiagonalMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getMatrix());
                return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(value);
              }

              static PyObject *t_AttitudeCovariance_get__type(t_AttitudeCovariance *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(value);
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
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitAttitudeEphemerisFile::class$ = NULL;
        jmethodID *OrekitAttitudeEphemerisFile::mids$ = NULL;
        bool OrekitAttitudeEphemerisFile::live$ = false;

        jclass OrekitAttitudeEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitAttitudeEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSatellite_67bc7b446e4221eb] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)Lorg/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris;");
            mids$[mid_getSatellites_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitAttitudeEphemerisFile::OrekitAttitudeEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris OrekitAttitudeEphemerisFile::addSatellite(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(env->callObjectMethod(this$, mids$[mid_addSatellite_67bc7b446e4221eb], a0.this$));
        }

        ::java::util::Map OrekitAttitudeEphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_dbcb8bbac6b35e0d]));
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
      namespace general {
        static PyObject *t_OrekitAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitAttitudeEphemerisFile_init_(t_OrekitAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitAttitudeEphemerisFile_addSatellite(t_OrekitAttitudeEphemerisFile *self, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile_getSatellites(t_OrekitAttitudeEphemerisFile *self);
        static PyObject *t_OrekitAttitudeEphemerisFile_get__satellites(t_OrekitAttitudeEphemerisFile *self, void *data);
        static PyGetSetDef t_OrekitAttitudeEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile, satellites),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitAttitudeEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, addSatellite, METH_O),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitAttitudeEphemerisFile)[] = {
          { Py_tp_methods, t_OrekitAttitudeEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_OrekitAttitudeEphemerisFile_init_ },
          { Py_tp_getset, t_OrekitAttitudeEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitAttitudeEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitAttitudeEphemerisFile, t_OrekitAttitudeEphemerisFile, OrekitAttitudeEphemerisFile);

        void t_OrekitAttitudeEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitAttitudeEphemerisFile), &PY_TYPE_DEF(OrekitAttitudeEphemerisFile), module, "OrekitAttitudeEphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "OrekitAttitudeEphemerisSegment", make_descriptor(&PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "OrekitSatelliteAttitudeEphemeris", make_descriptor(&PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris)));
        }

        void t_OrekitAttitudeEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "class_", make_descriptor(OrekitAttitudeEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "wrapfn_", make_descriptor(t_OrekitAttitudeEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitAttitudeEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_OrekitAttitudeEphemerisFile::wrap_Object(OrekitAttitudeEphemerisFile(((t_OrekitAttitudeEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_OrekitAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitAttitudeEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitAttitudeEphemerisFile_init_(t_OrekitAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          OrekitAttitudeEphemerisFile object((jobject) NULL);

          INT_CALL(object = OrekitAttitudeEphemerisFile());
          self->object = object;

          return 0;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_addSatellite(t_OrekitAttitudeEphemerisFile *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.addSatellite(a0));
            return ::org::orekit::files::general::t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addSatellite", arg);
          return NULL;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_getSatellites(t_OrekitAttitudeEphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::general::PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_get__satellites(t_OrekitAttitudeEphemerisFile *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/UnivariateProcessNoise.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnivariateProcessNoise::class$ = NULL;
        jmethodID *UnivariateProcessNoise::mids$ = NULL;
        bool UnivariateProcessNoise::live$ = false;

        jclass UnivariateProcessNoise::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnivariateProcessNoise");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_da56bfb3586596d3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/frames/LOFType;Lorg/orekit/orbits/PositionAngleType;[Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;)V");
            mids$[mid_init$_8b85f6a74f87586c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/frames/LOFType;Lorg/orekit/orbits/PositionAngleType;[Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;)V");
            mids$[mid_getLofCartesianOrbitalParametersEvolution_21d51b42b1c70b62] = env->getMethodID(cls, "getLofCartesianOrbitalParametersEvolution", "()[Lorg/hipparchus/analysis/UnivariateFunction;");
            mids$[mid_getLofType_2ef6889b4bcd6216] = env->getMethodID(cls, "getLofType", "()Lorg/orekit/frames/LOFType;");
            mids$[mid_getMeasurementsParametersEvolution_21d51b42b1c70b62] = env->getMethodID(cls, "getMeasurementsParametersEvolution", "()[Lorg/hipparchus/analysis/UnivariateFunction;");
            mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getProcessNoiseMatrix_70abd86226561523] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPropagationParametersEvolution_21d51b42b1c70b62] = env->getMethodID(cls, "getPropagationParametersEvolution", "()[Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateProcessNoise::UnivariateProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::frames::LOFType & a1, const ::org::orekit::orbits::PositionAngleType & a2, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a3, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a4) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_da56bfb3586596d3, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        UnivariateProcessNoise::UnivariateProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::frames::LOFType & a1, const ::org::orekit::orbits::PositionAngleType & a2, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a3, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a4, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a5) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_8b85f6a74f87586c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        JArray< ::org::hipparchus::analysis::UnivariateFunction > UnivariateProcessNoise::getLofCartesianOrbitalParametersEvolution() const
        {
          return JArray< ::org::hipparchus::analysis::UnivariateFunction >(env->callObjectMethod(this$, mids$[mid_getLofCartesianOrbitalParametersEvolution_21d51b42b1c70b62]));
        }

        ::org::orekit::frames::LOFType UnivariateProcessNoise::getLofType() const
        {
          return ::org::orekit::frames::LOFType(env->callObjectMethod(this$, mids$[mid_getLofType_2ef6889b4bcd6216]));
        }

        JArray< ::org::hipparchus::analysis::UnivariateFunction > UnivariateProcessNoise::getMeasurementsParametersEvolution() const
        {
          return JArray< ::org::hipparchus::analysis::UnivariateFunction >(env->callObjectMethod(this$, mids$[mid_getMeasurementsParametersEvolution_21d51b42b1c70b62]));
        }

        ::org::orekit::orbits::PositionAngleType UnivariateProcessNoise::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_a6db4e6edefda4be]));
        }

        ::org::hipparchus::linear::RealMatrix UnivariateProcessNoise::getProcessNoiseMatrix(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_70abd86226561523], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::analysis::UnivariateFunction > UnivariateProcessNoise::getPropagationParametersEvolution() const
        {
          return JArray< ::org::hipparchus::analysis::UnivariateFunction >(env->callObjectMethod(this$, mids$[mid_getPropagationParametersEvolution_21d51b42b1c70b62]));
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
        static PyObject *t_UnivariateProcessNoise_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateProcessNoise_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariateProcessNoise_init_(t_UnivariateProcessNoise *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateProcessNoise_getLofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getLofType(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getMeasurementsParametersEvolution(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getPositionAngleType(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getProcessNoiseMatrix(t_UnivariateProcessNoise *self, PyObject *args);
        static PyObject *t_UnivariateProcessNoise_getPropagationParametersEvolution(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_get__lofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__lofType(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__measurementsParametersEvolution(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__positionAngleType(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__propagationParametersEvolution(t_UnivariateProcessNoise *self, void *data);
        static PyGetSetDef t_UnivariateProcessNoise__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, lofCartesianOrbitalParametersEvolution),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, lofType),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, measurementsParametersEvolution),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, positionAngleType),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, propagationParametersEvolution),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateProcessNoise__methods_[] = {
          DECLARE_METHOD(t_UnivariateProcessNoise, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateProcessNoise, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getLofCartesianOrbitalParametersEvolution, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getLofType, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getMeasurementsParametersEvolution, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getProcessNoiseMatrix, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getPropagationParametersEvolution, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateProcessNoise)[] = {
          { Py_tp_methods, t_UnivariateProcessNoise__methods_ },
          { Py_tp_init, (void *) t_UnivariateProcessNoise_init_ },
          { Py_tp_getset, t_UnivariateProcessNoise__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateProcessNoise)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider),
          NULL
        };

        DEFINE_TYPE(UnivariateProcessNoise, t_UnivariateProcessNoise, UnivariateProcessNoise);

        void t_UnivariateProcessNoise::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateProcessNoise), &PY_TYPE_DEF(UnivariateProcessNoise), module, "UnivariateProcessNoise", 0);
        }

        void t_UnivariateProcessNoise::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateProcessNoise), "class_", make_descriptor(UnivariateProcessNoise::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateProcessNoise), "wrapfn_", make_descriptor(t_UnivariateProcessNoise::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateProcessNoise), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateProcessNoise_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateProcessNoise::initializeClass, 1)))
            return NULL;
          return t_UnivariateProcessNoise::wrap_Object(UnivariateProcessNoise(((t_UnivariateProcessNoise *) arg)->object.this$));
        }
        static PyObject *t_UnivariateProcessNoise_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateProcessNoise::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariateProcessNoise_init_(t_UnivariateProcessNoise *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::orekit::frames::LOFType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a3((jobject) NULL);
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a4((jobject) NULL);
              UnivariateProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "kKK[k[k", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::frames::LOFType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_LOFType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = UnivariateProcessNoise(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::orekit::frames::LOFType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a3((jobject) NULL);
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a4((jobject) NULL);
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a5((jobject) NULL);
              UnivariateProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "kKK[k[k[k", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::frames::LOFType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_LOFType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4, &a5))
              {
                INT_CALL(object = UnivariateProcessNoise(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_UnivariateProcessNoise_getLofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getLofCartesianOrbitalParametersEvolution());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_getLofType(t_UnivariateProcessNoise *self)
        {
          ::org::orekit::frames::LOFType result((jobject) NULL);
          OBJ_CALL(result = self->object.getLofType());
          return ::org::orekit::frames::t_LOFType::wrap_Object(result);
        }

        static PyObject *t_UnivariateProcessNoise_getMeasurementsParametersEvolution(t_UnivariateProcessNoise *self)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurementsParametersEvolution());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_getPositionAngleType(t_UnivariateProcessNoise *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_UnivariateProcessNoise_getProcessNoiseMatrix(t_UnivariateProcessNoise *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProcessNoiseMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateProcessNoise), (PyObject *) self, "getProcessNoiseMatrix", args, 2);
        }

        static PyObject *t_UnivariateProcessNoise_getPropagationParametersEvolution(t_UnivariateProcessNoise *self)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationParametersEvolution());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_get__lofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getLofCartesianOrbitalParametersEvolution());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_get__lofType(t_UnivariateProcessNoise *self, void *data)
        {
          ::org::orekit::frames::LOFType value((jobject) NULL);
          OBJ_CALL(value = self->object.getLofType());
          return ::org::orekit::frames::t_LOFType::wrap_Object(value);
        }

        static PyObject *t_UnivariateProcessNoise_get__measurementsParametersEvolution(t_UnivariateProcessNoise *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurementsParametersEvolution());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_get__positionAngleType(t_UnivariateProcessNoise *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_UnivariateProcessNoise_get__propagationParametersEvolution(t_UnivariateProcessNoise *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationParametersEvolution());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/DividedDifferenceInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *DividedDifferenceInterpolator::class$ = NULL;
        jmethodID *DividedDifferenceInterpolator::mids$ = NULL;
        bool DividedDifferenceInterpolator::live$ = false;

        jclass DividedDifferenceInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/DividedDifferenceInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_efd1b0d4c5507258] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm;");
            mids$[mid_computeDividedDifference_8238c1ebef563b00] = env->getStaticMethodID(cls, "computeDividedDifference", "([D[D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DividedDifferenceInterpolator::DividedDifferenceInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm DividedDifferenceInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm(env->callObjectMethod(this$, mids$[mid_interpolate_efd1b0d4c5507258], a0.this$, a1.this$));
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
        static PyObject *t_DividedDifferenceInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DividedDifferenceInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DividedDifferenceInterpolator_init_(t_DividedDifferenceInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DividedDifferenceInterpolator_interpolate(t_DividedDifferenceInterpolator *self, PyObject *args);

        static PyMethodDef t_DividedDifferenceInterpolator__methods_[] = {
          DECLARE_METHOD(t_DividedDifferenceInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DividedDifferenceInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DividedDifferenceInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DividedDifferenceInterpolator)[] = {
          { Py_tp_methods, t_DividedDifferenceInterpolator__methods_ },
          { Py_tp_init, (void *) t_DividedDifferenceInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DividedDifferenceInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DividedDifferenceInterpolator, t_DividedDifferenceInterpolator, DividedDifferenceInterpolator);

        void t_DividedDifferenceInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(DividedDifferenceInterpolator), &PY_TYPE_DEF(DividedDifferenceInterpolator), module, "DividedDifferenceInterpolator", 0);
        }

        void t_DividedDifferenceInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DividedDifferenceInterpolator), "class_", make_descriptor(DividedDifferenceInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DividedDifferenceInterpolator), "wrapfn_", make_descriptor(t_DividedDifferenceInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DividedDifferenceInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DividedDifferenceInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DividedDifferenceInterpolator::initializeClass, 1)))
            return NULL;
          return t_DividedDifferenceInterpolator::wrap_Object(DividedDifferenceInterpolator(((t_DividedDifferenceInterpolator *) arg)->object.this$));
        }
        static PyObject *t_DividedDifferenceInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DividedDifferenceInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DividedDifferenceInterpolator_init_(t_DividedDifferenceInterpolator *self, PyObject *args, PyObject *kwds)
        {
          DividedDifferenceInterpolator object((jobject) NULL);

          INT_CALL(object = DividedDifferenceInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_DividedDifferenceInterpolator_interpolate(t_DividedDifferenceInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::polynomials::PolynomialFunctionNewtonForm result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunctionNewtonForm::wrap_Object(result);
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
              mids$[mid_getA0_9981f74b2d109da6] = env->getMethodID(cls, "getA0", "()D");
              mids$[mid_getA1_9981f74b2d109da6] = env->getMethodID(cls, "getA1", "()D");
              mids$[mid_getAlpha0_9981f74b2d109da6] = env->getMethodID(cls, "getAlpha0", "()D");
              mids$[mid_getAlpha1_9981f74b2d109da6] = env->getMethodID(cls, "getAlpha1", "()D");
              mids$[mid_getAlpha2_9981f74b2d109da6] = env->getMethodID(cls, "getAlpha2", "()D");
              mids$[mid_getAlpha3_9981f74b2d109da6] = env->getMethodID(cls, "getAlpha3", "()D");
              mids$[mid_getBeta0_9981f74b2d109da6] = env->getMethodID(cls, "getBeta0", "()D");
              mids$[mid_getBeta1_9981f74b2d109da6] = env->getMethodID(cls, "getBeta1", "()D");
              mids$[mid_getBeta2_9981f74b2d109da6] = env->getMethodID(cls, "getBeta2", "()D");
              mids$[mid_getBeta3_9981f74b2d109da6] = env->getMethodID(cls, "getBeta3", "()D");
              mids$[mid_getDeltaTLs_d6ab429752e7c267] = env->getMethodID(cls, "getDeltaTLs", "()I");
              mids$[mid_getDeltaTLsf_d6ab429752e7c267] = env->getMethodID(cls, "getDeltaTLsf", "()I");
              mids$[mid_getDn_d6ab429752e7c267] = env->getMethodID(cls, "getDn", "()I");
              mids$[mid_getReserved10_d6ab429752e7c267] = env->getMethodID(cls, "getReserved10", "()I");
              mids$[mid_getTot_d6ab429752e7c267] = env->getMethodID(cls, "getTot", "()I");
              mids$[mid_getWeekNumberLsf_d6ab429752e7c267] = env->getMethodID(cls, "getWeekNumberLsf", "()I");
              mids$[mid_getWeekNumberT_d6ab429752e7c267] = env->getMethodID(cls, "getWeekNumberT", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrame4D::getA0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA0_9981f74b2d109da6]);
          }

          jdouble SubFrame4D::getA1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA1_9981f74b2d109da6]);
          }

          jdouble SubFrame4D::getAlpha0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha0_9981f74b2d109da6]);
          }

          jdouble SubFrame4D::getAlpha1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha1_9981f74b2d109da6]);
          }

          jdouble SubFrame4D::getAlpha2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha2_9981f74b2d109da6]);
          }

          jdouble SubFrame4D::getAlpha3() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAlpha3_9981f74b2d109da6]);
          }

          jdouble SubFrame4D::getBeta0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta0_9981f74b2d109da6]);
          }

          jdouble SubFrame4D::getBeta1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta1_9981f74b2d109da6]);
          }

          jdouble SubFrame4D::getBeta2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta2_9981f74b2d109da6]);
          }

          jdouble SubFrame4D::getBeta3() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBeta3_9981f74b2d109da6]);
          }

          jint SubFrame4D::getDeltaTLs() const
          {
            return env->callIntMethod(this$, mids$[mid_getDeltaTLs_d6ab429752e7c267]);
          }

          jint SubFrame4D::getDeltaTLsf() const
          {
            return env->callIntMethod(this$, mids$[mid_getDeltaTLsf_d6ab429752e7c267]);
          }

          jint SubFrame4D::getDn() const
          {
            return env->callIntMethod(this$, mids$[mid_getDn_d6ab429752e7c267]);
          }

          jint SubFrame4D::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_d6ab429752e7c267]);
          }

          jint SubFrame4D::getTot() const
          {
            return env->callIntMethod(this$, mids$[mid_getTot_d6ab429752e7c267]);
          }

          jint SubFrame4D::getWeekNumberLsf() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumberLsf_d6ab429752e7c267]);
          }

          jint SubFrame4D::getWeekNumberT() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumberT_d6ab429752e7c267]);
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
