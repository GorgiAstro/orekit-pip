#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *RuntimeException::class$ = NULL;
    jmethodID *RuntimeException::mids$ = NULL;
    bool RuntimeException::live$ = false;

    jclass RuntimeException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/RuntimeException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_7d9320fd2ea36122] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_0701bef404aae0c6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    RuntimeException::RuntimeException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    RuntimeException::RuntimeException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    RuntimeException::RuntimeException(const ::java::lang::Throwable & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_7d9320fd2ea36122, a0.this$)) {}

    RuntimeException::RuntimeException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_0701bef404aae0c6, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_RuntimeException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_RuntimeException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_RuntimeException_init_(t_RuntimeException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_RuntimeException__methods_[] = {
      DECLARE_METHOD(t_RuntimeException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_RuntimeException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(RuntimeException)[] = {
      { Py_tp_methods, t_RuntimeException__methods_ },
      { Py_tp_init, (void *) t_RuntimeException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(RuntimeException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(RuntimeException, t_RuntimeException, RuntimeException);

    void t_RuntimeException::install(PyObject *module)
    {
      installType(&PY_TYPE(RuntimeException), &PY_TYPE_DEF(RuntimeException), module, "RuntimeException", 0);
    }

    void t_RuntimeException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(RuntimeException), "class_", make_descriptor(RuntimeException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(RuntimeException), "wrapfn_", make_descriptor(t_RuntimeException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(RuntimeException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_RuntimeException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, RuntimeException::initializeClass, 1)))
        return NULL;
      return t_RuntimeException::wrap_Object(RuntimeException(((t_RuntimeException *) arg)->object.this$));
    }
    static PyObject *t_RuntimeException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, RuntimeException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_RuntimeException_init_(t_RuntimeException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          RuntimeException object((jobject) NULL);

          INT_CALL(object = RuntimeException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          RuntimeException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = RuntimeException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          RuntimeException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = RuntimeException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          RuntimeException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = RuntimeException(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer.h"
#include "java/lang/Class.h"
#include "java/lang/Enum.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$EnumConsumer::class$ = NULL;
            jmethodID *ParseToken$EnumConsumer::mids$ = NULL;
            bool ParseToken$EnumConsumer::live$ = false;

            jclass ParseToken$EnumConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_0ae52e093c0c794b] = env->getMethodID(cls, "accept", "(Ljava/lang/Enum;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$EnumConsumer::accept(const ::java::lang::Enum & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_0ae52e093c0c794b], a0.this$);
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
            static PyObject *t_ParseToken$EnumConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$EnumConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$EnumConsumer_of_(t_ParseToken$EnumConsumer *self, PyObject *args);
            static PyObject *t_ParseToken$EnumConsumer_accept(t_ParseToken$EnumConsumer *self, PyObject *arg);
            static PyObject *t_ParseToken$EnumConsumer_get__parameters_(t_ParseToken$EnumConsumer *self, void *data);
            static PyGetSetDef t_ParseToken$EnumConsumer__fields_[] = {
              DECLARE_GET_FIELD(t_ParseToken$EnumConsumer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ParseToken$EnumConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$EnumConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$EnumConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$EnumConsumer, of_, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken$EnumConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$EnumConsumer)[] = {
              { Py_tp_methods, t_ParseToken$EnumConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ParseToken$EnumConsumer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$EnumConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$EnumConsumer, t_ParseToken$EnumConsumer, ParseToken$EnumConsumer);
            PyObject *t_ParseToken$EnumConsumer::wrap_Object(const ParseToken$EnumConsumer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ParseToken$EnumConsumer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ParseToken$EnumConsumer *self = (t_ParseToken$EnumConsumer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ParseToken$EnumConsumer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ParseToken$EnumConsumer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ParseToken$EnumConsumer *self = (t_ParseToken$EnumConsumer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ParseToken$EnumConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$EnumConsumer), &PY_TYPE_DEF(ParseToken$EnumConsumer), module, "ParseToken$EnumConsumer", 0);
            }

            void t_ParseToken$EnumConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumConsumer), "class_", make_descriptor(ParseToken$EnumConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumConsumer), "wrapfn_", make_descriptor(t_ParseToken$EnumConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$EnumConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$EnumConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$EnumConsumer::wrap_Object(ParseToken$EnumConsumer(((t_ParseToken$EnumConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$EnumConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$EnumConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$EnumConsumer_of_(t_ParseToken$EnumConsumer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ParseToken$EnumConsumer_accept(t_ParseToken$EnumConsumer *self, PyObject *arg)
            {
              ::java::lang::Enum a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::lang::Enum::initializeClass, &a0, &p0, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
            static PyObject *t_ParseToken$EnumConsumer_get__parameters_(t_ParseToken$EnumConsumer *self, void *data)
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
#include "org/orekit/rugged/errors/DumpManager.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "java/io/File.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "java/lang/Class.h"
#include "java/lang/Boolean.h"
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *DumpManager::class$ = NULL;
        jmethodID *DumpManager::mids$ = NULL;
        bool DumpManager::live$ = false;

        jclass DumpManager::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/DumpManager");

            mids$ = new jmethodID[max_mid];
            mids$[mid_activate_5d6bcca91ae998ee] = env->getStaticMethodID(cls, "activate", "(Ljava/io/File;)V");
            mids$[mid_deactivate_0640e6acf969ed28] = env->getStaticMethodID(cls, "deactivate", "()V");
            mids$[mid_dumpAlgorithm_7627dde45c73f8d7] = env->getStaticMethodID(cls, "dumpAlgorithm", "(Lorg/orekit/rugged/api/AlgorithmId;)V");
            mids$[mid_dumpAlgorithm_dfd3548ae6c4432e] = env->getStaticMethodID(cls, "dumpAlgorithm", "(Lorg/orekit/rugged/api/AlgorithmId;D)V");
            mids$[mid_dumpDirectLocation_cc308f3f1d1cf703] = env->getStaticMethodID(cls, "dumpDirectLocation", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ZZZ)V");
            mids$[mid_dumpDirectLocationResult_fbf2547e3e819d1a] = env->getStaticMethodID(cls, "dumpDirectLocationResult", "(Lorg/orekit/bodies/GeodeticPoint;)V");
            mids$[mid_dumpEllipsoid_224b23f8eb5eaad9] = env->getStaticMethodID(cls, "dumpEllipsoid", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;)V");
            mids$[mid_dumpInverseLocation_4ecf9e7f7daff38b] = env->getStaticMethodID(cls, "dumpInverseLocation", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/rugged/utils/ExtendedEllipsoid;IIZZZ)V");
            mids$[mid_dumpInverseLocationResult_fc8156a42573cb8b] = env->getStaticMethodID(cls, "dumpInverseLocationResult", "(Lorg/orekit/rugged/linesensor/SensorPixel;)V");
            mids$[mid_dumpSensorDatation_c7f68f6699a398f6] = env->getStaticMethodID(cls, "dumpSensorDatation", "(Lorg/orekit/rugged/linesensor/LineSensor;DLorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_dumpSensorLOS_aa726d47a4c117cc] = env->getStaticMethodID(cls, "dumpSensorLOS", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_dumpSensorMeanPlane_6139d52cdd0ebd03] = env->getStaticMethodID(cls, "dumpSensorMeanPlane", "(Lorg/orekit/rugged/linesensor/SensorMeanPlaneCrossing;)V");
            mids$[mid_dumpSensorRate_4fe1c16a241adb22] = env->getStaticMethodID(cls, "dumpSensorRate", "(Lorg/orekit/rugged/linesensor/LineSensor;DD)V");
            mids$[mid_dumpTileCell_20f37c4dfc02e214] = env->getStaticMethodID(cls, "dumpTileCell", "(Lorg/orekit/rugged/raster/Tile;IID)V");
            mids$[mid_dumpTransform_481fc23d59ffdfac] = env->getStaticMethodID(cls, "dumpTransform", "(Lorg/orekit/rugged/utils/SpacecraftToObservedBody;ILorg/orekit/frames/Transform;Lorg/orekit/frames/Transform;)V");
            mids$[mid_endNicely_0640e6acf969ed28] = env->getStaticMethodID(cls, "endNicely", "()V");
            mids$[mid_isActive_89b302893bdbe1f1] = env->getStaticMethodID(cls, "isActive", "()Z");
            mids$[mid_resume_63dc8f8ce091e3e5] = env->getStaticMethodID(cls, "resume", "(Ljava/lang/Boolean;)V");
            mids$[mid_suspend_adef4ca621ef1c5e] = env->getStaticMethodID(cls, "suspend", "()Ljava/lang/Boolean;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void DumpManager::activate(const ::java::io::File & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_activate_5d6bcca91ae998ee], a0.this$);
        }

        void DumpManager::deactivate()
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_deactivate_0640e6acf969ed28]);
        }

        void DumpManager::dumpAlgorithm(const ::org::orekit::rugged::api::AlgorithmId & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpAlgorithm_7627dde45c73f8d7], a0.this$);
        }

        void DumpManager::dumpAlgorithm(const ::org::orekit::rugged::api::AlgorithmId & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpAlgorithm_dfd3548ae6c4432e], a0.this$, a1);
        }

        void DumpManager::dumpDirectLocation(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jboolean a3, jboolean a4, jboolean a5)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpDirectLocation_cc308f3f1d1cf703], a0.this$, a1.this$, a2.this$, a3, a4, a5);
        }

        void DumpManager::dumpDirectLocationResult(const ::org::orekit::bodies::GeodeticPoint & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpDirectLocationResult_fbf2547e3e819d1a], a0.this$);
        }

        void DumpManager::dumpEllipsoid(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpEllipsoid_224b23f8eb5eaad9], a0.this$);
        }

        void DumpManager::dumpInverseLocation(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::rugged::utils::ExtendedEllipsoid & a2, jint a3, jint a4, jboolean a5, jboolean a6, jboolean a7)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpInverseLocation_4ecf9e7f7daff38b], a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7);
        }

        void DumpManager::dumpInverseLocationResult(const ::org::orekit::rugged::linesensor::SensorPixel & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpInverseLocationResult_fc8156a42573cb8b], a0.this$);
        }

        void DumpManager::dumpSensorDatation(const ::org::orekit::rugged::linesensor::LineSensor & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorDatation_c7f68f6699a398f6], a0.this$, a1, a2.this$);
        }

        void DumpManager::dumpSensorLOS(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorLOS_aa726d47a4c117cc], a0.this$, a1.this$, a2, a3.this$);
        }

        void DumpManager::dumpSensorMeanPlane(const ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorMeanPlane_6139d52cdd0ebd03], a0.this$);
        }

        void DumpManager::dumpSensorRate(const ::org::orekit::rugged::linesensor::LineSensor & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorRate_4fe1c16a241adb22], a0.this$, a1, a2);
        }

        void DumpManager::dumpTileCell(const ::org::orekit::rugged::raster::Tile & a0, jint a1, jint a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpTileCell_20f37c4dfc02e214], a0.this$, a1, a2, a3);
        }

        void DumpManager::dumpTransform(const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a0, jint a1, const ::org::orekit::frames::Transform & a2, const ::org::orekit::frames::Transform & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpTransform_481fc23d59ffdfac], a0.this$, a1, a2.this$, a3.this$);
        }

        void DumpManager::endNicely()
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_endNicely_0640e6acf969ed28]);
        }

        jboolean DumpManager::isActive()
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_isActive_89b302893bdbe1f1]);
        }

        void DumpManager::resume(const ::java::lang::Boolean & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_resume_63dc8f8ce091e3e5], a0.this$);
        }

        ::java::lang::Boolean DumpManager::suspend()
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::lang::Boolean(env->callStaticObjectMethod(cls, mids$[mid_suspend_adef4ca621ef1c5e]));
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
      namespace errors {
        static PyObject *t_DumpManager_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_activate(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_deactivate(PyTypeObject *type);
        static PyObject *t_DumpManager_dumpAlgorithm(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpDirectLocation(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpDirectLocationResult(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpEllipsoid(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpInverseLocation(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpInverseLocationResult(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpSensorDatation(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpSensorLOS(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpSensorMeanPlane(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpSensorRate(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpTileCell(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpTransform(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_endNicely(PyTypeObject *type);
        static PyObject *t_DumpManager_isActive(PyTypeObject *type);
        static PyObject *t_DumpManager_resume(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_suspend(PyTypeObject *type);
        static PyObject *t_DumpManager_get__active(t_DumpManager *self, void *data);
        static PyGetSetDef t_DumpManager__fields_[] = {
          DECLARE_GET_FIELD(t_DumpManager, active),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DumpManager__methods_[] = {
          DECLARE_METHOD(t_DumpManager, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, activate, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, deactivate, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpAlgorithm, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpDirectLocation, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpDirectLocationResult, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpEllipsoid, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpInverseLocation, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpInverseLocationResult, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorDatation, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorLOS, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorMeanPlane, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorRate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpTileCell, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpTransform, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, endNicely, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, isActive, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, resume, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, suspend, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DumpManager)[] = {
          { Py_tp_methods, t_DumpManager__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DumpManager__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DumpManager)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DumpManager, t_DumpManager, DumpManager);

        void t_DumpManager::install(PyObject *module)
        {
          installType(&PY_TYPE(DumpManager), &PY_TYPE_DEF(DumpManager), module, "DumpManager", 0);
        }

        void t_DumpManager::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpManager), "class_", make_descriptor(DumpManager::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpManager), "wrapfn_", make_descriptor(t_DumpManager::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpManager), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DumpManager_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DumpManager::initializeClass, 1)))
            return NULL;
          return t_DumpManager::wrap_Object(DumpManager(((t_DumpManager *) arg)->object.this$));
        }
        static PyObject *t_DumpManager_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DumpManager::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DumpManager_activate(PyTypeObject *type, PyObject *arg)
        {
          ::java::io::File a0((jobject) NULL);

          if (!parseArg(arg, "k", ::java::io::File::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::activate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "activate", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_deactivate(PyTypeObject *type)
        {
          OBJ_CALL(::org::orekit::rugged::errors::DumpManager::deactivate());
          Py_RETURN_NONE;
        }

        static PyObject *t_DumpManager_dumpAlgorithm(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::rugged::api::AlgorithmId a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_AlgorithmId::parameters_))
              {
                OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpAlgorithm(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::rugged::api::AlgorithmId a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;

              if (!parseArgs(args, "KD", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_AlgorithmId::parameters_, &a1))
              {
                OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpAlgorithm(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError(type, "dumpAlgorithm", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpDirectLocation(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          jboolean a3;
          jboolean a4;
          jboolean a5;

          if (!parseArgs(args, "kkkZZZ", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpDirectLocation(a0, a1, a2, a3, a4, a5));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpDirectLocation", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpDirectLocationResult(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpDirectLocationResult(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpDirectLocationResult", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpEllipsoid(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpEllipsoid(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpEllipsoid", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpInverseLocation(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
          ::org::orekit::rugged::utils::ExtendedEllipsoid a2((jobject) NULL);
          jint a3;
          jint a4;
          jboolean a5;
          jboolean a6;
          jboolean a7;

          if (!parseArgs(args, "kkkIIZZZ", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpInverseLocation(a0, a1, a2, a3, a4, a5, a6, a7));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpInverseLocation", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpInverseLocationResult(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpInverseLocationResult(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpInverseLocationResult", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorDatation(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);

          if (!parseArgs(args, "kDk", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorDatation(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorDatation", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorLOS(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jint a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);

          if (!parseArgs(args, "kkIk", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorLOS(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorLOS", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorMeanPlane(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorMeanPlane(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorMeanPlane", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorRate(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "kDD", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorRate(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorRate", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpTileCell(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::raster::Tile a0((jobject) NULL);
          jint a1;
          jint a2;
          jdouble a3;

          if (!parseArgs(args, "kIID", ::org::orekit::rugged::raster::Tile::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpTileCell(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpTileCell", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpTransform(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody a0((jobject) NULL);
          jint a1;
          ::org::orekit::frames::Transform a2((jobject) NULL);
          ::org::orekit::frames::Transform a3((jobject) NULL);

          if (!parseArgs(args, "kIkk", ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::orekit::frames::Transform::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpTransform(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpTransform", args);
          return NULL;
        }

        static PyObject *t_DumpManager_endNicely(PyTypeObject *type)
        {
          OBJ_CALL(::org::orekit::rugged::errors::DumpManager::endNicely());
          Py_RETURN_NONE;
        }

        static PyObject *t_DumpManager_isActive(PyTypeObject *type)
        {
          jboolean result;
          OBJ_CALL(result = ::org::orekit::rugged::errors::DumpManager::isActive());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_DumpManager_resume(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::Boolean a0((jobject) NULL);

          if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Boolean), &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::resume(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "resume", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_suspend(PyTypeObject *type)
        {
          ::java::lang::Boolean result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::errors::DumpManager::suspend());
          return ::java::lang::t_Boolean::wrap_Object(result);
        }

        static PyObject *t_DumpManager_get__active(t_DumpManager *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isActive());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/ConjugateGradient.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ConjugateGradient::class$ = NULL;
      jmethodID *ConjugateGradient::mids$ = NULL;
      bool ConjugateGradient::live$ = false;
      ::java::lang::String *ConjugateGradient::OPERATOR = NULL;
      ::java::lang::String *ConjugateGradient::VECTOR = NULL;

      jclass ConjugateGradient::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ConjugateGradient");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_54544b43400189dc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;DZ)V");
          mids$[mid_init$_bcaf7e2c67482688] = env->getMethodID(cls, "<init>", "(IDZ)V");
          mids$[mid_shouldCheck_89b302893bdbe1f1] = env->getMethodID(cls, "shouldCheck", "()Z");
          mids$[mid_solveInPlace_794cf6c78f8f4b2d] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          OPERATOR = new ::java::lang::String(env->getStaticObjectField(cls, "OPERATOR", "Ljava/lang/String;"));
          VECTOR = new ::java::lang::String(env->getStaticObjectField(cls, "VECTOR", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConjugateGradient::ConjugateGradient(const ::org::hipparchus::util::IterationManager & a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_54544b43400189dc, a0.this$, a1, a2)) {}

      ConjugateGradient::ConjugateGradient(jint a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_bcaf7e2c67482688, a0, a1, a2)) {}

      jboolean ConjugateGradient::shouldCheck() const
      {
        return env->callBooleanMethod(this$, mids$[mid_shouldCheck_89b302893bdbe1f1]);
      }

      ::org::hipparchus::linear::RealVector ConjugateGradient::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_794cf6c78f8f4b2d], a0.this$, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_ConjugateGradient_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConjugateGradient_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ConjugateGradient_init_(t_ConjugateGradient *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConjugateGradient_shouldCheck(t_ConjugateGradient *self);
      static PyObject *t_ConjugateGradient_solveInPlace(t_ConjugateGradient *self, PyObject *args);

      static PyMethodDef t_ConjugateGradient__methods_[] = {
        DECLARE_METHOD(t_ConjugateGradient, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConjugateGradient, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConjugateGradient, shouldCheck, METH_NOARGS),
        DECLARE_METHOD(t_ConjugateGradient, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConjugateGradient)[] = {
        { Py_tp_methods, t_ConjugateGradient__methods_ },
        { Py_tp_init, (void *) t_ConjugateGradient_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConjugateGradient)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::PreconditionedIterativeLinearSolver),
        NULL
      };

      DEFINE_TYPE(ConjugateGradient, t_ConjugateGradient, ConjugateGradient);

      void t_ConjugateGradient::install(PyObject *module)
      {
        installType(&PY_TYPE(ConjugateGradient), &PY_TYPE_DEF(ConjugateGradient), module, "ConjugateGradient", 0);
      }

      void t_ConjugateGradient::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "class_", make_descriptor(ConjugateGradient::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "wrapfn_", make_descriptor(t_ConjugateGradient::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "boxfn_", make_descriptor(boxObject));
        env->getClass(ConjugateGradient::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "OPERATOR", make_descriptor(j2p(*ConjugateGradient::OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "VECTOR", make_descriptor(j2p(*ConjugateGradient::VECTOR)));
      }

      static PyObject *t_ConjugateGradient_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConjugateGradient::initializeClass, 1)))
          return NULL;
        return t_ConjugateGradient::wrap_Object(ConjugateGradient(((t_ConjugateGradient *) arg)->object.this$));
      }
      static PyObject *t_ConjugateGradient_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConjugateGradient::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ConjugateGradient_init_(t_ConjugateGradient *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            ConjugateGradient object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::hipparchus::util::IterationManager::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ConjugateGradient(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            jboolean a2;
            ConjugateGradient object((jobject) NULL);

            if (!parseArgs(args, "IDZ", &a0, &a1, &a2))
            {
              INT_CALL(object = ConjugateGradient(a0, a1, a2));
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

      static PyObject *t_ConjugateGradient_shouldCheck(t_ConjugateGradient *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.shouldCheck());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ConjugateGradient_solveInPlace(t_ConjugateGradient *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
        ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
        ::org::hipparchus::linear::RealVector a2((jobject) NULL);
        ::org::hipparchus::linear::RealVector a3((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2, a3));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ConjugateGradient), (PyObject *) self, "solveInPlace", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1060.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1060::class$ = NULL;
              jmethodID *Rtcm1060::mids$ = NULL;
              bool Rtcm1060::live$ = false;

              jclass Rtcm1060::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1060");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_e429337ce34e6c7c] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1060::Rtcm1060(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_e429337ce34e6c7c, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1060_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1060_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1060_of_(t_Rtcm1060 *self, PyObject *args);
              static int t_Rtcm1060_init_(t_Rtcm1060 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1060_get__parameters_(t_Rtcm1060 *self, void *data);
              static PyGetSetDef t_Rtcm1060__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1060, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1060__methods_[] = {
                DECLARE_METHOD(t_Rtcm1060, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1060, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1060, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1060)[] = {
                { Py_tp_methods, t_Rtcm1060__methods_ },
                { Py_tp_init, (void *) t_Rtcm1060_init_ },
                { Py_tp_getset, t_Rtcm1060__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1060)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1060, t_Rtcm1060, Rtcm1060);
              PyObject *t_Rtcm1060::wrap_Object(const Rtcm1060& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1060::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1060 *self = (t_Rtcm1060 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1060::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1060::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1060 *self = (t_Rtcm1060 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1060::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1060), &PY_TYPE_DEF(Rtcm1060), module, "Rtcm1060", 0);
              }

              void t_Rtcm1060::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1060), "class_", make_descriptor(Rtcm1060::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1060), "wrapfn_", make_descriptor(t_Rtcm1060::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1060), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1060_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1060::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1060::wrap_Object(Rtcm1060(((t_Rtcm1060 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1060_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1060::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1060_of_(t_Rtcm1060 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1060_init_(t_Rtcm1060 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1060 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1060(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCombinedCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1060_get__parameters_(t_Rtcm1060 *self, void *data)
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
#include "org/orekit/data/DataSource$Opener.h"
#include "java/io/Reader.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource$Opener::class$ = NULL;
      jmethodID *DataSource$Opener::mids$ = NULL;
      bool DataSource$Opener::live$ = false;

      jclass DataSource$Opener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource$Opener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_openReaderOnce_db817b1afec8e8b3] = env->getMethodID(cls, "openReaderOnce", "()Ljava/io/Reader;");
          mids$[mid_openStreamOnce_ce4348991af8a1a1] = env->getMethodID(cls, "openStreamOnce", "()Ljava/io/InputStream;");
          mids$[mid_rawDataIsBinary_89b302893bdbe1f1] = env->getMethodID(cls, "rawDataIsBinary", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::io::Reader DataSource$Opener::openReaderOnce() const
      {
        return ::java::io::Reader(env->callObjectMethod(this$, mids$[mid_openReaderOnce_db817b1afec8e8b3]));
      }

      ::java::io::InputStream DataSource$Opener::openStreamOnce() const
      {
        return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_openStreamOnce_ce4348991af8a1a1]));
      }

      jboolean DataSource$Opener::rawDataIsBinary() const
      {
        return env->callBooleanMethod(this$, mids$[mid_rawDataIsBinary_89b302893bdbe1f1]);
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
      static PyObject *t_DataSource$Opener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$Opener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$Opener_openReaderOnce(t_DataSource$Opener *self);
      static PyObject *t_DataSource$Opener_openStreamOnce(t_DataSource$Opener *self);
      static PyObject *t_DataSource$Opener_rawDataIsBinary(t_DataSource$Opener *self);

      static PyMethodDef t_DataSource$Opener__methods_[] = {
        DECLARE_METHOD(t_DataSource$Opener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$Opener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$Opener, openReaderOnce, METH_NOARGS),
        DECLARE_METHOD(t_DataSource$Opener, openStreamOnce, METH_NOARGS),
        DECLARE_METHOD(t_DataSource$Opener, rawDataIsBinary, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource$Opener)[] = {
        { Py_tp_methods, t_DataSource$Opener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource$Opener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource$Opener, t_DataSource$Opener, DataSource$Opener);

      void t_DataSource$Opener::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource$Opener), &PY_TYPE_DEF(DataSource$Opener), module, "DataSource$Opener", 0);
      }

      void t_DataSource$Opener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$Opener), "class_", make_descriptor(DataSource$Opener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$Opener), "wrapfn_", make_descriptor(t_DataSource$Opener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$Opener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource$Opener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource$Opener::initializeClass, 1)))
          return NULL;
        return t_DataSource$Opener::wrap_Object(DataSource$Opener(((t_DataSource$Opener *) arg)->object.this$));
      }
      static PyObject *t_DataSource$Opener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource$Opener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataSource$Opener_openReaderOnce(t_DataSource$Opener *self)
      {
        ::java::io::Reader result((jobject) NULL);
        OBJ_CALL(result = self->object.openReaderOnce());
        return ::java::io::t_Reader::wrap_Object(result);
      }

      static PyObject *t_DataSource$Opener_openStreamOnce(t_DataSource$Opener *self)
      {
        ::java::io::InputStream result((jobject) NULL);
        OBJ_CALL(result = self->object.openStreamOnce());
        return ::java::io::t_InputStream::wrap_Object(result);
      }

      static PyObject *t_DataSource$Opener_rawDataIsBinary(t_DataSource$Opener *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.rawDataIsBinary());
        Py_RETURN_BOOL(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "org/orekit/frames/LazyLoadedEop.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LazyLoadedFrames::class$ = NULL;
      jmethodID *LazyLoadedFrames::mids$ = NULL;
      bool LazyLoadedFrames::live$ = false;

      jclass LazyLoadedFrames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LazyLoadedFrames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4696d6f2ff01a637] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/LazyLoadedEop;Lorg/orekit/time/TimeScales;Lorg/orekit/bodies/CelestialBodies;)V");
          mids$[mid_addDefaultEOP1980HistoryLoaders_7ef3cb05fa691170] = env->getMethodID(cls, "addDefaultEOP1980HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addDefaultEOP2000HistoryLoaders_7ef3cb05fa691170] = env->getMethodID(cls, "addDefaultEOP2000HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addEOPHistoryLoader_4f61b75864dcff87] = env->getMethodID(cls, "addEOPHistoryLoader", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/EopHistoryLoader;)V");
          mids$[mid_clearEOPHistoryLoaders_0640e6acf969ed28] = env->getMethodID(cls, "clearEOPHistoryLoaders", "()V");
          mids$[mid_getEOPHistory_9cf4a1ec2e53bbd3] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_setEOPContinuityThreshold_10f281d777284cea] = env->getMethodID(cls, "setEOPContinuityThreshold", "(D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedFrames::LazyLoadedFrames(const ::org::orekit::frames::LazyLoadedEop & a0, const ::org::orekit::time::TimeScales & a1, const ::org::orekit::bodies::CelestialBodies & a2) : ::org::orekit::frames::AbstractFrames(env->newObject(initializeClass, &mids$, mid_init$_4696d6f2ff01a637, a0.this$, a1.this$, a2.this$)) {}

      void LazyLoadedFrames::addDefaultEOP1980HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP1980HistoryLoaders_7ef3cb05fa691170], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void LazyLoadedFrames::addDefaultEOP2000HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultEOP2000HistoryLoaders_7ef3cb05fa691170], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void LazyLoadedFrames::addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::EopHistoryLoader & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addEOPHistoryLoader_4f61b75864dcff87], a0.this$, a1.this$);
      }

      void LazyLoadedFrames::clearEOPHistoryLoaders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEOPHistoryLoaders_0640e6acf969ed28]);
      }

      ::org::orekit::frames::EOPHistory LazyLoadedFrames::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_9cf4a1ec2e53bbd3], a0.this$, a1));
      }

      void LazyLoadedFrames::setEOPContinuityThreshold(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setEOPContinuityThreshold_10f281d777284cea], a0);
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
      static PyObject *t_LazyLoadedFrames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedFrames_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedFrames_init_(t_LazyLoadedFrames *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedFrames_addDefaultEOP1980HistoryLoaders(t_LazyLoadedFrames *self, PyObject *args);
      static PyObject *t_LazyLoadedFrames_addDefaultEOP2000HistoryLoaders(t_LazyLoadedFrames *self, PyObject *args);
      static PyObject *t_LazyLoadedFrames_addEOPHistoryLoader(t_LazyLoadedFrames *self, PyObject *args);
      static PyObject *t_LazyLoadedFrames_clearEOPHistoryLoaders(t_LazyLoadedFrames *self);
      static PyObject *t_LazyLoadedFrames_getEOPHistory(t_LazyLoadedFrames *self, PyObject *args);
      static PyObject *t_LazyLoadedFrames_setEOPContinuityThreshold(t_LazyLoadedFrames *self, PyObject *arg);
      static int t_LazyLoadedFrames_set__eOPContinuityThreshold(t_LazyLoadedFrames *self, PyObject *arg, void *data);
      static PyGetSetDef t_LazyLoadedFrames__fields_[] = {
        DECLARE_SET_FIELD(t_LazyLoadedFrames, eOPContinuityThreshold),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedFrames__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedFrames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedFrames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedFrames, addDefaultEOP1980HistoryLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, addDefaultEOP2000HistoryLoaders, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, addEOPHistoryLoader, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, clearEOPHistoryLoaders, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, getEOPHistory, METH_VARARGS),
        DECLARE_METHOD(t_LazyLoadedFrames, setEOPContinuityThreshold, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedFrames)[] = {
        { Py_tp_methods, t_LazyLoadedFrames__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedFrames_init_ },
        { Py_tp_getset, t_LazyLoadedFrames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedFrames)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::AbstractFrames),
        NULL
      };

      DEFINE_TYPE(LazyLoadedFrames, t_LazyLoadedFrames, LazyLoadedFrames);

      void t_LazyLoadedFrames::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedFrames), &PY_TYPE_DEF(LazyLoadedFrames), module, "LazyLoadedFrames", 0);
      }

      void t_LazyLoadedFrames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedFrames), "class_", make_descriptor(LazyLoadedFrames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedFrames), "wrapfn_", make_descriptor(t_LazyLoadedFrames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedFrames), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedFrames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedFrames::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedFrames::wrap_Object(LazyLoadedFrames(((t_LazyLoadedFrames *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedFrames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedFrames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedFrames_init_(t_LazyLoadedFrames *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::LazyLoadedEop a0((jobject) NULL);
        ::org::orekit::time::TimeScales a1((jobject) NULL);
        ::org::orekit::bodies::CelestialBodies a2((jobject) NULL);
        LazyLoadedFrames object((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::frames::LazyLoadedEop::initializeClass, ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = LazyLoadedFrames(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LazyLoadedFrames_addDefaultEOP1980HistoryLoaders(t_LazyLoadedFrames *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);

        if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.addDefaultEOP1980HistoryLoaders(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultEOP1980HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedFrames_addDefaultEOP2000HistoryLoaders(t_LazyLoadedFrames *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);

        if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.addDefaultEOP2000HistoryLoaders(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addDefaultEOP2000HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_LazyLoadedFrames_addEOPHistoryLoader(t_LazyLoadedFrames *self, PyObject *args)
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

      static PyObject *t_LazyLoadedFrames_clearEOPHistoryLoaders(t_LazyLoadedFrames *self)
      {
        OBJ_CALL(self->object.clearEOPHistoryLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_LazyLoadedFrames_getEOPHistory(t_LazyLoadedFrames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getEOPHistory(a0, a1));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        return callSuper(PY_TYPE(LazyLoadedFrames), (PyObject *) self, "getEOPHistory", args, 2);
      }

      static PyObject *t_LazyLoadedFrames_setEOPContinuityThreshold(t_LazyLoadedFrames *self, PyObject *arg)
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

      static int t_LazyLoadedFrames_set__eOPContinuityThreshold(t_LazyLoadedFrames *self, PyObject *arg, void *data)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/DoubleDihedraFieldOfView.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *DoubleDihedraFieldOfView::class$ = NULL;
        jmethodID *DoubleDihedraFieldOfView::mids$ = NULL;
        bool DoubleDihedraFieldOfView::live$ = false;

        jclass DoubleDihedraFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/DoubleDihedraFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c20ce71487552155] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DoubleDihedraFieldOfView::DoubleDihedraFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, jdouble a4, jdouble a5) : ::org::orekit::geometry::fov::PolygonalFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_c20ce71487552155, a0.this$, a1.this$, a2, a3.this$, a4, a5)) {}
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
        static PyObject *t_DoubleDihedraFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DoubleDihedraFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DoubleDihedraFieldOfView_init_(t_DoubleDihedraFieldOfView *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_DoubleDihedraFieldOfView__methods_[] = {
          DECLARE_METHOD(t_DoubleDihedraFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DoubleDihedraFieldOfView, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DoubleDihedraFieldOfView)[] = {
          { Py_tp_methods, t_DoubleDihedraFieldOfView__methods_ },
          { Py_tp_init, (void *) t_DoubleDihedraFieldOfView_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DoubleDihedraFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::PolygonalFieldOfView),
          NULL
        };

        DEFINE_TYPE(DoubleDihedraFieldOfView, t_DoubleDihedraFieldOfView, DoubleDihedraFieldOfView);

        void t_DoubleDihedraFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(DoubleDihedraFieldOfView), &PY_TYPE_DEF(DoubleDihedraFieldOfView), module, "DoubleDihedraFieldOfView", 0);
        }

        void t_DoubleDihedraFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleDihedraFieldOfView), "class_", make_descriptor(DoubleDihedraFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleDihedraFieldOfView), "wrapfn_", make_descriptor(t_DoubleDihedraFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleDihedraFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DoubleDihedraFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DoubleDihedraFieldOfView::initializeClass, 1)))
            return NULL;
          return t_DoubleDihedraFieldOfView::wrap_Object(DoubleDihedraFieldOfView(((t_DoubleDihedraFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_DoubleDihedraFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DoubleDihedraFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DoubleDihedraFieldOfView_init_(t_DoubleDihedraFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          jdouble a4;
          jdouble a5;
          DoubleDihedraFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kkDkDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = DoubleDihedraFieldOfView(a0, a1, a2, a3, a4, a5));
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
#include "org/orekit/gnss/antenna/SatelliteAntenna.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/antenna/SatelliteType.h"
#include "org/orekit/gnss/Frequency.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *SatelliteAntenna::class$ = NULL;
        jmethodID *SatelliteAntenna::mids$ = NULL;
        bool SatelliteAntenna::live$ = false;

        jclass SatelliteAntenna::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/SatelliteAntenna");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8b5f9f5c5308cf84] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/gnss/antenna/SatelliteType;ILjava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getCosparID_3cffd47377eca18a] = env->getMethodID(cls, "getCosparID", "()Ljava/lang/String;");
            mids$[mid_getPrnNumber_412668abc8d889e9] = env->getMethodID(cls, "getPrnNumber", "()I");
            mids$[mid_getSatelliteCode_412668abc8d889e9] = env->getMethodID(cls, "getSatelliteCode", "()I");
            mids$[mid_getSatelliteSystem_8b86408cc2633961] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_getSatelliteType_6ecd2389ea008bcc] = env->getMethodID(cls, "getSatelliteType", "()Lorg/orekit/gnss/antenna/SatelliteType;");
            mids$[mid_getValidFrom_7a97f7e149e79afb] = env->getMethodID(cls, "getValidFrom", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getValidUntil_7a97f7e149e79afb] = env->getMethodID(cls, "getValidUntil", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SatelliteAntenna::SatelliteAntenna(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::util::Map & a2, const ::org::orekit::gnss::SatelliteSystem & a3, jint a4, const ::org::orekit::gnss::antenna::SatelliteType & a5, jint a6, const ::java::lang::String & a7, const ::org::orekit::time::AbsoluteDate & a8, const ::org::orekit::time::AbsoluteDate & a9) : ::org::orekit::gnss::antenna::Antenna(env->newObject(initializeClass, &mids$, mid_init$_8b5f9f5c5308cf84, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$, a6, a7.this$, a8.this$, a9.this$)) {}

        ::java::lang::String SatelliteAntenna::getCosparID() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCosparID_3cffd47377eca18a]));
        }

        jint SatelliteAntenna::getPrnNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getPrnNumber_412668abc8d889e9]);
        }

        jint SatelliteAntenna::getSatelliteCode() const
        {
          return env->callIntMethod(this$, mids$[mid_getSatelliteCode_412668abc8d889e9]);
        }

        ::org::orekit::gnss::SatelliteSystem SatelliteAntenna::getSatelliteSystem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_8b86408cc2633961]));
        }

        ::org::orekit::gnss::antenna::SatelliteType SatelliteAntenna::getSatelliteType() const
        {
          return ::org::orekit::gnss::antenna::SatelliteType(env->callObjectMethod(this$, mids$[mid_getSatelliteType_6ecd2389ea008bcc]));
        }

        ::org::orekit::time::AbsoluteDate SatelliteAntenna::getValidFrom() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidFrom_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate SatelliteAntenna::getValidUntil() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidUntil_7a97f7e149e79afb]));
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
        static PyObject *t_SatelliteAntenna_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteAntenna_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SatelliteAntenna_init_(t_SatelliteAntenna *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SatelliteAntenna_getCosparID(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getPrnNumber(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getSatelliteCode(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getSatelliteSystem(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getSatelliteType(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getValidFrom(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_getValidUntil(t_SatelliteAntenna *self);
        static PyObject *t_SatelliteAntenna_get__cosparID(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__prnNumber(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__satelliteCode(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__satelliteSystem(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__satelliteType(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__validFrom(t_SatelliteAntenna *self, void *data);
        static PyObject *t_SatelliteAntenna_get__validUntil(t_SatelliteAntenna *self, void *data);
        static PyGetSetDef t_SatelliteAntenna__fields_[] = {
          DECLARE_GET_FIELD(t_SatelliteAntenna, cosparID),
          DECLARE_GET_FIELD(t_SatelliteAntenna, prnNumber),
          DECLARE_GET_FIELD(t_SatelliteAntenna, satelliteCode),
          DECLARE_GET_FIELD(t_SatelliteAntenna, satelliteSystem),
          DECLARE_GET_FIELD(t_SatelliteAntenna, satelliteType),
          DECLARE_GET_FIELD(t_SatelliteAntenna, validFrom),
          DECLARE_GET_FIELD(t_SatelliteAntenna, validUntil),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SatelliteAntenna__methods_[] = {
          DECLARE_METHOD(t_SatelliteAntenna, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteAntenna, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteAntenna, getCosparID, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getPrnNumber, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getSatelliteCode, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getSatelliteSystem, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getSatelliteType, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getValidFrom, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteAntenna, getValidUntil, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SatelliteAntenna)[] = {
          { Py_tp_methods, t_SatelliteAntenna__methods_ },
          { Py_tp_init, (void *) t_SatelliteAntenna_init_ },
          { Py_tp_getset, t_SatelliteAntenna__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SatelliteAntenna)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::antenna::Antenna),
          NULL
        };

        DEFINE_TYPE(SatelliteAntenna, t_SatelliteAntenna, SatelliteAntenna);

        void t_SatelliteAntenna::install(PyObject *module)
        {
          installType(&PY_TYPE(SatelliteAntenna), &PY_TYPE_DEF(SatelliteAntenna), module, "SatelliteAntenna", 0);
        }

        void t_SatelliteAntenna::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteAntenna), "class_", make_descriptor(SatelliteAntenna::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteAntenna), "wrapfn_", make_descriptor(t_SatelliteAntenna::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteAntenna), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SatelliteAntenna_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SatelliteAntenna::initializeClass, 1)))
            return NULL;
          return t_SatelliteAntenna::wrap_Object(SatelliteAntenna(((t_SatelliteAntenna *) arg)->object.this$));
        }
        static PyObject *t_SatelliteAntenna_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SatelliteAntenna::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SatelliteAntenna_init_(t_SatelliteAntenna *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::util::Map a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::gnss::SatelliteSystem a3((jobject) NULL);
          PyTypeObject **p3;
          jint a4;
          ::org::orekit::gnss::antenna::SatelliteType a5((jobject) NULL);
          PyTypeObject **p5;
          jint a6;
          ::java::lang::String a7((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a9((jobject) NULL);
          SatelliteAntenna object((jobject) NULL);

          if (!parseArgs(args, "ssKKIKIskk", ::java::util::Map::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::antenna::SatelliteType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Map::parameters_, &a3, &p3, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a4, &a5, &p5, ::org::orekit::gnss::antenna::t_SatelliteType::parameters_, &a6, &a7, &a8, &a9))
          {
            INT_CALL(object = SatelliteAntenna(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SatelliteAntenna_getCosparID(t_SatelliteAntenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getCosparID());
          return j2p(result);
        }

        static PyObject *t_SatelliteAntenna_getPrnNumber(t_SatelliteAntenna *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPrnNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SatelliteAntenna_getSatelliteCode(t_SatelliteAntenna *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSatelliteCode());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SatelliteAntenna_getSatelliteSystem(t_SatelliteAntenna *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_getSatelliteType(t_SatelliteAntenna *self)
        {
          ::org::orekit::gnss::antenna::SatelliteType result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteType());
          return ::org::orekit::gnss::antenna::t_SatelliteType::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_getValidFrom(t_SatelliteAntenna *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_getValidUntil(t_SatelliteAntenna *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SatelliteAntenna_get__cosparID(t_SatelliteAntenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getCosparID());
          return j2p(value);
        }

        static PyObject *t_SatelliteAntenna_get__prnNumber(t_SatelliteAntenna *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPrnNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SatelliteAntenna_get__satelliteCode(t_SatelliteAntenna *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSatelliteCode());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SatelliteAntenna_get__satelliteSystem(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }

        static PyObject *t_SatelliteAntenna_get__satelliteType(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::gnss::antenna::SatelliteType value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteType());
          return ::org::orekit::gnss::antenna::t_SatelliteType::wrap_Object(value);
        }

        static PyObject *t_SatelliteAntenna_get__validFrom(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SatelliteAntenna_get__validUntil(t_SatelliteAntenna *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UT1Scale::class$ = NULL;
      jmethodID *UT1Scale::mids$ = NULL;
      bool UT1Scale::live$ = false;

      jclass UT1Scale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UT1Scale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEOPHistory_9a64cc378cf7ab6b] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getUTCScale_81e037be1ebdb551] = env->getMethodID(cls, "getUTCScale", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_offsetFromTAI_b0b988f941da47d8] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_b884068a2c99f6ca] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::EOPHistory UT1Scale::getEOPHistory() const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_9a64cc378cf7ab6b]));
      }

      ::java::lang::String UT1Scale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      ::org::orekit::time::UTCScale UT1Scale::getUTCScale() const
      {
        return ::org::orekit::time::UTCScale(env->callObjectMethod(this$, mids$[mid_getUTCScale_81e037be1ebdb551]));
      }

      jdouble UT1Scale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UT1Scale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_b884068a2c99f6ca], a0.this$));
      }

      ::java::lang::String UT1Scale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_UT1Scale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UT1Scale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UT1Scale_getEOPHistory(t_UT1Scale *self);
      static PyObject *t_UT1Scale_getName(t_UT1Scale *self);
      static PyObject *t_UT1Scale_getUTCScale(t_UT1Scale *self);
      static PyObject *t_UT1Scale_offsetFromTAI(t_UT1Scale *self, PyObject *args);
      static PyObject *t_UT1Scale_toString(t_UT1Scale *self, PyObject *args);
      static PyObject *t_UT1Scale_get__eOPHistory(t_UT1Scale *self, void *data);
      static PyObject *t_UT1Scale_get__name(t_UT1Scale *self, void *data);
      static PyObject *t_UT1Scale_get__uTCScale(t_UT1Scale *self, void *data);
      static PyGetSetDef t_UT1Scale__fields_[] = {
        DECLARE_GET_FIELD(t_UT1Scale, eOPHistory),
        DECLARE_GET_FIELD(t_UT1Scale, name),
        DECLARE_GET_FIELD(t_UT1Scale, uTCScale),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UT1Scale__methods_[] = {
        DECLARE_METHOD(t_UT1Scale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UT1Scale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UT1Scale, getEOPHistory, METH_NOARGS),
        DECLARE_METHOD(t_UT1Scale, getName, METH_NOARGS),
        DECLARE_METHOD(t_UT1Scale, getUTCScale, METH_NOARGS),
        DECLARE_METHOD(t_UT1Scale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_UT1Scale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UT1Scale)[] = {
        { Py_tp_methods, t_UT1Scale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UT1Scale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UT1Scale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UT1Scale, t_UT1Scale, UT1Scale);

      void t_UT1Scale::install(PyObject *module)
      {
        installType(&PY_TYPE(UT1Scale), &PY_TYPE_DEF(UT1Scale), module, "UT1Scale", 0);
      }

      void t_UT1Scale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UT1Scale), "class_", make_descriptor(UT1Scale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UT1Scale), "wrapfn_", make_descriptor(t_UT1Scale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UT1Scale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UT1Scale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UT1Scale::initializeClass, 1)))
          return NULL;
        return t_UT1Scale::wrap_Object(UT1Scale(((t_UT1Scale *) arg)->object.this$));
      }
      static PyObject *t_UT1Scale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UT1Scale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UT1Scale_getEOPHistory(t_UT1Scale *self)
      {
        ::org::orekit::frames::EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_UT1Scale_getName(t_UT1Scale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_UT1Scale_getUTCScale(t_UT1Scale *self)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getUTCScale());
        return ::org::orekit::time::t_UTCScale::wrap_Object(result);
      }

      static PyObject *t_UT1Scale_offsetFromTAI(t_UT1Scale *self, PyObject *args)
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

      static PyObject *t_UT1Scale_toString(t_UT1Scale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(UT1Scale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_UT1Scale_get__eOPHistory(t_UT1Scale *self, void *data)
      {
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_UT1Scale_get__name(t_UT1Scale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_UT1Scale_get__uTCScale(t_UT1Scale *self, void *data)
      {
        ::org::orekit::time::UTCScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTCScale());
        return ::org::orekit::time::t_UTCScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *BeidouSatelliteType::class$ = NULL;
            jmethodID *BeidouSatelliteType::mids$ = NULL;
            bool BeidouSatelliteType::live$ = false;
            BeidouSatelliteType *BeidouSatelliteType::GEO = NULL;
            BeidouSatelliteType *BeidouSatelliteType::IGSO = NULL;
            BeidouSatelliteType *BeidouSatelliteType::MEO = NULL;
            BeidouSatelliteType *BeidouSatelliteType::RESERVED = NULL;

            jclass BeidouSatelliteType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_849680bb10a62e14] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;");
                mids$[mid_values_2bfa0074c9e1b059] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                GEO = new BeidouSatelliteType(env->getStaticObjectField(cls, "GEO", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                IGSO = new BeidouSatelliteType(env->getStaticObjectField(cls, "IGSO", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                MEO = new BeidouSatelliteType(env->getStaticObjectField(cls, "MEO", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                RESERVED = new BeidouSatelliteType(env->getStaticObjectField(cls, "RESERVED", "Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouSatelliteType BeidouSatelliteType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return BeidouSatelliteType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_849680bb10a62e14], a0.this$));
            }

            JArray< BeidouSatelliteType > BeidouSatelliteType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< BeidouSatelliteType >(env->callStaticObjectMethod(cls, mids$[mid_values_2bfa0074c9e1b059]));
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_BeidouSatelliteType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouSatelliteType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouSatelliteType_of_(t_BeidouSatelliteType *self, PyObject *args);
            static PyObject *t_BeidouSatelliteType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_BeidouSatelliteType_values(PyTypeObject *type);
            static PyObject *t_BeidouSatelliteType_get__parameters_(t_BeidouSatelliteType *self, void *data);
            static PyGetSetDef t_BeidouSatelliteType__fields_[] = {
              DECLARE_GET_FIELD(t_BeidouSatelliteType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BeidouSatelliteType__methods_[] = {
              DECLARE_METHOD(t_BeidouSatelliteType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouSatelliteType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouSatelliteType, of_, METH_VARARGS),
              DECLARE_METHOD(t_BeidouSatelliteType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_BeidouSatelliteType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BeidouSatelliteType)[] = {
              { Py_tp_methods, t_BeidouSatelliteType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_BeidouSatelliteType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BeidouSatelliteType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(BeidouSatelliteType, t_BeidouSatelliteType, BeidouSatelliteType);
            PyObject *t_BeidouSatelliteType::wrap_Object(const BeidouSatelliteType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BeidouSatelliteType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BeidouSatelliteType *self = (t_BeidouSatelliteType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_BeidouSatelliteType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_BeidouSatelliteType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_BeidouSatelliteType *self = (t_BeidouSatelliteType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_BeidouSatelliteType::install(PyObject *module)
            {
              installType(&PY_TYPE(BeidouSatelliteType), &PY_TYPE_DEF(BeidouSatelliteType), module, "BeidouSatelliteType", 0);
            }

            void t_BeidouSatelliteType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "class_", make_descriptor(BeidouSatelliteType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "wrapfn_", make_descriptor(t_BeidouSatelliteType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "boxfn_", make_descriptor(boxObject));
              env->getClass(BeidouSatelliteType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "GEO", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::GEO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "IGSO", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::IGSO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "MEO", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::MEO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouSatelliteType), "RESERVED", make_descriptor(t_BeidouSatelliteType::wrap_Object(*BeidouSatelliteType::RESERVED)));
            }

            static PyObject *t_BeidouSatelliteType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BeidouSatelliteType::initializeClass, 1)))
                return NULL;
              return t_BeidouSatelliteType::wrap_Object(BeidouSatelliteType(((t_BeidouSatelliteType *) arg)->object.this$));
            }
            static PyObject *t_BeidouSatelliteType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BeidouSatelliteType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_BeidouSatelliteType_of_(t_BeidouSatelliteType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_BeidouSatelliteType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              BeidouSatelliteType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType::valueOf(a0));
                return t_BeidouSatelliteType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_BeidouSatelliteType_values(PyTypeObject *type)
            {
              JArray< BeidouSatelliteType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType::values());
              return JArray<jobject>(result.this$).wrap(t_BeidouSatelliteType::wrap_jobject);
            }
            static PyObject *t_BeidouSatelliteType_get__parameters_(t_BeidouSatelliteType *self, void *data)
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
            mids$[mid_init$_a03f4ce268469baa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/Point;D[Lorg/hipparchus/geometry/Point;)V");
            mids$[mid_contains_d92750ddbead1ab5] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/Point;)Z");
            mids$[mid_contains_7f6f17594f569eaa] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/Point;D)Z");
            mids$[mid_getCenter_abb5df84e8ab06b8] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getRadius_557b8123390d8d0c] = env->getMethodID(cls, "getRadius", "()D");
            mids$[mid_getSupport_029301c85132187e] = env->getMethodID(cls, "getSupport", "()[Lorg/hipparchus/geometry/Point;");
            mids$[mid_getSupportSize_412668abc8d889e9] = env->getMethodID(cls, "getSupportSize", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EnclosingBall::EnclosingBall(const ::org::hipparchus::geometry::Point & a0, jdouble a1, const JArray< ::org::hipparchus::geometry::Point > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a03f4ce268469baa, a0.this$, a1, a2.this$)) {}

        jboolean EnclosingBall::contains(const ::org::hipparchus::geometry::Point & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_d92750ddbead1ab5], a0.this$);
        }

        jboolean EnclosingBall::contains(const ::org::hipparchus::geometry::Point & a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_7f6f17594f569eaa], a0.this$, a1);
        }

        ::org::hipparchus::geometry::Point EnclosingBall::getCenter() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getCenter_abb5df84e8ab06b8]));
        }

        jdouble EnclosingBall::getRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRadius_557b8123390d8d0c]);
        }

        JArray< ::org::hipparchus::geometry::Point > EnclosingBall::getSupport() const
        {
          return JArray< ::org::hipparchus::geometry::Point >(env->callObjectMethod(this$, mids$[mid_getSupport_029301c85132187e]));
        }

        jint EnclosingBall::getSupportSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportSize_412668abc8d889e9]);
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
#include "org/hipparchus/ode/ComplexSecondaryODE.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexSecondaryODE::class$ = NULL;
      jmethodID *ComplexSecondaryODE::mids$ = NULL;
      bool ComplexSecondaryODE::live$ = false;

      jclass ComplexSecondaryODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexSecondaryODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_03ec1540e0e7ef37] = env->getMethodID(cls, "computeDerivatives", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_090a5f252422f99c] = env->getMethodID(cls, "init", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexSecondaryODE::computeDerivatives(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2, const JArray< ::org::hipparchus::complex::Complex > & a3) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_03ec1540e0e7ef37], a0, a1.this$, a2.this$, a3.this$));
      }

      jint ComplexSecondaryODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
      }

      void ComplexSecondaryODE::init(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2, jdouble a3) const
      {
        env->callVoidMethod(this$, mids$[mid_init_090a5f252422f99c], a0, a1.this$, a2.this$, a3);
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
      static PyObject *t_ComplexSecondaryODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexSecondaryODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexSecondaryODE_computeDerivatives(t_ComplexSecondaryODE *self, PyObject *args);
      static PyObject *t_ComplexSecondaryODE_getDimension(t_ComplexSecondaryODE *self);
      static PyObject *t_ComplexSecondaryODE_init(t_ComplexSecondaryODE *self, PyObject *args);
      static PyObject *t_ComplexSecondaryODE_get__dimension(t_ComplexSecondaryODE *self, void *data);
      static PyGetSetDef t_ComplexSecondaryODE__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexSecondaryODE, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexSecondaryODE__methods_[] = {
        DECLARE_METHOD(t_ComplexSecondaryODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexSecondaryODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexSecondaryODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_ComplexSecondaryODE, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexSecondaryODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexSecondaryODE)[] = {
        { Py_tp_methods, t_ComplexSecondaryODE__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ComplexSecondaryODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexSecondaryODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexSecondaryODE, t_ComplexSecondaryODE, ComplexSecondaryODE);

      void t_ComplexSecondaryODE::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexSecondaryODE), &PY_TYPE_DEF(ComplexSecondaryODE), module, "ComplexSecondaryODE", 0);
      }

      void t_ComplexSecondaryODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexSecondaryODE), "class_", make_descriptor(ComplexSecondaryODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexSecondaryODE), "wrapfn_", make_descriptor(t_ComplexSecondaryODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexSecondaryODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexSecondaryODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexSecondaryODE::initializeClass, 1)))
          return NULL;
        return t_ComplexSecondaryODE::wrap_Object(ComplexSecondaryODE(((t_ComplexSecondaryODE *) arg)->object.this$));
      }
      static PyObject *t_ComplexSecondaryODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexSecondaryODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexSecondaryODE_computeDerivatives(t_ComplexSecondaryODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > a3((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArgs(args, "D[k[k[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1, a2, a3));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_ComplexSecondaryODE_getDimension(t_ComplexSecondaryODE *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexSecondaryODE_init(t_ComplexSecondaryODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
        jdouble a3;

        if (!parseArgs(args, "D[k[kD", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.init(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ComplexSecondaryODE_get__dimension(t_ComplexSecondaryODE *self, void *data)
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
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/OceanTidesReader.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *LazyLoadedGravityFields::class$ = NULL;
          jmethodID *LazyLoadedGravityFields::mids$ = NULL;
          bool LazyLoadedGravityFields::live$ = false;

          jclass LazyLoadedGravityFields::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/LazyLoadedGravityFields");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4b4582012f303e6a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_addDefaultOceanTidesReaders_0640e6acf969ed28] = env->getMethodID(cls, "addDefaultOceanTidesReaders", "()V");
              mids$[mid_addDefaultPotentialCoefficientsReaders_0640e6acf969ed28] = env->getMethodID(cls, "addDefaultPotentialCoefficientsReaders", "()V");
              mids$[mid_addOceanTidesReader_53a9275b0b397970] = env->getMethodID(cls, "addOceanTidesReader", "(Lorg/orekit/forces/gravity/potential/OceanTidesReader;)V");
              mids$[mid_addPotentialCoefficientsReader_5853b49c202b050b] = env->getMethodID(cls, "addPotentialCoefficientsReader", "(Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;)V");
              mids$[mid_clearOceanTidesReaders_0640e6acf969ed28] = env->getMethodID(cls, "clearOceanTidesReaders", "()V");
              mids$[mid_clearPotentialCoefficientsReaders_0640e6acf969ed28] = env->getMethodID(cls, "clearPotentialCoefficientsReaders", "()V");
              mids$[mid_configureOceanLoadDeformationCoefficients_48fb5ba519b6ce93] = env->getMethodID(cls, "configureOceanLoadDeformationCoefficients", "(Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;)V");
              mids$[mid_getConstantNormalizedProvider_0c77c94a83049da8] = env->getMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_eb1ce3dfed700512] = env->getMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_79759f2115f6836e] = env->getMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanLoadDeformationCoefficients_5e90d7425c16a9f8] = env->getMethodID(cls, "getOceanLoadDeformationCoefficients", "()Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");
              mids$[mid_getOceanTidesWaves_db6a96225c690c76] = env->getMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizedProvider_2609e3e741b941bf] = env->getMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_readGravityField_88cf88e8bd59d4fa] = env->getMethodID(cls, "readGravityField", "(II)Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LazyLoadedGravityFields::LazyLoadedGravityFields(const ::org::orekit::data::DataProvidersManager & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4b4582012f303e6a, a0.this$, a1.this$)) {}

          void LazyLoadedGravityFields::addDefaultOceanTidesReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_addDefaultOceanTidesReaders_0640e6acf969ed28]);
          }

          void LazyLoadedGravityFields::addDefaultPotentialCoefficientsReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_addDefaultPotentialCoefficientsReaders_0640e6acf969ed28]);
          }

          void LazyLoadedGravityFields::addOceanTidesReader(const ::org::orekit::forces::gravity::potential::OceanTidesReader & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addOceanTidesReader_53a9275b0b397970], a0.this$);
          }

          void LazyLoadedGravityFields::addPotentialCoefficientsReader(const ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addPotentialCoefficientsReader_5853b49c202b050b], a0.this$);
          }

          void LazyLoadedGravityFields::clearOceanTidesReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_clearOceanTidesReaders_0640e6acf969ed28]);
          }

          void LazyLoadedGravityFields::clearPotentialCoefficientsReaders() const
          {
            env->callVoidMethod(this$, mids$[mid_clearPotentialCoefficientsReaders_0640e6acf969ed28]);
          }

          void LazyLoadedGravityFields::configureOceanLoadDeformationCoefficients(const ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_configureOceanLoadDeformationCoefficients_48fb5ba519b6ce93], a0.this$);
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getConstantNormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantNormalizedProvider_0c77c94a83049da8], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getConstantUnnormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantUnnormalizedProvider_eb1ce3dfed700512], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getNormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getNormalizedProvider_79759f2115f6836e], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients LazyLoadedGravityFields::getOceanLoadDeformationCoefficients() const
          {
            return ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients(env->callObjectMethod(this$, mids$[mid_getOceanLoadDeformationCoefficients_5e90d7425c16a9f8]));
          }

          ::java::util::List LazyLoadedGravityFields::getOceanTidesWaves(jint a0, jint a1) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOceanTidesWaves_db6a96225c690c76], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider LazyLoadedGravityFields::getUnnormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getUnnormalizedProvider_2609e3e741b941bf], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader LazyLoadedGravityFields::readGravityField(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->callObjectMethod(this$, mids$[mid_readGravityField_88cf88e8bd59d4fa], a0, a1));
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
          static PyObject *t_LazyLoadedGravityFields_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LazyLoadedGravityFields_init_(t_LazyLoadedGravityFields *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LazyLoadedGravityFields_addDefaultOceanTidesReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_addDefaultPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_addOceanTidesReader(t_LazyLoadedGravityFields *self, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_addPotentialCoefficientsReader(t_LazyLoadedGravityFields *self, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_clearOceanTidesReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_clearPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_configureOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, PyObject *arg);
          static PyObject *t_LazyLoadedGravityFields_getConstantNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getConstantUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self);
          static PyObject *t_LazyLoadedGravityFields_getOceanTidesWaves(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_getUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_readGravityField(t_LazyLoadedGravityFields *self, PyObject *args);
          static PyObject *t_LazyLoadedGravityFields_get__oceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, void *data);
          static PyGetSetDef t_LazyLoadedGravityFields__fields_[] = {
            DECLARE_GET_FIELD(t_LazyLoadedGravityFields, oceanLoadDeformationCoefficients),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LazyLoadedGravityFields__methods_[] = {
            DECLARE_METHOD(t_LazyLoadedGravityFields, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addDefaultOceanTidesReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addDefaultPotentialCoefficientsReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addOceanTidesReader, METH_O),
            DECLARE_METHOD(t_LazyLoadedGravityFields, addPotentialCoefficientsReader, METH_O),
            DECLARE_METHOD(t_LazyLoadedGravityFields, clearOceanTidesReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, clearPotentialCoefficientsReaders, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, configureOceanLoadDeformationCoefficients, METH_O),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getConstantNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getConstantUnnormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getOceanLoadDeformationCoefficients, METH_NOARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getOceanTidesWaves, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, getUnnormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_LazyLoadedGravityFields, readGravityField, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LazyLoadedGravityFields)[] = {
            { Py_tp_methods, t_LazyLoadedGravityFields__methods_ },
            { Py_tp_init, (void *) t_LazyLoadedGravityFields_init_ },
            { Py_tp_getset, t_LazyLoadedGravityFields__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LazyLoadedGravityFields)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LazyLoadedGravityFields, t_LazyLoadedGravityFields, LazyLoadedGravityFields);

          void t_LazyLoadedGravityFields::install(PyObject *module)
          {
            installType(&PY_TYPE(LazyLoadedGravityFields), &PY_TYPE_DEF(LazyLoadedGravityFields), module, "LazyLoadedGravityFields", 0);
          }

          void t_LazyLoadedGravityFields::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGravityFields), "class_", make_descriptor(LazyLoadedGravityFields::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGravityFields), "wrapfn_", make_descriptor(t_LazyLoadedGravityFields::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGravityFields), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LazyLoadedGravityFields_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LazyLoadedGravityFields::initializeClass, 1)))
              return NULL;
            return t_LazyLoadedGravityFields::wrap_Object(LazyLoadedGravityFields(((t_LazyLoadedGravityFields *) arg)->object.this$));
          }
          static PyObject *t_LazyLoadedGravityFields_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LazyLoadedGravityFields::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LazyLoadedGravityFields_init_(t_LazyLoadedGravityFields *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            LazyLoadedGravityFields object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LazyLoadedGravityFields(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LazyLoadedGravityFields_addDefaultOceanTidesReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.addDefaultOceanTidesReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_addDefaultPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.addDefaultPotentialCoefficientsReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_addOceanTidesReader(t_LazyLoadedGravityFields *self, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::OceanTidesReader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::forces::gravity::potential::OceanTidesReader::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addOceanTidesReader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addOceanTidesReader", arg);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_addPotentialCoefficientsReader(t_LazyLoadedGravityFields *self, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addPotentialCoefficientsReader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addPotentialCoefficientsReader", arg);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_clearOceanTidesReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.clearOceanTidesReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_clearPotentialCoefficientsReaders(t_LazyLoadedGravityFields *self)
          {
            OBJ_CALL(self->object.clearPotentialCoefficientsReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_LazyLoadedGravityFields_configureOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::initializeClass, &a0, &p0, ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::parameters_))
            {
              OBJ_CALL(self->object.configureOceanLoadDeformationCoefficients(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "configureOceanLoadDeformationCoefficients", arg);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_getConstantNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getConstantNormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConstantNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_getConstantUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getConstantUnnormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getConstantUnnormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_getNormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNormalizedProvider(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_getOceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients result((jobject) NULL);
            OBJ_CALL(result = self->object.getOceanLoadDeformationCoefficients());
            return ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::wrap_Object(result);
          }

          static PyObject *t_LazyLoadedGravityFields_getOceanTidesWaves(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getOceanTidesWaves(a0, a1));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::gravity::potential::PY_TYPE(OceanTidesWave));
            }

            PyErr_SetArgsError((PyObject *) self, "getOceanTidesWaves", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_getUnnormalizedProvider(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getUnnormalizedProvider(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getUnnormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_readGravityField(t_LazyLoadedGravityFields *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.readGravityField(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_PotentialCoefficientsReader::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "readGravityField", args);
            return NULL;
          }

          static PyObject *t_LazyLoadedGravityFields_get__oceanLoadDeformationCoefficients(t_LazyLoadedGravityFields *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients value((jobject) NULL);
            OBJ_CALL(value = self->object.getOceanLoadDeformationCoefficients());
            return ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *SBASOrbitalElements::class$ = NULL;
            jmethodID *SBASOrbitalElements::mids$ = NULL;
            bool SBASOrbitalElements::live$ = false;

            jclass SBASOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAGf0_557b8123390d8d0c] = env->getMethodID(cls, "getAGf0", "()D");
                mids$[mid_getAGf1_557b8123390d8d0c] = env->getMethodID(cls, "getAGf1", "()D");
                mids$[mid_getIODN_412668abc8d889e9] = env->getMethodID(cls, "getIODN", "()I");
                mids$[mid_getPRN_412668abc8d889e9] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getTime_557b8123390d8d0c] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getToc_557b8123390d8d0c] = env->getMethodID(cls, "getToc", "()D");
                mids$[mid_getWeek_412668abc8d889e9] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_getX_557b8123390d8d0c] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_557b8123390d8d0c] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_557b8123390d8d0c] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_557b8123390d8d0c] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_557b8123390d8d0c] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_557b8123390d8d0c] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_557b8123390d8d0c] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_557b8123390d8d0c] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_557b8123390d8d0c] = env->getMethodID(cls, "getZDotDot", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble SBASOrbitalElements::getAGf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf0_557b8123390d8d0c]);
            }

            jdouble SBASOrbitalElements::getAGf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf1_557b8123390d8d0c]);
            }

            jint SBASOrbitalElements::getIODN() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODN_412668abc8d889e9]);
            }

            jint SBASOrbitalElements::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_412668abc8d889e9]);
            }

            jdouble SBASOrbitalElements::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_557b8123390d8d0c]);
            }

            jdouble SBASOrbitalElements::getToc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getToc_557b8123390d8d0c]);
            }

            jint SBASOrbitalElements::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_412668abc8d889e9]);
            }

            jdouble SBASOrbitalElements::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_557b8123390d8d0c]);
            }

            jdouble SBASOrbitalElements::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_557b8123390d8d0c]);
            }

            jdouble SBASOrbitalElements::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_557b8123390d8d0c]);
            }

            jdouble SBASOrbitalElements::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_557b8123390d8d0c]);
            }

            jdouble SBASOrbitalElements::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_557b8123390d8d0c]);
            }

            jdouble SBASOrbitalElements::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_557b8123390d8d0c]);
            }

            jdouble SBASOrbitalElements::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_557b8123390d8d0c]);
            }

            jdouble SBASOrbitalElements::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_557b8123390d8d0c]);
            }

            jdouble SBASOrbitalElements::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_557b8123390d8d0c]);
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_SBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SBASOrbitalElements_getAGf0(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getAGf1(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getIODN(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getPRN(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getTime(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getToc(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getWeek(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getX(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getXDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getXDotDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getY(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getYDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getYDotDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getZ(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getZDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getZDotDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_get__aGf0(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__aGf1(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__iODN(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__pRN(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__time(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__toc(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__week(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__x(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__xDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__xDotDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__y(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__yDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__yDotDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__z(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__zDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__zDotDot(t_SBASOrbitalElements *self, void *data);
            static PyGetSetDef t_SBASOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_SBASOrbitalElements, aGf0),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, aGf1),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, iODN),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, pRN),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, time),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, toc),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, week),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, x),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, xDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, xDotDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, y),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, yDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, yDotDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, z),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, zDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SBASOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_SBASOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASOrbitalElements, getAGf0, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getAGf1, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getIODN, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getTime, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getToc, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getWeek, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getX, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getY, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getZ, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getZDotDot, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SBASOrbitalElements)[] = {
              { Py_tp_methods, t_SBASOrbitalElements__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_SBASOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SBASOrbitalElements)[] = {
              &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
              NULL
            };

            DEFINE_TYPE(SBASOrbitalElements, t_SBASOrbitalElements, SBASOrbitalElements);

            void t_SBASOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(SBASOrbitalElements), &PY_TYPE_DEF(SBASOrbitalElements), module, "SBASOrbitalElements", 0);
            }

            void t_SBASOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASOrbitalElements), "class_", make_descriptor(SBASOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASOrbitalElements), "wrapfn_", make_descriptor(t_SBASOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASOrbitalElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SBASOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_SBASOrbitalElements::wrap_Object(SBASOrbitalElements(((t_SBASOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_SBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SBASOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SBASOrbitalElements_getAGf0(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getAGf1(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getIODN(t_SBASOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASOrbitalElements_getPRN(t_SBASOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASOrbitalElements_getTime(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getToc(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getToc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getWeek(t_SBASOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASOrbitalElements_getX(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getXDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getXDotDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getY(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getYDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getYDotDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getZ(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getZDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getZDotDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_get__aGf0(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__aGf1(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__iODN(t_SBASOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODN());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_SBASOrbitalElements_get__pRN(t_SBASOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_SBASOrbitalElements_get__time(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__toc(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getToc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__week(t_SBASOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_SBASOrbitalElements_get__x(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__xDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__xDotDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__y(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__yDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__yDotDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__z(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__zDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__zDotDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
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
#include "org/hipparchus/linear/FieldVectorPreservingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldVectorPreservingVisitor::class$ = NULL;
      jmethodID *FieldVectorPreservingVisitor::mids$ = NULL;
      bool FieldVectorPreservingVisitor::live$ = false;

      jclass FieldVectorPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldVectorPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_ce0470d468f80a56] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_3796b665437eba81] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_d23b1b48c6bca206] = env->getMethodID(cls, "visit", "(ILorg/hipparchus/FieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldVectorPreservingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_ce0470d468f80a56]));
      }

      void FieldVectorPreservingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_3796b665437eba81], a0, a1, a2);
      }

      void FieldVectorPreservingVisitor::visit(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_d23b1b48c6bca206], a0, a1.this$);
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
      static PyObject *t_FieldVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVectorPreservingVisitor_of_(t_FieldVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorPreservingVisitor_end(t_FieldVectorPreservingVisitor *self);
      static PyObject *t_FieldVectorPreservingVisitor_start(t_FieldVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorPreservingVisitor_visit(t_FieldVectorPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldVectorPreservingVisitor_get__parameters_(t_FieldVectorPreservingVisitor *self, void *data);
      static PyGetSetDef t_FieldVectorPreservingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldVectorPreservingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldVectorPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldVectorPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldVectorPreservingVisitor)[] = {
        { Py_tp_methods, t_FieldVectorPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldVectorPreservingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldVectorPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldVectorPreservingVisitor, t_FieldVectorPreservingVisitor, FieldVectorPreservingVisitor);
      PyObject *t_FieldVectorPreservingVisitor::wrap_Object(const FieldVectorPreservingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVectorPreservingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVectorPreservingVisitor *self = (t_FieldVectorPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldVectorPreservingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVectorPreservingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVectorPreservingVisitor *self = (t_FieldVectorPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldVectorPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldVectorPreservingVisitor), &PY_TYPE_DEF(FieldVectorPreservingVisitor), module, "FieldVectorPreservingVisitor", 0);
      }

      void t_FieldVectorPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorPreservingVisitor), "class_", make_descriptor(FieldVectorPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorPreservingVisitor), "wrapfn_", make_descriptor(t_FieldVectorPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVectorPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldVectorPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldVectorPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldVectorPreservingVisitor::wrap_Object(FieldVectorPreservingVisitor(((t_FieldVectorPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldVectorPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldVectorPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldVectorPreservingVisitor_of_(t_FieldVectorPreservingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldVectorPreservingVisitor_end(t_FieldVectorPreservingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldVectorPreservingVisitor_start(t_FieldVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.start(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_FieldVectorPreservingVisitor_visit(t_FieldVectorPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.visit(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldVectorPreservingVisitor_get__parameters_(t_FieldVectorPreservingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
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
          mids$[mid_init$_cc18240f4a737f14] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_getInitialGuess_a53a7513ecedada2] = env->getMethodID(cls, "getInitialGuess", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      InitialGuess::InitialGuess(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cc18240f4a737f14, a0.this$)) {}

      JArray< jdouble > InitialGuess::getInitialGuess() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInitialGuess_a53a7513ecedada2]));
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenTesseralLinear.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *FieldHansenTesseralLinear::class$ = NULL;
              jmethodID *FieldHansenTesseralLinear::mids$ = NULL;
              bool FieldHansenTesseralLinear::live$ = false;

              jclass FieldHansenTesseralLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenTesseralLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_caa61a61f7f39515] = env->getMethodID(cls, "<init>", "(IIIIILorg/hipparchus/Field;)V");
                  mids$[mid_computeInitValues_0f27b0249abd6c51] = env->getMethodID(cls, "computeInitValues", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_getDerivative_d7f69d00c9b191e9] = env->getMethodID(cls, "getDerivative", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getValue_d7f69d00c9b191e9] = env->getMethodID(cls, "getValue", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldHansenTesseralLinear::FieldHansenTesseralLinear(jint a0, jint a1, jint a2, jint a3, jint a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_caa61a61f7f39515, a0, a1, a2, a3, a4, a5.this$)) {}

              void FieldHansenTesseralLinear::computeInitValues(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_0f27b0249abd6c51], a0.this$, a1.this$, a2.this$);
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenTesseralLinear::getDerivative(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_d7f69d00c9b191e9], a0, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenTesseralLinear::getValue(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_d7f69d00c9b191e9], a0, a1.this$));
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
              static PyObject *t_FieldHansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenTesseralLinear_of_(t_FieldHansenTesseralLinear *self, PyObject *args);
              static int t_FieldHansenTesseralLinear_init_(t_FieldHansenTesseralLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldHansenTesseralLinear_computeInitValues(t_FieldHansenTesseralLinear *self, PyObject *args);
              static PyObject *t_FieldHansenTesseralLinear_getDerivative(t_FieldHansenTesseralLinear *self, PyObject *args);
              static PyObject *t_FieldHansenTesseralLinear_getValue(t_FieldHansenTesseralLinear *self, PyObject *args);
              static PyObject *t_FieldHansenTesseralLinear_get__parameters_(t_FieldHansenTesseralLinear *self, void *data);
              static PyGetSetDef t_FieldHansenTesseralLinear__fields_[] = {
                DECLARE_GET_FIELD(t_FieldHansenTesseralLinear, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldHansenTesseralLinear__methods_[] = {
                DECLARE_METHOD(t_FieldHansenTesseralLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldHansenTesseralLinear)[] = {
                { Py_tp_methods, t_FieldHansenTesseralLinear__methods_ },
                { Py_tp_init, (void *) t_FieldHansenTesseralLinear_init_ },
                { Py_tp_getset, t_FieldHansenTesseralLinear__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldHansenTesseralLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldHansenTesseralLinear, t_FieldHansenTesseralLinear, FieldHansenTesseralLinear);
              PyObject *t_FieldHansenTesseralLinear::wrap_Object(const FieldHansenTesseralLinear& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenTesseralLinear::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenTesseralLinear *self = (t_FieldHansenTesseralLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldHansenTesseralLinear::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenTesseralLinear::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenTesseralLinear *self = (t_FieldHansenTesseralLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldHansenTesseralLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldHansenTesseralLinear), &PY_TYPE_DEF(FieldHansenTesseralLinear), module, "FieldHansenTesseralLinear", 0);
              }

              void t_FieldHansenTesseralLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenTesseralLinear), "class_", make_descriptor(FieldHansenTesseralLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenTesseralLinear), "wrapfn_", make_descriptor(t_FieldHansenTesseralLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenTesseralLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldHansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldHansenTesseralLinear::initializeClass, 1)))
                  return NULL;
                return t_FieldHansenTesseralLinear::wrap_Object(FieldHansenTesseralLinear(((t_FieldHansenTesseralLinear *) arg)->object.this$));
              }
              static PyObject *t_FieldHansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldHansenTesseralLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldHansenTesseralLinear_of_(t_FieldHansenTesseralLinear *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldHansenTesseralLinear_init_(t_FieldHansenTesseralLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                jint a2;
                jint a3;
                jint a4;
                ::org::hipparchus::Field a5((jobject) NULL);
                PyTypeObject **p5;
                FieldHansenTesseralLinear object((jobject) NULL);

                if (!parseArgs(args, "IIIIIK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
                {
                  INT_CALL(object = FieldHansenTesseralLinear(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_FieldHansenTesseralLinear_computeInitValues(t_FieldHansenTesseralLinear *self, PyObject *args)
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

              static PyObject *t_FieldHansenTesseralLinear_getDerivative(t_FieldHansenTesseralLinear *self, PyObject *args)
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

              static PyObject *t_FieldHansenTesseralLinear_getValue(t_FieldHansenTesseralLinear *self, PyObject *args)
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
              static PyObject *t_FieldHansenTesseralLinear_get__parameters_(t_FieldHansenTesseralLinear *self, void *data)
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
#include "org/orekit/forces/radiation/KnockeRediffusedForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *KnockeRediffusedForceModel::class$ = NULL;
        jmethodID *KnockeRediffusedForceModel::mids$ = NULL;
        bool KnockeRediffusedForceModel::live$ = false;

        jclass KnockeRediffusedForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/KnockeRediffusedForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b3ce614b41810081] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/forces/radiation/RadiationSensitive;DD)V");
            mids$[mid_init$_f4b89d7b0b613b35] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/forces/radiation/RadiationSensitive;DDLorg/orekit/time/TimeScale;)V");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KnockeRediffusedForceModel::KnockeRediffusedForceModel(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::forces::radiation::RadiationSensitive & a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b3ce614b41810081, a0.this$, a1.this$, a2, a3)) {}

        KnockeRediffusedForceModel::KnockeRediffusedForceModel(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::forces::radiation::RadiationSensitive & a1, jdouble a2, jdouble a3, const ::org::orekit::time::TimeScale & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f4b89d7b0b613b35, a0.this$, a1.this$, a2, a3, a4.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D KnockeRediffusedForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D KnockeRediffusedForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        jboolean KnockeRediffusedForceModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
        }

        ::java::util::List KnockeRediffusedForceModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
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
        static PyObject *t_KnockeRediffusedForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KnockeRediffusedForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KnockeRediffusedForceModel_init_(t_KnockeRediffusedForceModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KnockeRediffusedForceModel_acceleration(t_KnockeRediffusedForceModel *self, PyObject *args);
        static PyObject *t_KnockeRediffusedForceModel_dependsOnPositionOnly(t_KnockeRediffusedForceModel *self);
        static PyObject *t_KnockeRediffusedForceModel_getParametersDrivers(t_KnockeRediffusedForceModel *self);
        static PyObject *t_KnockeRediffusedForceModel_get__parametersDrivers(t_KnockeRediffusedForceModel *self, void *data);
        static PyGetSetDef t_KnockeRediffusedForceModel__fields_[] = {
          DECLARE_GET_FIELD(t_KnockeRediffusedForceModel, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KnockeRediffusedForceModel__methods_[] = {
          DECLARE_METHOD(t_KnockeRediffusedForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KnockeRediffusedForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KnockeRediffusedForceModel, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_KnockeRediffusedForceModel, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_KnockeRediffusedForceModel, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KnockeRediffusedForceModel)[] = {
          { Py_tp_methods, t_KnockeRediffusedForceModel__methods_ },
          { Py_tp_init, (void *) t_KnockeRediffusedForceModel_init_ },
          { Py_tp_getset, t_KnockeRediffusedForceModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KnockeRediffusedForceModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KnockeRediffusedForceModel, t_KnockeRediffusedForceModel, KnockeRediffusedForceModel);

        void t_KnockeRediffusedForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(KnockeRediffusedForceModel), &PY_TYPE_DEF(KnockeRediffusedForceModel), module, "KnockeRediffusedForceModel", 0);
        }

        void t_KnockeRediffusedForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KnockeRediffusedForceModel), "class_", make_descriptor(KnockeRediffusedForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KnockeRediffusedForceModel), "wrapfn_", make_descriptor(t_KnockeRediffusedForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KnockeRediffusedForceModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KnockeRediffusedForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KnockeRediffusedForceModel::initializeClass, 1)))
            return NULL;
          return t_KnockeRediffusedForceModel::wrap_Object(KnockeRediffusedForceModel(((t_KnockeRediffusedForceModel *) arg)->object.this$));
        }
        static PyObject *t_KnockeRediffusedForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KnockeRediffusedForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KnockeRediffusedForceModel_init_(t_KnockeRediffusedForceModel *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::forces::radiation::RadiationSensitive a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              KnockeRediffusedForceModel object((jobject) NULL);

              if (!parseArgs(args, "kkDD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = KnockeRediffusedForceModel(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::forces::radiation::RadiationSensitive a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::orekit::time::TimeScale a4((jobject) NULL);
              KnockeRediffusedForceModel object((jobject) NULL);

              if (!parseArgs(args, "kkDDk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = KnockeRediffusedForceModel(a0, a1, a2, a3, a4));
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

        static PyObject *t_KnockeRediffusedForceModel_acceleration(t_KnockeRediffusedForceModel *self, PyObject *args)
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

        static PyObject *t_KnockeRediffusedForceModel_dependsOnPositionOnly(t_KnockeRediffusedForceModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_KnockeRediffusedForceModel_getParametersDrivers(t_KnockeRediffusedForceModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_KnockeRediffusedForceModel_get__parametersDrivers(t_KnockeRediffusedForceModel *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/HermiteInterpolator.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *HermiteInterpolator::class$ = NULL;
        jmethodID *HermiteInterpolator::mids$ = NULL;
        bool HermiteInterpolator::live$ = false;

        jclass HermiteInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/HermiteInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSamplePoint_c348d229de01ec27] = env->getMethodID(cls, "addSamplePoint", "(D[[D)V");
            mids$[mid_derivatives_fee2210b9e0b192d] = env->getMethodID(cls, "derivatives", "(DI)[[D");
            mids$[mid_getPolynomials_ab8ca1f1c6647c6c] = env->getMethodID(cls, "getPolynomials", "()[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_value_ebf0376b0df5061b] = env->getMethodID(cls, "value", "(D)[D");
            mids$[mid_value_e94dffdd58ba460f] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)[Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HermiteInterpolator::HermiteInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void HermiteInterpolator::addSamplePoint(jdouble a0, const JArray< JArray< jdouble > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSamplePoint_c348d229de01ec27], a0, a1.this$);
        }

        JArray< JArray< jdouble > > HermiteInterpolator::derivatives(jdouble a0, jint a1) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_derivatives_fee2210b9e0b192d], a0, a1));
        }

        JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > HermiteInterpolator::getPolynomials() const
        {
          return JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getPolynomials_ab8ca1f1c6647c6c]));
        }

        JArray< jdouble > HermiteInterpolator::value(jdouble a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_ebf0376b0df5061b], a0));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > HermiteInterpolator::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_value_e94dffdd58ba460f], a0.this$));
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
        static PyObject *t_HermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HermiteInterpolator_init_(t_HermiteInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HermiteInterpolator_addSamplePoint(t_HermiteInterpolator *self, PyObject *args);
        static PyObject *t_HermiteInterpolator_derivatives(t_HermiteInterpolator *self, PyObject *args);
        static PyObject *t_HermiteInterpolator_getPolynomials(t_HermiteInterpolator *self);
        static PyObject *t_HermiteInterpolator_value(t_HermiteInterpolator *self, PyObject *args);
        static PyObject *t_HermiteInterpolator_get__polynomials(t_HermiteInterpolator *self, void *data);
        static PyGetSetDef t_HermiteInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_HermiteInterpolator, polynomials),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HermiteInterpolator__methods_[] = {
          DECLARE_METHOD(t_HermiteInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HermiteInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HermiteInterpolator, addSamplePoint, METH_VARARGS),
          DECLARE_METHOD(t_HermiteInterpolator, derivatives, METH_VARARGS),
          DECLARE_METHOD(t_HermiteInterpolator, getPolynomials, METH_NOARGS),
          DECLARE_METHOD(t_HermiteInterpolator, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HermiteInterpolator)[] = {
          { Py_tp_methods, t_HermiteInterpolator__methods_ },
          { Py_tp_init, (void *) t_HermiteInterpolator_init_ },
          { Py_tp_getset, t_HermiteInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HermiteInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HermiteInterpolator, t_HermiteInterpolator, HermiteInterpolator);

        void t_HermiteInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(HermiteInterpolator), &PY_TYPE_DEF(HermiteInterpolator), module, "HermiteInterpolator", 0);
        }

        void t_HermiteInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteInterpolator), "class_", make_descriptor(HermiteInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteInterpolator), "wrapfn_", make_descriptor(t_HermiteInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HermiteInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HermiteInterpolator::initializeClass, 1)))
            return NULL;
          return t_HermiteInterpolator::wrap_Object(HermiteInterpolator(((t_HermiteInterpolator *) arg)->object.this$));
        }
        static PyObject *t_HermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HermiteInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HermiteInterpolator_init_(t_HermiteInterpolator *self, PyObject *args, PyObject *kwds)
        {
          HermiteInterpolator object((jobject) NULL);

          INT_CALL(object = HermiteInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_HermiteInterpolator_addSamplePoint(t_HermiteInterpolator *self, PyObject *args)
        {
          jdouble a0;
          JArray< JArray< jdouble > > a1((jobject) NULL);

          if (!parseArgs(args, "D[[D", &a0, &a1))
          {
            OBJ_CALL(self->object.addSamplePoint(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSamplePoint", args);
          return NULL;
        }

        static PyObject *t_HermiteInterpolator_derivatives(t_HermiteInterpolator *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, "DI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.derivatives(a0, a1));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "derivatives", args);
          return NULL;
        }

        static PyObject *t_HermiteInterpolator_getPolynomials(t_HermiteInterpolator *self)
        {
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolynomials());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
        }

        static PyObject *t_HermiteInterpolator_value(t_HermiteInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return result.wrap();
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::analysis::differentiation::Derivative > result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Derivative::wrap_jobject);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_HermiteInterpolator_get__polynomials(t_HermiteInterpolator *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolynomials());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *MatrixDecomposer::class$ = NULL;
      jmethodID *MatrixDecomposer::mids$ = NULL;
      bool MatrixDecomposer::live$ = false;

      jclass MatrixDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/MatrixDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_decompose_3f89101650640015] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::DecompositionSolver MatrixDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_3f89101650640015], a0.this$));
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
      static PyObject *t_MatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixDecomposer_decompose(t_MatrixDecomposer *self, PyObject *arg);

      static PyMethodDef t_MatrixDecomposer__methods_[] = {
        DECLARE_METHOD(t_MatrixDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MatrixDecomposer)[] = {
        { Py_tp_methods, t_MatrixDecomposer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MatrixDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MatrixDecomposer, t_MatrixDecomposer, MatrixDecomposer);

      void t_MatrixDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(MatrixDecomposer), &PY_TYPE_DEF(MatrixDecomposer), module, "MatrixDecomposer", 0);
      }

      void t_MatrixDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixDecomposer), "class_", make_descriptor(MatrixDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixDecomposer), "wrapfn_", make_descriptor(t_MatrixDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MatrixDecomposer::initializeClass, 1)))
          return NULL;
        return t_MatrixDecomposer::wrap_Object(MatrixDecomposer(((t_MatrixDecomposer *) arg)->object.this$));
      }
      static PyObject *t_MatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MatrixDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MatrixDecomposer_decompose(t_MatrixDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/InterpolationTableLoader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *InterpolationTableLoader::class$ = NULL;
      jmethodID *InterpolationTableLoader::mids$ = NULL;
      bool InterpolationTableLoader::live$ = false;

      jclass InterpolationTableLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/InterpolationTableLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getAbscissaGrid_a53a7513ecedada2] = env->getMethodID(cls, "getAbscissaGrid", "()[D");
          mids$[mid_getOrdinateGrid_a53a7513ecedada2] = env->getMethodID(cls, "getOrdinateGrid", "()[D");
          mids$[mid_getValuesSamples_8cf5267aa13a77f3] = env->getMethodID(cls, "getValuesSamples", "()[[D");
          mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_89b302893bdbe1f1] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      InterpolationTableLoader::InterpolationTableLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      JArray< jdouble > InterpolationTableLoader::getAbscissaGrid() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAbscissaGrid_a53a7513ecedada2]));
      }

      JArray< jdouble > InterpolationTableLoader::getOrdinateGrid() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getOrdinateGrid_a53a7513ecedada2]));
      }

      JArray< JArray< jdouble > > InterpolationTableLoader::getValuesSamples() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getValuesSamples_8cf5267aa13a77f3]));
      }

      void InterpolationTableLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
      }

      jboolean InterpolationTableLoader::stillAcceptsData() const
      {
        return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_89b302893bdbe1f1]);
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
      static PyObject *t_InterpolationTableLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InterpolationTableLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_InterpolationTableLoader_init_(t_InterpolationTableLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_InterpolationTableLoader_getAbscissaGrid(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_getOrdinateGrid(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_getValuesSamples(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_loadData(t_InterpolationTableLoader *self, PyObject *args);
      static PyObject *t_InterpolationTableLoader_stillAcceptsData(t_InterpolationTableLoader *self);
      static PyObject *t_InterpolationTableLoader_get__abscissaGrid(t_InterpolationTableLoader *self, void *data);
      static PyObject *t_InterpolationTableLoader_get__ordinateGrid(t_InterpolationTableLoader *self, void *data);
      static PyObject *t_InterpolationTableLoader_get__valuesSamples(t_InterpolationTableLoader *self, void *data);
      static PyGetSetDef t_InterpolationTableLoader__fields_[] = {
        DECLARE_GET_FIELD(t_InterpolationTableLoader, abscissaGrid),
        DECLARE_GET_FIELD(t_InterpolationTableLoader, ordinateGrid),
        DECLARE_GET_FIELD(t_InterpolationTableLoader, valuesSamples),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_InterpolationTableLoader__methods_[] = {
        DECLARE_METHOD(t_InterpolationTableLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InterpolationTableLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InterpolationTableLoader, getAbscissaGrid, METH_NOARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, getOrdinateGrid, METH_NOARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, getValuesSamples, METH_NOARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, loadData, METH_VARARGS),
        DECLARE_METHOD(t_InterpolationTableLoader, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(InterpolationTableLoader)[] = {
        { Py_tp_methods, t_InterpolationTableLoader__methods_ },
        { Py_tp_init, (void *) t_InterpolationTableLoader_init_ },
        { Py_tp_getset, t_InterpolationTableLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(InterpolationTableLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(InterpolationTableLoader, t_InterpolationTableLoader, InterpolationTableLoader);

      void t_InterpolationTableLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(InterpolationTableLoader), &PY_TYPE_DEF(InterpolationTableLoader), module, "InterpolationTableLoader", 0);
      }

      void t_InterpolationTableLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationTableLoader), "class_", make_descriptor(InterpolationTableLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationTableLoader), "wrapfn_", make_descriptor(t_InterpolationTableLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InterpolationTableLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_InterpolationTableLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, InterpolationTableLoader::initializeClass, 1)))
          return NULL;
        return t_InterpolationTableLoader::wrap_Object(InterpolationTableLoader(((t_InterpolationTableLoader *) arg)->object.this$));
      }
      static PyObject *t_InterpolationTableLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, InterpolationTableLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_InterpolationTableLoader_init_(t_InterpolationTableLoader *self, PyObject *args, PyObject *kwds)
      {
        InterpolationTableLoader object((jobject) NULL);

        INT_CALL(object = InterpolationTableLoader());
        self->object = object;

        return 0;
      }

      static PyObject *t_InterpolationTableLoader_getAbscissaGrid(t_InterpolationTableLoader *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbscissaGrid());
        return result.wrap();
      }

      static PyObject *t_InterpolationTableLoader_getOrdinateGrid(t_InterpolationTableLoader *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrdinateGrid());
        return result.wrap();
      }

      static PyObject *t_InterpolationTableLoader_getValuesSamples(t_InterpolationTableLoader *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValuesSamples());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_InterpolationTableLoader_loadData(t_InterpolationTableLoader *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.loadData(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "loadData", args);
        return NULL;
      }

      static PyObject *t_InterpolationTableLoader_stillAcceptsData(t_InterpolationTableLoader *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_InterpolationTableLoader_get__abscissaGrid(t_InterpolationTableLoader *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbscissaGrid());
        return value.wrap();
      }

      static PyObject *t_InterpolationTableLoader_get__ordinateGrid(t_InterpolationTableLoader *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrdinateGrid());
        return value.wrap();
      }

      static PyObject *t_InterpolationTableLoader_get__valuesSamples(t_InterpolationTableLoader *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValuesSamples());
        return JArray<jobject>(value.this$).wrap(NULL);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/PythonXmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *PythonXmlTokenBuilder::class$ = NULL;
            jmethodID *PythonXmlTokenBuilder::mids$ = NULL;
            bool PythonXmlTokenBuilder::live$ = false;

            jclass PythonXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/PythonXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_5a8e94497b45a4c0] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonXmlTokenBuilder::PythonXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void PythonXmlTokenBuilder::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonXmlTokenBuilder::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonXmlTokenBuilder::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
            static PyObject *t_PythonXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonXmlTokenBuilder_init_(t_PythonXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonXmlTokenBuilder_finalize(t_PythonXmlTokenBuilder *self);
            static PyObject *t_PythonXmlTokenBuilder_pythonExtension(t_PythonXmlTokenBuilder *self, PyObject *args);
            static jobject JNICALL t_PythonXmlTokenBuilder_buildTokens0(JNIEnv *jenv, jobject jobj, jboolean a0, jboolean a1, jobject a2, jobject a3, jobject a4, jint a5, jobject a6);
            static void JNICALL t_PythonXmlTokenBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonXmlTokenBuilder_get__self(t_PythonXmlTokenBuilder *self, void *data);
            static PyGetSetDef t_PythonXmlTokenBuilder__fields_[] = {
              DECLARE_GET_FIELD(t_PythonXmlTokenBuilder, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_PythonXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonXmlTokenBuilder, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonXmlTokenBuilder, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonXmlTokenBuilder)[] = {
              { Py_tp_methods, t_PythonXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_PythonXmlTokenBuilder_init_ },
              { Py_tp_getset, t_PythonXmlTokenBuilder__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonXmlTokenBuilder, t_PythonXmlTokenBuilder, PythonXmlTokenBuilder);

            void t_PythonXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonXmlTokenBuilder), &PY_TYPE_DEF(PythonXmlTokenBuilder), module, "PythonXmlTokenBuilder", 1);
            }

            void t_PythonXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonXmlTokenBuilder), "class_", make_descriptor(PythonXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonXmlTokenBuilder), "wrapfn_", make_descriptor(t_PythonXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonXmlTokenBuilder::initializeClass);
              JNINativeMethod methods[] = {
                { "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;", (void *) t_PythonXmlTokenBuilder_buildTokens0 },
                { "pythonDecRef", "()V", (void *) t_PythonXmlTokenBuilder_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_PythonXmlTokenBuilder::wrap_Object(PythonXmlTokenBuilder(((t_PythonXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_PythonXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonXmlTokenBuilder_init_(t_PythonXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              PythonXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = PythonXmlTokenBuilder());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonXmlTokenBuilder_finalize(t_PythonXmlTokenBuilder *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonXmlTokenBuilder_pythonExtension(t_PythonXmlTokenBuilder *self, PyObject *args)
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

            static jobject JNICALL t_PythonXmlTokenBuilder_buildTokens0(JNIEnv *jenv, jobject jobj, jboolean a0, jboolean a1, jobject a2, jobject a3, jobject a4, jint a5, jobject a6)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonXmlTokenBuilder::mids$[PythonXmlTokenBuilder::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::List value((jobject) NULL);
              PyObject *o0 = (a0 ? Py_True : Py_False);
              PyObject *o1 = (a1 ? Py_True : Py_False);
              PyObject *o2 = env->fromJString((jstring) a2, 0);
              PyObject *o3 = env->fromJString((jstring) a3, 0);
              PyObject *o4 = ::java::util::t_Map::wrap_Object(::java::util::Map(a4));
              PyObject *o6 = env->fromJString((jstring) a6, 0);
              PyObject *result = PyObject_CallMethod(obj, "buildTokens", "OOOOOiO", o0, o1, o2, o3, o4, (int) a5, o6);
              Py_DECREF(o2);
              Py_DECREF(o3);
              Py_DECREF(o4);
              Py_DECREF(o6);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
              {
                throwTypeError("buildTokens", result);
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

            static void JNICALL t_PythonXmlTokenBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonXmlTokenBuilder::mids$[PythonXmlTokenBuilder::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonXmlTokenBuilder::mids$[PythonXmlTokenBuilder::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonXmlTokenBuilder_get__self(t_PythonXmlTokenBuilder *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/EnumeratedIntegerDistribution.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Double.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *EnumeratedIntegerDistribution::class$ = NULL;
        jmethodID *EnumeratedIntegerDistribution::mids$ = NULL;
        bool EnumeratedIntegerDistribution::live$ = false;

        jclass EnumeratedIntegerDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/EnumeratedIntegerDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ec63cb8a58ef5a54] = env->getMethodID(cls, "<init>", "([I)V");
            mids$[mid_init$_dfab3c2e0858359f] = env->getMethodID(cls, "<init>", "([I[D)V");
            mids$[mid_cumulativeProbability_69cfb132c661aca4] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getPmf_0d9551367f7ecdef] = env->getMethodID(cls, "getPmf", "()Ljava/util/List;");
            mids$[mid_getSupportLowerBound_412668abc8d889e9] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_412668abc8d889e9] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_probability_69cfb132c661aca4] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EnumeratedIntegerDistribution::EnumeratedIntegerDistribution(const JArray< jint > & a0) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_ec63cb8a58ef5a54, a0.this$)) {}

        EnumeratedIntegerDistribution::EnumeratedIntegerDistribution(const JArray< jint > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_dfab3c2e0858359f, a0.this$, a1.this$)) {}

        jdouble EnumeratedIntegerDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_69cfb132c661aca4], a0);
        }

        jdouble EnumeratedIntegerDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble EnumeratedIntegerDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        ::java::util::List EnumeratedIntegerDistribution::getPmf() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPmf_0d9551367f7ecdef]));
        }

        jint EnumeratedIntegerDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_412668abc8d889e9]);
        }

        jint EnumeratedIntegerDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_412668abc8d889e9]);
        }

        jboolean EnumeratedIntegerDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble EnumeratedIntegerDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_69cfb132c661aca4], a0);
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
      namespace discrete {
        static PyObject *t_EnumeratedIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnumeratedIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EnumeratedIntegerDistribution_init_(t_EnumeratedIntegerDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EnumeratedIntegerDistribution_cumulativeProbability(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_getNumericalMean(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_getNumericalVariance(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_getPmf(t_EnumeratedIntegerDistribution *self);
        static PyObject *t_EnumeratedIntegerDistribution_getSupportLowerBound(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_getSupportUpperBound(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_isSupportConnected(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_probability(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_get__numericalMean(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__numericalVariance(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__pmf(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__supportConnected(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__supportLowerBound(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__supportUpperBound(t_EnumeratedIntegerDistribution *self, void *data);
        static PyGetSetDef t_EnumeratedIntegerDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, numericalMean),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, pmf),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, supportConnected),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EnumeratedIntegerDistribution__methods_[] = {
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getPmf, METH_NOARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EnumeratedIntegerDistribution)[] = {
          { Py_tp_methods, t_EnumeratedIntegerDistribution__methods_ },
          { Py_tp_init, (void *) t_EnumeratedIntegerDistribution_init_ },
          { Py_tp_getset, t_EnumeratedIntegerDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EnumeratedIntegerDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(EnumeratedIntegerDistribution, t_EnumeratedIntegerDistribution, EnumeratedIntegerDistribution);

        void t_EnumeratedIntegerDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(EnumeratedIntegerDistribution), &PY_TYPE_DEF(EnumeratedIntegerDistribution), module, "EnumeratedIntegerDistribution", 0);
        }

        void t_EnumeratedIntegerDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedIntegerDistribution), "class_", make_descriptor(EnumeratedIntegerDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedIntegerDistribution), "wrapfn_", make_descriptor(t_EnumeratedIntegerDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedIntegerDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EnumeratedIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EnumeratedIntegerDistribution::initializeClass, 1)))
            return NULL;
          return t_EnumeratedIntegerDistribution::wrap_Object(EnumeratedIntegerDistribution(((t_EnumeratedIntegerDistribution *) arg)->object.this$));
        }
        static PyObject *t_EnumeratedIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EnumeratedIntegerDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EnumeratedIntegerDistribution_init_(t_EnumeratedIntegerDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              EnumeratedIntegerDistribution object((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                INT_CALL(object = EnumeratedIntegerDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              JArray< jint > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              EnumeratedIntegerDistribution object((jobject) NULL);

              if (!parseArgs(args, "[I[D", &a0, &a1))
              {
                INT_CALL(object = EnumeratedIntegerDistribution(a0, a1));
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

        static PyObject *t_EnumeratedIntegerDistribution_cumulativeProbability(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getNumericalMean(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getNumericalVariance(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getPmf(t_EnumeratedIntegerDistribution *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getPmf());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getSupportLowerBound(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getSupportUpperBound(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_isSupportConnected(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_probability(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__numericalMean(t_EnumeratedIntegerDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__numericalVariance(t_EnumeratedIntegerDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__pmf(t_EnumeratedIntegerDistribution *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getPmf());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__supportConnected(t_EnumeratedIntegerDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__supportLowerBound(t_EnumeratedIntegerDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__supportUpperBound(t_EnumeratedIntegerDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/EventState.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
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
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/EventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_doEvent_6006b945607419cb] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/events/EventOccurrence;");
            mids$[mid_evaluateStep_8380759ad65b5b06] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");
            mids$[mid_getEventTime_557b8123390d8d0c] = env->getMethodID(cls, "getEventTime", "()D");
            mids$[mid_init_7e69c83de8052a2b] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::EventOccurrence EventState::doEvent(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_6006b945607419cb], a0.this$));
        }

        jboolean EventState::evaluateStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_8380759ad65b5b06], a0.this$);
        }

        jdouble EventState::getEventTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEventTime_557b8123390d8d0c]);
        }

        void EventState::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_7e69c83de8052a2b], a0.this$, a1);
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
        static PyObject *t_EventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState_doEvent(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_evaluateStep(t_EventState *self, PyObject *arg);
        static PyObject *t_EventState_getEventTime(t_EventState *self);
        static PyObject *t_EventState_init(t_EventState *self, PyObject *args);
        static PyObject *t_EventState_get__eventTime(t_EventState *self, void *data);
        static PyGetSetDef t_EventState__fields_[] = {
          DECLARE_GET_FIELD(t_EventState, eventTime),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventState__methods_[] = {
          DECLARE_METHOD(t_EventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState, doEvent, METH_O),
          DECLARE_METHOD(t_EventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_EventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_EventState, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventState)[] = {
          { Py_tp_methods, t_EventState__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventState, t_EventState, EventState);

        void t_EventState::install(PyObject *module)
        {
          installType(&PY_TYPE(EventState), &PY_TYPE_DEF(EventState), module, "EventState", 0);
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

        static PyObject *t_EventState_doEvent(t_EventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::events::EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_EventOccurrence::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_EventState_evaluateStep(t_EventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_EventState_getEventTime(t_EventState *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEventTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventState_init(t_EventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_EventState_get__eventTime(t_EventState *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEventTime());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/KolmogorovSmirnovTest.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *KolmogorovSmirnovTest::class$ = NULL;
        jmethodID *KolmogorovSmirnovTest::mids$ = NULL;
        bool KolmogorovSmirnovTest::live$ = false;

        jclass KolmogorovSmirnovTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/KolmogorovSmirnovTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_3cd6a6b354c6aa22] = env->getMethodID(cls, "<init>", "(J)V");
            mids$[mid_approximateP_5b7edc654bd4c638] = env->getMethodID(cls, "approximateP", "(DII)D");
            mids$[mid_bootstrap_a7af9b8e2bb5e099] = env->getMethodID(cls, "bootstrap", "([D[DI)D");
            mids$[mid_bootstrap_6a5e1519e571e53d] = env->getMethodID(cls, "bootstrap", "([D[DIZ)D");
            mids$[mid_cdf_156ae9d72f1c8533] = env->getMethodID(cls, "cdf", "(DI)D");
            mids$[mid_cdf_3e2cba7ad7d970a7] = env->getMethodID(cls, "cdf", "(DIZ)D");
            mids$[mid_cdfExact_156ae9d72f1c8533] = env->getMethodID(cls, "cdfExact", "(DI)D");
            mids$[mid_exactP_4cb0bd459cea3c08] = env->getMethodID(cls, "exactP", "(DIIZ)D");
            mids$[mid_kolmogorovSmirnovStatistic_628a76297e217f13] = env->getMethodID(cls, "kolmogorovSmirnovStatistic", "([D[D)D");
            mids$[mid_kolmogorovSmirnovStatistic_25a541813dc79893] = env->getMethodID(cls, "kolmogorovSmirnovStatistic", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_628a76297e217f13] = env->getMethodID(cls, "kolmogorovSmirnovTest", "([D[D)D");
            mids$[mid_kolmogorovSmirnovTest_25a541813dc79893] = env->getMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_81226d0b24750fea] = env->getMethodID(cls, "kolmogorovSmirnovTest", "([D[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_7ce25eee88719bea] = env->getMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_3766a811638b85f8] = env->getMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DD)Z");
            mids$[mid_ksSum_63ce51364ee6da7c] = env->getMethodID(cls, "ksSum", "(DDI)D");
            mids$[mid_pelzGood_156ae9d72f1c8533] = env->getMethodID(cls, "pelzGood", "(DI)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KolmogorovSmirnovTest::KolmogorovSmirnovTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        KolmogorovSmirnovTest::KolmogorovSmirnovTest(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3cd6a6b354c6aa22, a0)) {}

        jdouble KolmogorovSmirnovTest::approximateP(jdouble a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_approximateP_5b7edc654bd4c638], a0, a1, a2);
        }

        jdouble KolmogorovSmirnovTest::bootstrap(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_bootstrap_a7af9b8e2bb5e099], a0.this$, a1.this$, a2);
        }

        jdouble KolmogorovSmirnovTest::bootstrap(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jboolean a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_bootstrap_6a5e1519e571e53d], a0.this$, a1.this$, a2, a3);
        }

        jdouble KolmogorovSmirnovTest::cdf(jdouble a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cdf_156ae9d72f1c8533], a0, a1);
        }

        jdouble KolmogorovSmirnovTest::cdf(jdouble a0, jint a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cdf_3e2cba7ad7d970a7], a0, a1, a2);
        }

        jdouble KolmogorovSmirnovTest::cdfExact(jdouble a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cdfExact_156ae9d72f1c8533], a0, a1);
        }

        jdouble KolmogorovSmirnovTest::exactP(jdouble a0, jint a1, jint a2, jboolean a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_exactP_4cb0bd459cea3c08], a0, a1, a2, a3);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovStatistic(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovStatistic_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovStatistic(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovStatistic_25a541813dc79893], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_628a76297e217f13], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_25a541813dc79893], a0.this$, a1.this$);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_81226d0b24750fea], a0.this$, a1.this$, a2);
        }

        jdouble KolmogorovSmirnovTest::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_kolmogorovSmirnovTest_7ce25eee88719bea], a0.this$, a1.this$, a2);
        }

        jboolean KolmogorovSmirnovTest::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_kolmogorovSmirnovTest_3766a811638b85f8], a0.this$, a1.this$, a2);
        }

        jdouble KolmogorovSmirnovTest::ksSum(jdouble a0, jdouble a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_ksSum_63ce51364ee6da7c], a0, a1, a2);
        }

        jdouble KolmogorovSmirnovTest::pelzGood(jdouble a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_pelzGood_156ae9d72f1c8533], a0, a1);
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
      namespace inference {
        static PyObject *t_KolmogorovSmirnovTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KolmogorovSmirnovTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KolmogorovSmirnovTest_init_(t_KolmogorovSmirnovTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KolmogorovSmirnovTest_approximateP(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_bootstrap(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_cdf(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_cdfExact(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_exactP(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_kolmogorovSmirnovStatistic(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_kolmogorovSmirnovTest(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_ksSum(t_KolmogorovSmirnovTest *self, PyObject *args);
        static PyObject *t_KolmogorovSmirnovTest_pelzGood(t_KolmogorovSmirnovTest *self, PyObject *args);

        static PyMethodDef t_KolmogorovSmirnovTest__methods_[] = {
          DECLARE_METHOD(t_KolmogorovSmirnovTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, approximateP, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, bootstrap, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, cdf, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, cdfExact, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, exactP, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, kolmogorovSmirnovStatistic, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, kolmogorovSmirnovTest, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, ksSum, METH_VARARGS),
          DECLARE_METHOD(t_KolmogorovSmirnovTest, pelzGood, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KolmogorovSmirnovTest)[] = {
          { Py_tp_methods, t_KolmogorovSmirnovTest__methods_ },
          { Py_tp_init, (void *) t_KolmogorovSmirnovTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KolmogorovSmirnovTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KolmogorovSmirnovTest, t_KolmogorovSmirnovTest, KolmogorovSmirnovTest);

        void t_KolmogorovSmirnovTest::install(PyObject *module)
        {
          installType(&PY_TYPE(KolmogorovSmirnovTest), &PY_TYPE_DEF(KolmogorovSmirnovTest), module, "KolmogorovSmirnovTest", 0);
        }

        void t_KolmogorovSmirnovTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KolmogorovSmirnovTest), "class_", make_descriptor(KolmogorovSmirnovTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KolmogorovSmirnovTest), "wrapfn_", make_descriptor(t_KolmogorovSmirnovTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KolmogorovSmirnovTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KolmogorovSmirnovTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KolmogorovSmirnovTest::initializeClass, 1)))
            return NULL;
          return t_KolmogorovSmirnovTest::wrap_Object(KolmogorovSmirnovTest(((t_KolmogorovSmirnovTest *) arg)->object.this$));
        }
        static PyObject *t_KolmogorovSmirnovTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KolmogorovSmirnovTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KolmogorovSmirnovTest_init_(t_KolmogorovSmirnovTest *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              KolmogorovSmirnovTest object((jobject) NULL);

              INT_CALL(object = KolmogorovSmirnovTest());
              self->object = object;
              break;
            }
           case 1:
            {
              jlong a0;
              KolmogorovSmirnovTest object((jobject) NULL);

              if (!parseArgs(args, "J", &a0))
              {
                INT_CALL(object = KolmogorovSmirnovTest(a0));
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

        static PyObject *t_KolmogorovSmirnovTest_approximateP(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.approximateP(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "approximateP", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_bootstrap(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble result;

              if (!parseArgs(args, "[D[DI", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.bootstrap(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jboolean a3;
              jdouble result;

              if (!parseArgs(args, "[D[DIZ", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.bootstrap(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "bootstrap", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_cdf(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                OBJ_CALL(result = self->object.cdf(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              jdouble a0;
              jint a1;
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "DIZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.cdf(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "cdf", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_cdfExact(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "DI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.cdfExact(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "cdfExact", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_exactP(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jint a2;
          jboolean a3;
          jdouble result;

          if (!parseArgs(args, "DIIZ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.exactP(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "exactP", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_kolmogorovSmirnovStatistic(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovStatistic(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovStatistic(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "kolmogorovSmirnovStatistic", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_kolmogorovSmirnovTest(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "k[DZ", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "k[DD", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.kolmogorovSmirnovTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "kolmogorovSmirnovTest", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_ksSum(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "DDI", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.ksSum(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "ksSum", args);
          return NULL;
        }

        static PyObject *t_KolmogorovSmirnovTest_pelzGood(t_KolmogorovSmirnovTest *self, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "DI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.pelzGood(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "pelzGood", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/UserRangeAccuracy.h"
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *UserRangeAccuracy::class$ = NULL;
            jmethodID *UserRangeAccuracy::mids$ = NULL;
            bool UserRangeAccuracy::live$ = false;

            jclass UserRangeAccuracy::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/UserRangeAccuracy");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserRangeAccuracy::UserRangeAccuracy(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

            jdouble UserRangeAccuracy::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_557b8123390d8d0c]);
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
            static PyObject *t_UserRangeAccuracy_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserRangeAccuracy_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserRangeAccuracy_init_(t_UserRangeAccuracy *self, PyObject *args, PyObject *kwds);
            static PyObject *t_UserRangeAccuracy_getAccuracy(t_UserRangeAccuracy *self);
            static PyObject *t_UserRangeAccuracy_get__accuracy(t_UserRangeAccuracy *self, void *data);
            static PyGetSetDef t_UserRangeAccuracy__fields_[] = {
              DECLARE_GET_FIELD(t_UserRangeAccuracy, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_UserRangeAccuracy__methods_[] = {
              DECLARE_METHOD(t_UserRangeAccuracy, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserRangeAccuracy, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserRangeAccuracy, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserRangeAccuracy)[] = {
              { Py_tp_methods, t_UserRangeAccuracy__methods_ },
              { Py_tp_init, (void *) t_UserRangeAccuracy_init_ },
              { Py_tp_getset, t_UserRangeAccuracy__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserRangeAccuracy)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(UserRangeAccuracy, t_UserRangeAccuracy, UserRangeAccuracy);

            void t_UserRangeAccuracy::install(PyObject *module)
            {
              installType(&PY_TYPE(UserRangeAccuracy), &PY_TYPE_DEF(UserRangeAccuracy), module, "UserRangeAccuracy", 0);
            }

            void t_UserRangeAccuracy::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserRangeAccuracy), "class_", make_descriptor(UserRangeAccuracy::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserRangeAccuracy), "wrapfn_", make_descriptor(t_UserRangeAccuracy::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserRangeAccuracy), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_UserRangeAccuracy_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserRangeAccuracy::initializeClass, 1)))
                return NULL;
              return t_UserRangeAccuracy::wrap_Object(UserRangeAccuracy(((t_UserRangeAccuracy *) arg)->object.this$));
            }
            static PyObject *t_UserRangeAccuracy_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserRangeAccuracy::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserRangeAccuracy_init_(t_UserRangeAccuracy *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              UserRangeAccuracy object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = UserRangeAccuracy(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_UserRangeAccuracy_getAccuracy(t_UserRangeAccuracy *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_UserRangeAccuracy_get__accuracy(t_UserRangeAccuracy *self, void *data)
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
#include "org/hipparchus/complex/ComplexUnivariateIntegrator.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexUnivariateIntegrator::class$ = NULL;
      jmethodID *ComplexUnivariateIntegrator::mids$ = NULL;
      bool ComplexUnivariateIntegrator::live$ = false;

      jclass ComplexUnivariateIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexUnivariateIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ad92e6ddde52d3ab] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/UnivariateIntegrator;)V");
          mids$[mid_integrate_9e044a3280202960] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_integrate_7587b226958b23ce] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexUnivariateIntegrator::ComplexUnivariateIntegrator(const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ad92e6ddde52d3ab, a0.this$)) {}

      ::org::hipparchus::complex::Complex ComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::Complex & a2, const JArray< ::org::hipparchus::complex::Complex > & a3) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_integrate_9e044a3280202960], a0, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::complex::Complex ComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::Complex & a3) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_integrate_7587b226958b23ce], a0, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_ComplexUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexUnivariateIntegrator_init_(t_ComplexUnivariateIntegrator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexUnivariateIntegrator_integrate(t_ComplexUnivariateIntegrator *self, PyObject *args);

      static PyMethodDef t_ComplexUnivariateIntegrator__methods_[] = {
        DECLARE_METHOD(t_ComplexUnivariateIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUnivariateIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUnivariateIntegrator, integrate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexUnivariateIntegrator)[] = {
        { Py_tp_methods, t_ComplexUnivariateIntegrator__methods_ },
        { Py_tp_init, (void *) t_ComplexUnivariateIntegrator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexUnivariateIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexUnivariateIntegrator, t_ComplexUnivariateIntegrator, ComplexUnivariateIntegrator);

      void t_ComplexUnivariateIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexUnivariateIntegrator), &PY_TYPE_DEF(ComplexUnivariateIntegrator), module, "ComplexUnivariateIntegrator", 0);
      }

      void t_ComplexUnivariateIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUnivariateIntegrator), "class_", make_descriptor(ComplexUnivariateIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUnivariateIntegrator), "wrapfn_", make_descriptor(t_ComplexUnivariateIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexUnivariateIntegrator::initializeClass, 1)))
          return NULL;
        return t_ComplexUnivariateIntegrator::wrap_Object(ComplexUnivariateIntegrator(((t_ComplexUnivariateIntegrator *) arg)->object.this$));
      }
      static PyObject *t_ComplexUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexUnivariateIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexUnivariateIntegrator_init_(t_ComplexUnivariateIntegrator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::analysis::integration::UnivariateIntegrator a0((jobject) NULL);
        ComplexUnivariateIntegrator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0))
        {
          INT_CALL(object = ComplexUnivariateIntegrator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ComplexUnivariateIntegrator_integrate(t_ComplexUnivariateIntegrator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jint a0;
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::Complex a2((jobject) NULL);
            JArray< ::org::hipparchus::complex::Complex > a3((jobject) NULL);
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "IKk[k", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::Complex a2((jobject) NULL);
            ::org::hipparchus::complex::Complex a3((jobject) NULL);
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "IKkk", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "integrate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeScales.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/GMSTScale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/UTCScale.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/TCGScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeScales::class$ = NULL;
      jmethodID *PythonTimeScales::mids$ = NULL;
      bool PythonTimeScales::live$ = false;

      jclass PythonTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_createBesselianEpoch_8ef471ef852a9678] = env->getMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_8ef471ef852a9678] = env->getMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBDT_9391834b1a937fd3] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getBeidouEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getCcsdsEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFiftiesEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFutureInfinity_7a97f7e149e79afb] = env->getMethodID(cls, "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGLONASS_237364a28a8cf0b4] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_265dd6a5eaf62dee] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_0cd5c45ac1466124] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_3eb0a3a9b450fe42] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getGalileoEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGlonassEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGpsEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getIRNSS_64d2db466ba002ef] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getIrnssEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJ2000Epoch_7a97f7e149e79afb] = env->getMethodID(cls, "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJavaEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJulianEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPastInfinity_7a97f7e149e79afb] = env->getMethodID(cls, "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getQZSS_513baddf28d44704] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getQzssEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTAI_d5c1bf5214e95dd6] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_1561497728a78b6a] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_2cdd0fa7c8f02aa9] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_777ef8538a45134b] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_f6e670da699ff3f8] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_672057b4f848abf0] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_81e037be1ebdb551] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeScales::PythonTimeScales() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonTimeScales::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonTimeScales::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonTimeScales::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeScales_init_(t_PythonTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeScales_finalize(t_PythonTimeScales *self);
      static PyObject *t_PythonTimeScales_pythonExtension(t_PythonTimeScales *self, PyObject *args);
      static jobject JNICALL t_PythonTimeScales_createBesselianEpoch0(JNIEnv *jenv, jobject jobj, jdouble a0);
      static jobject JNICALL t_PythonTimeScales_createJulianEpoch1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static jobject JNICALL t_PythonTimeScales_getBDT2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getBeidouEpoch3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getCcsdsEpoch4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getFiftiesEpoch5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getFutureInfinity6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGLONASS7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGMST8(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonTimeScales_getGPS9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGST10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGalileoEpoch11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGlonassEpoch12(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGpsEpoch13(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getIRNSS14(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getIrnssEpoch15(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getJ2000Epoch16(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getJavaEpoch17(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getJulianEpoch18(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getModifiedJulianEpoch19(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getPastInfinity20(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getQZSS21(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getQzssEpoch22(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTAI23(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTCB24(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTCG25(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTDB26(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTT27(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getUT128(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonTimeScales_getUTC29(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonTimeScales_pythonDecRef30(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeScales_get__self(t_PythonTimeScales *self, void *data);
      static PyGetSetDef t_PythonTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeScales, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeScales__methods_[] = {
        DECLARE_METHOD(t_PythonTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScales, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeScales, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeScales)[] = {
        { Py_tp_methods, t_PythonTimeScales__methods_ },
        { Py_tp_init, (void *) t_PythonTimeScales_init_ },
        { Py_tp_getset, t_PythonTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeScales)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeScales, t_PythonTimeScales, PythonTimeScales);

      void t_PythonTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeScales), &PY_TYPE_DEF(PythonTimeScales), module, "PythonTimeScales", 1);
      }

      void t_PythonTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScales), "class_", make_descriptor(PythonTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScales), "wrapfn_", make_descriptor(t_PythonTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScales), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeScales::initializeClass);
        JNINativeMethod methods[] = {
          { "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_createBesselianEpoch0 },
          { "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_createJulianEpoch1 },
          { "getBDT", "()Lorg/orekit/time/BDTScale;", (void *) t_PythonTimeScales_getBDT2 },
          { "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getBeidouEpoch3 },
          { "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getCcsdsEpoch4 },
          { "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getFiftiesEpoch5 },
          { "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getFutureInfinity6 },
          { "getGLONASS", "()Lorg/orekit/time/GLONASSScale;", (void *) t_PythonTimeScales_getGLONASS7 },
          { "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;", (void *) t_PythonTimeScales_getGMST8 },
          { "getGPS", "()Lorg/orekit/time/GPSScale;", (void *) t_PythonTimeScales_getGPS9 },
          { "getGST", "()Lorg/orekit/time/GalileoScale;", (void *) t_PythonTimeScales_getGST10 },
          { "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getGalileoEpoch11 },
          { "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getGlonassEpoch12 },
          { "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getGpsEpoch13 },
          { "getIRNSS", "()Lorg/orekit/time/IRNSSScale;", (void *) t_PythonTimeScales_getIRNSS14 },
          { "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getIrnssEpoch15 },
          { "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getJ2000Epoch16 },
          { "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getJavaEpoch17 },
          { "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getJulianEpoch18 },
          { "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getModifiedJulianEpoch19 },
          { "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getPastInfinity20 },
          { "getQZSS", "()Lorg/orekit/time/QZSSScale;", (void *) t_PythonTimeScales_getQZSS21 },
          { "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getQzssEpoch22 },
          { "getTAI", "()Lorg/orekit/time/TAIScale;", (void *) t_PythonTimeScales_getTAI23 },
          { "getTCB", "()Lorg/orekit/time/TCBScale;", (void *) t_PythonTimeScales_getTCB24 },
          { "getTCG", "()Lorg/orekit/time/TCGScale;", (void *) t_PythonTimeScales_getTCG25 },
          { "getTDB", "()Lorg/orekit/time/TDBScale;", (void *) t_PythonTimeScales_getTDB26 },
          { "getTT", "()Lorg/orekit/time/TTScale;", (void *) t_PythonTimeScales_getTT27 },
          { "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;", (void *) t_PythonTimeScales_getUT128 },
          { "getUTC", "()Lorg/orekit/time/UTCScale;", (void *) t_PythonTimeScales_getUTC29 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeScales_pythonDecRef30 },
        };
        env->registerNatives(cls, methods, 31);
      }

      static PyObject *t_PythonTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeScales::initializeClass, 1)))
          return NULL;
        return t_PythonTimeScales::wrap_Object(PythonTimeScales(((t_PythonTimeScales *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeScales_init_(t_PythonTimeScales *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeScales object((jobject) NULL);

        INT_CALL(object = PythonTimeScales());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeScales_finalize(t_PythonTimeScales *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeScales_pythonExtension(t_PythonTimeScales *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeScales_createBesselianEpoch0(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "createBesselianEpoch", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("createBesselianEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_createJulianEpoch1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "createJulianEpoch", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("createJulianEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getBDT2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::BDTScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBDT", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::BDTScale::initializeClass, &value))
        {
          throwTypeError("getBDT", result);
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

      static jobject JNICALL t_PythonTimeScales_getBeidouEpoch3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBeidouEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getBeidouEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getCcsdsEpoch4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getCcsdsEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getCcsdsEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getFiftiesEpoch5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFiftiesEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getFiftiesEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getFutureInfinity6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFutureInfinity", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getFutureInfinity", result);
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

      static jobject JNICALL t_PythonTimeScales_getGLONASS7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGLONASS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GLONASSScale::initializeClass, &value))
        {
          throwTypeError("getGLONASS", result);
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

      static jobject JNICALL t_PythonTimeScales_getGMST8(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GMSTScale value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getGMST", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GMSTScale::initializeClass, &value))
        {
          throwTypeError("getGMST", result);
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

      static jobject JNICALL t_PythonTimeScales_getGPS9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GPSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGPS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GPSScale::initializeClass, &value))
        {
          throwTypeError("getGPS", result);
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

      static jobject JNICALL t_PythonTimeScales_getGST10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGST", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GalileoScale::initializeClass, &value))
        {
          throwTypeError("getGST", result);
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

      static jobject JNICALL t_PythonTimeScales_getGalileoEpoch11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGalileoEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getGalileoEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getGlonassEpoch12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGlonassEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getGlonassEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getGpsEpoch13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGpsEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getGpsEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getIRNSS14(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getIRNSS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::IRNSSScale::initializeClass, &value))
        {
          throwTypeError("getIRNSS", result);
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

      static jobject JNICALL t_PythonTimeScales_getIrnssEpoch15(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getIrnssEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getIrnssEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getJ2000Epoch16(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJ2000Epoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getJ2000Epoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getJavaEpoch17(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJavaEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getJavaEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getJulianEpoch18(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJulianEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getJulianEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getModifiedJulianEpoch19(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getModifiedJulianEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getModifiedJulianEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getPastInfinity20(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getPastInfinity", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getPastInfinity", result);
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

      static jobject JNICALL t_PythonTimeScales_getQZSS21(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getQZSS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::QZSSScale::initializeClass, &value))
        {
          throwTypeError("getQZSS", result);
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

      static jobject JNICALL t_PythonTimeScales_getQzssEpoch22(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getQzssEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getQzssEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getTAI23(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TAIScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTAI", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TAIScale::initializeClass, &value))
        {
          throwTypeError("getTAI", result);
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

      static jobject JNICALL t_PythonTimeScales_getTCB24(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TCBScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTCB", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TCBScale::initializeClass, &value))
        {
          throwTypeError("getTCB", result);
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

      static jobject JNICALL t_PythonTimeScales_getTCG25(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TCGScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTCG", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TCGScale::initializeClass, &value))
        {
          throwTypeError("getTCG", result);
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

      static jobject JNICALL t_PythonTimeScales_getTDB26(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TDBScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTDB", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TDBScale::initializeClass, &value))
        {
          throwTypeError("getTDB", result);
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

      static jobject JNICALL t_PythonTimeScales_getTT27(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TTScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTT", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TTScale::initializeClass, &value))
        {
          throwTypeError("getTT", result);
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

      static jobject JNICALL t_PythonTimeScales_getUT128(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::UT1Scale value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getUT1", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::UT1Scale::initializeClass, &value))
        {
          throwTypeError("getUT1", result);
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

      static jobject JNICALL t_PythonTimeScales_getUTC29(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::UTCScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getUTC", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::UTCScale::initializeClass, &value))
        {
          throwTypeError("getUTC", result);
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

      static void JNICALL t_PythonTimeScales_pythonDecRef30(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeScales_get__self(t_PythonTimeScales *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
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
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_hasAcceleration_89b302893bdbe1f1] = env->getMethodID(cls, "hasAcceleration", "()Z");
                mids$[mid_setA_89aad365fb0ed8da] = env->getMethodID(cls, "setA", "(ID)V");
                mids$[mid_setEpoch_20affcbd28542333] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setP_89aad365fb0ed8da] = env->getMethodID(cls, "setP", "(ID)V");
                mids$[mid_setV_89aad365fb0ed8da] = env->getMethodID(cls, "setV", "(ID)V");
                mids$[mid_toTimeStampedPVCoordinates_daf15abc21907508] = env->getMethodID(cls, "toTimeStampedPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
                mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            StateVector::StateVector() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            ::org::orekit::time::AbsoluteDate StateVector::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_7a97f7e149e79afb]));
            }

            jboolean StateVector::hasAcceleration() const
            {
              return env->callBooleanMethod(this$, mids$[mid_hasAcceleration_89b302893bdbe1f1]);
            }

            void StateVector::setA(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setA_89aad365fb0ed8da], a0, a1);
            }

            void StateVector::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpoch_20affcbd28542333], a0.this$);
            }

            void StateVector::setP(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setP_89aad365fb0ed8da], a0, a1);
            }

            void StateVector::setV(jint a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_setV_89aad365fb0ed8da], a0, a1);
            }

            ::org::orekit::utils::TimeStampedPVCoordinates StateVector::toTimeStampedPVCoordinates() const
            {
              return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_toTimeStampedPVCoordinates_daf15abc21907508]));
            }

            void StateVector::validate(jdouble a0) const
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$BooleanConsumer::class$ = NULL;
            jmethodID *ParseToken$BooleanConsumer::mids$ = NULL;
            bool ParseToken$BooleanConsumer::live$ = false;

            jclass ParseToken$BooleanConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_ed2afdb8506b9742] = env->getMethodID(cls, "accept", "(Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$BooleanConsumer::accept(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_ed2afdb8506b9742], a0);
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
            static PyObject *t_ParseToken$BooleanConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$BooleanConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$BooleanConsumer_accept(t_ParseToken$BooleanConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$BooleanConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$BooleanConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$BooleanConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$BooleanConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$BooleanConsumer)[] = {
              { Py_tp_methods, t_ParseToken$BooleanConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$BooleanConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$BooleanConsumer, t_ParseToken$BooleanConsumer, ParseToken$BooleanConsumer);

            void t_ParseToken$BooleanConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$BooleanConsumer), &PY_TYPE_DEF(ParseToken$BooleanConsumer), module, "ParseToken$BooleanConsumer", 0);
            }

            void t_ParseToken$BooleanConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$BooleanConsumer), "class_", make_descriptor(ParseToken$BooleanConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$BooleanConsumer), "wrapfn_", make_descriptor(t_ParseToken$BooleanConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$BooleanConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$BooleanConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$BooleanConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$BooleanConsumer::wrap_Object(ParseToken$BooleanConsumer(((t_ParseToken$BooleanConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$BooleanConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$BooleanConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$BooleanConsumer_accept(t_ParseToken$BooleanConsumer *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
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
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrixChangingVisitor::class$ = NULL;
      jmethodID *FieldMatrixChangingVisitor::mids$ = NULL;
      bool FieldMatrixChangingVisitor::live$ = false;

      jclass FieldMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_ce0470d468f80a56] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_b02282271d2e33e3] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_0f2f35f7d94c9635] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldMatrixChangingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_ce0470d468f80a56]));
      }

      void FieldMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_b02282271d2e33e3], a0, a1, a2, a3, a4, a5);
      }

      ::org::hipparchus::FieldElement FieldMatrixChangingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_visit_0f2f35f7d94c9635], a0, a1, a2.this$));
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
      static PyObject *t_FieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixChangingVisitor_of_(t_FieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixChangingVisitor_end(t_FieldMatrixChangingVisitor *self);
      static PyObject *t_FieldMatrixChangingVisitor_start(t_FieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixChangingVisitor_visit(t_FieldMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixChangingVisitor_get__parameters_(t_FieldMatrixChangingVisitor *self, void *data);
      static PyGetSetDef t_FieldMatrixChangingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrixChangingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_FieldMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrixChangingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMatrixChangingVisitor, t_FieldMatrixChangingVisitor, FieldMatrixChangingVisitor);
      PyObject *t_FieldMatrixChangingVisitor::wrap_Object(const FieldMatrixChangingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixChangingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixChangingVisitor *self = (t_FieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrixChangingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixChangingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixChangingVisitor *self = (t_FieldMatrixChangingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrixChangingVisitor), &PY_TYPE_DEF(FieldMatrixChangingVisitor), module, "FieldMatrixChangingVisitor", 0);
      }

      void t_FieldMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixChangingVisitor), "class_", make_descriptor(FieldMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixChangingVisitor), "wrapfn_", make_descriptor(t_FieldMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldMatrixChangingVisitor::wrap_Object(FieldMatrixChangingVisitor(((t_FieldMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrixChangingVisitor_of_(t_FieldMatrixChangingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrixChangingVisitor_end(t_FieldMatrixChangingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldMatrixChangingVisitor_start(t_FieldMatrixChangingVisitor *self, PyObject *args)
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

      static PyObject *t_FieldMatrixChangingVisitor_visit(t_FieldMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.visit(a0, a1, a2));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldMatrixChangingVisitor_get__parameters_(t_FieldMatrixChangingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
