#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/FixedPointTleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *FixedPointTleGenerationAlgorithm::class$ = NULL;
            jmethodID *FixedPointTleGenerationAlgorithm::mids$ = NULL;
            bool FixedPointTleGenerationAlgorithm::live$ = false;
            jdouble FixedPointTleGenerationAlgorithm::EPSILON_DEFAULT = (jdouble) 0;
            jint FixedPointTleGenerationAlgorithm::MAX_ITERATIONS_DEFAULT = (jint) 0;
            jdouble FixedPointTleGenerationAlgorithm::SCALE_DEFAULT = (jdouble) 0;

            jclass FixedPointTleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/FixedPointTleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_3191da1710a102eb] = env->getMethodID(cls, "<init>", "(DID)V");
                mids$[mid_init$_fbd879df40651c29] = env->getMethodID(cls, "<init>", "(DIDLorg/orekit/time/TimeScale;Lorg/orekit/frames/Frame;)V");
                mids$[mid_generate_d1897b6bbe0a4251] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_e9ff15b430a2bfc5] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                EPSILON_DEFAULT = env->getStaticDoubleField(cls, "EPSILON_DEFAULT");
                MAX_ITERATIONS_DEFAULT = env->getStaticIntField(cls, "MAX_ITERATIONS_DEFAULT");
                SCALE_DEFAULT = env->getStaticDoubleField(cls, "SCALE_DEFAULT");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FixedPointTleGenerationAlgorithm::FixedPointTleGenerationAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            FixedPointTleGenerationAlgorithm::FixedPointTleGenerationAlgorithm(jdouble a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3191da1710a102eb, a0, a1, a2)) {}

            FixedPointTleGenerationAlgorithm::FixedPointTleGenerationAlgorithm(jdouble a0, jint a1, jdouble a2, const ::org::orekit::time::TimeScale & a3, const ::org::orekit::frames::Frame & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fbd879df40651c29, a0, a1, a2, a3.this$, a4.this$)) {}

            ::org::orekit::propagation::analytical::tle::FieldTLE FixedPointTleGenerationAlgorithm::generate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_generate_d1897b6bbe0a4251], a0.this$, a1.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE FixedPointTleGenerationAlgorithm::generate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generate_e9ff15b430a2bfc5], a0.this$, a1.this$));
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
        namespace tle {
          namespace generation {
            static PyObject *t_FixedPointTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FixedPointTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_FixedPointTleGenerationAlgorithm_init_(t_FixedPointTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FixedPointTleGenerationAlgorithm_generate(t_FixedPointTleGenerationAlgorithm *self, PyObject *args);

            static PyMethodDef t_FixedPointTleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_FixedPointTleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FixedPointTleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FixedPointTleGenerationAlgorithm, generate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FixedPointTleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_FixedPointTleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) t_FixedPointTleGenerationAlgorithm_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FixedPointTleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FixedPointTleGenerationAlgorithm, t_FixedPointTleGenerationAlgorithm, FixedPointTleGenerationAlgorithm);

            void t_FixedPointTleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(FixedPointTleGenerationAlgorithm), &PY_TYPE_DEF(FixedPointTleGenerationAlgorithm), module, "FixedPointTleGenerationAlgorithm", 0);
            }

            void t_FixedPointTleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "class_", make_descriptor(FixedPointTleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "wrapfn_", make_descriptor(t_FixedPointTleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
              env->getClass(FixedPointTleGenerationAlgorithm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "EPSILON_DEFAULT", make_descriptor(FixedPointTleGenerationAlgorithm::EPSILON_DEFAULT));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "MAX_ITERATIONS_DEFAULT", make_descriptor(FixedPointTleGenerationAlgorithm::MAX_ITERATIONS_DEFAULT));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "SCALE_DEFAULT", make_descriptor(FixedPointTleGenerationAlgorithm::SCALE_DEFAULT));
            }

            static PyObject *t_FixedPointTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FixedPointTleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_FixedPointTleGenerationAlgorithm::wrap_Object(FixedPointTleGenerationAlgorithm(((t_FixedPointTleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_FixedPointTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FixedPointTleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_FixedPointTleGenerationAlgorithm_init_(t_FixedPointTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  FixedPointTleGenerationAlgorithm object((jobject) NULL);

                  INT_CALL(object = FixedPointTleGenerationAlgorithm());
                  self->object = object;
                  break;
                }
               case 3:
                {
                  jdouble a0;
                  jint a1;
                  jdouble a2;
                  FixedPointTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "DID", &a0, &a1, &a2))
                  {
                    INT_CALL(object = FixedPointTleGenerationAlgorithm(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  jdouble a0;
                  jint a1;
                  jdouble a2;
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  ::org::orekit::frames::Frame a4((jobject) NULL);
                  FixedPointTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "DIDkk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = FixedPointTleGenerationAlgorithm(a0, a1, a2, a3, a4));
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

            static PyObject *t_FixedPointTleGenerationAlgorithm_generate(t_FixedPointTleGenerationAlgorithm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::analytical::tle::FieldTLE a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);

                  if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE a1((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "generate", args);
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
#include "org/orekit/utils/ImmutableTimeStampedCache.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ImmutableTimeStampedCache.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ImmutableTimeStampedCache::class$ = NULL;
      jmethodID *ImmutableTimeStampedCache::mids$ = NULL;
      bool ImmutableTimeStampedCache::live$ = false;

      jclass ImmutableTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ImmutableTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7eb5c0f6d06d97ea] = env->getMethodID(cls, "<init>", "(ILjava/util/Collection;)V");
          mids$[mid_emptyCache_86a357074a1a5ab9] = env->getStaticMethodID(cls, "emptyCache", "()Lorg/orekit/utils/ImmutableTimeStampedCache;");
          mids$[mid_getAll_0d9551367f7ecdef] = env->getMethodID(cls, "getAll", "()Ljava/util/List;");
          mids$[mid_getEarliest_da8f710d3d2958bf] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getLatest_da8f710d3d2958bf] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_412668abc8d889e9] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getNeighbors_b9470a4d1609cf1f] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ImmutableTimeStampedCache::ImmutableTimeStampedCache(jint a0, const ::java::util::Collection & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7eb5c0f6d06d97ea, a0, a1.this$)) {}

      ImmutableTimeStampedCache ImmutableTimeStampedCache::emptyCache()
      {
        jclass cls = env->getClass(initializeClass);
        return ImmutableTimeStampedCache(env->callStaticObjectMethod(cls, mids$[mid_emptyCache_86a357074a1a5ab9]));
      }

      ::java::util::List ImmutableTimeStampedCache::getAll() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAll_0d9551367f7ecdef]));
      }

      ::org::orekit::time::TimeStamped ImmutableTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_da8f710d3d2958bf]));
      }

      ::org::orekit::time::TimeStamped ImmutableTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_da8f710d3d2958bf]));
      }

      jint ImmutableTimeStampedCache::getMaxNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxNeighborsSize_412668abc8d889e9]);
      }

      ::java::util::stream::Stream ImmutableTimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_b9470a4d1609cf1f], a0.this$, a1));
      }

      ::java::lang::String ImmutableTimeStampedCache::toString() const
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
    namespace utils {
      static PyObject *t_ImmutableTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableTimeStampedCache_of_(t_ImmutableTimeStampedCache *self, PyObject *args);
      static int t_ImmutableTimeStampedCache_init_(t_ImmutableTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ImmutableTimeStampedCache_emptyCache(PyTypeObject *type);
      static PyObject *t_ImmutableTimeStampedCache_getAll(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getEarliest(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getLatest(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getMaxNeighborsSize(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getNeighbors(t_ImmutableTimeStampedCache *self, PyObject *args);
      static PyObject *t_ImmutableTimeStampedCache_toString(t_ImmutableTimeStampedCache *self, PyObject *args);
      static PyObject *t_ImmutableTimeStampedCache_get__all(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__earliest(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__latest(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__maxNeighborsSize(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__parameters_(t_ImmutableTimeStampedCache *self, void *data);
      static PyGetSetDef t_ImmutableTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, all),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, maxNeighborsSize),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ImmutableTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_ImmutableTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, emptyCache, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getAll, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getMaxNeighborsSize, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getNeighbors, METH_VARARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ImmutableTimeStampedCache)[] = {
        { Py_tp_methods, t_ImmutableTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_ImmutableTimeStampedCache_init_ },
        { Py_tp_getset, t_ImmutableTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ImmutableTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ImmutableTimeStampedCache, t_ImmutableTimeStampedCache, ImmutableTimeStampedCache);
      PyObject *t_ImmutableTimeStampedCache::wrap_Object(const ImmutableTimeStampedCache& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ImmutableTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableTimeStampedCache *self = (t_ImmutableTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ImmutableTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ImmutableTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableTimeStampedCache *self = (t_ImmutableTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ImmutableTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(ImmutableTimeStampedCache), &PY_TYPE_DEF(ImmutableTimeStampedCache), module, "ImmutableTimeStampedCache", 0);
      }

      void t_ImmutableTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableTimeStampedCache), "class_", make_descriptor(ImmutableTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableTimeStampedCache), "wrapfn_", make_descriptor(t_ImmutableTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableTimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ImmutableTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ImmutableTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_ImmutableTimeStampedCache::wrap_Object(ImmutableTimeStampedCache(((t_ImmutableTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_ImmutableTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ImmutableTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ImmutableTimeStampedCache_of_(t_ImmutableTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ImmutableTimeStampedCache_init_(t_ImmutableTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ImmutableTimeStampedCache object((jobject) NULL);

        if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = ImmutableTimeStampedCache(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ImmutableTimeStampedCache_emptyCache(PyTypeObject *type)
      {
        ImmutableTimeStampedCache result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::ImmutableTimeStampedCache::emptyCache());
        return t_ImmutableTimeStampedCache::wrap_Object(result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getAll(t_ImmutableTimeStampedCache *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAll());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ImmutableTimeStampedCache_getEarliest(t_ImmutableTimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getLatest(t_ImmutableTimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getMaxNeighborsSize(t_ImmutableTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getNeighbors(t_ImmutableTimeStampedCache *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "kI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", args);
        return NULL;
      }

      static PyObject *t_ImmutableTimeStampedCache_toString(t_ImmutableTimeStampedCache *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ImmutableTimeStampedCache), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_ImmutableTimeStampedCache_get__parameters_(t_ImmutableTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ImmutableTimeStampedCache_get__all(t_ImmutableTimeStampedCache *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAll());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ImmutableTimeStampedCache_get__earliest(t_ImmutableTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableTimeStampedCache_get__latest(t_ImmutableTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableTimeStampedCache_get__maxNeighborsSize(t_ImmutableTimeStampedCache *self, void *data)
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
#include "org/orekit/gnss/antenna/AntexLoader.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/util/List.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/antenna/SatelliteAntenna.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/gnss/antenna/ReceiverAntenna.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *AntexLoader::class$ = NULL;
        jmethodID *AntexLoader::mids$ = NULL;
        bool AntexLoader::live$ = false;
        ::java::lang::String *AntexLoader::DEFAULT_ANTEX_SUPPORTED_NAMES = NULL;

        jclass AntexLoader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/AntexLoader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_init$_91b8fb16a2e11747] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_init$_d8fcbe65f280bc96] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_findSatelliteAntenna_77429ee7e50e85bc] = env->getMethodID(cls, "findSatelliteAntenna", "(Lorg/orekit/gnss/SatelliteSystem;I)Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_getReceiversAntennas_0d9551367f7ecdef] = env->getMethodID(cls, "getReceiversAntennas", "()Ljava/util/List;");
            mids$[mid_getSatellitesAntennas_0d9551367f7ecdef] = env->getMethodID(cls, "getSatellitesAntennas", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ANTEX_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ANTEX_SUPPORTED_NAMES", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AntexLoader::AntexLoader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

        AntexLoader::AntexLoader(const ::org::orekit::data::DataSource & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_91b8fb16a2e11747, a0.this$, a1.this$)) {}

        AntexLoader::AntexLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d8fcbe65f280bc96, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::utils::TimeSpanMap AntexLoader::findSatelliteAntenna(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1) const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_findSatelliteAntenna_77429ee7e50e85bc], a0.this$, a1));
        }

        ::java::util::List AntexLoader::getReceiversAntennas() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getReceiversAntennas_0d9551367f7ecdef]));
        }

        ::java::util::List AntexLoader::getSatellitesAntennas() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellitesAntennas_0d9551367f7ecdef]));
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
        static PyObject *t_AntexLoader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AntexLoader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AntexLoader_init_(t_AntexLoader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AntexLoader_findSatelliteAntenna(t_AntexLoader *self, PyObject *args);
        static PyObject *t_AntexLoader_getReceiversAntennas(t_AntexLoader *self);
        static PyObject *t_AntexLoader_getSatellitesAntennas(t_AntexLoader *self);
        static PyObject *t_AntexLoader_get__receiversAntennas(t_AntexLoader *self, void *data);
        static PyObject *t_AntexLoader_get__satellitesAntennas(t_AntexLoader *self, void *data);
        static PyGetSetDef t_AntexLoader__fields_[] = {
          DECLARE_GET_FIELD(t_AntexLoader, receiversAntennas),
          DECLARE_GET_FIELD(t_AntexLoader, satellitesAntennas),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AntexLoader__methods_[] = {
          DECLARE_METHOD(t_AntexLoader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AntexLoader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AntexLoader, findSatelliteAntenna, METH_VARARGS),
          DECLARE_METHOD(t_AntexLoader, getReceiversAntennas, METH_NOARGS),
          DECLARE_METHOD(t_AntexLoader, getSatellitesAntennas, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AntexLoader)[] = {
          { Py_tp_methods, t_AntexLoader__methods_ },
          { Py_tp_init, (void *) t_AntexLoader_init_ },
          { Py_tp_getset, t_AntexLoader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AntexLoader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AntexLoader, t_AntexLoader, AntexLoader);

        void t_AntexLoader::install(PyObject *module)
        {
          installType(&PY_TYPE(AntexLoader), &PY_TYPE_DEF(AntexLoader), module, "AntexLoader", 0);
        }

        void t_AntexLoader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AntexLoader), "class_", make_descriptor(AntexLoader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AntexLoader), "wrapfn_", make_descriptor(t_AntexLoader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AntexLoader), "boxfn_", make_descriptor(boxObject));
          env->getClass(AntexLoader::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AntexLoader), "DEFAULT_ANTEX_SUPPORTED_NAMES", make_descriptor(j2p(*AntexLoader::DEFAULT_ANTEX_SUPPORTED_NAMES)));
        }

        static PyObject *t_AntexLoader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AntexLoader::initializeClass, 1)))
            return NULL;
          return t_AntexLoader::wrap_Object(AntexLoader(((t_AntexLoader *) arg)->object.this$));
        }
        static PyObject *t_AntexLoader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AntexLoader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AntexLoader_init_(t_AntexLoader *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              AntexLoader object((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                INT_CALL(object = AntexLoader(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              AntexLoader object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
              {
                INT_CALL(object = AntexLoader(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
              ::org::orekit::time::TimeScale a2((jobject) NULL);
              AntexLoader object((jobject) NULL);

              if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = AntexLoader(a0, a1, a2));
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

        static PyObject *t_AntexLoader_findSatelliteAntenna(t_AntexLoader *self, PyObject *args)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.findSatelliteAntenna(a0, a1));
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::org::orekit::gnss::antenna::PY_TYPE(SatelliteAntenna));
          }

          PyErr_SetArgsError((PyObject *) self, "findSatelliteAntenna", args);
          return NULL;
        }

        static PyObject *t_AntexLoader_getReceiversAntennas(t_AntexLoader *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getReceiversAntennas());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::antenna::PY_TYPE(ReceiverAntenna));
        }

        static PyObject *t_AntexLoader_getSatellitesAntennas(t_AntexLoader *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellitesAntennas());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_AntexLoader_get__receiversAntennas(t_AntexLoader *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getReceiversAntennas());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AntexLoader_get__satellitesAntennas(t_AntexLoader *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellitesAntennas());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParameters.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalParameters::class$ = NULL;
            jmethodID *AdditionalParameters::mids$ = NULL;
            bool AdditionalParameters::live$ = false;

            jclass AdditionalParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getApoapsisAltitude_557b8123390d8d0c] = env->getMethodID(cls, "getApoapsisAltitude", "()D");
                mids$[mid_getAreaDRG_557b8123390d8d0c] = env->getMethodID(cls, "getAreaDRG", "()D");
                mids$[mid_getAreaPC_557b8123390d8d0c] = env->getMethodID(cls, "getAreaPC", "()D");
                mids$[mid_getAreaPCMax_557b8123390d8d0c] = env->getMethodID(cls, "getAreaPCMax", "()D");
                mids$[mid_getAreaPCMin_557b8123390d8d0c] = env->getMethodID(cls, "getAreaPCMin", "()D");
                mids$[mid_getAreaSRP_557b8123390d8d0c] = env->getMethodID(cls, "getAreaSRP", "()D");
                mids$[mid_getCDAreaOverMass_557b8123390d8d0c] = env->getMethodID(cls, "getCDAreaOverMass", "()D");
                mids$[mid_getCRAreaOverMass_557b8123390d8d0c] = env->getMethodID(cls, "getCRAreaOverMass", "()D");
                mids$[mid_getCovConfidence_557b8123390d8d0c] = env->getMethodID(cls, "getCovConfidence", "()D");
                mids$[mid_getCovConfidenceMethod_3cffd47377eca18a] = env->getMethodID(cls, "getCovConfidenceMethod", "()Ljava/lang/String;");
                mids$[mid_getHbr_557b8123390d8d0c] = env->getMethodID(cls, "getHbr", "()D");
                mids$[mid_getInclination_557b8123390d8d0c] = env->getMethodID(cls, "getInclination", "()D");
                mids$[mid_getMass_557b8123390d8d0c] = env->getMethodID(cls, "getMass", "()D");
                mids$[mid_getPeriapsisAltitude_557b8123390d8d0c] = env->getMethodID(cls, "getPeriapsisAltitude", "()D");
                mids$[mid_getSedr_557b8123390d8d0c] = env->getMethodID(cls, "getSedr", "()D");
                mids$[mid_getThrustAcceleration_557b8123390d8d0c] = env->getMethodID(cls, "getThrustAcceleration", "()D");
                mids$[mid_setApoapsisAltitude_10f281d777284cea] = env->getMethodID(cls, "setApoapsisAltitude", "(D)V");
                mids$[mid_setAreaDRG_10f281d777284cea] = env->getMethodID(cls, "setAreaDRG", "(D)V");
                mids$[mid_setAreaPC_10f281d777284cea] = env->getMethodID(cls, "setAreaPC", "(D)V");
                mids$[mid_setAreaPCMax_10f281d777284cea] = env->getMethodID(cls, "setAreaPCMax", "(D)V");
                mids$[mid_setAreaPCMin_10f281d777284cea] = env->getMethodID(cls, "setAreaPCMin", "(D)V");
                mids$[mid_setAreaSRP_10f281d777284cea] = env->getMethodID(cls, "setAreaSRP", "(D)V");
                mids$[mid_setCDAreaOverMass_10f281d777284cea] = env->getMethodID(cls, "setCDAreaOverMass", "(D)V");
                mids$[mid_setCRAreaOverMass_10f281d777284cea] = env->getMethodID(cls, "setCRAreaOverMass", "(D)V");
                mids$[mid_setCovConfidence_10f281d777284cea] = env->getMethodID(cls, "setCovConfidence", "(D)V");
                mids$[mid_setCovConfidenceMethod_f5ffdf29129ef90a] = env->getMethodID(cls, "setCovConfidenceMethod", "(Ljava/lang/String;)V");
                mids$[mid_setHbr_10f281d777284cea] = env->getMethodID(cls, "setHbr", "(D)V");
                mids$[mid_setInclination_10f281d777284cea] = env->getMethodID(cls, "setInclination", "(D)V");
                mids$[mid_setMass_10f281d777284cea] = env->getMethodID(cls, "setMass", "(D)V");
                mids$[mid_setPeriapsisAltitude_10f281d777284cea] = env->getMethodID(cls, "setPeriapsisAltitude", "(D)V");
                mids$[mid_setSedr_10f281d777284cea] = env->getMethodID(cls, "setSedr", "(D)V");
                mids$[mid_setThrustAcceleration_10f281d777284cea] = env->getMethodID(cls, "setThrustAcceleration", "(D)V");
                mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdditionalParameters::AdditionalParameters() : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            jdouble AdditionalParameters::getApoapsisAltitude() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getApoapsisAltitude_557b8123390d8d0c]);
            }

            jdouble AdditionalParameters::getAreaDRG() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaDRG_557b8123390d8d0c]);
            }

            jdouble AdditionalParameters::getAreaPC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaPC_557b8123390d8d0c]);
            }

            jdouble AdditionalParameters::getAreaPCMax() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaPCMax_557b8123390d8d0c]);
            }

            jdouble AdditionalParameters::getAreaPCMin() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaPCMin_557b8123390d8d0c]);
            }

            jdouble AdditionalParameters::getAreaSRP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAreaSRP_557b8123390d8d0c]);
            }

            jdouble AdditionalParameters::getCDAreaOverMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCDAreaOverMass_557b8123390d8d0c]);
            }

            jdouble AdditionalParameters::getCRAreaOverMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCRAreaOverMass_557b8123390d8d0c]);
            }

            jdouble AdditionalParameters::getCovConfidence() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCovConfidence_557b8123390d8d0c]);
            }

            ::java::lang::String AdditionalParameters::getCovConfidenceMethod() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovConfidenceMethod_3cffd47377eca18a]));
            }

            jdouble AdditionalParameters::getHbr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHbr_557b8123390d8d0c]);
            }

            jdouble AdditionalParameters::getInclination() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInclination_557b8123390d8d0c]);
            }

            jdouble AdditionalParameters::getMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMass_557b8123390d8d0c]);
            }

            jdouble AdditionalParameters::getPeriapsisAltitude() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPeriapsisAltitude_557b8123390d8d0c]);
            }

            jdouble AdditionalParameters::getSedr() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSedr_557b8123390d8d0c]);
            }

            jdouble AdditionalParameters::getThrustAcceleration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThrustAcceleration_557b8123390d8d0c]);
            }

            void AdditionalParameters::setApoapsisAltitude(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setApoapsisAltitude_10f281d777284cea], a0);
            }

            void AdditionalParameters::setAreaDRG(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaDRG_10f281d777284cea], a0);
            }

            void AdditionalParameters::setAreaPC(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaPC_10f281d777284cea], a0);
            }

            void AdditionalParameters::setAreaPCMax(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaPCMax_10f281d777284cea], a0);
            }

            void AdditionalParameters::setAreaPCMin(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaPCMin_10f281d777284cea], a0);
            }

            void AdditionalParameters::setAreaSRP(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAreaSRP_10f281d777284cea], a0);
            }

            void AdditionalParameters::setCDAreaOverMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCDAreaOverMass_10f281d777284cea], a0);
            }

            void AdditionalParameters::setCRAreaOverMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCRAreaOverMass_10f281d777284cea], a0);
            }

            void AdditionalParameters::setCovConfidence(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovConfidence_10f281d777284cea], a0);
            }

            void AdditionalParameters::setCovConfidenceMethod(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovConfidenceMethod_f5ffdf29129ef90a], a0.this$);
            }

            void AdditionalParameters::setHbr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHbr_10f281d777284cea], a0);
            }

            void AdditionalParameters::setInclination(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInclination_10f281d777284cea], a0);
            }

            void AdditionalParameters::setMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMass_10f281d777284cea], a0);
            }

            void AdditionalParameters::setPeriapsisAltitude(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPeriapsisAltitude_10f281d777284cea], a0);
            }

            void AdditionalParameters::setSedr(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSedr_10f281d777284cea], a0);
            }

            void AdditionalParameters::setThrustAcceleration(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setThrustAcceleration_10f281d777284cea], a0);
            }

            void AdditionalParameters::validate(jdouble a0) const
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
            static PyObject *t_AdditionalParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdditionalParameters_init_(t_AdditionalParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AdditionalParameters_getApoapsisAltitude(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaDRG(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaPC(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaPCMax(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaPCMin(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getAreaSRP(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCDAreaOverMass(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCRAreaOverMass(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCovConfidence(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getCovConfidenceMethod(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getHbr(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getInclination(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getMass(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getPeriapsisAltitude(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getSedr(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_getThrustAcceleration(t_AdditionalParameters *self);
            static PyObject *t_AdditionalParameters_setApoapsisAltitude(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaDRG(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaPC(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaPCMax(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaPCMin(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setAreaSRP(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCDAreaOverMass(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCRAreaOverMass(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCovConfidence(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setCovConfidenceMethod(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setHbr(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setInclination(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setMass(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setPeriapsisAltitude(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setSedr(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_setThrustAcceleration(t_AdditionalParameters *self, PyObject *arg);
            static PyObject *t_AdditionalParameters_validate(t_AdditionalParameters *self, PyObject *args);
            static PyObject *t_AdditionalParameters_get__apoapsisAltitude(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__apoapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaDRG(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaDRG(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaPC(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaPC(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaPCMax(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaPCMax(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaPCMin(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaPCMin(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__areaSRP(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__areaSRP(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__cDAreaOverMass(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__cDAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__cRAreaOverMass(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__cRAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__covConfidence(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__covConfidence(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__covConfidenceMethod(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__covConfidenceMethod(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__hbr(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__hbr(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__inclination(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__inclination(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__mass(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__mass(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__periapsisAltitude(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__periapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__sedr(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__sedr(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalParameters_get__thrustAcceleration(t_AdditionalParameters *self, void *data);
            static int t_AdditionalParameters_set__thrustAcceleration(t_AdditionalParameters *self, PyObject *arg, void *data);
            static PyGetSetDef t_AdditionalParameters__fields_[] = {
              DECLARE_GETSET_FIELD(t_AdditionalParameters, apoapsisAltitude),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaDRG),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaPC),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaPCMax),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaPCMin),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, areaSRP),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, cDAreaOverMass),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, cRAreaOverMass),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, covConfidence),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, covConfidenceMethod),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, hbr),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, inclination),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, mass),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, periapsisAltitude),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, sedr),
              DECLARE_GETSET_FIELD(t_AdditionalParameters, thrustAcceleration),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalParameters__methods_[] = {
              DECLARE_METHOD(t_AdditionalParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParameters, getApoapsisAltitude, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaDRG, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaPC, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaPCMax, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaPCMin, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getAreaSRP, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCDAreaOverMass, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCRAreaOverMass, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCovConfidence, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getCovConfidenceMethod, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getHbr, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getInclination, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getMass, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getPeriapsisAltitude, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getSedr, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, getThrustAcceleration, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalParameters, setApoapsisAltitude, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaDRG, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaPC, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaPCMax, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaPCMin, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setAreaSRP, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCDAreaOverMass, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCRAreaOverMass, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCovConfidence, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setCovConfidenceMethod, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setHbr, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setInclination, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setMass, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setPeriapsisAltitude, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setSedr, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, setThrustAcceleration, METH_O),
              DECLARE_METHOD(t_AdditionalParameters, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalParameters)[] = {
              { Py_tp_methods, t_AdditionalParameters__methods_ },
              { Py_tp_init, (void *) t_AdditionalParameters_init_ },
              { Py_tp_getset, t_AdditionalParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::CommonPhysicalProperties),
              NULL
            };

            DEFINE_TYPE(AdditionalParameters, t_AdditionalParameters, AdditionalParameters);

            void t_AdditionalParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalParameters), &PY_TYPE_DEF(AdditionalParameters), module, "AdditionalParameters", 0);
            }

            void t_AdditionalParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParameters), "class_", make_descriptor(AdditionalParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParameters), "wrapfn_", make_descriptor(t_AdditionalParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdditionalParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalParameters::initializeClass, 1)))
                return NULL;
              return t_AdditionalParameters::wrap_Object(AdditionalParameters(((t_AdditionalParameters *) arg)->object.this$));
            }
            static PyObject *t_AdditionalParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdditionalParameters_init_(t_AdditionalParameters *self, PyObject *args, PyObject *kwds)
            {
              AdditionalParameters object((jobject) NULL);

              INT_CALL(object = AdditionalParameters());
              self->object = object;

              return 0;
            }

            static PyObject *t_AdditionalParameters_getApoapsisAltitude(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getApoapsisAltitude());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaDRG(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaDRG());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaPC(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaPC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaPCMax(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaPCMax());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaPCMin(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaPCMin());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getAreaSRP(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAreaSRP());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCDAreaOverMass(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCDAreaOverMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCRAreaOverMass(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCRAreaOverMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCovConfidence(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCovConfidence());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getCovConfidenceMethod(t_AdditionalParameters *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovConfidenceMethod());
              return j2p(result);
            }

            static PyObject *t_AdditionalParameters_getHbr(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHbr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getInclination(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getInclination());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getMass(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getPeriapsisAltitude(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPeriapsisAltitude());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getSedr(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSedr());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_getThrustAcceleration(t_AdditionalParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getThrustAcceleration());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalParameters_setApoapsisAltitude(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setApoapsisAltitude(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setApoapsisAltitude", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaDRG(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaDRG(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaDRG", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaPC(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaPC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaPC", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaPCMax(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaPCMax(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaPCMax", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaPCMin(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaPCMin(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaPCMin", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setAreaSRP(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAreaSRP(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAreaSRP", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCDAreaOverMass(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCDAreaOverMass(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCDAreaOverMass", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCRAreaOverMass(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCRAreaOverMass(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCRAreaOverMass", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCovConfidence(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCovConfidence(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovConfidence", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setCovConfidenceMethod(t_AdditionalParameters *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setCovConfidenceMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovConfidenceMethod", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setHbr(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setHbr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHbr", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setInclination(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setInclination(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInclination", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setMass(t_AdditionalParameters *self, PyObject *arg)
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

            static PyObject *t_AdditionalParameters_setPeriapsisAltitude(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setPeriapsisAltitude(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPeriapsisAltitude", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setSedr(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSedr(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSedr", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_setThrustAcceleration(t_AdditionalParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setThrustAcceleration(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setThrustAcceleration", arg);
              return NULL;
            }

            static PyObject *t_AdditionalParameters_validate(t_AdditionalParameters *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(AdditionalParameters), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_AdditionalParameters_get__apoapsisAltitude(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getApoapsisAltitude());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__apoapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setApoapsisAltitude(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "apoapsisAltitude", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaDRG(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaDRG());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaDRG(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaDRG(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaDRG", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaPC(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaPC());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaPC(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaPC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaPC", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaPCMax(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaPCMax());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaPCMax(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaPCMax(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaPCMax", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaPCMin(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaPCMin());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaPCMin(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaPCMin(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaPCMin", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__areaSRP(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAreaSRP());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__areaSRP(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAreaSRP(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "areaSRP", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__cDAreaOverMass(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCDAreaOverMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__cDAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCDAreaOverMass(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cDAreaOverMass", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__cRAreaOverMass(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCRAreaOverMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__cRAreaOverMass(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCRAreaOverMass(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cRAreaOverMass", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__covConfidence(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCovConfidence());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__covConfidence(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCovConfidence(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covConfidence", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__covConfidenceMethod(t_AdditionalParameters *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovConfidenceMethod());
              return j2p(value);
            }
            static int t_AdditionalParameters_set__covConfidenceMethod(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setCovConfidenceMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covConfidenceMethod", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__hbr(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHbr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__hbr(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setHbr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "hbr", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__inclination(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getInclination());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__inclination(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setInclination(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "inclination", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__mass(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__mass(t_AdditionalParameters *self, PyObject *arg, void *data)
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

            static PyObject *t_AdditionalParameters_get__periapsisAltitude(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPeriapsisAltitude());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__periapsisAltitude(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setPeriapsisAltitude(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "periapsisAltitude", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__sedr(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSedr());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__sedr(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSedr(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sedr", arg);
              return -1;
            }

            static PyObject *t_AdditionalParameters_get__thrustAcceleration(t_AdditionalParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getThrustAcceleration());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalParameters_set__thrustAcceleration(t_AdditionalParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setThrustAcceleration(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "thrustAcceleration", arg);
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
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D$NoSubSpaceException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Euclidean1D::class$ = NULL;
          jmethodID *Euclidean1D::mids$ = NULL;
          bool Euclidean1D::live$ = false;

          jclass Euclidean1D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Euclidean1D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_81c8ae54d6b9890c] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/euclidean/oned/Euclidean1D;");
              mids$[mid_getSubSpace_cf9410d213a7cbb9] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/Space;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint Euclidean1D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
          }

          Euclidean1D Euclidean1D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Euclidean1D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_81c8ae54d6b9890c]));
          }

          ::org::hipparchus::geometry::Space Euclidean1D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSubSpace_cf9410d213a7cbb9]));
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
        namespace oned {
          static PyObject *t_Euclidean1D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean1D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean1D_getDimension(t_Euclidean1D *self);
          static PyObject *t_Euclidean1D_getInstance(PyTypeObject *type);
          static PyObject *t_Euclidean1D_getSubSpace(t_Euclidean1D *self);
          static PyObject *t_Euclidean1D_get__dimension(t_Euclidean1D *self, void *data);
          static PyObject *t_Euclidean1D_get__instance(t_Euclidean1D *self, void *data);
          static PyObject *t_Euclidean1D_get__subSpace(t_Euclidean1D *self, void *data);
          static PyGetSetDef t_Euclidean1D__fields_[] = {
            DECLARE_GET_FIELD(t_Euclidean1D, dimension),
            DECLARE_GET_FIELD(t_Euclidean1D, instance),
            DECLARE_GET_FIELD(t_Euclidean1D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Euclidean1D__methods_[] = {
            DECLARE_METHOD(t_Euclidean1D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Euclidean1D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Euclidean1D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean1D)[] = {
            { Py_tp_methods, t_Euclidean1D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Euclidean1D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean1D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Euclidean1D, t_Euclidean1D, Euclidean1D);

          void t_Euclidean1D::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean1D), &PY_TYPE_DEF(Euclidean1D), module, "Euclidean1D", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "NoSubSpaceException", make_descriptor(&PY_TYPE_DEF(Euclidean1D$NoSubSpaceException)));
          }

          void t_Euclidean1D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "class_", make_descriptor(Euclidean1D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "wrapfn_", make_descriptor(t_Euclidean1D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean1D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean1D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean1D::initializeClass, 1)))
              return NULL;
            return t_Euclidean1D::wrap_Object(Euclidean1D(((t_Euclidean1D *) arg)->object.this$));
          }
          static PyObject *t_Euclidean1D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean1D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Euclidean1D_getDimension(t_Euclidean1D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Euclidean1D_getInstance(PyTypeObject *type)
          {
            Euclidean1D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Euclidean1D::getInstance());
            return t_Euclidean1D::wrap_Object(result);
          }

          static PyObject *t_Euclidean1D_getSubSpace(t_Euclidean1D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Euclidean1D_get__dimension(t_Euclidean1D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Euclidean1D_get__instance(t_Euclidean1D *self, void *data)
          {
            Euclidean1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Euclidean1D::wrap_Object(value);
          }

          static PyObject *t_Euclidean1D_get__subSpace(t_Euclidean1D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative::class$ = NULL;
        jmethodID *FieldUnivariateDerivative::mids$ = NULL;
        bool FieldUnivariateDerivative::live$ = false;

        jclass FieldUnivariateDerivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getDerivative_8b3a1c735adfa4bc] = env->getMethodID(cls, "getDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getFreeParameters_412668abc8d889e9] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getPartialDerivative_12d47fa54f2033ee] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDerivativeStructure_5997f22f8d76210e] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldUnivariateDerivative::FieldUnivariateDerivative() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative::getDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_8b3a1c735adfa4bc], a0));
        }

        jint FieldUnivariateDerivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_412668abc8d889e9]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_12d47fa54f2033ee], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldUnivariateDerivative::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_5997f22f8d76210e]));
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
        static PyObject *t_FieldUnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_of_(t_FieldUnivariateDerivative *self, PyObject *args);
        static int t_FieldUnivariateDerivative_init_(t_FieldUnivariateDerivative *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldUnivariateDerivative_getDerivative(t_FieldUnivariateDerivative *self, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_getFreeParameters(t_FieldUnivariateDerivative *self);
        static PyObject *t_FieldUnivariateDerivative_getPartialDerivative(t_FieldUnivariateDerivative *self, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative_toDerivativeStructure(t_FieldUnivariateDerivative *self);
        static PyObject *t_FieldUnivariateDerivative_get__freeParameters(t_FieldUnivariateDerivative *self, void *data);
        static PyObject *t_FieldUnivariateDerivative_get__parameters_(t_FieldUnivariateDerivative *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative, freeParameters),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, getDerivative, METH_O),
          DECLARE_METHOD(t_FieldUnivariateDerivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_FieldUnivariateDerivative, toDerivativeStructure, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative__methods_ },
          { Py_tp_init, (void *) t_FieldUnivariateDerivative_init_ },
          { Py_tp_getset, t_FieldUnivariateDerivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative, t_FieldUnivariateDerivative, FieldUnivariateDerivative);
        PyObject *t_FieldUnivariateDerivative::wrap_Object(const FieldUnivariateDerivative& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldUnivariateDerivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative *self = (t_FieldUnivariateDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldUnivariateDerivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative *self = (t_FieldUnivariateDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative), &PY_TYPE_DEF(FieldUnivariateDerivative), module, "FieldUnivariateDerivative", 0);
        }

        void t_FieldUnivariateDerivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative), "class_", make_descriptor(FieldUnivariateDerivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative::wrap_Object(FieldUnivariateDerivative(((t_FieldUnivariateDerivative *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative_of_(t_FieldUnivariateDerivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldUnivariateDerivative_init_(t_FieldUnivariateDerivative *self, PyObject *args, PyObject *kwds)
        {
          FieldUnivariateDerivative object((jobject) NULL);

          INT_CALL(object = FieldUnivariateDerivative());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldUnivariateDerivative_getDerivative(t_FieldUnivariateDerivative *self, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative_getFreeParameters(t_FieldUnivariateDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateDerivative_getPartialDerivative(t_FieldUnivariateDerivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative_toDerivativeStructure(t_FieldUnivariateDerivative *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldUnivariateDerivative_get__parameters_(t_FieldUnivariateDerivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative_get__freeParameters(t_FieldUnivariateDerivative *self, void *data)
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
#include "org/orekit/propagation/numerical/cr3bp/STMEquations.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *STMEquations::class$ = NULL;
          jmethodID *STMEquations::mids$ = NULL;
          bool STMEquations::live$ = false;

          jclass STMEquations::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/STMEquations");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f1c6590d5c8242d6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;)V");
              mids$[mid_combinedDerivatives_5fc55a092d474e7c] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
              mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getStateTransitionMatrix_fc9cdfa83c55d6b2] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_setInitialPhi_2c4cc16b11f79a6c] = env->getMethodID(cls, "setInitialPhi", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          STMEquations::STMEquations(const ::org::orekit::bodies::CR3BPSystem & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1c6590d5c8242d6, a0.this$)) {}

          ::org::orekit::propagation::integration::CombinedDerivatives STMEquations::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_5fc55a092d474e7c], a0.this$));
          }

          jint STMEquations::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
          }

          ::java::lang::String STMEquations::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
          }

          ::org::hipparchus::linear::RealMatrix STMEquations::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_fc9cdfa83c55d6b2], a0.this$));
          }

          ::org::orekit::propagation::SpacecraftState STMEquations::setInitialPhi(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_setInitialPhi_2c4cc16b11f79a6c], a0.this$));
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
      namespace numerical {
        namespace cr3bp {
          static PyObject *t_STMEquations_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_STMEquations_instance_(PyTypeObject *type, PyObject *arg);
          static int t_STMEquations_init_(t_STMEquations *self, PyObject *args, PyObject *kwds);
          static PyObject *t_STMEquations_combinedDerivatives(t_STMEquations *self, PyObject *arg);
          static PyObject *t_STMEquations_getDimension(t_STMEquations *self);
          static PyObject *t_STMEquations_getName(t_STMEquations *self);
          static PyObject *t_STMEquations_getStateTransitionMatrix(t_STMEquations *self, PyObject *arg);
          static PyObject *t_STMEquations_setInitialPhi(t_STMEquations *self, PyObject *arg);
          static PyObject *t_STMEquations_get__dimension(t_STMEquations *self, void *data);
          static int t_STMEquations_set__initialPhi(t_STMEquations *self, PyObject *arg, void *data);
          static PyObject *t_STMEquations_get__name(t_STMEquations *self, void *data);
          static PyGetSetDef t_STMEquations__fields_[] = {
            DECLARE_GET_FIELD(t_STMEquations, dimension),
            DECLARE_SET_FIELD(t_STMEquations, initialPhi),
            DECLARE_GET_FIELD(t_STMEquations, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_STMEquations__methods_[] = {
            DECLARE_METHOD(t_STMEquations, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_STMEquations, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_STMEquations, combinedDerivatives, METH_O),
            DECLARE_METHOD(t_STMEquations, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_STMEquations, getName, METH_NOARGS),
            DECLARE_METHOD(t_STMEquations, getStateTransitionMatrix, METH_O),
            DECLARE_METHOD(t_STMEquations, setInitialPhi, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(STMEquations)[] = {
            { Py_tp_methods, t_STMEquations__methods_ },
            { Py_tp_init, (void *) t_STMEquations_init_ },
            { Py_tp_getset, t_STMEquations__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(STMEquations)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(STMEquations, t_STMEquations, STMEquations);

          void t_STMEquations::install(PyObject *module)
          {
            installType(&PY_TYPE(STMEquations), &PY_TYPE_DEF(STMEquations), module, "STMEquations", 0);
          }

          void t_STMEquations::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(STMEquations), "class_", make_descriptor(STMEquations::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(STMEquations), "wrapfn_", make_descriptor(t_STMEquations::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(STMEquations), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_STMEquations_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, STMEquations::initializeClass, 1)))
              return NULL;
            return t_STMEquations::wrap_Object(STMEquations(((t_STMEquations *) arg)->object.this$));
          }
          static PyObject *t_STMEquations_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, STMEquations::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_STMEquations_init_(t_STMEquations *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            STMEquations object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::bodies::CR3BPSystem::initializeClass, &a0))
            {
              INT_CALL(object = STMEquations(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_STMEquations_combinedDerivatives(t_STMEquations *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.combinedDerivatives(a0));
              return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
            return NULL;
          }

          static PyObject *t_STMEquations_getDimension(t_STMEquations *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_STMEquations_getName(t_STMEquations *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_STMEquations_getStateTransitionMatrix(t_STMEquations *self, PyObject *arg)
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

          static PyObject *t_STMEquations_setInitialPhi(t_STMEquations *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.setInitialPhi(a0));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "setInitialPhi", arg);
            return NULL;
          }

          static PyObject *t_STMEquations_get__dimension(t_STMEquations *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static int t_STMEquations_set__initialPhi(t_STMEquations *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
              {
                INT_CALL(self->object.setInitialPhi(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "initialPhi", arg);
            return -1;
          }

          static PyObject *t_STMEquations_get__name(t_STMEquations *self, void *data)
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
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ODEIntegratorBuilder::class$ = NULL;
        jmethodID *ODEIntegratorBuilder::mids$ = NULL;
        bool ODEIntegratorBuilder::live$ = false;

        jclass ODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildIntegrator_f50d555477b898d8] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::AbstractIntegrator ODEIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_f50d555477b898d8], a0.this$, a1.this$));
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
        static PyObject *t_ODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEIntegratorBuilder_buildIntegrator(t_ODEIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_ODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_ODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEIntegratorBuilder, t_ODEIntegratorBuilder, ODEIntegratorBuilder);

        void t_ODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEIntegratorBuilder), &PY_TYPE_DEF(ODEIntegratorBuilder), module, "ODEIntegratorBuilder", 0);
        }

        void t_ODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegratorBuilder), "class_", make_descriptor(ODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegratorBuilder), "wrapfn_", make_descriptor(t_ODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ODEIntegratorBuilder::wrap_Object(ODEIntegratorBuilder(((t_ODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEIntegratorBuilder_buildIntegrator(t_ODEIntegratorBuilder *self, PyObject *args)
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
#include "org/hipparchus/util/CompositeFormat.h"
#include "java/text/ParsePosition.h"
#include "java/util/Locale.h"
#include "java/lang/Number.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Class.h"
#include "java/lang/StringBuffer.h"
#include "java/text/FieldPosition.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *CompositeFormat::class$ = NULL;
      jmethodID *CompositeFormat::mids$ = NULL;
      bool CompositeFormat::live$ = false;

      jclass CompositeFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/CompositeFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_formatDouble_d7c56a79155e517c] = env->getStaticMethodID(cls, "formatDouble", "(DLjava/text/NumberFormat;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getDefaultNumberFormat_001645e916bd626d] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getDefaultNumberFormat_eb8cc1bc569326d0] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
          mids$[mid_parseAndIgnoreWhitespace_c31631851425bff4] = env->getStaticMethodID(cls, "parseAndIgnoreWhitespace", "(Ljava/lang/String;Ljava/text/ParsePosition;)V");
          mids$[mid_parseFixedstring_5eb943e76b31513b] = env->getStaticMethodID(cls, "parseFixedstring", "(Ljava/lang/String;Ljava/lang/String;Ljava/text/ParsePosition;)Z");
          mids$[mid_parseNextCharacter_925fed7c0b932e5a] = env->getStaticMethodID(cls, "parseNextCharacter", "(Ljava/lang/String;Ljava/text/ParsePosition;)C");
          mids$[mid_parseNumber_9653b7c6be11e290] = env->getStaticMethodID(cls, "parseNumber", "(Ljava/lang/String;Ljava/text/NumberFormat;Ljava/text/ParsePosition;)Ljava/lang/Number;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::StringBuffer CompositeFormat::formatDouble(jdouble a0, const ::java::text::NumberFormat & a1, const ::java::lang::StringBuffer & a2, const ::java::text::FieldPosition & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::StringBuffer(env->callStaticObjectMethod(cls, mids$[mid_formatDouble_d7c56a79155e517c], a0, a1.this$, a2.this$, a3.this$));
      }

      ::java::text::NumberFormat CompositeFormat::getDefaultNumberFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::text::NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getDefaultNumberFormat_001645e916bd626d]));
      }

      ::java::text::NumberFormat CompositeFormat::getDefaultNumberFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::text::NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getDefaultNumberFormat_eb8cc1bc569326d0], a0.this$));
      }

      void CompositeFormat::parseAndIgnoreWhitespace(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_parseAndIgnoreWhitespace_c31631851425bff4], a0.this$, a1.this$);
      }

      jboolean CompositeFormat::parseFixedstring(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::text::ParsePosition & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_parseFixedstring_5eb943e76b31513b], a0.this$, a1.this$, a2.this$);
      }

      jchar CompositeFormat::parseNextCharacter(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticCharMethod(cls, mids$[mid_parseNextCharacter_925fed7c0b932e5a], a0.this$, a1.this$);
      }

      ::java::lang::Number CompositeFormat::parseNumber(const ::java::lang::String & a0, const ::java::text::NumberFormat & a1, const ::java::text::ParsePosition & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::Number(env->callStaticObjectMethod(cls, mids$[mid_parseNumber_9653b7c6be11e290], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_CompositeFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CompositeFormat_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CompositeFormat_formatDouble(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_getDefaultNumberFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseAndIgnoreWhitespace(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseFixedstring(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseNextCharacter(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_parseNumber(PyTypeObject *type, PyObject *args);
      static PyObject *t_CompositeFormat_get__defaultNumberFormat(t_CompositeFormat *self, void *data);
      static PyGetSetDef t_CompositeFormat__fields_[] = {
        DECLARE_GET_FIELD(t_CompositeFormat, defaultNumberFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CompositeFormat__methods_[] = {
        DECLARE_METHOD(t_CompositeFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, formatDouble, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, getDefaultNumberFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseAndIgnoreWhitespace, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseFixedstring, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseNextCharacter, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CompositeFormat, parseNumber, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CompositeFormat)[] = {
        { Py_tp_methods, t_CompositeFormat__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CompositeFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CompositeFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CompositeFormat, t_CompositeFormat, CompositeFormat);

      void t_CompositeFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(CompositeFormat), &PY_TYPE_DEF(CompositeFormat), module, "CompositeFormat", 0);
      }

      void t_CompositeFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeFormat), "class_", make_descriptor(CompositeFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeFormat), "wrapfn_", make_descriptor(t_CompositeFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CompositeFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CompositeFormat::initializeClass, 1)))
          return NULL;
        return t_CompositeFormat::wrap_Object(CompositeFormat(((t_CompositeFormat *) arg)->object.this$));
      }
      static PyObject *t_CompositeFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CompositeFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CompositeFormat_formatDouble(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        ::java::text::NumberFormat a1((jobject) NULL);
        ::java::lang::StringBuffer a2((jobject) NULL);
        ::java::text::FieldPosition a3((jobject) NULL);
        ::java::lang::StringBuffer result((jobject) NULL);

        if (!parseArgs(args, "Dkkk", ::java::text::NumberFormat::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::formatDouble(a0, a1, a2, a3));
          return ::java::lang::t_StringBuffer::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "formatDouble", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_getDefaultNumberFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::text::NumberFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::getDefaultNumberFormat());
            return ::java::text::t_NumberFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::text::NumberFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::getDefaultNumberFormat(a0));
              return ::java::text::t_NumberFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getDefaultNumberFormat", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseAndIgnoreWhitespace(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::CompositeFormat::parseAndIgnoreWhitespace(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "parseAndIgnoreWhitespace", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseFixedstring(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::text::ParsePosition a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "ssk", ::java::text::ParsePosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::parseFixedstring(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "parseFixedstring", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseNextCharacter(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);
        jchar result;

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::parseNextCharacter(a0, a1));
          return c2p(result);
        }

        PyErr_SetArgsError(type, "parseNextCharacter", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_parseNumber(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::NumberFormat a1((jobject) NULL);
        ::java::text::ParsePosition a2((jobject) NULL);
        ::java::lang::Number result((jobject) NULL);

        if (!parseArgs(args, "skk", ::java::text::NumberFormat::initializeClass, ::java::text::ParsePosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CompositeFormat::parseNumber(a0, a1, a2));
          return ::java::lang::t_Number::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseNumber", args);
        return NULL;
      }

      static PyObject *t_CompositeFormat_get__defaultNumberFormat(t_CompositeFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getDefaultNumberFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeVectorFunction.h"
#include "org/orekit/time/TimeVectorFunction.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeVectorFunction::class$ = NULL;
      jmethodID *PythonTimeVectorFunction::mids$ = NULL;
      bool PythonTimeVectorFunction::live$ = false;

      jclass PythonTimeVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_89e8b78e4211e023] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_value_f77452810420dd04] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeVectorFunction::PythonTimeVectorFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonTimeVectorFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonTimeVectorFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonTimeVectorFunction::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonTimeVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeVectorFunction_init_(t_PythonTimeVectorFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeVectorFunction_finalize(t_PythonTimeVectorFunction *self);
      static PyObject *t_PythonTimeVectorFunction_pythonExtension(t_PythonTimeVectorFunction *self, PyObject *args);
      static void JNICALL t_PythonTimeVectorFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeVectorFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeVectorFunction_value2(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonTimeVectorFunction_get__self(t_PythonTimeVectorFunction *self, void *data);
      static PyGetSetDef t_PythonTimeVectorFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeVectorFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeVectorFunction__methods_[] = {
        DECLARE_METHOD(t_PythonTimeVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeVectorFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeVectorFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeVectorFunction)[] = {
        { Py_tp_methods, t_PythonTimeVectorFunction__methods_ },
        { Py_tp_init, (void *) t_PythonTimeVectorFunction_init_ },
        { Py_tp_getset, t_PythonTimeVectorFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeVectorFunction, t_PythonTimeVectorFunction, PythonTimeVectorFunction);

      void t_PythonTimeVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeVectorFunction), &PY_TYPE_DEF(PythonTimeVectorFunction), module, "PythonTimeVectorFunction", 1);
      }

      void t_PythonTimeVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeVectorFunction), "class_", make_descriptor(PythonTimeVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeVectorFunction), "wrapfn_", make_descriptor(t_PythonTimeVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeVectorFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeVectorFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonTimeVectorFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonTimeVectorFunction_value1 },
          { "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonTimeVectorFunction_value2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonTimeVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeVectorFunction::initializeClass, 1)))
          return NULL;
        return t_PythonTimeVectorFunction::wrap_Object(PythonTimeVectorFunction(((t_PythonTimeVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeVectorFunction_init_(t_PythonTimeVectorFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeVectorFunction object((jobject) NULL);

        INT_CALL(object = PythonTimeVectorFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeVectorFunction_finalize(t_PythonTimeVectorFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeVectorFunction_pythonExtension(t_PythonTimeVectorFunction *self, PyObject *args)
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

      static void JNICALL t_PythonTimeVectorFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonTimeVectorFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("value", result);
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

      static jobject JNICALL t_PythonTimeVectorFunction_value2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("value", result);
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

      static PyObject *t_PythonTimeVectorFunction_get__self(t_PythonTimeVectorFunction *self, void *data)
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
#include "org/orekit/frames/Frames.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/Predefined.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Frames::class$ = NULL;
      jmethodID *Frames::mids$ = NULL;
      bool Frames::live$ = false;

      jclass Frames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Frames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_buildUncachedITRF_d001272d652a2315] = env->getMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;");
          mids$[mid_getCIRF_af417399ee2f3e0d] = env->getMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_e96d0d85e78fc6bd] = env->getMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEOPHistory_9cf4a1ec2e53bbd3] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEcliptic_bb61238dc14574bc] = env->getMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_9103848bb456e582] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getGCRF_6c9bc0a928c56d4e] = env->getMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_a06a41ba6e4eb36a] = env->getMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_af417399ee2f3e0d] = env->getMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_6c9bc0a928c56d4e] = env->getMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_af417399ee2f3e0d] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_e7702de838b8de68] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_af417399ee2f3e0d] = env->getMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_57509cacf2364dd9] = env->getMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_a06a41ba6e4eb36a] = env->getMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getPZ9011_af417399ee2f3e0d] = env->getMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_e96d0d85e78fc6bd] = env->getMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_57509cacf2364dd9] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_af417399ee2f3e0d] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_a06a41ba6e4eb36a] = env->getMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_af417399ee2f3e0d] = env->getMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_e96d0d85e78fc6bd] = env->getMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_of_d61f89abbaffbf29] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/TimeScales;Ljava/util/function/Supplier;)Lorg/orekit/frames/Frames;");
          mids$[mid_of_de3cab55580c83d6] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/TimeScales;Lorg/orekit/bodies/CelestialBodies;)Lorg/orekit/frames/Frames;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame Frames::buildUncachedITRF(const ::org::orekit::time::UT1Scale & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_buildUncachedITRF_d001272d652a2315], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getCIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getCIRF_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getEME2000() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getEME2000_e96d0d85e78fc6bd]));
      }

      ::org::orekit::frames::EOPHistory Frames::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_9cf4a1ec2e53bbd3], a0.this$, a1));
      }

      ::org::orekit::frames::Frame Frames::getEcliptic(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getEcliptic_bb61238dc14574bc], a0.this$));
      }

      ::org::orekit::frames::Frame Frames::getFrame(const ::org::orekit::frames::Predefined & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_9103848bb456e582], a0.this$));
      }

      ::org::orekit::frames::Frame Frames::getGCRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getGCRF_6c9bc0a928c56d4e]));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getGTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_a06a41ba6e4eb36a], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getGTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::Frame Frames::getICRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getICRF_6c9bc0a928c56d4e]));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getITRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRF_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::VersionedITRF Frames::getITRF(const ::org::orekit::frames::ITRFVersion & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2) const
      {
        return ::org::orekit::frames::VersionedITRF(env->callObjectMethod(this$, mids$[mid_getITRF_e7702de838b8de68], a0.this$, a1.this$, a2));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getITRFEquinox(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRFEquinox_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getMOD(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_57509cacf2364dd9], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getMOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_a06a41ba6e4eb36a], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getPZ9011(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getPZ9011_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTEME() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTEME_e96d0d85e78fc6bd]));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTIRF(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_57509cacf2364dd9], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_a06a41ba6e4eb36a], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_af417399ee2f3e0d], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getVeis1950() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getVeis1950_e96d0d85e78fc6bd]));
      }

      Frames Frames::of(const ::org::orekit::time::TimeScales & a0, const ::java::util::function::Supplier & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Frames(env->callStaticObjectMethod(cls, mids$[mid_of_d61f89abbaffbf29], a0.this$, a1.this$));
      }

      Frames Frames::of(const ::org::orekit::time::TimeScales & a0, const ::org::orekit::bodies::CelestialBodies & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Frames(env->callStaticObjectMethod(cls, mids$[mid_of_de3cab55580c83d6], a0.this$, a1.this$));
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
      static PyObject *t_Frames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frames_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frames_buildUncachedITRF(t_Frames *self, PyObject *arg);
      static PyObject *t_Frames_getCIRF(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getEME2000(t_Frames *self);
      static PyObject *t_Frames_getEOPHistory(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getEcliptic(t_Frames *self, PyObject *arg);
      static PyObject *t_Frames_getFrame(t_Frames *self, PyObject *arg);
      static PyObject *t_Frames_getGCRF(t_Frames *self);
      static PyObject *t_Frames_getGTOD(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getICRF(t_Frames *self);
      static PyObject *t_Frames_getITRF(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getITRFEquinox(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getMOD(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getPZ9011(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getTEME(t_Frames *self);
      static PyObject *t_Frames_getTIRF(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getTOD(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getVeis1950(t_Frames *self);
      static PyObject *t_Frames_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_Frames_get__eME2000(t_Frames *self, void *data);
      static PyObject *t_Frames_get__gCRF(t_Frames *self, void *data);
      static PyObject *t_Frames_get__iCRF(t_Frames *self, void *data);
      static PyObject *t_Frames_get__tEME(t_Frames *self, void *data);
      static PyObject *t_Frames_get__veis1950(t_Frames *self, void *data);
      static PyGetSetDef t_Frames__fields_[] = {
        DECLARE_GET_FIELD(t_Frames, eME2000),
        DECLARE_GET_FIELD(t_Frames, gCRF),
        DECLARE_GET_FIELD(t_Frames, iCRF),
        DECLARE_GET_FIELD(t_Frames, tEME),
        DECLARE_GET_FIELD(t_Frames, veis1950),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frames__methods_[] = {
        DECLARE_METHOD(t_Frames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frames, buildUncachedITRF, METH_O),
        DECLARE_METHOD(t_Frames, getCIRF, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getEME2000, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getEOPHistory, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getEcliptic, METH_O),
        DECLARE_METHOD(t_Frames, getFrame, METH_O),
        DECLARE_METHOD(t_Frames, getGCRF, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getGTOD, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getICRF, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getITRF, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getITRFEquinox, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getMOD, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getPZ9011, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getTEME, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getTIRF, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getTOD, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getVeis1950, METH_NOARGS),
        DECLARE_METHOD(t_Frames, of, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frames)[] = {
        { Py_tp_methods, t_Frames__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Frames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frames)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Frames, t_Frames, Frames);

      void t_Frames::install(PyObject *module)
      {
        installType(&PY_TYPE(Frames), &PY_TYPE_DEF(Frames), module, "Frames", 0);
      }

      void t_Frames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frames), "class_", make_descriptor(Frames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frames), "wrapfn_", make_descriptor(t_Frames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frames), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Frames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Frames::initializeClass, 1)))
          return NULL;
        return t_Frames::wrap_Object(Frames(((t_Frames *) arg)->object.this$));
      }
      static PyObject *t_Frames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Frames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Frames_buildUncachedITRF(t_Frames *self, PyObject *arg)
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

      static PyObject *t_Frames_getCIRF(t_Frames *self, PyObject *args)
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

      static PyObject *t_Frames_getEME2000(t_Frames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_Frames_getEOPHistory(t_Frames *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "getEOPHistory", args);
        return NULL;
      }

      static PyObject *t_Frames_getEcliptic(t_Frames *self, PyObject *arg)
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

      static PyObject *t_Frames_getFrame(t_Frames *self, PyObject *arg)
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

      static PyObject *t_Frames_getGCRF(t_Frames *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frames_getGTOD(t_Frames *self, PyObject *args)
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

      static PyObject *t_Frames_getICRF(t_Frames *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frames_getITRF(t_Frames *self, PyObject *args)
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

      static PyObject *t_Frames_getITRFEquinox(t_Frames *self, PyObject *args)
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

      static PyObject *t_Frames_getMOD(t_Frames *self, PyObject *args)
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

      static PyObject *t_Frames_getPZ9011(t_Frames *self, PyObject *args)
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

      static PyObject *t_Frames_getTEME(t_Frames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_Frames_getTIRF(t_Frames *self, PyObject *args)
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

      static PyObject *t_Frames_getTOD(t_Frames *self, PyObject *args)
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

      static PyObject *t_Frames_getVeis1950(t_Frames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_Frames_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::java::util::function::Supplier a1((jobject) NULL);
            PyTypeObject **p1;
            Frames result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::TimeScales::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &p1, ::java::util::function::t_Supplier::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::Frames::of(a0, a1));
              return t_Frames::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBodies a1((jobject) NULL);
            Frames result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::Frames::of(a0, a1));
              return t_Frames::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_Frames_get__eME2000(t_Frames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__gCRF(t_Frames *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__iCRF(t_Frames *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__tEME(t_Frames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__veis1950(t_Frames *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistory.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovariance.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovarianceHistory::class$ = NULL;
              jmethodID *AttitudeCovarianceHistory::mids$ = NULL;
              bool AttitudeCovarianceHistory::live$ = false;

              jclass AttitudeCovarianceHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9ebd01da74ea119f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getCovariances_0d9551367f7ecdef] = env->getMethodID(cls, "getCovariances", "()Ljava/util/List;");
                  mids$[mid_getMetadata_20a67f28436ad533] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeCovarianceHistory::AttitudeCovarianceHistory(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9ebd01da74ea119f, a0.this$, a1.this$)) {}

              ::java::util::List AttitudeCovarianceHistory::getCovariances() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovariances_0d9551367f7ecdef]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata AttitudeCovarianceHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_20a67f28436ad533]));
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
              static PyObject *t_AttitudeCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeCovarianceHistory_init_(t_AttitudeCovarianceHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeCovarianceHistory_getCovariances(t_AttitudeCovarianceHistory *self);
              static PyObject *t_AttitudeCovarianceHistory_getMetadata(t_AttitudeCovarianceHistory *self);
              static PyObject *t_AttitudeCovarianceHistory_get__covariances(t_AttitudeCovarianceHistory *self, void *data);
              static PyObject *t_AttitudeCovarianceHistory_get__metadata(t_AttitudeCovarianceHistory *self, void *data);
              static PyGetSetDef t_AttitudeCovarianceHistory__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovarianceHistory, covariances),
                DECLARE_GET_FIELD(t_AttitudeCovarianceHistory, metadata),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceHistory__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistory, getCovariances, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistory, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceHistory)[] = {
                { Py_tp_methods, t_AttitudeCovarianceHistory__methods_ },
                { Py_tp_init, (void *) t_AttitudeCovarianceHistory_init_ },
                { Py_tp_getset, t_AttitudeCovarianceHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceHistory, t_AttitudeCovarianceHistory, AttitudeCovarianceHistory);

              void t_AttitudeCovarianceHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceHistory), &PY_TYPE_DEF(AttitudeCovarianceHistory), module, "AttitudeCovarianceHistory", 0);
              }

              void t_AttitudeCovarianceHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistory), "class_", make_descriptor(AttitudeCovarianceHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistory), "wrapfn_", make_descriptor(t_AttitudeCovarianceHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceHistory::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceHistory::wrap_Object(AttitudeCovarianceHistory(((t_AttitudeCovarianceHistory *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeCovarianceHistory_init_(t_AttitudeCovarianceHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                AttitudeCovarianceHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = AttitudeCovarianceHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeCovarianceHistory_getCovariances(t_AttitudeCovarianceHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeCovariance));
              }

              static PyObject *t_AttitudeCovarianceHistory_getMetadata(t_AttitudeCovarianceHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovarianceHistory_get__covariances(t_AttitudeCovarianceHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeCovarianceHistory_get__metadata(t_AttitudeCovarianceHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceHistoryMetadata::wrap_Object(value);
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudePhysicalProperties::class$ = NULL;
              jmethodID *AttitudePhysicalProperties::mids$ = NULL;
              bool AttitudePhysicalProperties::live$ = false;

              jclass AttitudePhysicalProperties::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_20affcbd28542333] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getCenterOfPressure_f88961cca75a2c0a] = env->getMethodID(cls, "getCenterOfPressure", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getCenterOfPressureReferenceFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getCenterOfPressureReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getDragCoefficient_557b8123390d8d0c] = env->getMethodID(cls, "getDragCoefficient", "()D");
                  mids$[mid_getDryMass_557b8123390d8d0c] = env->getMethodID(cls, "getDryMass", "()D");
                  mids$[mid_getInertiaMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getInertiaMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_getInertiaReferenceFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getInertiaReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getWetMass_557b8123390d8d0c] = env->getMethodID(cls, "getWetMass", "()D");
                  mids$[mid_setCenterOfPressure_2810d2bec90e7b1c] = env->getMethodID(cls, "setCenterOfPressure", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setCenterOfPressureReferenceFrame_f55eee1236275bb1] = env->getMethodID(cls, "setCenterOfPressureReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setDragCoefficient_10f281d777284cea] = env->getMethodID(cls, "setDragCoefficient", "(D)V");
                  mids$[mid_setDryMass_10f281d777284cea] = env->getMethodID(cls, "setDryMass", "(D)V");
                  mids$[mid_setInertiaMatrixEntry_754312f3734d6e2f] = env->getMethodID(cls, "setInertiaMatrixEntry", "(IID)V");
                  mids$[mid_setInertiaReferenceFrame_f55eee1236275bb1] = env->getMethodID(cls, "setInertiaReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setWetMass_10f281d777284cea] = env->getMethodID(cls, "setWetMass", "(D)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudePhysicalProperties::AttitudePhysicalProperties(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_20affcbd28542333, a0.this$)) {}

              ::org::hipparchus::geometry::euclidean::threed::Vector3D AttitudePhysicalProperties::getCenterOfPressure() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenterOfPressure_f88961cca75a2c0a]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudePhysicalProperties::getCenterOfPressureReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getCenterOfPressureReferenceFrame_98f5fcaff3e3f9d2]));
              }

              jdouble AttitudePhysicalProperties::getDragCoefficient() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragCoefficient_557b8123390d8d0c]);
              }

              jdouble AttitudePhysicalProperties::getDryMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDryMass_557b8123390d8d0c]);
              }

              ::org::hipparchus::linear::RealMatrix AttitudePhysicalProperties::getInertiaMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInertiaMatrix_70a207fcbc031df2]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudePhysicalProperties::getInertiaReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getInertiaReferenceFrame_98f5fcaff3e3f9d2]));
              }

              jdouble AttitudePhysicalProperties::getWetMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getWetMass_557b8123390d8d0c]);
              }

              void AttitudePhysicalProperties::setCenterOfPressure(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCenterOfPressure_2810d2bec90e7b1c], a0.this$);
              }

              void AttitudePhysicalProperties::setCenterOfPressureReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCenterOfPressureReferenceFrame_f55eee1236275bb1], a0.this$);
              }

              void AttitudePhysicalProperties::setDragCoefficient(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragCoefficient_10f281d777284cea], a0);
              }

              void AttitudePhysicalProperties::setDryMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDryMass_10f281d777284cea], a0);
              }

              void AttitudePhysicalProperties::setInertiaMatrixEntry(jint a0, jint a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaMatrixEntry_754312f3734d6e2f], a0, a1, a2);
              }

              void AttitudePhysicalProperties::setInertiaReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaReferenceFrame_f55eee1236275bb1], a0.this$);
              }

              void AttitudePhysicalProperties::setWetMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setWetMass_10f281d777284cea], a0);
              }

              void AttitudePhysicalProperties::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
              static PyObject *t_AttitudePhysicalProperties_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudePhysicalProperties_init_(t_AttitudePhysicalProperties *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressure(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getDragCoefficient(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getDryMass(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getInertiaMatrix(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getInertiaReferenceFrame(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getWetMass(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setDragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setDryMass(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setInertiaMatrixEntry(t_AttitudePhysicalProperties *self, PyObject *args);
              static PyObject *t_AttitudePhysicalProperties_setInertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setWetMass(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_validate(t_AttitudePhysicalProperties *self, PyObject *args);
              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressure(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__centerOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__dragCoefficient(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__dragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__dryMass(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__dryMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__inertiaMatrix(t_AttitudePhysicalProperties *self, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__wetMass(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__wetMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudePhysicalProperties__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, centerOfPressure),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, centerOfPressureReferenceFrame),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, dragCoefficient),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, dryMass),
                DECLARE_GET_FIELD(t_AttitudePhysicalProperties, inertiaMatrix),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, inertiaReferenceFrame),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, wetMass),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudePhysicalProperties__methods_[] = {
                DECLARE_METHOD(t_AttitudePhysicalProperties, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getCenterOfPressure, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getCenterOfPressureReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getDragCoefficient, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getDryMass, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getInertiaMatrix, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getInertiaReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getWetMass, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setCenterOfPressure, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setCenterOfPressureReferenceFrame, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setDragCoefficient, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setDryMass, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setInertiaMatrixEntry, METH_VARARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setInertiaReferenceFrame, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setWetMass, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudePhysicalProperties)[] = {
                { Py_tp_methods, t_AttitudePhysicalProperties__methods_ },
                { Py_tp_init, (void *) t_AttitudePhysicalProperties_init_ },
                { Py_tp_getset, t_AttitudePhysicalProperties__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudePhysicalProperties)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudePhysicalProperties, t_AttitudePhysicalProperties, AttitudePhysicalProperties);

              void t_AttitudePhysicalProperties::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudePhysicalProperties), &PY_TYPE_DEF(AttitudePhysicalProperties), module, "AttitudePhysicalProperties", 0);
              }

              void t_AttitudePhysicalProperties::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalProperties), "class_", make_descriptor(AttitudePhysicalProperties::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalProperties), "wrapfn_", make_descriptor(t_AttitudePhysicalProperties::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalProperties), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudePhysicalProperties_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudePhysicalProperties::initializeClass, 1)))
                  return NULL;
                return t_AttitudePhysicalProperties::wrap_Object(AttitudePhysicalProperties(((t_AttitudePhysicalProperties *) arg)->object.this$));
              }
              static PyObject *t_AttitudePhysicalProperties_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudePhysicalProperties::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudePhysicalProperties_init_(t_AttitudePhysicalProperties *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                AttitudePhysicalProperties object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = AttitudePhysicalProperties(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressure(t_AttitudePhysicalProperties *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getCenterOfPressure());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCenterOfPressureReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getDragCoefficient(t_AttitudePhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudePhysicalProperties_getDryMass(t_AttitudePhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDryMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudePhysicalProperties_getInertiaMatrix(t_AttitudePhysicalProperties *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getInertiaReferenceFrame(t_AttitudePhysicalProperties *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getWetMass(t_AttitudePhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getWetMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCenterOfPressure(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCenterOfPressure", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCenterOfPressureReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCenterOfPressureReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setDragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragCoefficient(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragCoefficient", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setDryMass(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDryMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDryMass", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setInertiaMatrixEntry(t_AttitudePhysicalProperties *self, PyObject *args)
              {
                jint a0;
                jint a1;
                jdouble a2;

                if (!parseArgs(args, "IID", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setInertiaMatrixEntry(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInertiaMatrixEntry", args);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setInertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setInertiaReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInertiaReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setWetMass(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setWetMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setWetMass", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_validate(t_AttitudePhysicalProperties *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudePhysicalProperties), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressure(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getCenterOfPressure());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_AttitudePhysicalProperties_set__centerOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCenterOfPressure(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "centerOfPressure", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCenterOfPressureReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudePhysicalProperties_set__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCenterOfPressureReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "centerOfPressureReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__dragCoefficient(t_AttitudePhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudePhysicalProperties_set__dragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragCoefficient(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragCoefficient", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__dryMass(t_AttitudePhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDryMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudePhysicalProperties_set__dryMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDryMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dryMass", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__inertiaMatrix(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
              }

              static PyObject *t_AttitudePhysicalProperties_get__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudePhysicalProperties_set__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setInertiaReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "inertiaReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__wetMass(t_AttitudePhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getWetMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudePhysicalProperties_set__wetMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setWetMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "wetMass", arg);
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
#include "org/orekit/rugged/errors/RuggedExceptionWrapper.h"
#include "org/orekit/rugged/errors/RuggedException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedExceptionWrapper::class$ = NULL;
        jmethodID *RuggedExceptionWrapper::mids$ = NULL;
        bool RuggedExceptionWrapper::live$ = false;

        jclass RuggedExceptionWrapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedExceptionWrapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e8f16eb16464d495] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/errors/RuggedException;)V");
            mids$[mid_getException_f134d5c5de78cfc2] = env->getMethodID(cls, "getException", "()Lorg/orekit/rugged/errors/RuggedException;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedExceptionWrapper::RuggedExceptionWrapper(const ::org::orekit::rugged::errors::RuggedException & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_e8f16eb16464d495, a0.this$)) {}

        ::org::orekit::rugged::errors::RuggedException RuggedExceptionWrapper::getException() const
        {
          return ::org::orekit::rugged::errors::RuggedException(env->callObjectMethod(this$, mids$[mid_getException_f134d5c5de78cfc2]));
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
        static PyObject *t_RuggedExceptionWrapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedExceptionWrapper_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RuggedExceptionWrapper_init_(t_RuggedExceptionWrapper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedExceptionWrapper_getException(t_RuggedExceptionWrapper *self);
        static PyObject *t_RuggedExceptionWrapper_get__exception(t_RuggedExceptionWrapper *self, void *data);
        static PyGetSetDef t_RuggedExceptionWrapper__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedExceptionWrapper, exception),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedExceptionWrapper__methods_[] = {
          DECLARE_METHOD(t_RuggedExceptionWrapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedExceptionWrapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedExceptionWrapper, getException, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedExceptionWrapper)[] = {
          { Py_tp_methods, t_RuggedExceptionWrapper__methods_ },
          { Py_tp_init, (void *) t_RuggedExceptionWrapper_init_ },
          { Py_tp_getset, t_RuggedExceptionWrapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedExceptionWrapper)[] = {
          &PY_TYPE_DEF(::java::lang::RuntimeException),
          NULL
        };

        DEFINE_TYPE(RuggedExceptionWrapper, t_RuggedExceptionWrapper, RuggedExceptionWrapper);

        void t_RuggedExceptionWrapper::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedExceptionWrapper), &PY_TYPE_DEF(RuggedExceptionWrapper), module, "RuggedExceptionWrapper", 0);
        }

        void t_RuggedExceptionWrapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedExceptionWrapper), "class_", make_descriptor(RuggedExceptionWrapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedExceptionWrapper), "wrapfn_", make_descriptor(t_RuggedExceptionWrapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedExceptionWrapper), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedExceptionWrapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedExceptionWrapper::initializeClass, 1)))
            return NULL;
          return t_RuggedExceptionWrapper::wrap_Object(RuggedExceptionWrapper(((t_RuggedExceptionWrapper *) arg)->object.this$));
        }
        static PyObject *t_RuggedExceptionWrapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedExceptionWrapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RuggedExceptionWrapper_init_(t_RuggedExceptionWrapper *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::errors::RuggedException a0((jobject) NULL);
          RuggedExceptionWrapper object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::rugged::errors::RuggedException::initializeClass, &a0))
          {
            INT_CALL(object = RuggedExceptionWrapper(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RuggedExceptionWrapper_getException(t_RuggedExceptionWrapper *self)
        {
          ::org::orekit::rugged::errors::RuggedException result((jobject) NULL);
          OBJ_CALL(result = self->object.getException());
          return ::org::orekit::rugged::errors::t_RuggedException::wrap_Object(result);
        }

        static PyObject *t_RuggedExceptionWrapper_get__exception(t_RuggedExceptionWrapper *self, void *data)
        {
          ::org::orekit::rugged::errors::RuggedException value((jobject) NULL);
          OBJ_CALL(value = self->object.getException());
          return ::org::orekit::rugged::errors::t_RuggedException::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *CircularOrbit::class$ = NULL;
      jmethodID *CircularOrbit::mids$ = NULL;
      bool CircularOrbit::live$ = false;

      jclass CircularOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/CircularOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a9af82a1647a21f3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_7c6479063e790949] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_5005ce863a640a87] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_93fbea8aef52fcb9] = env->getMethodID(cls, "<init>", "(DDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_6687db2a115b6393] = env->getMethodID(cls, "<init>", "(DDDDDDDDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_9dda16418cc4ed80] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_eccentricToMean_8d02ba458f22e508] = env->getStaticMethodID(cls, "eccentricToMean", "(DDD)D");
          mids$[mid_eccentricToTrue_8d02ba458f22e508] = env->getStaticMethodID(cls, "eccentricToTrue", "(DDD)D");
          mids$[mid_getA_557b8123390d8d0c] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_557b8123390d8d0c] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getAlpha_20637fb12d17f9d4] = env->getMethodID(cls, "getAlpha", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getAlphaDot_20637fb12d17f9d4] = env->getMethodID(cls, "getAlphaDot", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getAlphaE_557b8123390d8d0c] = env->getMethodID(cls, "getAlphaE", "()D");
          mids$[mid_getAlphaEDot_557b8123390d8d0c] = env->getMethodID(cls, "getAlphaEDot", "()D");
          mids$[mid_getAlphaM_557b8123390d8d0c] = env->getMethodID(cls, "getAlphaM", "()D");
          mids$[mid_getAlphaMDot_557b8123390d8d0c] = env->getMethodID(cls, "getAlphaMDot", "()D");
          mids$[mid_getAlphaV_557b8123390d8d0c] = env->getMethodID(cls, "getAlphaV", "()D");
          mids$[mid_getAlphaVDot_557b8123390d8d0c] = env->getMethodID(cls, "getAlphaVDot", "()D");
          mids$[mid_getCachedPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getCircularEx_557b8123390d8d0c] = env->getMethodID(cls, "getCircularEx", "()D");
          mids$[mid_getCircularExDot_557b8123390d8d0c] = env->getMethodID(cls, "getCircularExDot", "()D");
          mids$[mid_getCircularEy_557b8123390d8d0c] = env->getMethodID(cls, "getCircularEy", "()D");
          mids$[mid_getCircularEyDot_557b8123390d8d0c] = env->getMethodID(cls, "getCircularEyDot", "()D");
          mids$[mid_getE_557b8123390d8d0c] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_557b8123390d8d0c] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_557b8123390d8d0c] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_557b8123390d8d0c] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_557b8123390d8d0c] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_557b8123390d8d0c] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_557b8123390d8d0c] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_557b8123390d8d0c] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_557b8123390d8d0c] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_557b8123390d8d0c] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_557b8123390d8d0c] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_557b8123390d8d0c] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_557b8123390d8d0c] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_557b8123390d8d0c] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getRightAscensionOfAscendingNode_557b8123390d8d0c] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()D");
          mids$[mid_getRightAscensionOfAscendingNodeDot_557b8123390d8d0c] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()D");
          mids$[mid_getType_2cea2a2cb3e02091] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasRates_89b302893bdbe1f1] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_8d02ba458f22e508] = env->getStaticMethodID(cls, "meanToEccentric", "(DDD)D");
          mids$[mid_removeRates_42c1cf938d8b491c] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/CircularOrbit;");
          mids$[mid_shiftedBy_2300d62de2971478] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/CircularOrbit;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_8d02ba458f22e508] = env->getStaticMethodID(cls, "trueToEccentric", "(DDD)D");
          mids$[mid_initPVCoordinates_daf15abc21907508] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_initPosition_f88961cca75a2c0a] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_8cf5267aa13a77f3] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_8cf5267aa13a77f3] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_8cf5267aa13a77f3] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CircularOrbit::CircularOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_a9af82a1647a21f3, a0.this$)) {}

      CircularOrbit::CircularOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_7c6479063e790949, a0.this$, a1.this$, a2)) {}

      CircularOrbit::CircularOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_5005ce863a640a87, a0.this$, a1.this$, a2.this$, a3)) {}

      CircularOrbit::CircularOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::AbsoluteDate & a8, jdouble a9) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_93fbea8aef52fcb9, a0, a1, a2, a3, a4, a5, a6.this$, a7.this$, a8.this$, a9)) {}

      CircularOrbit::CircularOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::AbsoluteDate & a14, jdouble a15) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_6687db2a115b6393, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$, a13.this$, a14.this$, a15)) {}

      void CircularOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_9dda16418cc4ed80], a0.this$, a1, a2.this$);
      }

      jdouble CircularOrbit::eccentricToMean(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToMean_8d02ba458f22e508], a0, a1, a2);
      }

      jdouble CircularOrbit::eccentricToTrue(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToTrue_8d02ba458f22e508], a0, a1, a2);
      }

      jdouble CircularOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getAlpha(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlpha_20637fb12d17f9d4], a0.this$);
      }

      jdouble CircularOrbit::getAlphaDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaDot_20637fb12d17f9d4], a0.this$);
      }

      jdouble CircularOrbit::getAlphaE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaE_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getAlphaEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaEDot_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getAlphaM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaM_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getAlphaMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaMDot_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getAlphaV() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaV_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getAlphaVDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaVDot_557b8123390d8d0c]);
      }

      ::org::orekit::orbits::PositionAngleType CircularOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_f4984aee71df4c19]));
      }

      jdouble CircularOrbit::getCircularEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularEx_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getCircularExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularExDot_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getCircularEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularEy_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getCircularEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularEyDot_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getRightAscensionOfAscendingNode() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_557b8123390d8d0c]);
      }

      jdouble CircularOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_557b8123390d8d0c]);
      }

      ::org::orekit::orbits::OrbitType CircularOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_2cea2a2cb3e02091]));
      }

      jboolean CircularOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_89b302893bdbe1f1]);
      }

      jdouble CircularOrbit::meanToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_meanToEccentric_8d02ba458f22e508], a0, a1, a2);
      }

      CircularOrbit CircularOrbit::removeRates() const
      {
        return CircularOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_42c1cf938d8b491c]));
      }

      CircularOrbit CircularOrbit::shiftedBy(jdouble a0) const
      {
        return CircularOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_2300d62de2971478], a0));
      }

      ::java::lang::String CircularOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      jdouble CircularOrbit::trueToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_trueToEccentric_8d02ba458f22e508], a0, a1, a2);
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
      static PyObject *t_CircularOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CircularOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CircularOrbit_init_(t_CircularOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CircularOrbit_addKeplerContribution(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_getA(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getADot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getAlpha(t_CircularOrbit *self, PyObject *arg);
      static PyObject *t_CircularOrbit_getAlphaDot(t_CircularOrbit *self, PyObject *arg);
      static PyObject *t_CircularOrbit_getAlphaE(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaEDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaM(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaMDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaV(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaVDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCachedPositionAngleType(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularEx(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularExDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularEy(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularEyDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getE(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialEx(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialExDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialEy(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialEyDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHx(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHxDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHy(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHyDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getI(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getIDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLE(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLEDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLM(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLMDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLv(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLvDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNode(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNodeDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getType(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_hasRates(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_removeRates(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_shiftedBy(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_toString(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_get__a(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__aDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaE(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaEDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaM(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaMDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaV(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaVDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__cachedPositionAngleType(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularEx(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularExDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularEy(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularEyDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__e(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__eDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialEx(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialExDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialEy(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialEyDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hx(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hxDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hy(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hyDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__i(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__iDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lE(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lEDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lM(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lMDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lv(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lvDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNode(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNodeDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__type(t_CircularOrbit *self, void *data);
      static PyGetSetDef t_CircularOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_CircularOrbit, a),
        DECLARE_GET_FIELD(t_CircularOrbit, aDot),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaE),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaEDot),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaM),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaMDot),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaV),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaVDot),
        DECLARE_GET_FIELD(t_CircularOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_CircularOrbit, circularEx),
        DECLARE_GET_FIELD(t_CircularOrbit, circularExDot),
        DECLARE_GET_FIELD(t_CircularOrbit, circularEy),
        DECLARE_GET_FIELD(t_CircularOrbit, circularEyDot),
        DECLARE_GET_FIELD(t_CircularOrbit, e),
        DECLARE_GET_FIELD(t_CircularOrbit, eDot),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_CircularOrbit, hx),
        DECLARE_GET_FIELD(t_CircularOrbit, hxDot),
        DECLARE_GET_FIELD(t_CircularOrbit, hy),
        DECLARE_GET_FIELD(t_CircularOrbit, hyDot),
        DECLARE_GET_FIELD(t_CircularOrbit, i),
        DECLARE_GET_FIELD(t_CircularOrbit, iDot),
        DECLARE_GET_FIELD(t_CircularOrbit, lE),
        DECLARE_GET_FIELD(t_CircularOrbit, lEDot),
        DECLARE_GET_FIELD(t_CircularOrbit, lM),
        DECLARE_GET_FIELD(t_CircularOrbit, lMDot),
        DECLARE_GET_FIELD(t_CircularOrbit, lv),
        DECLARE_GET_FIELD(t_CircularOrbit, lvDot),
        DECLARE_GET_FIELD(t_CircularOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_CircularOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_CircularOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CircularOrbit__methods_[] = {
        DECLARE_METHOD(t_CircularOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlpha, METH_O),
        DECLARE_METHOD(t_CircularOrbit, getAlphaDot, METH_O),
        DECLARE_METHOD(t_CircularOrbit, getAlphaE, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaEDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaM, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaMDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaV, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaVDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularEx, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularExDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularEy, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularEyDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CircularOrbit)[] = {
        { Py_tp_methods, t_CircularOrbit__methods_ },
        { Py_tp_init, (void *) t_CircularOrbit_init_ },
        { Py_tp_getset, t_CircularOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CircularOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(CircularOrbit, t_CircularOrbit, CircularOrbit);

      void t_CircularOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(CircularOrbit), &PY_TYPE_DEF(CircularOrbit), module, "CircularOrbit", 0);
      }

      void t_CircularOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CircularOrbit), "class_", make_descriptor(CircularOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CircularOrbit), "wrapfn_", make_descriptor(t_CircularOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CircularOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CircularOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CircularOrbit::initializeClass, 1)))
          return NULL;
        return t_CircularOrbit::wrap_Object(CircularOrbit(((t_CircularOrbit *) arg)->object.this$));
      }
      static PyObject *t_CircularOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CircularOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CircularOrbit_init_(t_CircularOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = CircularOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
            jdouble a9;
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &a9))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            jdouble a10;
            jdouble a11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a14((jobject) NULL);
            jdouble a15;
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDDDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &a15))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_CircularOrbit_addKeplerContribution(t_CircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "KD[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_CircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::eccentricToMean(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::eccentricToTrue(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_getA(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_CircularOrbit_getADot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_CircularOrbit_getAlpha(t_CircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlpha(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlpha", arg);
        return NULL;
      }

      static PyObject *t_CircularOrbit_getAlphaDot(t_CircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlphaDot(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlphaDot", arg);
        return NULL;
      }

      static PyObject *t_CircularOrbit_getAlphaE(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaEDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaM(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaMDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaMDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaV(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaV());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaVDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaVDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCachedPositionAngleType(t_CircularOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_CircularOrbit_getCircularEx(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularEx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCircularExDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularExDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCircularEy(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularEy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCircularEyDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularEyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getE(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_CircularOrbit_getEDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialEx(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialExDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialEy(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialEyDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getHx(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_CircularOrbit_getHxDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getHy(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_CircularOrbit_getHyDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getI(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_CircularOrbit_getIDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getLE(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_CircularOrbit_getLEDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getLM(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_CircularOrbit_getLMDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getLv(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_CircularOrbit_getLvDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNode(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNodeDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getType(t_CircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_CircularOrbit_hasRates(t_CircularOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_CircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::meanToEccentric(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_removeRates(t_CircularOrbit *self)
      {
        CircularOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_CircularOrbit::wrap_Object(result);
      }

      static PyObject *t_CircularOrbit_shiftedBy(t_CircularOrbit *self, PyObject *args)
      {
        jdouble a0;
        CircularOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_CircularOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_CircularOrbit_toString(t_CircularOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_CircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::trueToEccentric(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_get__a(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__aDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaE(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaEDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaM(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaMDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaV(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaV());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaVDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaVDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__cachedPositionAngleType(t_CircularOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_CircularOrbit_get__circularEx(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__circularExDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__circularEy(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__circularEyDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__e(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__eDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialEx(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialExDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialEy(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialEyDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hx(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hxDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hy(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hyDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__i(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__iDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lE(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lEDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lM(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lMDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lv(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lvDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNode(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNodeDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__type(t_CircularOrbit *self, void *data)
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
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$InconsistentStateAt2PiWrapping.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *ArcsSet$InconsistentStateAt2PiWrapping::class$ = NULL;
          jmethodID *ArcsSet$InconsistentStateAt2PiWrapping::mids$ = NULL;
          bool ArcsSet$InconsistentStateAt2PiWrapping::live$ = false;

          jclass ArcsSet$InconsistentStateAt2PiWrapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/ArcsSet$InconsistentStateAt2PiWrapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ArcsSet$InconsistentStateAt2PiWrapping::ArcsSet$InconsistentStateAt2PiWrapping() : ::org::hipparchus::exception::MathIllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
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
        namespace oned {
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_of_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args);
          static int t_ArcsSet$InconsistentStateAt2PiWrapping_init_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_get__parameters_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, void *data);
          static PyGetSetDef t_ArcsSet$InconsistentStateAt2PiWrapping__fields_[] = {
            DECLARE_GET_FIELD(t_ArcsSet$InconsistentStateAt2PiWrapping, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ArcsSet$InconsistentStateAt2PiWrapping__methods_[] = {
            DECLARE_METHOD(t_ArcsSet$InconsistentStateAt2PiWrapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$InconsistentStateAt2PiWrapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$InconsistentStateAt2PiWrapping, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ArcsSet$InconsistentStateAt2PiWrapping)[] = {
            { Py_tp_methods, t_ArcsSet$InconsistentStateAt2PiWrapping__methods_ },
            { Py_tp_init, (void *) t_ArcsSet$InconsistentStateAt2PiWrapping_init_ },
            { Py_tp_getset, t_ArcsSet$InconsistentStateAt2PiWrapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ArcsSet$InconsistentStateAt2PiWrapping)[] = {
            &PY_TYPE_DEF(::org::hipparchus::exception::MathIllegalArgumentException),
            NULL
          };

          DEFINE_TYPE(ArcsSet$InconsistentStateAt2PiWrapping, t_ArcsSet$InconsistentStateAt2PiWrapping, ArcsSet$InconsistentStateAt2PiWrapping);
          PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_Object(const ArcsSet$InconsistentStateAt2PiWrapping& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$InconsistentStateAt2PiWrapping *self = (t_ArcsSet$InconsistentStateAt2PiWrapping *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$InconsistentStateAt2PiWrapping *self = (t_ArcsSet$InconsistentStateAt2PiWrapping *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_ArcsSet$InconsistentStateAt2PiWrapping::install(PyObject *module)
          {
            installType(&PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), &PY_TYPE_DEF(ArcsSet$InconsistentStateAt2PiWrapping), module, "ArcsSet$InconsistentStateAt2PiWrapping", 0);
          }

          void t_ArcsSet$InconsistentStateAt2PiWrapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), "class_", make_descriptor(ArcsSet$InconsistentStateAt2PiWrapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), "wrapfn_", make_descriptor(t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ArcsSet$InconsistentStateAt2PiWrapping::initializeClass, 1)))
              return NULL;
            return t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_Object(ArcsSet$InconsistentStateAt2PiWrapping(((t_ArcsSet$InconsistentStateAt2PiWrapping *) arg)->object.this$));
          }
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ArcsSet$InconsistentStateAt2PiWrapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_of_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ArcsSet$InconsistentStateAt2PiWrapping_init_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args, PyObject *kwds)
          {
            ArcsSet$InconsistentStateAt2PiWrapping object((jobject) NULL);

            INT_CALL(object = ArcsSet$InconsistentStateAt2PiWrapping());
            self->object = object;
            self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
            self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);

            return 0;
          }
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_get__parameters_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, void *data)
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
#include "org/hipparchus/dfp/DfpField.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "org/hipparchus/dfp/DfpField.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpField::class$ = NULL;
      jmethodID *DfpField::mids$ = NULL;
      bool DfpField::live$ = false;
      jint DfpField::FLAG_DIV_ZERO = (jint) 0;
      jint DfpField::FLAG_INEXACT = (jint) 0;
      jint DfpField::FLAG_INVALID = (jint) 0;
      jint DfpField::FLAG_OVERFLOW = (jint) 0;
      jint DfpField::FLAG_UNDERFLOW = (jint) 0;

      jclass DfpField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_clearIEEEFlags_0640e6acf969ed28] = env->getMethodID(cls, "clearIEEEFlags", "()V");
          mids$[mid_computeExp_badefef06f0dff33] = env->getStaticMethodID(cls, "computeExp", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_computeLn_ccc00cb9ce7ea30d] = env->getStaticMethodID(cls, "computeLn", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDegToRad_dce9a968b1de6538] = env->getMethodID(cls, "getDegToRad", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getE_dce9a968b1de6538] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getESplit_107269c3c3a896e2] = env->getMethodID(cls, "getESplit", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getExtendedField_49cc80964470be8f] = env->getMethodID(cls, "getExtendedField", "(IZ)Lorg/hipparchus/dfp/DfpField;");
          mids$[mid_getIEEEFlags_412668abc8d889e9] = env->getMethodID(cls, "getIEEEFlags", "()I");
          mids$[mid_getLn10_dce9a968b1de6538] = env->getMethodID(cls, "getLn10", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn2_dce9a968b1de6538] = env->getMethodID(cls, "getLn2", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn2Split_107269c3c3a896e2] = env->getMethodID(cls, "getLn2Split", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn5_dce9a968b1de6538] = env->getMethodID(cls, "getLn5", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn5Split_107269c3c3a896e2] = env->getMethodID(cls, "getLn5Split", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getOne_dce9a968b1de6538] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getPi_dce9a968b1de6538] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getPiSplit_107269c3c3a896e2] = env->getMethodID(cls, "getPiSplit", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getRadToDeg_dce9a968b1de6538] = env->getMethodID(cls, "getRadToDeg", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getRadixDigits_412668abc8d889e9] = env->getMethodID(cls, "getRadixDigits", "()I");
          mids$[mid_getRoundingMode_81c548bb52bf4b30] = env->getMethodID(cls, "getRoundingMode", "()Lorg/hipparchus/dfp/DfpField$RoundingMode;");
          mids$[mid_getRuntimeClass_d4b191ff8147475d] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getSqr2_dce9a968b1de6538] = env->getMethodID(cls, "getSqr2", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr2Reciprocal_dce9a968b1de6538] = env->getMethodID(cls, "getSqr2Reciprocal", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr2Split_107269c3c3a896e2] = env->getMethodID(cls, "getSqr2Split", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr3_dce9a968b1de6538] = env->getMethodID(cls, "getSqr3", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr3Reciprocal_dce9a968b1de6538] = env->getMethodID(cls, "getSqr3Reciprocal", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getTwo_dce9a968b1de6538] = env->getMethodID(cls, "getTwo", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getZero_dce9a968b1de6538] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_newDfp_dce9a968b1de6538] = env->getMethodID(cls, "newDfp", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_4cf97baa750c9172] = env->getMethodID(cls, "newDfp", "(Ljava/lang/String;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_f081bcbf4bd8f1ad] = env->getMethodID(cls, "newDfp", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_e45f329aeeedfd27] = env->getMethodID(cls, "newDfp", "(B)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_48c0a79cfaaf4ea7] = env->getMethodID(cls, "newDfp", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_8418d0fac935c091] = env->getMethodID(cls, "newDfp", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_521fd622f2a09126] = env->getMethodID(cls, "newDfp", "(J)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_7b144e66c7452202] = env->getMethodID(cls, "newDfp", "(BB)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_setIEEEFlags_a3da1a935cb37f7b] = env->getMethodID(cls, "setIEEEFlags", "(I)V");
          mids$[mid_setIEEEFlagsBits_a3da1a935cb37f7b] = env->getMethodID(cls, "setIEEEFlagsBits", "(I)V");
          mids$[mid_setRoundingMode_e521e3e702ddc984] = env->getMethodID(cls, "setRoundingMode", "(Lorg/hipparchus/dfp/DfpField$RoundingMode;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FLAG_DIV_ZERO = env->getStaticIntField(cls, "FLAG_DIV_ZERO");
          FLAG_INEXACT = env->getStaticIntField(cls, "FLAG_INEXACT");
          FLAG_INVALID = env->getStaticIntField(cls, "FLAG_INVALID");
          FLAG_OVERFLOW = env->getStaticIntField(cls, "FLAG_OVERFLOW");
          FLAG_UNDERFLOW = env->getStaticIntField(cls, "FLAG_UNDERFLOW");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DfpField::DfpField(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      void DfpField::clearIEEEFlags() const
      {
        env->callVoidMethod(this$, mids$[mid_clearIEEEFlags_0640e6acf969ed28]);
      }

      ::org::hipparchus::dfp::Dfp DfpField::computeExp(const ::org::hipparchus::dfp::Dfp & a0, const ::org::hipparchus::dfp::Dfp & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_computeExp_badefef06f0dff33], a0.this$, a1.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpField::computeLn(const ::org::hipparchus::dfp::Dfp & a0, const ::org::hipparchus::dfp::Dfp & a1, const ::org::hipparchus::dfp::Dfp & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_computeLn_ccc00cb9ce7ea30d], a0.this$, a1.this$, a2.this$));
      }

      jboolean DfpField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      ::org::hipparchus::dfp::Dfp DfpField::getDegToRad() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getDegToRad_dce9a968b1de6538]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getE() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getE_dce9a968b1de6538]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getESplit() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getESplit_107269c3c3a896e2]));
      }

      DfpField DfpField::getExtendedField(jint a0, jboolean a1) const
      {
        return DfpField(env->callObjectMethod(this$, mids$[mid_getExtendedField_49cc80964470be8f], a0, a1));
      }

      jint DfpField::getIEEEFlags() const
      {
        return env->callIntMethod(this$, mids$[mid_getIEEEFlags_412668abc8d889e9]);
      }

      ::org::hipparchus::dfp::Dfp DfpField::getLn10() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getLn10_dce9a968b1de6538]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getLn2() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getLn2_dce9a968b1de6538]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getLn2Split() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getLn2Split_107269c3c3a896e2]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getLn5() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getLn5_dce9a968b1de6538]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getLn5Split() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getLn5Split_107269c3c3a896e2]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getOne() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getOne_dce9a968b1de6538]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getPi() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getPi_dce9a968b1de6538]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getPiSplit() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getPiSplit_107269c3c3a896e2]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getRadToDeg() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getRadToDeg_dce9a968b1de6538]));
      }

      jint DfpField::getRadixDigits() const
      {
        return env->callIntMethod(this$, mids$[mid_getRadixDigits_412668abc8d889e9]);
      }

      ::org::hipparchus::dfp::DfpField$RoundingMode DfpField::getRoundingMode() const
      {
        return ::org::hipparchus::dfp::DfpField$RoundingMode(env->callObjectMethod(this$, mids$[mid_getRoundingMode_81c548bb52bf4b30]));
      }

      ::java::lang::Class DfpField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d4b191ff8147475d]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr2() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr2_dce9a968b1de6538]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr2Reciprocal() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr2Reciprocal_dce9a968b1de6538]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getSqr2Split() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getSqr2Split_107269c3c3a896e2]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr3() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr3_dce9a968b1de6538]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr3Reciprocal() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr3Reciprocal_dce9a968b1de6538]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getTwo() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getTwo_dce9a968b1de6538]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getZero() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getZero_dce9a968b1de6538]));
      }

      jint DfpField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_dce9a968b1de6538]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_4cf97baa750c9172], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(const ::org::hipparchus::dfp::Dfp & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_f081bcbf4bd8f1ad], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jbyte a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_e45f329aeeedfd27], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jdouble a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_48c0a79cfaaf4ea7], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jint a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_8418d0fac935c091], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jlong a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_521fd622f2a09126], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jbyte a0, jbyte a1) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_7b144e66c7452202], a0, a1));
      }

      void DfpField::setIEEEFlags(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setIEEEFlags_a3da1a935cb37f7b], a0);
      }

      void DfpField::setIEEEFlagsBits(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setIEEEFlagsBits_a3da1a935cb37f7b], a0);
      }

      void DfpField::setRoundingMode(const ::org::hipparchus::dfp::DfpField$RoundingMode & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setRoundingMode_e521e3e702ddc984], a0.this$);
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
      static PyObject *t_DfpField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpField_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DfpField_init_(t_DfpField *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DfpField_clearIEEEFlags(t_DfpField *self);
      static PyObject *t_DfpField_computeExp(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpField_computeLn(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpField_equals(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_getDegToRad(t_DfpField *self);
      static PyObject *t_DfpField_getE(t_DfpField *self);
      static PyObject *t_DfpField_getESplit(t_DfpField *self);
      static PyObject *t_DfpField_getExtendedField(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_getIEEEFlags(t_DfpField *self);
      static PyObject *t_DfpField_getLn10(t_DfpField *self);
      static PyObject *t_DfpField_getLn2(t_DfpField *self);
      static PyObject *t_DfpField_getLn2Split(t_DfpField *self);
      static PyObject *t_DfpField_getLn5(t_DfpField *self);
      static PyObject *t_DfpField_getLn5Split(t_DfpField *self);
      static PyObject *t_DfpField_getOne(t_DfpField *self);
      static PyObject *t_DfpField_getPi(t_DfpField *self);
      static PyObject *t_DfpField_getPiSplit(t_DfpField *self);
      static PyObject *t_DfpField_getRadToDeg(t_DfpField *self);
      static PyObject *t_DfpField_getRadixDigits(t_DfpField *self);
      static PyObject *t_DfpField_getRoundingMode(t_DfpField *self);
      static PyObject *t_DfpField_getRuntimeClass(t_DfpField *self);
      static PyObject *t_DfpField_getSqr2(t_DfpField *self);
      static PyObject *t_DfpField_getSqr2Reciprocal(t_DfpField *self);
      static PyObject *t_DfpField_getSqr2Split(t_DfpField *self);
      static PyObject *t_DfpField_getSqr3(t_DfpField *self);
      static PyObject *t_DfpField_getSqr3Reciprocal(t_DfpField *self);
      static PyObject *t_DfpField_getTwo(t_DfpField *self);
      static PyObject *t_DfpField_getZero(t_DfpField *self);
      static PyObject *t_DfpField_hashCode(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_newDfp(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_setIEEEFlags(t_DfpField *self, PyObject *arg);
      static PyObject *t_DfpField_setIEEEFlagsBits(t_DfpField *self, PyObject *arg);
      static PyObject *t_DfpField_setRoundingMode(t_DfpField *self, PyObject *arg);
      static PyObject *t_DfpField_get__degToRad(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__e(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__eSplit(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__iEEEFlags(t_DfpField *self, void *data);
      static int t_DfpField_set__iEEEFlags(t_DfpField *self, PyObject *arg, void *data);
      static int t_DfpField_set__iEEEFlagsBits(t_DfpField *self, PyObject *arg, void *data);
      static PyObject *t_DfpField_get__ln10(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln2(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln2Split(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln5(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln5Split(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__one(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__pi(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__piSplit(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__radToDeg(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__radixDigits(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__roundingMode(t_DfpField *self, void *data);
      static int t_DfpField_set__roundingMode(t_DfpField *self, PyObject *arg, void *data);
      static PyObject *t_DfpField_get__runtimeClass(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr2(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr2Reciprocal(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr2Split(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr3(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr3Reciprocal(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__two(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__zero(t_DfpField *self, void *data);
      static PyGetSetDef t_DfpField__fields_[] = {
        DECLARE_GET_FIELD(t_DfpField, degToRad),
        DECLARE_GET_FIELD(t_DfpField, e),
        DECLARE_GET_FIELD(t_DfpField, eSplit),
        DECLARE_GETSET_FIELD(t_DfpField, iEEEFlags),
        DECLARE_SET_FIELD(t_DfpField, iEEEFlagsBits),
        DECLARE_GET_FIELD(t_DfpField, ln10),
        DECLARE_GET_FIELD(t_DfpField, ln2),
        DECLARE_GET_FIELD(t_DfpField, ln2Split),
        DECLARE_GET_FIELD(t_DfpField, ln5),
        DECLARE_GET_FIELD(t_DfpField, ln5Split),
        DECLARE_GET_FIELD(t_DfpField, one),
        DECLARE_GET_FIELD(t_DfpField, pi),
        DECLARE_GET_FIELD(t_DfpField, piSplit),
        DECLARE_GET_FIELD(t_DfpField, radToDeg),
        DECLARE_GET_FIELD(t_DfpField, radixDigits),
        DECLARE_GETSET_FIELD(t_DfpField, roundingMode),
        DECLARE_GET_FIELD(t_DfpField, runtimeClass),
        DECLARE_GET_FIELD(t_DfpField, sqr2),
        DECLARE_GET_FIELD(t_DfpField, sqr2Reciprocal),
        DECLARE_GET_FIELD(t_DfpField, sqr2Split),
        DECLARE_GET_FIELD(t_DfpField, sqr3),
        DECLARE_GET_FIELD(t_DfpField, sqr3Reciprocal),
        DECLARE_GET_FIELD(t_DfpField, two),
        DECLARE_GET_FIELD(t_DfpField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DfpField__methods_[] = {
        DECLARE_METHOD(t_DfpField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField, clearIEEEFlags, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, computeExp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpField, computeLn, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpField, equals, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, getDegToRad, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getE, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getESplit, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getExtendedField, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, getIEEEFlags, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn10, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn2, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn2Split, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn5, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn5Split, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getPi, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getPiSplit, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRadToDeg, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRadixDigits, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRoundingMode, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr2, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr2Reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr2Split, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr3, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr3Reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getTwo, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, newDfp, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, setIEEEFlags, METH_O),
        DECLARE_METHOD(t_DfpField, setIEEEFlagsBits, METH_O),
        DECLARE_METHOD(t_DfpField, setRoundingMode, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpField)[] = {
        { Py_tp_methods, t_DfpField__methods_ },
        { Py_tp_init, (void *) t_DfpField_init_ },
        { Py_tp_getset, t_DfpField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DfpField, t_DfpField, DfpField);

      void t_DfpField::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpField), &PY_TYPE_DEF(DfpField), module, "DfpField", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "RoundingMode", make_descriptor(&PY_TYPE_DEF(DfpField$RoundingMode)));
      }

      void t_DfpField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "class_", make_descriptor(DfpField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "wrapfn_", make_descriptor(t_DfpField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "boxfn_", make_descriptor(boxObject));
        env->getClass(DfpField::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_DIV_ZERO", make_descriptor(DfpField::FLAG_DIV_ZERO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_INEXACT", make_descriptor(DfpField::FLAG_INEXACT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_INVALID", make_descriptor(DfpField::FLAG_INVALID));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_OVERFLOW", make_descriptor(DfpField::FLAG_OVERFLOW));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_UNDERFLOW", make_descriptor(DfpField::FLAG_UNDERFLOW));
      }

      static PyObject *t_DfpField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpField::initializeClass, 1)))
          return NULL;
        return t_DfpField::wrap_Object(DfpField(((t_DfpField *) arg)->object.this$));
      }
      static PyObject *t_DfpField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DfpField_init_(t_DfpField *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        DfpField object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = DfpField(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DfpField_clearIEEEFlags(t_DfpField *self)
      {
        OBJ_CALL(self->object.clearIEEEFlags());
        Py_RETURN_NONE;
      }

      static PyObject *t_DfpField_computeExp(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp a1((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpField::computeExp(a0, a1));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "computeExp", args);
        return NULL;
      }

      static PyObject *t_DfpField_computeLn(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp a1((jobject) NULL);
        ::org::hipparchus::dfp::Dfp a2((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpField::computeLn(a0, a1, a2));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "computeLn", args);
        return NULL;
      }

      static PyObject *t_DfpField_equals(t_DfpField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DfpField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_DfpField_getDegToRad(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getDegToRad());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getE(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getE());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getESplit(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getESplit());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getExtendedField(t_DfpField *self, PyObject *args)
      {
        jint a0;
        jboolean a1;
        DfpField result((jobject) NULL);

        if (!parseArgs(args, "IZ", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getExtendedField(a0, a1));
          return t_DfpField::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getExtendedField", args);
        return NULL;
      }

      static PyObject *t_DfpField_getIEEEFlags(t_DfpField *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIEEEFlags());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DfpField_getLn10(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn10());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getLn2(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getLn2Split(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn2Split());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getLn5(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn5());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getLn5Split(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn5Split());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getOne(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getPi(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getPiSplit(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPiSplit());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getRadToDeg(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getRadToDeg());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getRadixDigits(t_DfpField *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRadixDigits());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DfpField_getRoundingMode(t_DfpField *self)
      {
        ::org::hipparchus::dfp::DfpField$RoundingMode result((jobject) NULL);
        OBJ_CALL(result = self->object.getRoundingMode());
        return ::org::hipparchus::dfp::t_DfpField$RoundingMode::wrap_Object(result);
      }

      static PyObject *t_DfpField_getRuntimeClass(t_DfpField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::dfp::PY_TYPE(Dfp));
      }

      static PyObject *t_DfpField_getSqr2(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getSqr2Reciprocal(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr2Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getSqr2Split(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr2Split());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getSqr3(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr3());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getSqr3Reciprocal(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr3Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getTwo(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getTwo());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getZero(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_hashCode(t_DfpField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DfpField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_DfpField_newDfp(t_DfpField *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);
            OBJ_CALL(result = self->object.newDfp());
            return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "B", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jlong a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jbyte a0;
            jbyte a1;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "BB", &a0, &a1))
            {
              OBJ_CALL(result = self->object.newDfp(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "newDfp", args);
        return NULL;
      }

      static PyObject *t_DfpField_setIEEEFlags(t_DfpField *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setIEEEFlags(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setIEEEFlags", arg);
        return NULL;
      }

      static PyObject *t_DfpField_setIEEEFlagsBits(t_DfpField *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setIEEEFlagsBits(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setIEEEFlagsBits", arg);
        return NULL;
      }

      static PyObject *t_DfpField_setRoundingMode(t_DfpField *self, PyObject *arg)
      {
        ::org::hipparchus::dfp::DfpField$RoundingMode a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::dfp::DfpField$RoundingMode::initializeClass, &a0, &p0, ::org::hipparchus::dfp::t_DfpField$RoundingMode::parameters_))
        {
          OBJ_CALL(self->object.setRoundingMode(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRoundingMode", arg);
        return NULL;
      }

      static PyObject *t_DfpField_get__degToRad(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getDegToRad());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__e(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__eSplit(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getESplit());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__iEEEFlags(t_DfpField *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIEEEFlags());
        return PyLong_FromLong((long) value);
      }
      static int t_DfpField_set__iEEEFlags(t_DfpField *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setIEEEFlags(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "iEEEFlags", arg);
        return -1;
      }

      static int t_DfpField_set__iEEEFlagsBits(t_DfpField *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setIEEEFlagsBits(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "iEEEFlagsBits", arg);
        return -1;
      }

      static PyObject *t_DfpField_get__ln10(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn10());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__ln2(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__ln2Split(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn2Split());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__ln5(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn5());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__ln5Split(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn5Split());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__one(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__pi(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__piSplit(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPiSplit());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__radToDeg(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getRadToDeg());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__radixDigits(t_DfpField *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRadixDigits());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DfpField_get__roundingMode(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::DfpField$RoundingMode value((jobject) NULL);
        OBJ_CALL(value = self->object.getRoundingMode());
        return ::org::hipparchus::dfp::t_DfpField$RoundingMode::wrap_Object(value);
      }
      static int t_DfpField_set__roundingMode(t_DfpField *self, PyObject *arg, void *data)
      {
        {
          ::org::hipparchus::dfp::DfpField$RoundingMode value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::hipparchus::dfp::DfpField$RoundingMode::initializeClass, &value))
          {
            INT_CALL(self->object.setRoundingMode(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "roundingMode", arg);
        return -1;
      }

      static PyObject *t_DfpField_get__runtimeClass(t_DfpField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr2(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr2Reciprocal(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr2Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr2Split(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr2Split());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__sqr3(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr3());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr3Reciprocal(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr3Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__two(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getTwo());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__zero(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/ODEEventHandler.h"
#include "org/hipparchus/ode/ODEState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *ODEEventHandler::class$ = NULL;
        jmethodID *ODEEventHandler::mids$ = NULL;
        bool ODEEventHandler::live$ = false;

        jclass ODEEventHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/ODEEventHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_eventOccurred_fd726416cdd75217] = env->getMethodID(cls, "eventOccurred", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/events/ODEEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
            mids$[mid_init_7c627b13cc0bc863] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;DLorg/hipparchus/ode/events/ODEEventDetector;)V");
            mids$[mid_resetState_2597e34d70859cbd] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/events/ODEEventDetector;Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/ODEState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action ODEEventHandler::eventOccurred(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, const ::org::hipparchus::ode::events::ODEEventDetector & a1, jboolean a2) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_fd726416cdd75217], a0.this$, a1.this$, a2));
        }

        void ODEEventHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1, const ::org::hipparchus::ode::events::ODEEventDetector & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_7c627b13cc0bc863], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::ode::ODEState ODEEventHandler::resetState(const ::org::hipparchus::ode::events::ODEEventDetector & a0, const ::org::hipparchus::ode::ODEStateAndDerivative & a1) const
        {
          return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_resetState_2597e34d70859cbd], a0.this$, a1.this$));
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
        static PyObject *t_ODEEventHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEEventHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEEventHandler_eventOccurred(t_ODEEventHandler *self, PyObject *args);
        static PyObject *t_ODEEventHandler_init(t_ODEEventHandler *self, PyObject *args);
        static PyObject *t_ODEEventHandler_resetState(t_ODEEventHandler *self, PyObject *args);

        static PyMethodDef t_ODEEventHandler__methods_[] = {
          DECLARE_METHOD(t_ODEEventHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEEventHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEEventHandler, eventOccurred, METH_VARARGS),
          DECLARE_METHOD(t_ODEEventHandler, init, METH_VARARGS),
          DECLARE_METHOD(t_ODEEventHandler, resetState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEEventHandler)[] = {
          { Py_tp_methods, t_ODEEventHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEEventHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEEventHandler, t_ODEEventHandler, ODEEventHandler);

        void t_ODEEventHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEEventHandler), &PY_TYPE_DEF(ODEEventHandler), module, "ODEEventHandler", 0);
        }

        void t_ODEEventHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventHandler), "class_", make_descriptor(ODEEventHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventHandler), "wrapfn_", make_descriptor(t_ODEEventHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEEventHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEEventHandler::initializeClass, 1)))
            return NULL;
          return t_ODEEventHandler::wrap_Object(ODEEventHandler(((t_ODEEventHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEEventHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEEventHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEEventHandler_eventOccurred(t_ODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::events::ODEEventDetector a1((jobject) NULL);
          jboolean a2;
          ::org::hipparchus::ode::events::Action result((jobject) NULL);

          if (!parseArgs(args, "kkZ", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
            return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
          return NULL;
        }

        static PyObject *t_ODEEventHandler_init(t_ODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::ode::events::ODEEventDetector a2((jobject) NULL);

          if (!parseArgs(args, "kDk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_ODEEventHandler_resetState(t_ODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);
          ::org::hipparchus::ode::ODEStateAndDerivative a1((jobject) NULL);
          ::org::hipparchus::ode::ODEState result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.resetState(a0, a1));
            return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "resetState", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ocm.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmSatelliteEphemeris.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmData.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
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
            namespace ocm {

              ::java::lang::Class *Ocm::class$ = NULL;
              jmethodID *Ocm::mids$ = NULL;
              bool Ocm::live$ = false;
              ::java::lang::String *Ocm::COV_LINE = NULL;
              ::java::lang::String *Ocm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Ocm::MAN_LINE = NULL;
              ::java::lang::String *Ocm::ROOT = NULL;
              ::java::lang::String *Ocm::TRAJ_LINE = NULL;
              ::java::lang::String *Ocm::UNKNOWN_OBJECT = NULL;

              jclass Ocm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/Ocm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_66443a7cc3b43b5d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;D)V");
                  mids$[mid_getData_85563dc69f3f76d9] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmData;");
                  mids$[mid_getMetadata_a54c90733aadb491] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;");
                  mids$[mid_getSatellites_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COV_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "COV_LINE", "Ljava/lang/String;"));
                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  MAN_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "MAN_LINE", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  TRAJ_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "TRAJ_LINE", "Ljava/lang/String;"));
                  UNKNOWN_OBJECT = new ::java::lang::String(env->getStaticObjectField(cls, "UNKNOWN_OBJECT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Ocm::Ocm(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3, jdouble a4) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_66443a7cc3b43b5d, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData Ocm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData(env->callObjectMethod(this$, mids$[mid_getData_85563dc69f3f76d9]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata Ocm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_a54c90733aadb491]));
              }

              ::java::util::Map Ocm::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_1e62c2f73fbdd1c4]));
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
              static PyObject *t_Ocm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ocm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ocm_of_(t_Ocm *self, PyObject *args);
              static int t_Ocm_init_(t_Ocm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Ocm_getData(t_Ocm *self);
              static PyObject *t_Ocm_getMetadata(t_Ocm *self);
              static PyObject *t_Ocm_getSatellites(t_Ocm *self);
              static PyObject *t_Ocm_get__data(t_Ocm *self, void *data);
              static PyObject *t_Ocm_get__metadata(t_Ocm *self, void *data);
              static PyObject *t_Ocm_get__satellites(t_Ocm *self, void *data);
              static PyObject *t_Ocm_get__parameters_(t_Ocm *self, void *data);
              static PyGetSetDef t_Ocm__fields_[] = {
                DECLARE_GET_FIELD(t_Ocm, data),
                DECLARE_GET_FIELD(t_Ocm, metadata),
                DECLARE_GET_FIELD(t_Ocm, satellites),
                DECLARE_GET_FIELD(t_Ocm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Ocm__methods_[] = {
                DECLARE_METHOD(t_Ocm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ocm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ocm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Ocm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Ocm, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_Ocm, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Ocm)[] = {
                { Py_tp_methods, t_Ocm__methods_ },
                { Py_tp_init, (void *) t_Ocm_init_ },
                { Py_tp_getset, t_Ocm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Ocm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Ocm, t_Ocm, Ocm);
              PyObject *t_Ocm::wrap_Object(const Ocm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Ocm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ocm *self = (t_Ocm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Ocm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Ocm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ocm *self = (t_Ocm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Ocm::install(PyObject *module)
              {
                installType(&PY_TYPE(Ocm), &PY_TYPE_DEF(Ocm), module, "Ocm", 0);
              }

              void t_Ocm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "class_", make_descriptor(Ocm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "wrapfn_", make_descriptor(t_Ocm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Ocm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "COV_LINE", make_descriptor(j2p(*Ocm::COV_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Ocm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "MAN_LINE", make_descriptor(j2p(*Ocm::MAN_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "ROOT", make_descriptor(j2p(*Ocm::ROOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "TRAJ_LINE", make_descriptor(j2p(*Ocm::TRAJ_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "UNKNOWN_OBJECT", make_descriptor(j2p(*Ocm::UNKNOWN_OBJECT)));
              }

              static PyObject *t_Ocm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Ocm::initializeClass, 1)))
                  return NULL;
                return t_Ocm::wrap_Object(Ocm(((t_Ocm *) arg)->object.this$));
              }
              static PyObject *t_Ocm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Ocm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Ocm_of_(t_Ocm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Ocm_init_(t_Ocm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                jdouble a4;
                Ocm object((jobject) NULL);

                if (!parseArgs(args, "kKKkD", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
                {
                  INT_CALL(object = Ocm(a0, a1, a2, a3, a4));
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

              static PyObject *t_Ocm_getData(t_Ocm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmData::wrap_Object(result);
              }

              static PyObject *t_Ocm_getMetadata(t_Ocm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmMetadata::wrap_Object(result);
              }

              static PyObject *t_Ocm_getSatellites(t_Ocm *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OcmSatelliteEphemeris));
              }
              static PyObject *t_Ocm_get__parameters_(t_Ocm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Ocm_get__data(t_Ocm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmData::wrap_Object(value);
              }

              static PyObject *t_Ocm_get__metadata(t_Ocm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmMetadata::wrap_Object(value);
              }

              static PyObject *t_Ocm_get__satellites(t_Ocm *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/orekit/files/ccsds/ndm/adm/PythonAdmParser.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *PythonAdmParser::class$ = NULL;
            jmethodID *PythonAdmParser::mids$ = NULL;
            bool PythonAdmParser::live$ = false;

            jclass PythonAdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/PythonAdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_303f51e33561a967] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_finalizeData_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_880defc2f8f9f844] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                mids$[mid_inData_89b302893bdbe1f1] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_89b302893bdbe1f1] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_89b302893bdbe1f1] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_89b302893bdbe1f1] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_a580586827f4ec13] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonAdmParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonAdmParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonAdmParser::pythonExtension(jlong a0) const
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
        namespace ndm {
          namespace adm {
            static PyObject *t_PythonAdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAdmParser_of_(t_PythonAdmParser *self, PyObject *args);
            static PyObject *t_PythonAdmParser_finalize(t_PythonAdmParser *self);
            static PyObject *t_PythonAdmParser_pythonExtension(t_PythonAdmParser *self, PyObject *args);
            static jobject JNICALL t_PythonAdmParser_build0(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_finalizeData1(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_finalizeHeader2(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonAdmParser_getHeader4(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_inData5(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_inHeader6(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_inMetadata7(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_prepareData8(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_prepareHeader9(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonAdmParser_prepareMetadata10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAdmParser_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonAdmParser_get__self(t_PythonAdmParser *self, void *data);
            static PyObject *t_PythonAdmParser_get__parameters_(t_PythonAdmParser *self, void *data);
            static PyGetSetDef t_PythonAdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAdmParser, self),
              DECLARE_GET_FIELD(t_PythonAdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAdmParser__methods_[] = {
              DECLARE_METHOD(t_PythonAdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAdmParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAdmParser, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAdmParser)[] = {
              { Py_tp_methods, t_PythonAdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_PythonAdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
              NULL
            };

            DEFINE_TYPE(PythonAdmParser, t_PythonAdmParser, PythonAdmParser);
            PyObject *t_PythonAdmParser::wrap_Object(const PythonAdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonAdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAdmParser *self = (t_PythonAdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_PythonAdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonAdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAdmParser *self = (t_PythonAdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_PythonAdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAdmParser), &PY_TYPE_DEF(PythonAdmParser), module, "PythonAdmParser", 1);
            }

            void t_PythonAdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdmParser), "class_", make_descriptor(PythonAdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdmParser), "wrapfn_", make_descriptor(t_PythonAdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdmParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAdmParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;", (void *) t_PythonAdmParser_build0 },
                { "finalizeData", "()Z", (void *) t_PythonAdmParser_finalizeData1 },
                { "finalizeHeader", "()Z", (void *) t_PythonAdmParser_finalizeHeader2 },
                { "finalizeMetadata", "()Z", (void *) t_PythonAdmParser_finalizeMetadata3 },
                { "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;", (void *) t_PythonAdmParser_getHeader4 },
                { "inData", "()Z", (void *) t_PythonAdmParser_inData5 },
                { "inHeader", "()Z", (void *) t_PythonAdmParser_inHeader6 },
                { "inMetadata", "()Z", (void *) t_PythonAdmParser_inMetadata7 },
                { "prepareData", "()Z", (void *) t_PythonAdmParser_prepareData8 },
                { "prepareHeader", "()Z", (void *) t_PythonAdmParser_prepareHeader9 },
                { "prepareMetadata", "()Z", (void *) t_PythonAdmParser_prepareMetadata10 },
                { "pythonDecRef", "()V", (void *) t_PythonAdmParser_pythonDecRef11 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonAdmParser_reset12 },
              };
              env->registerNatives(cls, methods, 13);
            }

            static PyObject *t_PythonAdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAdmParser::initializeClass, 1)))
                return NULL;
              return t_PythonAdmParser::wrap_Object(PythonAdmParser(((t_PythonAdmParser *) arg)->object.this$));
            }
            static PyObject *t_PythonAdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAdmParser_of_(t_PythonAdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_PythonAdmParser_finalize(t_PythonAdmParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAdmParser_pythonExtension(t_PythonAdmParser *self, PyObject *args)
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

            static jobject JNICALL t_PythonAdmParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::NdmConstituent value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &value))
              {
                throwTypeError("build", result);
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

            static jboolean JNICALL t_PythonAdmParser_finalizeData1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_finalizeHeader2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jobject JNICALL t_PythonAdmParser_getHeader4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, &value))
              {
                throwTypeError("getHeader", result);
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

            static jboolean JNICALL t_PythonAdmParser_inData5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_inHeader6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_inMetadata7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_prepareData8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_prepareHeader9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonAdmParser_prepareMetadata10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static void JNICALL t_PythonAdmParser_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAdmParser::mids$[PythonAdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(::org::orekit::files::ccsds::utils::FileFormat(a0));
              PyObject *result = PyObject_CallMethod(obj, "reset", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAdmParser_get__self(t_PythonAdmParser *self, void *data)
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
            static PyObject *t_PythonAdmParser_get__parameters_(t_PythonAdmParser *self, void *data)
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
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFileWriter::class$ = NULL;
        jmethodID *EphemerisFileWriter::mids$ = NULL;
        bool EphemerisFileWriter::live$ = false;

        jclass EphemerisFileWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFileWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_write_507409137616ad7b] = env->getMethodID(cls, "write", "(Ljava/lang/String;Lorg/orekit/files/general/EphemerisFile;)V");
            mids$[mid_write_0fa910eb9c2e844e] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void EphemerisFileWriter::write(const ::java::lang::String & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_507409137616ad7b], a0.this$, a1.this$);
        }

        void EphemerisFileWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_0fa910eb9c2e844e], a0.this$, a1.this$);
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
        static PyObject *t_EphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFileWriter_write(t_EphemerisFileWriter *self, PyObject *args);

        static PyMethodDef t_EphemerisFileWriter__methods_[] = {
          DECLARE_METHOD(t_EphemerisFileWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFileWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFileWriter)[] = {
          { Py_tp_methods, t_EphemerisFileWriter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFileWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFileWriter, t_EphemerisFileWriter, EphemerisFileWriter);

        void t_EphemerisFileWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFileWriter), &PY_TYPE_DEF(EphemerisFileWriter), module, "EphemerisFileWriter", 0);
        }

        void t_EphemerisFileWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileWriter), "class_", make_descriptor(EphemerisFileWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileWriter), "wrapfn_", make_descriptor(t_EphemerisFileWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFileWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFileWriter::initializeClass, 1)))
            return NULL;
          return t_EphemerisFileWriter::wrap_Object(EphemerisFileWriter(((t_EphemerisFileWriter *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFileWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFileWriter_write(t_EphemerisFileWriter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "sK", ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
              {
                OBJ_CALL(self->object.write(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
              {
                OBJ_CALL(self->object.write(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "write", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/GlobalMappingFunctionModel.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *GlobalMappingFunctionModel::class$ = NULL;
          jmethodID *GlobalMappingFunctionModel::mids$ = NULL;
          bool GlobalMappingFunctionModel::live$ = false;

          jclass GlobalMappingFunctionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/GlobalMappingFunctionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_3e3301925c0131d4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
              mids$[mid_mappingFactors_964dc353437b5da2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_mappingFactors_e6ce6b157ff98280] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalMappingFunctionModel::GlobalMappingFunctionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          GlobalMappingFunctionModel::GlobalMappingFunctionModel(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e3301925c0131d4, a0.this$)) {}

          JArray< jdouble > GlobalMappingFunctionModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_964dc353437b5da2], a0, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > GlobalMappingFunctionModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_e6ce6b157ff98280], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_GlobalMappingFunctionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlobalMappingFunctionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlobalMappingFunctionModel_init_(t_GlobalMappingFunctionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlobalMappingFunctionModel_mappingFactors(t_GlobalMappingFunctionModel *self, PyObject *args);

          static PyMethodDef t_GlobalMappingFunctionModel__methods_[] = {
            DECLARE_METHOD(t_GlobalMappingFunctionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalMappingFunctionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalMappingFunctionModel, mappingFactors, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlobalMappingFunctionModel)[] = {
            { Py_tp_methods, t_GlobalMappingFunctionModel__methods_ },
            { Py_tp_init, (void *) t_GlobalMappingFunctionModel_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlobalMappingFunctionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlobalMappingFunctionModel, t_GlobalMappingFunctionModel, GlobalMappingFunctionModel);

          void t_GlobalMappingFunctionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlobalMappingFunctionModel), &PY_TYPE_DEF(GlobalMappingFunctionModel), module, "GlobalMappingFunctionModel", 0);
          }

          void t_GlobalMappingFunctionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalMappingFunctionModel), "class_", make_descriptor(GlobalMappingFunctionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalMappingFunctionModel), "wrapfn_", make_descriptor(t_GlobalMappingFunctionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalMappingFunctionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlobalMappingFunctionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlobalMappingFunctionModel::initializeClass, 1)))
              return NULL;
            return t_GlobalMappingFunctionModel::wrap_Object(GlobalMappingFunctionModel(((t_GlobalMappingFunctionModel *) arg)->object.this$));
          }
          static PyObject *t_GlobalMappingFunctionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlobalMappingFunctionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlobalMappingFunctionModel_init_(t_GlobalMappingFunctionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                GlobalMappingFunctionModel object((jobject) NULL);

                INT_CALL(object = GlobalMappingFunctionModel());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                GlobalMappingFunctionModel object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
                {
                  INT_CALL(object = GlobalMappingFunctionModel(a0));
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

          static PyObject *t_GlobalMappingFunctionModel_mappingFactors(t_GlobalMappingFunctionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
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
#include "org/hipparchus/util/JulierUnscentedTransform.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *JulierUnscentedTransform::class$ = NULL;
      jmethodID *JulierUnscentedTransform::mids$ = NULL;
      bool JulierUnscentedTransform::live$ = false;
      jdouble JulierUnscentedTransform::DEFAULT_KAPPA = (jdouble) 0;

      jclass JulierUnscentedTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/JulierUnscentedTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_getWc_75d50d73180655b4] = env->getMethodID(cls, "getWc", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getWm_75d50d73180655b4] = env->getMethodID(cls, "getWm", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getMultiplicationFactor_557b8123390d8d0c] = env->getMethodID(cls, "getMultiplicationFactor", "()D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_KAPPA = env->getStaticDoubleField(cls, "DEFAULT_KAPPA");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JulierUnscentedTransform::JulierUnscentedTransform(jint a0) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      JulierUnscentedTransform::JulierUnscentedTransform(jint a0, jdouble a1) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

      ::org::hipparchus::linear::RealVector JulierUnscentedTransform::getWc() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWc_75d50d73180655b4]));
      }

      ::org::hipparchus::linear::RealVector JulierUnscentedTransform::getWm() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWm_75d50d73180655b4]));
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
      static PyObject *t_JulierUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JulierUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JulierUnscentedTransform_init_(t_JulierUnscentedTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JulierUnscentedTransform_getWc(t_JulierUnscentedTransform *self, PyObject *args);
      static PyObject *t_JulierUnscentedTransform_getWm(t_JulierUnscentedTransform *self, PyObject *args);
      static PyObject *t_JulierUnscentedTransform_get__wc(t_JulierUnscentedTransform *self, void *data);
      static PyObject *t_JulierUnscentedTransform_get__wm(t_JulierUnscentedTransform *self, void *data);
      static PyGetSetDef t_JulierUnscentedTransform__fields_[] = {
        DECLARE_GET_FIELD(t_JulierUnscentedTransform, wc),
        DECLARE_GET_FIELD(t_JulierUnscentedTransform, wm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JulierUnscentedTransform__methods_[] = {
        DECLARE_METHOD(t_JulierUnscentedTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JulierUnscentedTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JulierUnscentedTransform, getWc, METH_VARARGS),
        DECLARE_METHOD(t_JulierUnscentedTransform, getWm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JulierUnscentedTransform)[] = {
        { Py_tp_methods, t_JulierUnscentedTransform__methods_ },
        { Py_tp_init, (void *) t_JulierUnscentedTransform_init_ },
        { Py_tp_getset, t_JulierUnscentedTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JulierUnscentedTransform)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::AbstractUnscentedTransform),
        NULL
      };

      DEFINE_TYPE(JulierUnscentedTransform, t_JulierUnscentedTransform, JulierUnscentedTransform);

      void t_JulierUnscentedTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(JulierUnscentedTransform), &PY_TYPE_DEF(JulierUnscentedTransform), module, "JulierUnscentedTransform", 0);
      }

      void t_JulierUnscentedTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "class_", make_descriptor(JulierUnscentedTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "wrapfn_", make_descriptor(t_JulierUnscentedTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "boxfn_", make_descriptor(boxObject));
        env->getClass(JulierUnscentedTransform::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JulierUnscentedTransform), "DEFAULT_KAPPA", make_descriptor(JulierUnscentedTransform::DEFAULT_KAPPA));
      }

      static PyObject *t_JulierUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JulierUnscentedTransform::initializeClass, 1)))
          return NULL;
        return t_JulierUnscentedTransform::wrap_Object(JulierUnscentedTransform(((t_JulierUnscentedTransform *) arg)->object.this$));
      }
      static PyObject *t_JulierUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JulierUnscentedTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JulierUnscentedTransform_init_(t_JulierUnscentedTransform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            JulierUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = JulierUnscentedTransform(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            JulierUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = JulierUnscentedTransform(a0, a1));
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

      static PyObject *t_JulierUnscentedTransform_getWc(t_JulierUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWc());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(JulierUnscentedTransform), (PyObject *) self, "getWc", args, 2);
      }

      static PyObject *t_JulierUnscentedTransform_getWm(t_JulierUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWm());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(JulierUnscentedTransform), (PyObject *) self, "getWm", args, 2);
      }

      static PyObject *t_JulierUnscentedTransform_get__wc(t_JulierUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_JulierUnscentedTransform_get__wm(t_JulierUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/Circle.h"
#include "org/hipparchus/geometry/spherical/twod/Circle.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/twod/SubCircle.h"
#include "org/hipparchus/geometry/spherical/oned/Arc.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Circle::class$ = NULL;
          jmethodID *Circle::mids$ = NULL;
          bool Circle::live$ = false;

          jclass Circle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Circle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9eca765a47180abb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_5165c9de32b0b6c3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;Lorg/hipparchus/geometry/spherical/twod/S2Point;D)V");
              mids$[mid_copySelf_7e98cfa0ffbe686f] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/spherical/twod/Circle;");
              mids$[mid_emptyHyperplane_4fb9d52e7fabd495] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/spherical/twod/SubCircle;");
              mids$[mid_getArc_d13d3178730452a4] = env->getMethodID(cls, "getArc", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;Lorg/hipparchus/geometry/spherical/twod/S2Point;)Lorg/hipparchus/geometry/spherical/oned/Arc;");
              mids$[mid_getInsideArc_4f98746edcafa482] = env->getMethodID(cls, "getInsideArc", "(Lorg/hipparchus/geometry/spherical/twod/Circle;)Lorg/hipparchus/geometry/spherical/oned/Arc;");
              mids$[mid_getOffset_8ddca7bd73e586da] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getOffset_cf1fec2b7b1c0efe] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getPhase_8ddca7bd73e586da] = env->getMethodID(cls, "getPhase", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getPointAt_20de5f9d51c6611f] = env->getMethodID(cls, "getPointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getPole_f88961cca75a2c0a] = env->getMethodID(cls, "getPole", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getReverse_7e98cfa0ffbe686f] = env->getMethodID(cls, "getReverse", "()Lorg/hipparchus/geometry/spherical/twod/Circle;");
              mids$[mid_getTolerance_557b8123390d8d0c] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_getTransform_305a4b8e889a5931] = env->getStaticMethodID(cls, "getTransform", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/partitioning/Transform;");
              mids$[mid_getXAxis_f88961cca75a2c0a] = env->getMethodID(cls, "getXAxis", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getYAxis_f88961cca75a2c0a] = env->getMethodID(cls, "getYAxis", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_project_328d0d966eeb9668] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_reset_2810d2bec90e7b1c] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_revertSelf_0640e6acf969ed28] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_sameOrientationAs_cb9274a363000a77] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_toSpace_0b4724b8dcaf44dc] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_toSubSpace_f56955fdd71721f4] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/spherical/oned/S1Point;");
              mids$[mid_wholeHyperplane_4fb9d52e7fabd495] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/spherical/twod/SubCircle;");
              mids$[mid_wholeSpace_1223d06efa3ccad7] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Circle::Circle(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9eca765a47180abb, a0.this$, a1)) {}

          Circle::Circle(const ::org::hipparchus::geometry::spherical::twod::S2Point & a0, const ::org::hipparchus::geometry::spherical::twod::S2Point & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5165c9de32b0b6c3, a0.this$, a1.this$, a2)) {}

          Circle Circle::copySelf() const
          {
            return Circle(env->callObjectMethod(this$, mids$[mid_copySelf_7e98cfa0ffbe686f]));
          }

          ::org::hipparchus::geometry::spherical::twod::SubCircle Circle::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::twod::SubCircle(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_4fb9d52e7fabd495]));
          }

          ::org::hipparchus::geometry::spherical::oned::Arc Circle::getArc(const ::org::hipparchus::geometry::spherical::twod::S2Point & a0, const ::org::hipparchus::geometry::spherical::twod::S2Point & a1) const
          {
            return ::org::hipparchus::geometry::spherical::oned::Arc(env->callObjectMethod(this$, mids$[mid_getArc_d13d3178730452a4], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::spherical::oned::Arc Circle::getInsideArc(const Circle & a0) const
          {
            return ::org::hipparchus::geometry::spherical::oned::Arc(env->callObjectMethod(this$, mids$[mid_getInsideArc_4f98746edcafa482], a0.this$));
          }

          jdouble Circle::getOffset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_8ddca7bd73e586da], a0.this$);
          }

          jdouble Circle::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_cf1fec2b7b1c0efe], a0.this$);
          }

          jdouble Circle::getPhase(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhase_8ddca7bd73e586da], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getPointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPointAt_20de5f9d51c6611f], a0));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getPole() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPole_f88961cca75a2c0a]));
          }

          Circle Circle::getReverse() const
          {
            return Circle(env->callObjectMethod(this$, mids$[mid_getReverse_7e98cfa0ffbe686f]));
          }

          jdouble Circle::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_557b8123390d8d0c]);
          }

          ::org::hipparchus::geometry::partitioning::Transform Circle::getTransform(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::partitioning::Transform(env->callStaticObjectMethod(cls, mids$[mid_getTransform_305a4b8e889a5931], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getXAxis() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getXAxis_f88961cca75a2c0a]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getYAxis() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getYAxis_f88961cca75a2c0a]));
          }

          ::org::hipparchus::geometry::Point Circle::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_328d0d966eeb9668], a0.this$));
          }

          void Circle::reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_2810d2bec90e7b1c], a0.this$);
          }

          void Circle::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_0640e6acf969ed28]);
          }

          jboolean Circle::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_cb9274a363000a77], a0.this$);
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Circle::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_toSpace_0b4724b8dcaf44dc], a0.this$));
          }

          ::org::hipparchus::geometry::spherical::oned::S1Point Circle::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::spherical::oned::S1Point(env->callObjectMethod(this$, mids$[mid_toSubSpace_f56955fdd71721f4], a0.this$));
          }

          ::org::hipparchus::geometry::spherical::twod::SubCircle Circle::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::twod::SubCircle(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_4fb9d52e7fabd495]));
          }

          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet Circle::wholeSpace() const
          {
            return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_1223d06efa3ccad7]));
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
          static PyObject *t_Circle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Circle_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Circle_init_(t_Circle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Circle_copySelf(t_Circle *self);
          static PyObject *t_Circle_emptyHyperplane(t_Circle *self);
          static PyObject *t_Circle_getArc(t_Circle *self, PyObject *args);
          static PyObject *t_Circle_getInsideArc(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_getOffset(t_Circle *self, PyObject *args);
          static PyObject *t_Circle_getPhase(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_getPointAt(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_getPole(t_Circle *self);
          static PyObject *t_Circle_getReverse(t_Circle *self);
          static PyObject *t_Circle_getTolerance(t_Circle *self);
          static PyObject *t_Circle_getTransform(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Circle_getXAxis(t_Circle *self);
          static PyObject *t_Circle_getYAxis(t_Circle *self);
          static PyObject *t_Circle_project(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_reset(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_revertSelf(t_Circle *self);
          static PyObject *t_Circle_sameOrientationAs(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_toSpace(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_toSubSpace(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_wholeHyperplane(t_Circle *self);
          static PyObject *t_Circle_wholeSpace(t_Circle *self);
          static PyObject *t_Circle_get__pole(t_Circle *self, void *data);
          static PyObject *t_Circle_get__reverse(t_Circle *self, void *data);
          static PyObject *t_Circle_get__tolerance(t_Circle *self, void *data);
          static PyObject *t_Circle_get__xAxis(t_Circle *self, void *data);
          static PyObject *t_Circle_get__yAxis(t_Circle *self, void *data);
          static PyGetSetDef t_Circle__fields_[] = {
            DECLARE_GET_FIELD(t_Circle, pole),
            DECLARE_GET_FIELD(t_Circle, reverse),
            DECLARE_GET_FIELD(t_Circle, tolerance),
            DECLARE_GET_FIELD(t_Circle, xAxis),
            DECLARE_GET_FIELD(t_Circle, yAxis),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Circle__methods_[] = {
            DECLARE_METHOD(t_Circle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Circle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Circle, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_Circle, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getArc, METH_VARARGS),
            DECLARE_METHOD(t_Circle, getInsideArc, METH_O),
            DECLARE_METHOD(t_Circle, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Circle, getPhase, METH_O),
            DECLARE_METHOD(t_Circle, getPointAt, METH_O),
            DECLARE_METHOD(t_Circle, getPole, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getReverse, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getTransform, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Circle, getXAxis, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getYAxis, METH_NOARGS),
            DECLARE_METHOD(t_Circle, project, METH_O),
            DECLARE_METHOD(t_Circle, reset, METH_O),
            DECLARE_METHOD(t_Circle, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_Circle, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_Circle, toSpace, METH_O),
            DECLARE_METHOD(t_Circle, toSubSpace, METH_O),
            DECLARE_METHOD(t_Circle, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Circle, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Circle)[] = {
            { Py_tp_methods, t_Circle__methods_ },
            { Py_tp_init, (void *) t_Circle_init_ },
            { Py_tp_getset, t_Circle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Circle)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Circle, t_Circle, Circle);

          void t_Circle::install(PyObject *module)
          {
            installType(&PY_TYPE(Circle), &PY_TYPE_DEF(Circle), module, "Circle", 0);
          }

          void t_Circle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Circle), "class_", make_descriptor(Circle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Circle), "wrapfn_", make_descriptor(t_Circle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Circle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Circle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Circle::initializeClass, 1)))
              return NULL;
            return t_Circle::wrap_Object(Circle(((t_Circle *) arg)->object.this$));
          }
          static PyObject *t_Circle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Circle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Circle_init_(t_Circle *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                Circle object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Circle(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::spherical::twod::S2Point a0((jobject) NULL);
                ::org::hipparchus::geometry::spherical::twod::S2Point a1((jobject) NULL);
                jdouble a2;
                Circle object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Circle(a0, a1, a2));
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

          static PyObject *t_Circle_copySelf(t_Circle *self)
          {
            Circle result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_Circle::wrap_Object(result);
          }

          static PyObject *t_Circle_emptyHyperplane(t_Circle *self)
          {
            ::org::hipparchus::geometry::spherical::twod::SubCircle result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::spherical::twod::t_SubCircle::wrap_Object(result);
          }

          static PyObject *t_Circle_getArc(t_Circle *self, PyObject *args)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point a0((jobject) NULL);
            ::org::hipparchus::geometry::spherical::twod::S2Point a1((jobject) NULL);
            ::org::hipparchus::geometry::spherical::oned::Arc result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getArc(a0, a1));
              return ::org::hipparchus::geometry::spherical::oned::t_Arc::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getArc", args);
            return NULL;
          }

          static PyObject *t_Circle_getInsideArc(t_Circle *self, PyObject *arg)
          {
            Circle a0((jobject) NULL);
            ::org::hipparchus::geometry::spherical::oned::Arc result((jobject) NULL);

            if (!parseArg(arg, "k", Circle::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getInsideArc(a0));
              return ::org::hipparchus::geometry::spherical::oned::t_Arc::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInsideArc", arg);
            return NULL;
          }

          static PyObject *t_Circle_getOffset(t_Circle *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Circle_getPhase(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPhase(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPhase", arg);
            return NULL;
          }

          static PyObject *t_Circle_getPointAt(t_Circle *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.getPointAt(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPointAt", arg);
            return NULL;
          }

          static PyObject *t_Circle_getPole(t_Circle *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPole());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Circle_getReverse(t_Circle *self)
          {
            Circle result((jobject) NULL);
            OBJ_CALL(result = self->object.getReverse());
            return t_Circle::wrap_Object(result);
          }

          static PyObject *t_Circle_getTolerance(t_Circle *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Circle_getTransform(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::partitioning::Transform result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::spherical::twod::Circle::getTransform(a0));
              return ::org::hipparchus::geometry::partitioning::t_Transform::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D), ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D));
            }

            PyErr_SetArgsError(type, "getTransform", arg);
            return NULL;
          }

          static PyObject *t_Circle_getXAxis(t_Circle *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getXAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Circle_getYAxis(t_Circle *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getYAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Circle_project(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_Circle_reset(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.reset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "reset", arg);
            return NULL;
          }

          static PyObject *t_Circle_revertSelf(t_Circle *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_Circle_sameOrientationAs(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_Circle_toSpace(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::spherical::twod::S2Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.toSpace(a0));
              return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", arg);
            return NULL;
          }

          static PyObject *t_Circle_toSubSpace(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::spherical::oned::S1Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.toSubSpace(a0));
              return ::org::hipparchus::geometry::spherical::oned::t_S1Point::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", arg);
            return NULL;
          }

          static PyObject *t_Circle_wholeHyperplane(t_Circle *self)
          {
            ::org::hipparchus::geometry::spherical::twod::SubCircle result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::spherical::twod::t_SubCircle::wrap_Object(result);
          }

          static PyObject *t_Circle_wholeSpace(t_Circle *self)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
          }

          static PyObject *t_Circle_get__pole(t_Circle *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getPole());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Circle_get__reverse(t_Circle *self, void *data)
          {
            Circle value((jobject) NULL);
            OBJ_CALL(value = self->object.getReverse());
            return t_Circle::wrap_Object(value);
          }

          static PyObject *t_Circle_get__tolerance(t_Circle *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Circle_get__xAxis(t_Circle *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getXAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Circle_get__yAxis(t_Circle *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getYAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LocalMagneticFieldFrame.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LocalMagneticFieldFrame::class$ = NULL;
      jmethodID *LocalMagneticFieldFrame::mids$ = NULL;
      bool LocalMagneticFieldFrame::live$ = false;

      jclass LocalMagneticFieldFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LocalMagneticFieldFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_61dfbe8afb534db1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/models/earth/GeoMagneticField;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_81aa3b2ad79095bc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/models/earth/GeoMagneticField;Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getInertialFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getMagneticField_2d6050bd3aec87f1] = env->getMethodID(cls, "getMagneticField", "()Lorg/orekit/models/earth/GeoMagneticField;");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_rotationFromInertial_9b71bf39454b4a07] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_1022f468fb3d1015] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LocalMagneticFieldFrame::LocalMagneticFieldFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::models::earth::GeoMagneticField & a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_61dfbe8afb534db1, a0.this$, a1.this$, a2.this$)) {}

      LocalMagneticFieldFrame::LocalMagneticFieldFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::models::earth::GeoMagneticField & a1, const ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector & a2, const ::org::orekit::frames::Frame & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_81aa3b2ad79095bc, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::orekit::frames::Frame LocalMagneticFieldFrame::getInertialFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_6c9bc0a928c56d4e]));
      }

      ::org::orekit::models::earth::GeoMagneticField LocalMagneticFieldFrame::getMagneticField() const
      {
        return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getMagneticField_2d6050bd3aec87f1]));
      }

      ::java::lang::String LocalMagneticFieldFrame::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LocalMagneticFieldFrame::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_9b71bf39454b4a07], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LocalMagneticFieldFrame::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_1022f468fb3d1015], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_LocalMagneticFieldFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalMagneticFieldFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LocalMagneticFieldFrame_init_(t_LocalMagneticFieldFrame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LocalMagneticFieldFrame_getInertialFrame(t_LocalMagneticFieldFrame *self);
      static PyObject *t_LocalMagneticFieldFrame_getMagneticField(t_LocalMagneticFieldFrame *self);
      static PyObject *t_LocalMagneticFieldFrame_getName(t_LocalMagneticFieldFrame *self);
      static PyObject *t_LocalMagneticFieldFrame_rotationFromInertial(t_LocalMagneticFieldFrame *self, PyObject *args);
      static PyObject *t_LocalMagneticFieldFrame_get__inertialFrame(t_LocalMagneticFieldFrame *self, void *data);
      static PyObject *t_LocalMagneticFieldFrame_get__magneticField(t_LocalMagneticFieldFrame *self, void *data);
      static PyObject *t_LocalMagneticFieldFrame_get__name(t_LocalMagneticFieldFrame *self, void *data);
      static PyGetSetDef t_LocalMagneticFieldFrame__fields_[] = {
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame, inertialFrame),
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame, magneticField),
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalMagneticFieldFrame__methods_[] = {
        DECLARE_METHOD(t_LocalMagneticFieldFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, getInertialFrame, METH_NOARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, getMagneticField, METH_NOARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, getName, METH_NOARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame, rotationFromInertial, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalMagneticFieldFrame)[] = {
        { Py_tp_methods, t_LocalMagneticFieldFrame__methods_ },
        { Py_tp_init, (void *) t_LocalMagneticFieldFrame_init_ },
        { Py_tp_getset, t_LocalMagneticFieldFrame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalMagneticFieldFrame)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LocalMagneticFieldFrame, t_LocalMagneticFieldFrame, LocalMagneticFieldFrame);

      void t_LocalMagneticFieldFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalMagneticFieldFrame), &PY_TYPE_DEF(LocalMagneticFieldFrame), module, "LocalMagneticFieldFrame", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "LOFBuilderVector", make_descriptor(&PY_TYPE_DEF(LocalMagneticFieldFrame$LOFBuilderVector)));
      }

      void t_LocalMagneticFieldFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "class_", make_descriptor(LocalMagneticFieldFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "wrapfn_", make_descriptor(t_LocalMagneticFieldFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LocalMagneticFieldFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalMagneticFieldFrame::initializeClass, 1)))
          return NULL;
        return t_LocalMagneticFieldFrame::wrap_Object(LocalMagneticFieldFrame(((t_LocalMagneticFieldFrame *) arg)->object.this$));
      }
      static PyObject *t_LocalMagneticFieldFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalMagneticFieldFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LocalMagneticFieldFrame_init_(t_LocalMagneticFieldFrame *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::models::earth::GeoMagneticField a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            LocalMagneticFieldFrame object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::models::earth::GeoMagneticField::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LocalMagneticFieldFrame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::models::earth::GeoMagneticField a1((jobject) NULL);
            ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::Frame a3((jobject) NULL);
            LocalMagneticFieldFrame object((jobject) NULL);

            if (!parseArgs(args, "kkKk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::models::earth::GeoMagneticField::initializeClass, ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::frames::t_LocalMagneticFieldFrame$LOFBuilderVector::parameters_, &a3))
            {
              INT_CALL(object = LocalMagneticFieldFrame(a0, a1, a2, a3));
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

      static PyObject *t_LocalMagneticFieldFrame_getInertialFrame(t_LocalMagneticFieldFrame *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_LocalMagneticFieldFrame_getMagneticField(t_LocalMagneticFieldFrame *self)
      {
        ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);
        OBJ_CALL(result = self->object.getMagneticField());
        return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
      }

      static PyObject *t_LocalMagneticFieldFrame_getName(t_LocalMagneticFieldFrame *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_LocalMagneticFieldFrame_rotationFromInertial(t_LocalMagneticFieldFrame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromInertial", args);
        return NULL;
      }

      static PyObject *t_LocalMagneticFieldFrame_get__inertialFrame(t_LocalMagneticFieldFrame *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_LocalMagneticFieldFrame_get__magneticField(t_LocalMagneticFieldFrame *self, void *data)
      {
        ::org::orekit::models::earth::GeoMagneticField value((jobject) NULL);
        OBJ_CALL(value = self->object.getMagneticField());
        return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(value);
      }

      static PyObject *t_LocalMagneticFieldFrame_get__name(t_LocalMagneticFieldFrame *self, void *data)
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
#include "org/orekit/files/rinex/observation/PhaseShiftCorrection.h"
#include "java/util/List.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *PhaseShiftCorrection::class$ = NULL;
          jmethodID *PhaseShiftCorrection::mids$ = NULL;
          bool PhaseShiftCorrection::live$ = false;

          jclass PhaseShiftCorrection::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/PhaseShiftCorrection");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_619d8bfe3fe192c8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/ObservationType;DLjava/util/List;)V");
              mids$[mid_getCorrection_557b8123390d8d0c] = env->getMethodID(cls, "getCorrection", "()D");
              mids$[mid_getSatelliteSystem_8b86408cc2633961] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getSatsCorrected_0d9551367f7ecdef] = env->getMethodID(cls, "getSatsCorrected", "()Ljava/util/List;");
              mids$[mid_getTypeObs_40f193b60caef501] = env->getMethodID(cls, "getTypeObs", "()Lorg/orekit/gnss/ObservationType;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseShiftCorrection::PhaseShiftCorrection(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::gnss::ObservationType & a1, jdouble a2, const ::java::util::List & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_619d8bfe3fe192c8, a0.this$, a1.this$, a2, a3.this$)) {}

          jdouble PhaseShiftCorrection::getCorrection() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCorrection_557b8123390d8d0c]);
          }

          ::org::orekit::gnss::SatelliteSystem PhaseShiftCorrection::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_8b86408cc2633961]));
          }

          ::java::util::List PhaseShiftCorrection::getSatsCorrected() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatsCorrected_0d9551367f7ecdef]));
          }

          ::org::orekit::gnss::ObservationType PhaseShiftCorrection::getTypeObs() const
          {
            return ::org::orekit::gnss::ObservationType(env->callObjectMethod(this$, mids$[mid_getTypeObs_40f193b60caef501]));
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
          static PyObject *t_PhaseShiftCorrection_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseShiftCorrection_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseShiftCorrection_init_(t_PhaseShiftCorrection *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseShiftCorrection_getCorrection(t_PhaseShiftCorrection *self);
          static PyObject *t_PhaseShiftCorrection_getSatelliteSystem(t_PhaseShiftCorrection *self);
          static PyObject *t_PhaseShiftCorrection_getSatsCorrected(t_PhaseShiftCorrection *self);
          static PyObject *t_PhaseShiftCorrection_getTypeObs(t_PhaseShiftCorrection *self);
          static PyObject *t_PhaseShiftCorrection_get__correction(t_PhaseShiftCorrection *self, void *data);
          static PyObject *t_PhaseShiftCorrection_get__satelliteSystem(t_PhaseShiftCorrection *self, void *data);
          static PyObject *t_PhaseShiftCorrection_get__satsCorrected(t_PhaseShiftCorrection *self, void *data);
          static PyObject *t_PhaseShiftCorrection_get__typeObs(t_PhaseShiftCorrection *self, void *data);
          static PyGetSetDef t_PhaseShiftCorrection__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseShiftCorrection, correction),
            DECLARE_GET_FIELD(t_PhaseShiftCorrection, satelliteSystem),
            DECLARE_GET_FIELD(t_PhaseShiftCorrection, satsCorrected),
            DECLARE_GET_FIELD(t_PhaseShiftCorrection, typeObs),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseShiftCorrection__methods_[] = {
            DECLARE_METHOD(t_PhaseShiftCorrection, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseShiftCorrection, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseShiftCorrection, getCorrection, METH_NOARGS),
            DECLARE_METHOD(t_PhaseShiftCorrection, getSatelliteSystem, METH_NOARGS),
            DECLARE_METHOD(t_PhaseShiftCorrection, getSatsCorrected, METH_NOARGS),
            DECLARE_METHOD(t_PhaseShiftCorrection, getTypeObs, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseShiftCorrection)[] = {
            { Py_tp_methods, t_PhaseShiftCorrection__methods_ },
            { Py_tp_init, (void *) t_PhaseShiftCorrection_init_ },
            { Py_tp_getset, t_PhaseShiftCorrection__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseShiftCorrection)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseShiftCorrection, t_PhaseShiftCorrection, PhaseShiftCorrection);

          void t_PhaseShiftCorrection::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseShiftCorrection), &PY_TYPE_DEF(PhaseShiftCorrection), module, "PhaseShiftCorrection", 0);
          }

          void t_PhaseShiftCorrection::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseShiftCorrection), "class_", make_descriptor(PhaseShiftCorrection::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseShiftCorrection), "wrapfn_", make_descriptor(t_PhaseShiftCorrection::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseShiftCorrection), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseShiftCorrection_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseShiftCorrection::initializeClass, 1)))
              return NULL;
            return t_PhaseShiftCorrection::wrap_Object(PhaseShiftCorrection(((t_PhaseShiftCorrection *) arg)->object.this$));
          }
          static PyObject *t_PhaseShiftCorrection_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseShiftCorrection::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseShiftCorrection_init_(t_PhaseShiftCorrection *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::ObservationType a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            ::java::util::List a3((jobject) NULL);
            PyTypeObject **p3;
            PhaseShiftCorrection object((jobject) NULL);

            if (!parseArgs(args, "KKDK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = PhaseShiftCorrection(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseShiftCorrection_getCorrection(t_PhaseShiftCorrection *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCorrection());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PhaseShiftCorrection_getSatelliteSystem(t_PhaseShiftCorrection *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_PhaseShiftCorrection_getSatsCorrected(t_PhaseShiftCorrection *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatsCorrected());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(SatInSystem));
          }

          static PyObject *t_PhaseShiftCorrection_getTypeObs(t_PhaseShiftCorrection *self)
          {
            ::org::orekit::gnss::ObservationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getTypeObs());
            return ::org::orekit::gnss::t_ObservationType::wrap_Object(result);
          }

          static PyObject *t_PhaseShiftCorrection_get__correction(t_PhaseShiftCorrection *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCorrection());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_PhaseShiftCorrection_get__satelliteSystem(t_PhaseShiftCorrection *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }

          static PyObject *t_PhaseShiftCorrection_get__satsCorrected(t_PhaseShiftCorrection *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatsCorrected());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_PhaseShiftCorrection_get__typeObs(t_PhaseShiftCorrection *self, void *data)
          {
            ::org::orekit::gnss::ObservationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getTypeObs());
            return ::org::orekit::gnss::t_ObservationType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/RuggedBuilder.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/refraction/AtmosphericRefraction.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/rugged/api/RuggedBuilder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/rugged/api/InertialFrameId.h"
#include "java/io/InputStream.h"
#include "org/orekit/rugged/api/EllipsoidId.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/rugged/api/BodyRotatingFrameId.h"
#include "java/util/List.h"
#include "java/io/OutputStream.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *RuggedBuilder::class$ = NULL;
        jmethodID *RuggedBuilder::mids$ = NULL;
        bool RuggedBuilder::live$ = false;

        jclass RuggedBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/RuggedBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addLineSensor_fb40c7e5a4534c6a] = env->getMethodID(cls, "addLineSensor", "(Lorg/orekit/rugged/linesensor/LineSensor;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_build_f145c77b35875136] = env->getMethodID(cls, "build", "()Lorg/orekit/rugged/api/Rugged;");
            mids$[mid_clearLineSensors_a0a726f990ec1fc6] = env->getMethodID(cls, "clearLineSensors", "()Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_getAFilter_c2e9b2b1c0db39b3] = env->getMethodID(cls, "getAFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
            mids$[mid_getAInterpolationNumber_412668abc8d889e9] = env->getMethodID(cls, "getAInterpolationNumber", "()I");
            mids$[mid_getAberrationOfLightCorrection_89b302893bdbe1f1] = env->getMethodID(cls, "getAberrationOfLightCorrection", "()Z");
            mids$[mid_getAlgorithm_58f1b48b3d6060f9] = env->getMethodID(cls, "getAlgorithm", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getConstantElevation_557b8123390d8d0c] = env->getMethodID(cls, "getConstantElevation", "()D");
            mids$[mid_getEllipsoid_3aefdf5430f1346a] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/rugged/utils/ExtendedEllipsoid;");
            mids$[mid_getInertialFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getLightTimeCorrection_89b302893bdbe1f1] = env->getMethodID(cls, "getLightTimeCorrection", "()Z");
            mids$[mid_getLineSensors_0d9551367f7ecdef] = env->getMethodID(cls, "getLineSensors", "()Ljava/util/List;");
            mids$[mid_getMaxCachedTiles_412668abc8d889e9] = env->getMethodID(cls, "getMaxCachedTiles", "()I");
            mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getOvershootTolerance_557b8123390d8d0c] = env->getMethodID(cls, "getOvershootTolerance", "()D");
            mids$[mid_getPVFilter_6c4898d6ec0c3837] = env->getMethodID(cls, "getPVFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getPVInterpolationNumber_412668abc8d889e9] = env->getMethodID(cls, "getPVInterpolationNumber", "()I");
            mids$[mid_getPositionsVelocities_0d9551367f7ecdef] = env->getMethodID(cls, "getPositionsVelocities", "()Ljava/util/List;");
            mids$[mid_getQuaternions_0d9551367f7ecdef] = env->getMethodID(cls, "getQuaternions", "()Ljava/util/List;");
            mids$[mid_getRefractionCorrection_0f038fb48fafa13d] = env->getMethodID(cls, "getRefractionCorrection", "()Lorg/orekit/rugged/refraction/AtmosphericRefraction;");
            mids$[mid_getTStep_557b8123390d8d0c] = env->getMethodID(cls, "getTStep", "()D");
            mids$[mid_getTileUpdater_b42c9a6955c9850d] = env->getMethodID(cls, "getTileUpdater", "()Lorg/orekit/rugged/raster/TileUpdater;");
            mids$[mid_setAberrationOfLightCorrection_819868aea18e30c6] = env->getMethodID(cls, "setAberrationOfLightCorrection", "(Z)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setAlgorithm_3efc53d7de6d6e4c] = env->getMethodID(cls, "setAlgorithm", "(Lorg/orekit/rugged/api/AlgorithmId;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setConstantElevation_492b334f8354f325] = env->getMethodID(cls, "setConstantElevation", "(D)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setDigitalElevationModel_67fe5e2cbb9f9806] = env->getMethodID(cls, "setDigitalElevationModel", "(Lorg/orekit/rugged/raster/TileUpdater;I)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setEllipsoid_61119b52c99a4e60] = env->getMethodID(cls, "setEllipsoid", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setEllipsoid_93bbbb1506203afc] = env->getMethodID(cls, "setEllipsoid", "(Lorg/orekit/rugged/api/EllipsoidId;Lorg/orekit/rugged/api/BodyRotatingFrameId;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setLightTimeCorrection_819868aea18e30c6] = env->getMethodID(cls, "setLightTimeCorrection", "(Z)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setName_f5ffdf29129ef90a] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
            mids$[mid_setRefractionCorrection_d75b73d157e160dd] = env->getMethodID(cls, "setRefractionCorrection", "(Lorg/orekit/rugged/refraction/AtmosphericRefraction;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTimeSpan_27e3db4c5346f3d8] = env->getMethodID(cls, "setTimeSpan", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;DD)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectory_cd20452370ae1c99] = env->getMethodID(cls, "setTrajectory", "(DILorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/propagation/Propagator;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectory_ea04c9e968c214f5] = env->getMethodID(cls, "setTrajectory", "(Lorg/orekit/rugged/api/InertialFrameId;Ljava/util/List;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectory_a55114fcc01d72f4] = env->getMethodID(cls, "setTrajectory", "(Lorg/orekit/frames/Frame;Ljava/util/List;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectoryAndTimeSpan_d9fe484d57b2641a] = env->getMethodID(cls, "setTrajectoryAndTimeSpan", "(Ljava/io/InputStream;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_storeInterpolator_a093374b16e6c27d] = env->getMethodID(cls, "storeInterpolator", "(Ljava/io/OutputStream;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedBuilder::RuggedBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        RuggedBuilder RuggedBuilder::addLineSensor(const ::org::orekit::rugged::linesensor::LineSensor & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_addLineSensor_fb40c7e5a4534c6a], a0.this$));
        }

        ::org::orekit::rugged::api::Rugged RuggedBuilder::build() const
        {
          return ::org::orekit::rugged::api::Rugged(env->callObjectMethod(this$, mids$[mid_build_f145c77b35875136]));
        }

        RuggedBuilder RuggedBuilder::clearLineSensors() const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_clearLineSensors_a0a726f990ec1fc6]));
        }

        ::org::orekit::utils::AngularDerivativesFilter RuggedBuilder::getAFilter() const
        {
          return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAFilter_c2e9b2b1c0db39b3]));
        }

        jint RuggedBuilder::getAInterpolationNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getAInterpolationNumber_412668abc8d889e9]);
        }

        jboolean RuggedBuilder::getAberrationOfLightCorrection() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getAberrationOfLightCorrection_89b302893bdbe1f1]);
        }

        ::org::orekit::rugged::api::AlgorithmId RuggedBuilder::getAlgorithm() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithm_58f1b48b3d6060f9]));
        }

        jdouble RuggedBuilder::getConstantElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getConstantElevation_557b8123390d8d0c]);
        }

        ::org::orekit::rugged::utils::ExtendedEllipsoid RuggedBuilder::getEllipsoid() const
        {
          return ::org::orekit::rugged::utils::ExtendedEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_3aefdf5430f1346a]));
        }

        ::org::orekit::frames::Frame RuggedBuilder::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_6c9bc0a928c56d4e]));
        }

        jboolean RuggedBuilder::getLightTimeCorrection() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getLightTimeCorrection_89b302893bdbe1f1]);
        }

        ::java::util::List RuggedBuilder::getLineSensors() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLineSensors_0d9551367f7ecdef]));
        }

        jint RuggedBuilder::getMaxCachedTiles() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxCachedTiles_412668abc8d889e9]);
        }

        ::org::orekit::time::AbsoluteDate RuggedBuilder::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate RuggedBuilder::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
        }

        ::java::lang::String RuggedBuilder::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
        }

        jdouble RuggedBuilder::getOvershootTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOvershootTolerance_557b8123390d8d0c]);
        }

        ::org::orekit::utils::CartesianDerivativesFilter RuggedBuilder::getPVFilter() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getPVFilter_6c4898d6ec0c3837]));
        }

        jint RuggedBuilder::getPVInterpolationNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getPVInterpolationNumber_412668abc8d889e9]);
        }

        ::java::util::List RuggedBuilder::getPositionsVelocities() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPositionsVelocities_0d9551367f7ecdef]));
        }

        ::java::util::List RuggedBuilder::getQuaternions() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getQuaternions_0d9551367f7ecdef]));
        }

        ::org::orekit::rugged::refraction::AtmosphericRefraction RuggedBuilder::getRefractionCorrection() const
        {
          return ::org::orekit::rugged::refraction::AtmosphericRefraction(env->callObjectMethod(this$, mids$[mid_getRefractionCorrection_0f038fb48fafa13d]));
        }

        jdouble RuggedBuilder::getTStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTStep_557b8123390d8d0c]);
        }

        ::org::orekit::rugged::raster::TileUpdater RuggedBuilder::getTileUpdater() const
        {
          return ::org::orekit::rugged::raster::TileUpdater(env->callObjectMethod(this$, mids$[mid_getTileUpdater_b42c9a6955c9850d]));
        }

        RuggedBuilder RuggedBuilder::setAberrationOfLightCorrection(jboolean a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setAberrationOfLightCorrection_819868aea18e30c6], a0));
        }

        RuggedBuilder RuggedBuilder::setAlgorithm(const ::org::orekit::rugged::api::AlgorithmId & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setAlgorithm_3efc53d7de6d6e4c], a0.this$));
        }

        RuggedBuilder RuggedBuilder::setConstantElevation(jdouble a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setConstantElevation_492b334f8354f325], a0));
        }

        RuggedBuilder RuggedBuilder::setDigitalElevationModel(const ::org::orekit::rugged::raster::TileUpdater & a0, jint a1) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setDigitalElevationModel_67fe5e2cbb9f9806], a0.this$, a1));
        }

        RuggedBuilder RuggedBuilder::setEllipsoid(const ::org::orekit::bodies::OneAxisEllipsoid & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setEllipsoid_61119b52c99a4e60], a0.this$));
        }

        RuggedBuilder RuggedBuilder::setEllipsoid(const ::org::orekit::rugged::api::EllipsoidId & a0, const ::org::orekit::rugged::api::BodyRotatingFrameId & a1) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setEllipsoid_93bbbb1506203afc], a0.this$, a1.this$));
        }

        RuggedBuilder RuggedBuilder::setLightTimeCorrection(jboolean a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setLightTimeCorrection_819868aea18e30c6], a0));
        }

        void RuggedBuilder::setName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setName_f5ffdf29129ef90a], a0.this$);
        }

        RuggedBuilder RuggedBuilder::setRefractionCorrection(const ::org::orekit::rugged::refraction::AtmosphericRefraction & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setRefractionCorrection_d75b73d157e160dd], a0.this$));
        }

        RuggedBuilder RuggedBuilder::setTimeSpan(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTimeSpan_27e3db4c5346f3d8], a0.this$, a1.this$, a2, a3));
        }

        RuggedBuilder RuggedBuilder::setTrajectory(jdouble a0, jint a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2, const ::org::orekit::utils::AngularDerivativesFilter & a3, const ::org::orekit::propagation::Propagator & a4) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectory_cd20452370ae1c99], a0, a1, a2.this$, a3.this$, a4.this$));
        }

        RuggedBuilder RuggedBuilder::setTrajectory(const ::org::orekit::rugged::api::InertialFrameId & a0, const ::java::util::List & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::java::util::List & a4, jint a5, const ::org::orekit::utils::AngularDerivativesFilter & a6) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectory_ea04c9e968c214f5], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$));
        }

        RuggedBuilder RuggedBuilder::setTrajectory(const ::org::orekit::frames::Frame & a0, const ::java::util::List & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::java::util::List & a4, jint a5, const ::org::orekit::utils::AngularDerivativesFilter & a6) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectory_a55114fcc01d72f4], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$));
        }

        RuggedBuilder RuggedBuilder::setTrajectoryAndTimeSpan(const ::java::io::InputStream & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectoryAndTimeSpan_d9fe484d57b2641a], a0.this$));
        }

        void RuggedBuilder::storeInterpolator(const ::java::io::OutputStream & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_storeInterpolator_a093374b16e6c27d], a0.this$);
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
        static PyObject *t_RuggedBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RuggedBuilder_init_(t_RuggedBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedBuilder_addLineSensor(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_build(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_clearLineSensors(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getAFilter(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getAInterpolationNumber(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getAberrationOfLightCorrection(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getAlgorithm(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getConstantElevation(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getEllipsoid(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getInertialFrame(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getLightTimeCorrection(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getLineSensors(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getMaxCachedTiles(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getMaxDate(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getMinDate(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getName(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getOvershootTolerance(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getPVFilter(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getPVInterpolationNumber(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getPositionsVelocities(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getQuaternions(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getRefractionCorrection(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getTStep(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getTileUpdater(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_setAberrationOfLightCorrection(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setAlgorithm(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setConstantElevation(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setDigitalElevationModel(t_RuggedBuilder *self, PyObject *args);
        static PyObject *t_RuggedBuilder_setEllipsoid(t_RuggedBuilder *self, PyObject *args);
        static PyObject *t_RuggedBuilder_setLightTimeCorrection(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setName(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setRefractionCorrection(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setTimeSpan(t_RuggedBuilder *self, PyObject *args);
        static PyObject *t_RuggedBuilder_setTrajectory(t_RuggedBuilder *self, PyObject *args);
        static PyObject *t_RuggedBuilder_setTrajectoryAndTimeSpan(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_storeInterpolator(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_get__aFilter(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__aInterpolationNumber(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__aberrationOfLightCorrection(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__aberrationOfLightCorrection(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__algorithm(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__algorithm(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__constantElevation(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__constantElevation(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__ellipsoid(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__ellipsoid(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__inertialFrame(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__lightTimeCorrection(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__lightTimeCorrection(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__lineSensors(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__maxCachedTiles(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__maxDate(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__minDate(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__name(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__name(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__overshootTolerance(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__pVFilter(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__pVInterpolationNumber(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__positionsVelocities(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__quaternions(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__refractionCorrection(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__refractionCorrection(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__tStep(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__tileUpdater(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__trajectoryAndTimeSpan(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyGetSetDef t_RuggedBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedBuilder, aFilter),
          DECLARE_GET_FIELD(t_RuggedBuilder, aInterpolationNumber),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, aberrationOfLightCorrection),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, algorithm),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, constantElevation),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, ellipsoid),
          DECLARE_GET_FIELD(t_RuggedBuilder, inertialFrame),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, lightTimeCorrection),
          DECLARE_GET_FIELD(t_RuggedBuilder, lineSensors),
          DECLARE_GET_FIELD(t_RuggedBuilder, maxCachedTiles),
          DECLARE_GET_FIELD(t_RuggedBuilder, maxDate),
          DECLARE_GET_FIELD(t_RuggedBuilder, minDate),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, name),
          DECLARE_GET_FIELD(t_RuggedBuilder, overshootTolerance),
          DECLARE_GET_FIELD(t_RuggedBuilder, pVFilter),
          DECLARE_GET_FIELD(t_RuggedBuilder, pVInterpolationNumber),
          DECLARE_GET_FIELD(t_RuggedBuilder, positionsVelocities),
          DECLARE_GET_FIELD(t_RuggedBuilder, quaternions),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, refractionCorrection),
          DECLARE_GET_FIELD(t_RuggedBuilder, tStep),
          DECLARE_GET_FIELD(t_RuggedBuilder, tileUpdater),
          DECLARE_SET_FIELD(t_RuggedBuilder, trajectoryAndTimeSpan),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedBuilder__methods_[] = {
          DECLARE_METHOD(t_RuggedBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedBuilder, addLineSensor, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, clearLineSensors, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getAFilter, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getAInterpolationNumber, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getAberrationOfLightCorrection, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getAlgorithm, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getConstantElevation, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getEllipsoid, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getLightTimeCorrection, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getLineSensors, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getMaxCachedTiles, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getName, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getOvershootTolerance, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getPVFilter, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getPVInterpolationNumber, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getPositionsVelocities, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getQuaternions, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getRefractionCorrection, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getTStep, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getTileUpdater, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, setAberrationOfLightCorrection, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setAlgorithm, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setConstantElevation, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setDigitalElevationModel, METH_VARARGS),
          DECLARE_METHOD(t_RuggedBuilder, setEllipsoid, METH_VARARGS),
          DECLARE_METHOD(t_RuggedBuilder, setLightTimeCorrection, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setName, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setRefractionCorrection, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setTimeSpan, METH_VARARGS),
          DECLARE_METHOD(t_RuggedBuilder, setTrajectory, METH_VARARGS),
          DECLARE_METHOD(t_RuggedBuilder, setTrajectoryAndTimeSpan, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, storeInterpolator, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedBuilder)[] = {
          { Py_tp_methods, t_RuggedBuilder__methods_ },
          { Py_tp_init, (void *) t_RuggedBuilder_init_ },
          { Py_tp_getset, t_RuggedBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RuggedBuilder, t_RuggedBuilder, RuggedBuilder);

        void t_RuggedBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedBuilder), &PY_TYPE_DEF(RuggedBuilder), module, "RuggedBuilder", 0);
        }

        void t_RuggedBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedBuilder), "class_", make_descriptor(RuggedBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedBuilder), "wrapfn_", make_descriptor(t_RuggedBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedBuilder::initializeClass, 1)))
            return NULL;
          return t_RuggedBuilder::wrap_Object(RuggedBuilder(((t_RuggedBuilder *) arg)->object.this$));
        }
        static PyObject *t_RuggedBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RuggedBuilder_init_(t_RuggedBuilder *self, PyObject *args, PyObject *kwds)
        {
          RuggedBuilder object((jobject) NULL);

          INT_CALL(object = RuggedBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_RuggedBuilder_addLineSensor(t_RuggedBuilder *self, PyObject *arg)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.addLineSensor(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addLineSensor", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_build(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::api::Rugged result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::rugged::api::t_Rugged::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_clearLineSensors(t_RuggedBuilder *self)
        {
          RuggedBuilder result((jobject) NULL);
          OBJ_CALL(result = self->object.clearLineSensors());
          return t_RuggedBuilder::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getAFilter(t_RuggedBuilder *self)
        {
          ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAFilter());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getAInterpolationNumber(t_RuggedBuilder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getAInterpolationNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_RuggedBuilder_getAberrationOfLightCorrection(t_RuggedBuilder *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getAberrationOfLightCorrection());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_RuggedBuilder_getAlgorithm(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithm());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getConstantElevation(t_RuggedBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getConstantElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RuggedBuilder_getEllipsoid(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getInertialFrame(t_RuggedBuilder *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getLightTimeCorrection(t_RuggedBuilder *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getLightTimeCorrection());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_RuggedBuilder_getLineSensors(t_RuggedBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getLineSensors());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::rugged::linesensor::PY_TYPE(LineSensor));
        }

        static PyObject *t_RuggedBuilder_getMaxCachedTiles(t_RuggedBuilder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxCachedTiles());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_RuggedBuilder_getMaxDate(t_RuggedBuilder *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getMinDate(t_RuggedBuilder *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getName(t_RuggedBuilder *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_RuggedBuilder_getOvershootTolerance(t_RuggedBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOvershootTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RuggedBuilder_getPVFilter(t_RuggedBuilder *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getPVFilter());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getPVInterpolationNumber(t_RuggedBuilder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPVInterpolationNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_RuggedBuilder_getPositionsVelocities(t_RuggedBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionsVelocities());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
        }

        static PyObject *t_RuggedBuilder_getQuaternions(t_RuggedBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getQuaternions());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
        }

        static PyObject *t_RuggedBuilder_getRefractionCorrection(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefractionCorrection());
          return ::org::orekit::rugged::refraction::t_AtmosphericRefraction::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getTStep(t_RuggedBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RuggedBuilder_getTileUpdater(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::raster::TileUpdater result((jobject) NULL);
          OBJ_CALL(result = self->object.getTileUpdater());
          return ::org::orekit::rugged::raster::t_TileUpdater::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_setAberrationOfLightCorrection(t_RuggedBuilder *self, PyObject *arg)
        {
          jboolean a0;
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setAberrationOfLightCorrection(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setAberrationOfLightCorrection", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setAlgorithm(t_RuggedBuilder *self, PyObject *arg)
        {
          ::org::orekit::rugged::api::AlgorithmId a0((jobject) NULL);
          PyTypeObject **p0;
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_AlgorithmId::parameters_))
          {
            OBJ_CALL(result = self->object.setAlgorithm(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setAlgorithm", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setConstantElevation(t_RuggedBuilder *self, PyObject *arg)
        {
          jdouble a0;
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.setConstantElevation(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setConstantElevation", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setDigitalElevationModel(t_RuggedBuilder *self, PyObject *args)
        {
          ::org::orekit::rugged::raster::TileUpdater a0((jobject) NULL);
          jint a1;
          RuggedBuilder result((jobject) NULL);

          if (!parseArgs(args, "kI", ::org::orekit::rugged::raster::TileUpdater::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.setDigitalElevationModel(a0, a1));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setDigitalElevationModel", args);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setEllipsoid(t_RuggedBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.setEllipsoid(a0));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::rugged::api::EllipsoidId a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::rugged::api::BodyRotatingFrameId a1((jobject) NULL);
              PyTypeObject **p1;
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::rugged::api::EllipsoidId::initializeClass, ::org::orekit::rugged::api::BodyRotatingFrameId::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_EllipsoidId::parameters_, &a1, &p1, ::org::orekit::rugged::api::t_BodyRotatingFrameId::parameters_))
              {
                OBJ_CALL(result = self->object.setEllipsoid(a0, a1));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setEllipsoid", args);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setLightTimeCorrection(t_RuggedBuilder *self, PyObject *arg)
        {
          jboolean a0;
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setLightTimeCorrection(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setLightTimeCorrection", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setName(t_RuggedBuilder *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setName", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setRefractionCorrection(t_RuggedBuilder *self, PyObject *arg)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction a0((jobject) NULL);
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::refraction::AtmosphericRefraction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.setRefractionCorrection(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setRefractionCorrection", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setTimeSpan(t_RuggedBuilder *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          RuggedBuilder result((jobject) NULL);

          if (!parseArgs(args, "kkDD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.setTimeSpan(a0, a1, a2, a3));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeSpan", args);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setTrajectory(t_RuggedBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jdouble a0;
              jint a1;
              ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::utils::AngularDerivativesFilter a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::Propagator a4((jobject) NULL);
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "DIKKk", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::propagation::Propagator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a3, &p3, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a4))
              {
                OBJ_CALL(result = self->object.setTrajectory(a0, a1, a2, a3, a4));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
            break;
           case 7:
            {
              ::org::orekit::rugged::api::InertialFrameId a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
              PyTypeObject **p3;
              ::java::util::List a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::org::orekit::utils::AngularDerivativesFilter a6((jobject) NULL);
              PyTypeObject **p6;
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "KKIKKIK", ::org::orekit::rugged::api::InertialFrameId::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_InertialFrameId::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &p4, ::java::util::t_List::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
              {
                OBJ_CALL(result = self->object.setTrajectory(a0, a1, a2, a3, a4, a5, a6));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
              PyTypeObject **p3;
              ::java::util::List a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::org::orekit::utils::AngularDerivativesFilter a6((jobject) NULL);
              PyTypeObject **p6;
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "kKIKKIK", ::org::orekit::frames::Frame::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &p4, ::java::util::t_List::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
              {
                OBJ_CALL(result = self->object.setTrajectory(a0, a1, a2, a3, a4, a5, a6));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setTrajectory", args);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setTrajectoryAndTimeSpan(t_RuggedBuilder *self, PyObject *arg)
        {
          ::java::io::InputStream a0((jobject) NULL);
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.setTrajectoryAndTimeSpan(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setTrajectoryAndTimeSpan", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_storeInterpolator(t_RuggedBuilder *self, PyObject *arg)
        {
          ::java::io::OutputStream a0((jobject) NULL);

          if (!parseArg(arg, "k", ::java::io::OutputStream::initializeClass, &a0))
          {
            OBJ_CALL(self->object.storeInterpolator(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "storeInterpolator", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_get__aFilter(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAFilter());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__aInterpolationNumber(t_RuggedBuilder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getAInterpolationNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_RuggedBuilder_get__aberrationOfLightCorrection(t_RuggedBuilder *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getAberrationOfLightCorrection());
          Py_RETURN_BOOL(value);
        }
        static int t_RuggedBuilder_set__aberrationOfLightCorrection(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setAberrationOfLightCorrection(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "aberrationOfLightCorrection", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__algorithm(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithm());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }
        static int t_RuggedBuilder_set__algorithm(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &value))
            {
              INT_CALL(self->object.setAlgorithm(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "algorithm", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__constantElevation(t_RuggedBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getConstantElevation());
          return PyFloat_FromDouble((double) value);
        }
        static int t_RuggedBuilder_set__constantElevation(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setConstantElevation(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "constantElevation", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__ellipsoid(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(value);
        }
        static int t_RuggedBuilder_set__ellipsoid(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &value))
            {
              INT_CALL(self->object.setEllipsoid(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ellipsoid", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__inertialFrame(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__lightTimeCorrection(t_RuggedBuilder *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getLightTimeCorrection());
          Py_RETURN_BOOL(value);
        }
        static int t_RuggedBuilder_set__lightTimeCorrection(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setLightTimeCorrection(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "lightTimeCorrection", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__lineSensors(t_RuggedBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getLineSensors());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__maxCachedTiles(t_RuggedBuilder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxCachedTiles());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_RuggedBuilder_get__maxDate(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__minDate(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__name(t_RuggedBuilder *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
        static int t_RuggedBuilder_set__name(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "name", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__overshootTolerance(t_RuggedBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOvershootTolerance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RuggedBuilder_get__pVFilter(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getPVFilter());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__pVInterpolationNumber(t_RuggedBuilder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPVInterpolationNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_RuggedBuilder_get__positionsVelocities(t_RuggedBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionsVelocities());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__quaternions(t_RuggedBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getQuaternions());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__refractionCorrection(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefractionCorrection());
          return ::org::orekit::rugged::refraction::t_AtmosphericRefraction::wrap_Object(value);
        }
        static int t_RuggedBuilder_set__refractionCorrection(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::rugged::refraction::AtmosphericRefraction value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::rugged::refraction::AtmosphericRefraction::initializeClass, &value))
            {
              INT_CALL(self->object.setRefractionCorrection(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "refractionCorrection", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__tStep(t_RuggedBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RuggedBuilder_get__tileUpdater(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::rugged::raster::TileUpdater value((jobject) NULL);
          OBJ_CALL(value = self->object.getTileUpdater());
          return ::org::orekit::rugged::raster::t_TileUpdater::wrap_Object(value);
        }

        static int t_RuggedBuilder_set__trajectoryAndTimeSpan(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::java::io::InputStream value((jobject) NULL);
            if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &value))
            {
              INT_CALL(self->object.setTrajectoryAndTimeSpan(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "trajectoryAndTimeSpan", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/iod/IodGibbs.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodGibbs::class$ = NULL;
        jmethodID *IodGibbs::mids$ = NULL;
        bool IodGibbs::live$ = false;

        jclass IodGibbs::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodGibbs");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_57c86ae6f9301614] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/PV;Lorg/orekit/estimation/measurements/PV;Lorg/orekit/estimation/measurements/PV;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_09f96a1482d9ef74] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/Position;Lorg/orekit/estimation/measurements/Position;Lorg/orekit/estimation/measurements/Position;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_a8afbd382f279a22] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodGibbs::IodGibbs(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        ::org::orekit::orbits::Orbit IodGibbs::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::PV & a1, const ::org::orekit::estimation::measurements::PV & a2, const ::org::orekit::estimation::measurements::PV & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_57c86ae6f9301614], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGibbs::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::Position & a1, const ::org::orekit::estimation::measurements::Position & a2, const ::org::orekit::estimation::measurements::Position & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_09f96a1482d9ef74], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGibbs::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::time::AbsoluteDate & a6) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_a8afbd382f279a22], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$));
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
      namespace iod {
        static PyObject *t_IodGibbs_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodGibbs_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodGibbs_init_(t_IodGibbs *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodGibbs_estimate(t_IodGibbs *self, PyObject *args);

        static PyMethodDef t_IodGibbs__methods_[] = {
          DECLARE_METHOD(t_IodGibbs, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGibbs, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGibbs, estimate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodGibbs)[] = {
          { Py_tp_methods, t_IodGibbs__methods_ },
          { Py_tp_init, (void *) t_IodGibbs_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodGibbs)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodGibbs, t_IodGibbs, IodGibbs);

        void t_IodGibbs::install(PyObject *module)
        {
          installType(&PY_TYPE(IodGibbs), &PY_TYPE_DEF(IodGibbs), module, "IodGibbs", 0);
        }

        void t_IodGibbs::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGibbs), "class_", make_descriptor(IodGibbs::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGibbs), "wrapfn_", make_descriptor(t_IodGibbs::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGibbs), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodGibbs_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodGibbs::initializeClass, 1)))
            return NULL;
          return t_IodGibbs::wrap_Object(IodGibbs(((t_IodGibbs *) arg)->object.this$));
        }
        static PyObject *t_IodGibbs_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodGibbs::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodGibbs_init_(t_IodGibbs *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodGibbs object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodGibbs(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodGibbs_estimate(t_IodGibbs *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::PV a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::PV a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::PV a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_PV::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_PV::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_PV::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::Position a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::Position a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::Position a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_Position::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_Position::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_Position::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a6((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/FieldODEFixedStepHandler.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldODEFixedStepHandler::class$ = NULL;
        jmethodID *FieldODEFixedStepHandler::mids$ = NULL;
        bool FieldODEFixedStepHandler::live$ = false;

        jclass FieldODEFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldODEFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_handleStep_06ca8c3c24c00d34] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Z)V");
            mids$[mid_init_f808a4f21f8be825] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldODEFixedStepHandler::handleStep(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, jboolean a1) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_06ca8c3c24c00d34], a0.this$, a1);
        }

        void FieldODEFixedStepHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_f808a4f21f8be825], a0.this$, a1.this$);
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
      namespace sampling {
        static PyObject *t_FieldODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEFixedStepHandler_of_(t_FieldODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEFixedStepHandler_handleStep(t_FieldODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEFixedStepHandler_init(t_FieldODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEFixedStepHandler_get__parameters_(t_FieldODEFixedStepHandler *self, void *data);
        static PyGetSetDef t_FieldODEFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEFixedStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldODEFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, handleStep, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEFixedStepHandler)[] = {
          { Py_tp_methods, t_FieldODEFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEFixedStepHandler, t_FieldODEFixedStepHandler, FieldODEFixedStepHandler);
        PyObject *t_FieldODEFixedStepHandler::wrap_Object(const FieldODEFixedStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEFixedStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEFixedStepHandler *self = (t_FieldODEFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEFixedStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEFixedStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEFixedStepHandler *self = (t_FieldODEFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEFixedStepHandler), &PY_TYPE_DEF(FieldODEFixedStepHandler), module, "FieldODEFixedStepHandler", 0);
        }

        void t_FieldODEFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEFixedStepHandler), "class_", make_descriptor(FieldODEFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEFixedStepHandler), "wrapfn_", make_descriptor(t_FieldODEFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldODEFixedStepHandler::wrap_Object(FieldODEFixedStepHandler(((t_FieldODEFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEFixedStepHandler_of_(t_FieldODEFixedStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEFixedStepHandler_handleStep(t_FieldODEFixedStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean a1;

          if (!parseArgs(args, "KZ", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1))
          {
            OBJ_CALL(self->object.handleStep(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", args);
          return NULL;
        }

        static PyObject *t_FieldODEFixedStepHandler_init(t_FieldODEFixedStepHandler *self, PyObject *args)
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
        static PyObject *t_FieldODEFixedStepHandler_get__parameters_(t_FieldODEFixedStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/SimplexOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
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
                mids$[mid_init$_38783cba7e493c69] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_optimize_428d2547a0c45016] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_doOptimize_adf293b2643f22b0] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_parseOptimizationData_946a92401917c130] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SimplexOptimizer::SimplexOptimizer(const ::org::hipparchus::optim::ConvergenceChecker & a0) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_38783cba7e493c69, a0.this$)) {}

            SimplexOptimizer::SimplexOptimizer(jdouble a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

            ::org::hipparchus::optim::PointValuePair SimplexOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_428d2547a0c45016], a0.this$));
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
#include "org/orekit/estimation/measurements/generation/PythonScheduler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/util/SortedSet.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonScheduler::class$ = NULL;
          jmethodID *PythonScheduler::mids$ = NULL;
          bool PythonScheduler::live$ = false;

          jclass PythonScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_generate_efa69a4463f8239b] = env->getMethodID(cls, "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;");
              mids$[mid_getBuilder_73d2d5822258be13] = env->getMethodID(cls, "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;");
              mids$[mid_init_d5db9a5f2035671b] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonScheduler::PythonScheduler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonScheduler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonScheduler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonScheduler::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_PythonScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonScheduler_of_(t_PythonScheduler *self, PyObject *args);
          static int t_PythonScheduler_init_(t_PythonScheduler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonScheduler_finalize(t_PythonScheduler *self);
          static PyObject *t_PythonScheduler_pythonExtension(t_PythonScheduler *self, PyObject *args);
          static jobject JNICALL t_PythonScheduler_generate0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonScheduler_getBuilder1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonScheduler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonScheduler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonScheduler_get__self(t_PythonScheduler *self, void *data);
          static PyObject *t_PythonScheduler_get__parameters_(t_PythonScheduler *self, void *data);
          static PyGetSetDef t_PythonScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonScheduler, self),
            DECLARE_GET_FIELD(t_PythonScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonScheduler__methods_[] = {
            DECLARE_METHOD(t_PythonScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonScheduler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonScheduler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonScheduler)[] = {
            { Py_tp_methods, t_PythonScheduler__methods_ },
            { Py_tp_init, (void *) t_PythonScheduler_init_ },
            { Py_tp_getset, t_PythonScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonScheduler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonScheduler, t_PythonScheduler, PythonScheduler);
          PyObject *t_PythonScheduler::wrap_Object(const PythonScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonScheduler *self = (t_PythonScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonScheduler *self = (t_PythonScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonScheduler), &PY_TYPE_DEF(PythonScheduler), module, "PythonScheduler", 1);
          }

          void t_PythonScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonScheduler), "class_", make_descriptor(PythonScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonScheduler), "wrapfn_", make_descriptor(t_PythonScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonScheduler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonScheduler::initializeClass);
            JNINativeMethod methods[] = {
              { "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;", (void *) t_PythonScheduler_generate0 },
              { "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;", (void *) t_PythonScheduler_getBuilder1 },
              { "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonScheduler_init2 },
              { "pythonDecRef", "()V", (void *) t_PythonScheduler_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonScheduler::initializeClass, 1)))
              return NULL;
            return t_PythonScheduler::wrap_Object(PythonScheduler(((t_PythonScheduler *) arg)->object.this$));
          }
          static PyObject *t_PythonScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonScheduler_of_(t_PythonScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonScheduler_init_(t_PythonScheduler *self, PyObject *args, PyObject *kwds)
          {
            PythonScheduler object((jobject) NULL);

            INT_CALL(object = PythonScheduler());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonScheduler_finalize(t_PythonScheduler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonScheduler_pythonExtension(t_PythonScheduler *self, PyObject *args)
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

          static jobject JNICALL t_PythonScheduler_generate0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::SortedSet value((jobject) NULL);
            PyObject *o0 = ::java::util::t_Map::wrap_Object(::java::util::Map(a0));
            PyObject *result = PyObject_CallMethod(obj, "generate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::SortedSet::initializeClass, &value))
            {
              throwTypeError("generate", result);
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

          static jobject JNICALL t_PythonScheduler_getBuilder1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getBuilder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::generation::MeasurementBuilder::initializeClass, &value))
            {
              throwTypeError("getBuilder", result);
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

          static void JNICALL t_PythonScheduler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonScheduler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonScheduler::mids$[PythonScheduler::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonScheduler_get__self(t_PythonScheduler *self, void *data)
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
          static PyObject *t_PythonScheduler_get__parameters_(t_PythonScheduler *self, void *data)
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
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/Frequency.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *Frequency::class$ = NULL;
      jmethodID *Frequency::mids$ = NULL;
      bool Frequency::live$ = false;
      Frequency *Frequency::B01 = NULL;
      Frequency *Frequency::B02 = NULL;
      Frequency *Frequency::B03 = NULL;
      Frequency *Frequency::B08 = NULL;
      Frequency *Frequency::B1A = NULL;
      Frequency *Frequency::B1C = NULL;
      Frequency *Frequency::B2A = NULL;
      Frequency *Frequency::B2B = NULL;
      Frequency *Frequency::B3A = NULL;
      Frequency *Frequency::C01 = NULL;
      Frequency *Frequency::C02 = NULL;
      Frequency *Frequency::C05 = NULL;
      Frequency *Frequency::C06 = NULL;
      Frequency *Frequency::C07 = NULL;
      Frequency *Frequency::C08 = NULL;
      Frequency *Frequency::E01 = NULL;
      Frequency *Frequency::E05 = NULL;
      Frequency *Frequency::E06 = NULL;
      Frequency *Frequency::E07 = NULL;
      Frequency *Frequency::E08 = NULL;
      jdouble Frequency::F0 = (jdouble) 0;
      Frequency *Frequency::G01 = NULL;
      Frequency *Frequency::G02 = NULL;
      Frequency *Frequency::G05 = NULL;
      Frequency *Frequency::I05 = NULL;
      Frequency *Frequency::I09 = NULL;
      Frequency *Frequency::J01 = NULL;
      Frequency *Frequency::J02 = NULL;
      Frequency *Frequency::J05 = NULL;
      Frequency *Frequency::J06 = NULL;
      Frequency *Frequency::R01 = NULL;
      Frequency *Frequency::R02 = NULL;
      Frequency *Frequency::R03 = NULL;
      Frequency *Frequency::R04 = NULL;
      Frequency *Frequency::R06 = NULL;
      Frequency *Frequency::S01 = NULL;
      Frequency *Frequency::S05 = NULL;

      jclass Frequency::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/Frequency");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMHzFrequency_557b8123390d8d0c] = env->getMethodID(cls, "getMHzFrequency", "()D");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getRatio_557b8123390d8d0c] = env->getMethodID(cls, "getRatio", "()D");
          mids$[mid_getSatelliteSystem_8b86408cc2633961] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_getWavelength_557b8123390d8d0c] = env->getMethodID(cls, "getWavelength", "()D");
          mids$[mid_valueOf_f9a1573446bcb1a9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/Frequency;");
          mids$[mid_values_196803915cb3dc3b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/Frequency;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          B01 = new Frequency(env->getStaticObjectField(cls, "B01", "Lorg/orekit/gnss/Frequency;"));
          B02 = new Frequency(env->getStaticObjectField(cls, "B02", "Lorg/orekit/gnss/Frequency;"));
          B03 = new Frequency(env->getStaticObjectField(cls, "B03", "Lorg/orekit/gnss/Frequency;"));
          B08 = new Frequency(env->getStaticObjectField(cls, "B08", "Lorg/orekit/gnss/Frequency;"));
          B1A = new Frequency(env->getStaticObjectField(cls, "B1A", "Lorg/orekit/gnss/Frequency;"));
          B1C = new Frequency(env->getStaticObjectField(cls, "B1C", "Lorg/orekit/gnss/Frequency;"));
          B2A = new Frequency(env->getStaticObjectField(cls, "B2A", "Lorg/orekit/gnss/Frequency;"));
          B2B = new Frequency(env->getStaticObjectField(cls, "B2B", "Lorg/orekit/gnss/Frequency;"));
          B3A = new Frequency(env->getStaticObjectField(cls, "B3A", "Lorg/orekit/gnss/Frequency;"));
          C01 = new Frequency(env->getStaticObjectField(cls, "C01", "Lorg/orekit/gnss/Frequency;"));
          C02 = new Frequency(env->getStaticObjectField(cls, "C02", "Lorg/orekit/gnss/Frequency;"));
          C05 = new Frequency(env->getStaticObjectField(cls, "C05", "Lorg/orekit/gnss/Frequency;"));
          C06 = new Frequency(env->getStaticObjectField(cls, "C06", "Lorg/orekit/gnss/Frequency;"));
          C07 = new Frequency(env->getStaticObjectField(cls, "C07", "Lorg/orekit/gnss/Frequency;"));
          C08 = new Frequency(env->getStaticObjectField(cls, "C08", "Lorg/orekit/gnss/Frequency;"));
          E01 = new Frequency(env->getStaticObjectField(cls, "E01", "Lorg/orekit/gnss/Frequency;"));
          E05 = new Frequency(env->getStaticObjectField(cls, "E05", "Lorg/orekit/gnss/Frequency;"));
          E06 = new Frequency(env->getStaticObjectField(cls, "E06", "Lorg/orekit/gnss/Frequency;"));
          E07 = new Frequency(env->getStaticObjectField(cls, "E07", "Lorg/orekit/gnss/Frequency;"));
          E08 = new Frequency(env->getStaticObjectField(cls, "E08", "Lorg/orekit/gnss/Frequency;"));
          F0 = env->getStaticDoubleField(cls, "F0");
          G01 = new Frequency(env->getStaticObjectField(cls, "G01", "Lorg/orekit/gnss/Frequency;"));
          G02 = new Frequency(env->getStaticObjectField(cls, "G02", "Lorg/orekit/gnss/Frequency;"));
          G05 = new Frequency(env->getStaticObjectField(cls, "G05", "Lorg/orekit/gnss/Frequency;"));
          I05 = new Frequency(env->getStaticObjectField(cls, "I05", "Lorg/orekit/gnss/Frequency;"));
          I09 = new Frequency(env->getStaticObjectField(cls, "I09", "Lorg/orekit/gnss/Frequency;"));
          J01 = new Frequency(env->getStaticObjectField(cls, "J01", "Lorg/orekit/gnss/Frequency;"));
          J02 = new Frequency(env->getStaticObjectField(cls, "J02", "Lorg/orekit/gnss/Frequency;"));
          J05 = new Frequency(env->getStaticObjectField(cls, "J05", "Lorg/orekit/gnss/Frequency;"));
          J06 = new Frequency(env->getStaticObjectField(cls, "J06", "Lorg/orekit/gnss/Frequency;"));
          R01 = new Frequency(env->getStaticObjectField(cls, "R01", "Lorg/orekit/gnss/Frequency;"));
          R02 = new Frequency(env->getStaticObjectField(cls, "R02", "Lorg/orekit/gnss/Frequency;"));
          R03 = new Frequency(env->getStaticObjectField(cls, "R03", "Lorg/orekit/gnss/Frequency;"));
          R04 = new Frequency(env->getStaticObjectField(cls, "R04", "Lorg/orekit/gnss/Frequency;"));
          R06 = new Frequency(env->getStaticObjectField(cls, "R06", "Lorg/orekit/gnss/Frequency;"));
          S01 = new Frequency(env->getStaticObjectField(cls, "S01", "Lorg/orekit/gnss/Frequency;"));
          S05 = new Frequency(env->getStaticObjectField(cls, "S05", "Lorg/orekit/gnss/Frequency;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Frequency::getMHzFrequency() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMHzFrequency_557b8123390d8d0c]);
      }

      ::java::lang::String Frequency::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      jdouble Frequency::getRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRatio_557b8123390d8d0c]);
      }

      ::org::orekit::gnss::SatelliteSystem Frequency::getSatelliteSystem() const
      {
        return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_8b86408cc2633961]));
      }

      jdouble Frequency::getWavelength() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getWavelength_557b8123390d8d0c]);
      }

      Frequency Frequency::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Frequency(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f9a1573446bcb1a9], a0.this$));
      }

      JArray< Frequency > Frequency::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< Frequency >(env->callStaticObjectMethod(cls, mids$[mid_values_196803915cb3dc3b]));
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
      static PyObject *t_Frequency_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frequency_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frequency_of_(t_Frequency *self, PyObject *args);
      static PyObject *t_Frequency_getMHzFrequency(t_Frequency *self);
      static PyObject *t_Frequency_getName(t_Frequency *self);
      static PyObject *t_Frequency_getRatio(t_Frequency *self);
      static PyObject *t_Frequency_getSatelliteSystem(t_Frequency *self);
      static PyObject *t_Frequency_getWavelength(t_Frequency *self);
      static PyObject *t_Frequency_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Frequency_values(PyTypeObject *type);
      static PyObject *t_Frequency_get__mHzFrequency(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__name(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__ratio(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__satelliteSystem(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__wavelength(t_Frequency *self, void *data);
      static PyObject *t_Frequency_get__parameters_(t_Frequency *self, void *data);
      static PyGetSetDef t_Frequency__fields_[] = {
        DECLARE_GET_FIELD(t_Frequency, mHzFrequency),
        DECLARE_GET_FIELD(t_Frequency, name),
        DECLARE_GET_FIELD(t_Frequency, ratio),
        DECLARE_GET_FIELD(t_Frequency, satelliteSystem),
        DECLARE_GET_FIELD(t_Frequency, wavelength),
        DECLARE_GET_FIELD(t_Frequency, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frequency__methods_[] = {
        DECLARE_METHOD(t_Frequency, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frequency, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frequency, of_, METH_VARARGS),
        DECLARE_METHOD(t_Frequency, getMHzFrequency, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getName, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getRatio, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getSatelliteSystem, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, getWavelength, METH_NOARGS),
        DECLARE_METHOD(t_Frequency, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Frequency, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frequency)[] = {
        { Py_tp_methods, t_Frequency__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Frequency__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frequency)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(Frequency, t_Frequency, Frequency);
      PyObject *t_Frequency::wrap_Object(const Frequency& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Frequency::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Frequency *self = (t_Frequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Frequency::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Frequency::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Frequency *self = (t_Frequency *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Frequency::install(PyObject *module)
      {
        installType(&PY_TYPE(Frequency), &PY_TYPE_DEF(Frequency), module, "Frequency", 0);
      }

      void t_Frequency::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "class_", make_descriptor(Frequency::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "wrapfn_", make_descriptor(t_Frequency::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "boxfn_", make_descriptor(boxObject));
        env->getClass(Frequency::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B01", make_descriptor(t_Frequency::wrap_Object(*Frequency::B01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B02", make_descriptor(t_Frequency::wrap_Object(*Frequency::B02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B03", make_descriptor(t_Frequency::wrap_Object(*Frequency::B03)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B08", make_descriptor(t_Frequency::wrap_Object(*Frequency::B08)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B1A", make_descriptor(t_Frequency::wrap_Object(*Frequency::B1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B1C", make_descriptor(t_Frequency::wrap_Object(*Frequency::B1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B2A", make_descriptor(t_Frequency::wrap_Object(*Frequency::B2A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B2B", make_descriptor(t_Frequency::wrap_Object(*Frequency::B2B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "B3A", make_descriptor(t_Frequency::wrap_Object(*Frequency::B3A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C01", make_descriptor(t_Frequency::wrap_Object(*Frequency::C01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C02", make_descriptor(t_Frequency::wrap_Object(*Frequency::C02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C05", make_descriptor(t_Frequency::wrap_Object(*Frequency::C05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C06", make_descriptor(t_Frequency::wrap_Object(*Frequency::C06)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C07", make_descriptor(t_Frequency::wrap_Object(*Frequency::C07)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "C08", make_descriptor(t_Frequency::wrap_Object(*Frequency::C08)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E01", make_descriptor(t_Frequency::wrap_Object(*Frequency::E01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E05", make_descriptor(t_Frequency::wrap_Object(*Frequency::E05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E06", make_descriptor(t_Frequency::wrap_Object(*Frequency::E06)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E07", make_descriptor(t_Frequency::wrap_Object(*Frequency::E07)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "E08", make_descriptor(t_Frequency::wrap_Object(*Frequency::E08)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "F0", make_descriptor(Frequency::F0));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "G01", make_descriptor(t_Frequency::wrap_Object(*Frequency::G01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "G02", make_descriptor(t_Frequency::wrap_Object(*Frequency::G02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "G05", make_descriptor(t_Frequency::wrap_Object(*Frequency::G05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "I05", make_descriptor(t_Frequency::wrap_Object(*Frequency::I05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "I09", make_descriptor(t_Frequency::wrap_Object(*Frequency::I09)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "J01", make_descriptor(t_Frequency::wrap_Object(*Frequency::J01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "J02", make_descriptor(t_Frequency::wrap_Object(*Frequency::J02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "J05", make_descriptor(t_Frequency::wrap_Object(*Frequency::J05)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "J06", make_descriptor(t_Frequency::wrap_Object(*Frequency::J06)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R01", make_descriptor(t_Frequency::wrap_Object(*Frequency::R01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R02", make_descriptor(t_Frequency::wrap_Object(*Frequency::R02)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R03", make_descriptor(t_Frequency::wrap_Object(*Frequency::R03)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R04", make_descriptor(t_Frequency::wrap_Object(*Frequency::R04)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "R06", make_descriptor(t_Frequency::wrap_Object(*Frequency::R06)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "S01", make_descriptor(t_Frequency::wrap_Object(*Frequency::S01)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frequency), "S05", make_descriptor(t_Frequency::wrap_Object(*Frequency::S05)));
      }

      static PyObject *t_Frequency_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Frequency::initializeClass, 1)))
          return NULL;
        return t_Frequency::wrap_Object(Frequency(((t_Frequency *) arg)->object.this$));
      }
      static PyObject *t_Frequency_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Frequency::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Frequency_of_(t_Frequency *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Frequency_getMHzFrequency(t_Frequency *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMHzFrequency());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Frequency_getName(t_Frequency *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_Frequency_getRatio(t_Frequency *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Frequency_getSatelliteSystem(t_Frequency *self)
      {
        ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
        OBJ_CALL(result = self->object.getSatelliteSystem());
        return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
      }

      static PyObject *t_Frequency_getWavelength(t_Frequency *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getWavelength());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Frequency_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        Frequency result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::Frequency::valueOf(a0));
          return t_Frequency::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_Frequency_values(PyTypeObject *type)
      {
        JArray< Frequency > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::Frequency::values());
        return JArray<jobject>(result.this$).wrap(t_Frequency::wrap_jobject);
      }
      static PyObject *t_Frequency_get__parameters_(t_Frequency *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Frequency_get__mHzFrequency(t_Frequency *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMHzFrequency());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Frequency_get__name(t_Frequency *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_Frequency_get__ratio(t_Frequency *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Frequency_get__satelliteSystem(t_Frequency *self, void *data)
      {
        ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
        OBJ_CALL(value = self->object.getSatelliteSystem());
        return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
      }

      static PyObject *t_Frequency_get__wavelength(t_Frequency *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getWavelength());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
