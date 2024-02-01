#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/iod/IodLaplace.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodLaplace::class$ = NULL;
        jmethodID *IodLaplace::mids$ = NULL;
        bool IodLaplace::live$ = false;

        jclass IodLaplace::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodLaplace");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_d3a935233cda59ab] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_5767f052c979bd65] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_6b0243013bab8dcb] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodLaplace::IodLaplace(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        ::org::orekit::orbits::Orbit IodLaplace::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_d3a935233cda59ab], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodLaplace::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_5767f052c979bd65], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodLaplace::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::time::AbsoluteDate & a6, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a7) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_6b0243013bab8dcb], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
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
        static PyObject *t_IodLaplace_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodLaplace_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodLaplace_init_(t_IodLaplace *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodLaplace_estimate(t_IodLaplace *self, PyObject *args);

        static PyMethodDef t_IodLaplace__methods_[] = {
          DECLARE_METHOD(t_IodLaplace, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodLaplace, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodLaplace, estimate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodLaplace)[] = {
          { Py_tp_methods, t_IodLaplace__methods_ },
          { Py_tp_init, (void *) t_IodLaplace_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodLaplace)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodLaplace, t_IodLaplace, IodLaplace);

        void t_IodLaplace::install(PyObject *module)
        {
          installType(&PY_TYPE(IodLaplace), &PY_TYPE_DEF(IodLaplace), module, "IodLaplace", 0);
        }

        void t_IodLaplace::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLaplace), "class_", make_descriptor(IodLaplace::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLaplace), "wrapfn_", make_descriptor(t_IodLaplace::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLaplace), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodLaplace_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodLaplace::initializeClass, 1)))
            return NULL;
          return t_IodLaplace::wrap_Object(IodLaplace(((t_IodLaplace *) arg)->object.this$));
        }
        static PyObject *t_IodLaplace_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodLaplace::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodLaplace_init_(t_IodLaplace *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodLaplace object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodLaplace(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodLaplace_estimate(t_IodLaplace *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularAzEl a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularAzEl a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularAzEl a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularRaDec a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularRaDec a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularRaDec a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a6((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a7((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7));
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
#include "org/orekit/utils/ImmutableFieldTimeStampedCache.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/ImmutableFieldTimeStampedCache.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/FieldTimeStampedCache.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ImmutableFieldTimeStampedCache::class$ = NULL;
      jmethodID *ImmutableFieldTimeStampedCache::mids$ = NULL;
      bool ImmutableFieldTimeStampedCache::live$ = false;

      jclass ImmutableFieldTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ImmutableFieldTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1d943e35e7f31ea1] = env->getMethodID(cls, "<init>", "(ILjava/util/Collection;)V");
          mids$[mid_emptyCache_bd8b621701a2c22c] = env->getStaticMethodID(cls, "emptyCache", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/ImmutableFieldTimeStampedCache;");
          mids$[mid_getAll_d751c1a57012b438] = env->getMethodID(cls, "getAll", "()Ljava/util/List;");
          mids$[mid_getEarliest_eb7a4124bb25f40f] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getLatest_eb7a4124bb25f40f] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getNeighbors_9de8811782a2be8a] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighborsSize_d6ab429752e7c267] = env->getMethodID(cls, "getNeighborsSize", "()I");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ImmutableFieldTimeStampedCache::ImmutableFieldTimeStampedCache(jint a0, const ::java::util::Collection & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d943e35e7f31ea1, a0, a1.this$)) {}

      ImmutableFieldTimeStampedCache ImmutableFieldTimeStampedCache::emptyCache(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ImmutableFieldTimeStampedCache(env->callStaticObjectMethod(cls, mids$[mid_emptyCache_bd8b621701a2c22c], a0.this$));
      }

      ::java::util::List ImmutableFieldTimeStampedCache::getAll() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAll_d751c1a57012b438]));
      }

      ::org::orekit::time::FieldTimeStamped ImmutableFieldTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_eb7a4124bb25f40f]));
      }

      ::org::orekit::time::FieldTimeStamped ImmutableFieldTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_eb7a4124bb25f40f]));
      }

      ::java::util::stream::Stream ImmutableFieldTimeStampedCache::getNeighbors(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_9de8811782a2be8a], a0.this$));
      }

      jint ImmutableFieldTimeStampedCache::getNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getNeighborsSize_d6ab429752e7c267]);
      }

      ::java::lang::String ImmutableFieldTimeStampedCache::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      static PyObject *t_ImmutableFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_of_(t_ImmutableFieldTimeStampedCache *self, PyObject *args);
      static int t_ImmutableFieldTimeStampedCache_init_(t_ImmutableFieldTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ImmutableFieldTimeStampedCache_emptyCache(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_getAll(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_getEarliest(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_getLatest(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighbors(t_ImmutableFieldTimeStampedCache *self, PyObject *arg);
      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighborsSize(t_ImmutableFieldTimeStampedCache *self);
      static PyObject *t_ImmutableFieldTimeStampedCache_toString(t_ImmutableFieldTimeStampedCache *self, PyObject *args);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__all(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__earliest(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__latest(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__neighborsSize(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableFieldTimeStampedCache_get__parameters_(t_ImmutableFieldTimeStampedCache *self, void *data);
      static PyGetSetDef t_ImmutableFieldTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, all),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, neighborsSize),
        DECLARE_GET_FIELD(t_ImmutableFieldTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ImmutableFieldTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, emptyCache, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getAll, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getNeighbors, METH_O),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, getNeighborsSize, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableFieldTimeStampedCache, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ImmutableFieldTimeStampedCache)[] = {
        { Py_tp_methods, t_ImmutableFieldTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_ImmutableFieldTimeStampedCache_init_ },
        { Py_tp_getset, t_ImmutableFieldTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ImmutableFieldTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ImmutableFieldTimeStampedCache, t_ImmutableFieldTimeStampedCache, ImmutableFieldTimeStampedCache);
      PyObject *t_ImmutableFieldTimeStampedCache::wrap_Object(const ImmutableFieldTimeStampedCache& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_ImmutableFieldTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableFieldTimeStampedCache *self = (t_ImmutableFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_ImmutableFieldTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_ImmutableFieldTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableFieldTimeStampedCache *self = (t_ImmutableFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_ImmutableFieldTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(ImmutableFieldTimeStampedCache), &PY_TYPE_DEF(ImmutableFieldTimeStampedCache), module, "ImmutableFieldTimeStampedCache", 0);
      }

      void t_ImmutableFieldTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableFieldTimeStampedCache), "class_", make_descriptor(ImmutableFieldTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableFieldTimeStampedCache), "wrapfn_", make_descriptor(t_ImmutableFieldTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableFieldTimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ImmutableFieldTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_ImmutableFieldTimeStampedCache::wrap_Object(ImmutableFieldTimeStampedCache(((t_ImmutableFieldTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_ImmutableFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ImmutableFieldTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_of_(t_ImmutableFieldTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ImmutableFieldTimeStampedCache_init_(t_ImmutableFieldTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ImmutableFieldTimeStampedCache object((jobject) NULL);

        if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = ImmutableFieldTimeStampedCache(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_emptyCache(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ImmutableFieldTimeStampedCache result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::ImmutableFieldTimeStampedCache::emptyCache(a0));
          return t_ImmutableFieldTimeStampedCache::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "emptyCache", arg);
        return NULL;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getAll(t_ImmutableFieldTimeStampedCache *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAll());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getEarliest(t_ImmutableFieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getLatest(t_ImmutableFieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighbors(t_ImmutableFieldTimeStampedCache *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", arg);
        return NULL;
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_getNeighborsSize(t_ImmutableFieldTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNeighborsSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_toString(t_ImmutableFieldTimeStampedCache *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ImmutableFieldTimeStampedCache), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_ImmutableFieldTimeStampedCache_get__parameters_(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__all(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAll());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__earliest(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__latest(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableFieldTimeStampedCache_get__neighborsSize(t_ImmutableFieldTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNeighborsSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsBashforthIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsBashforthIntegrator::class$ = NULL;
        jmethodID *AdamsBashforthIntegrator::mids$ = NULL;
        bool AdamsBashforthIntegrator::live$ = false;

        jclass AdamsBashforthIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsBashforthIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cf4807ec2bf81436] = env->getMethodID(cls, "<init>", "(IDD[D[D)V");
            mids$[mid_init$_a1282fa5ba2ed7b2] = env->getMethodID(cls, "<init>", "(IDDDD)V");
            mids$[mid_errorEstimation_37b70b019b7ede26] = env->getMethodID(cls, "errorEstimation", "([DD[D[DLorg/hipparchus/linear/RealMatrix;)D");
            mids$[mid_finalizeStep_26e1f9270ed9200b] = env->getMethodID(cls, "finalizeStep", "(D[D[DLorg/hipparchus/linear/Array2DRowRealMatrix;ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthIntegrator::AdamsBashforthIntegrator(jint a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_cf4807ec2bf81436, a0, a1, a2, a3.this$, a4.this$)) {}

        AdamsBashforthIntegrator::AdamsBashforthIntegrator(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::AdamsIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a1282fa5ba2ed7b2, a0, a1, a2, a3, a4)) {}
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
        static PyObject *t_AdamsBashforthIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsBashforthIntegrator_init_(t_AdamsBashforthIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_AdamsBashforthIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthIntegrator)[] = {
          { Py_tp_methods, t_AdamsBashforthIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthIntegrator, t_AdamsBashforthIntegrator, AdamsBashforthIntegrator);

        void t_AdamsBashforthIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthIntegrator), &PY_TYPE_DEF(AdamsBashforthIntegrator), module, "AdamsBashforthIntegrator", 0);
        }

        void t_AdamsBashforthIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegrator), "class_", make_descriptor(AdamsBashforthIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegrator), "wrapfn_", make_descriptor(t_AdamsBashforthIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthIntegrator::wrap_Object(AdamsBashforthIntegrator(((t_AdamsBashforthIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsBashforthIntegrator_init_(t_AdamsBashforthIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              AdamsBashforthIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDD[D[D", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsBashforthIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              AdamsBashforthIntegrator object((jobject) NULL);

              if (!parseArgs(args, "IDDDD", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = AdamsBashforthIntegrator(a0, a1, a2, a3, a4));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        ::java::lang::Class *TiesStrategy::class$ = NULL;
        jmethodID *TiesStrategy::mids$ = NULL;
        bool TiesStrategy::live$ = false;
        TiesStrategy *TiesStrategy::AVERAGE = NULL;
        TiesStrategy *TiesStrategy::MAXIMUM = NULL;
        TiesStrategy *TiesStrategy::MINIMUM = NULL;
        TiesStrategy *TiesStrategy::RANDOM = NULL;
        TiesStrategy *TiesStrategy::SEQUENTIAL = NULL;

        jclass TiesStrategy::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/ranking/TiesStrategy");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_924925843256ee07] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/ranking/TiesStrategy;");
            mids$[mid_values_898c1fadeffdd6a7] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/ranking/TiesStrategy;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            AVERAGE = new TiesStrategy(env->getStaticObjectField(cls, "AVERAGE", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            MAXIMUM = new TiesStrategy(env->getStaticObjectField(cls, "MAXIMUM", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            MINIMUM = new TiesStrategy(env->getStaticObjectField(cls, "MINIMUM", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            RANDOM = new TiesStrategy(env->getStaticObjectField(cls, "RANDOM", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            SEQUENTIAL = new TiesStrategy(env->getStaticObjectField(cls, "SEQUENTIAL", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TiesStrategy TiesStrategy::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return TiesStrategy(env->callStaticObjectMethod(cls, mids$[mid_valueOf_924925843256ee07], a0.this$));
        }

        JArray< TiesStrategy > TiesStrategy::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< TiesStrategy >(env->callStaticObjectMethod(cls, mids$[mid_values_898c1fadeffdd6a7]));
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
      namespace ranking {
        static PyObject *t_TiesStrategy_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TiesStrategy_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TiesStrategy_of_(t_TiesStrategy *self, PyObject *args);
        static PyObject *t_TiesStrategy_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_TiesStrategy_values(PyTypeObject *type);
        static PyObject *t_TiesStrategy_get__parameters_(t_TiesStrategy *self, void *data);
        static PyGetSetDef t_TiesStrategy__fields_[] = {
          DECLARE_GET_FIELD(t_TiesStrategy, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TiesStrategy__methods_[] = {
          DECLARE_METHOD(t_TiesStrategy, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TiesStrategy, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TiesStrategy, of_, METH_VARARGS),
          DECLARE_METHOD(t_TiesStrategy, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_TiesStrategy, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TiesStrategy)[] = {
          { Py_tp_methods, t_TiesStrategy__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TiesStrategy__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TiesStrategy)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(TiesStrategy, t_TiesStrategy, TiesStrategy);
        PyObject *t_TiesStrategy::wrap_Object(const TiesStrategy& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TiesStrategy::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TiesStrategy *self = (t_TiesStrategy *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TiesStrategy::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TiesStrategy::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TiesStrategy *self = (t_TiesStrategy *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TiesStrategy::install(PyObject *module)
        {
          installType(&PY_TYPE(TiesStrategy), &PY_TYPE_DEF(TiesStrategy), module, "TiesStrategy", 0);
        }

        void t_TiesStrategy::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "class_", make_descriptor(TiesStrategy::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "wrapfn_", make_descriptor(t_TiesStrategy::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "boxfn_", make_descriptor(boxObject));
          env->getClass(TiesStrategy::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "AVERAGE", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::AVERAGE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "MAXIMUM", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::MAXIMUM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "MINIMUM", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::MINIMUM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "RANDOM", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::RANDOM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "SEQUENTIAL", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::SEQUENTIAL)));
        }

        static PyObject *t_TiesStrategy_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TiesStrategy::initializeClass, 1)))
            return NULL;
          return t_TiesStrategy::wrap_Object(TiesStrategy(((t_TiesStrategy *) arg)->object.this$));
        }
        static PyObject *t_TiesStrategy_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TiesStrategy::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TiesStrategy_of_(t_TiesStrategy *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_TiesStrategy_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          TiesStrategy result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::ranking::TiesStrategy::valueOf(a0));
            return t_TiesStrategy::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_TiesStrategy_values(PyTypeObject *type)
        {
          JArray< TiesStrategy > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::ranking::TiesStrategy::values());
          return JArray<jobject>(result.this$).wrap(t_TiesStrategy::wrap_jobject);
        }
        static PyObject *t_TiesStrategy_get__parameters_(t_TiesStrategy *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$FrRangeMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$FrRangeMeasurement::class$ = NULL;
        jmethodID *CRD$FrRangeMeasurement::mids$ = NULL;
        bool CRD$FrRangeMeasurement::live$ = false;

        jclass CRD$FrRangeMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$FrRangeMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1541380041469237] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DILjava/lang/String;IIIII)V");
            mids$[mid_getDetectorChannel_d6ab429752e7c267] = env->getMethodID(cls, "getDetectorChannel", "()I");
            mids$[mid_getFilterFlag_d6ab429752e7c267] = env->getMethodID(cls, "getFilterFlag", "()I");
            mids$[mid_getReceiveAmplitude_d6ab429752e7c267] = env->getMethodID(cls, "getReceiveAmplitude", "()I");
            mids$[mid_getStopNumber_d6ab429752e7c267] = env->getMethodID(cls, "getStopNumber", "()I");
            mids$[mid_getTransmitAmplitude_d6ab429752e7c267] = env->getMethodID(cls, "getTransmitAmplitude", "()I");
            mids$[mid_toCrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$FrRangeMeasurement::CRD$FrRangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, const ::java::lang::String & a3, jint a4, jint a5, jint a6, jint a7, jint a8) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(env->newObject(initializeClass, &mids$, mid_init$_1541380041469237, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        jint CRD$FrRangeMeasurement::getDetectorChannel() const
        {
          return env->callIntMethod(this$, mids$[mid_getDetectorChannel_d6ab429752e7c267]);
        }

        jint CRD$FrRangeMeasurement::getFilterFlag() const
        {
          return env->callIntMethod(this$, mids$[mid_getFilterFlag_d6ab429752e7c267]);
        }

        jint CRD$FrRangeMeasurement::getReceiveAmplitude() const
        {
          return env->callIntMethod(this$, mids$[mid_getReceiveAmplitude_d6ab429752e7c267]);
        }

        jint CRD$FrRangeMeasurement::getStopNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getStopNumber_d6ab429752e7c267]);
        }

        jint CRD$FrRangeMeasurement::getTransmitAmplitude() const
        {
          return env->callIntMethod(this$, mids$[mid_getTransmitAmplitude_d6ab429752e7c267]);
        }

        ::java::lang::String CRD$FrRangeMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRD$FrRangeMeasurement::toString() const
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
        static PyObject *t_CRD$FrRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$FrRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$FrRangeMeasurement_init_(t_CRD$FrRangeMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$FrRangeMeasurement_getDetectorChannel(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getFilterFlag(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getReceiveAmplitude(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getStopNumber(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getTransmitAmplitude(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_toCrdString(t_CRD$FrRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$FrRangeMeasurement_toString(t_CRD$FrRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$FrRangeMeasurement_get__detectorChannel(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__filterFlag(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__receiveAmplitude(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__stopNumber(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__transmitAmplitude(t_CRD$FrRangeMeasurement *self, void *data);
        static PyGetSetDef t_CRD$FrRangeMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, detectorChannel),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, filterFlag),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, receiveAmplitude),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, stopNumber),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, transmitAmplitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$FrRangeMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getDetectorChannel, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getFilterFlag, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getReceiveAmplitude, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getStopNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getTransmitAmplitude, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$FrRangeMeasurement)[] = {
          { Py_tp_methods, t_CRD$FrRangeMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$FrRangeMeasurement_init_ },
          { Py_tp_getset, t_CRD$FrRangeMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$FrRangeMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRD$RangeMeasurement),
          NULL
        };

        DEFINE_TYPE(CRD$FrRangeMeasurement, t_CRD$FrRangeMeasurement, CRD$FrRangeMeasurement);

        void t_CRD$FrRangeMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$FrRangeMeasurement), &PY_TYPE_DEF(CRD$FrRangeMeasurement), module, "CRD$FrRangeMeasurement", 0);
        }

        void t_CRD$FrRangeMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$FrRangeMeasurement), "class_", make_descriptor(CRD$FrRangeMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$FrRangeMeasurement), "wrapfn_", make_descriptor(t_CRD$FrRangeMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$FrRangeMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$FrRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$FrRangeMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$FrRangeMeasurement::wrap_Object(CRD$FrRangeMeasurement(((t_CRD$FrRangeMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$FrRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$FrRangeMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$FrRangeMeasurement_init_(t_CRD$FrRangeMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          jint a2;
          ::java::lang::String a3((jobject) NULL);
          jint a4;
          jint a5;
          jint a6;
          jint a7;
          jint a8;
          CRD$FrRangeMeasurement object((jobject) NULL);

          if (!parseArgs(args, "kDIsIIIII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
          {
            INT_CALL(object = CRD$FrRangeMeasurement(a0, a1, a2, a3, a4, a5, a6, a7, a8));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$FrRangeMeasurement_getDetectorChannel(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDetectorChannel());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getFilterFlag(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFilterFlag());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getReceiveAmplitude(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getReceiveAmplitude());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getStopNumber(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getStopNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getTransmitAmplitude(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTransmitAmplitude());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_toCrdString(t_CRD$FrRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$FrRangeMeasurement), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRD$FrRangeMeasurement_toString(t_CRD$FrRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$FrRangeMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__detectorChannel(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDetectorChannel());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__filterFlag(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFilterFlag());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__receiveAmplitude(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getReceiveAmplitude());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__stopNumber(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getStopNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__transmitAmplitude(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTransmitAmplitude());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSAlmanac.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GLONASSAlmanac::class$ = NULL;
            jmethodID *GLONASSAlmanac::mids$ = NULL;
            bool GLONASSAlmanac::live$ = false;

            jclass GLONASSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GLONASSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_db78ca712b0ab225] = env->getMethodID(cls, "<init>", "(IIIIIDDDDDDDDDD)V");
                mids$[mid_init$_07ce4eba6dbba556] = env->getMethodID(cls, "<init>", "(IIIIIDDDDDDDDDDLorg/orekit/time/TimeScale;)V");
                mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getDeltaI_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaI", "()D");
                mids$[mid_getDeltaT_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaT", "()D");
                mids$[mid_getDeltaTDot_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaTDot", "()D");
                mids$[mid_getE_9981f74b2d109da6] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getFrequencyChannel_d6ab429752e7c267] = env->getMethodID(cls, "getFrequencyChannel", "()I");
                mids$[mid_getGPS2Glo_9981f74b2d109da6] = env->getMethodID(cls, "getGPS2Glo", "()D");
                mids$[mid_getGlo2UTC_9981f74b2d109da6] = env->getMethodID(cls, "getGlo2UTC", "()D");
                mids$[mid_getGloOffset_9981f74b2d109da6] = env->getMethodID(cls, "getGloOffset", "()D");
                mids$[mid_getHealth_d6ab429752e7c267] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getLambda_9981f74b2d109da6] = env->getMethodID(cls, "getLambda", "()D");
                mids$[mid_getN4_d6ab429752e7c267] = env->getMethodID(cls, "getN4", "()I");
                mids$[mid_getNa_d6ab429752e7c267] = env->getMethodID(cls, "getNa", "()I");
                mids$[mid_getPa_9981f74b2d109da6] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getPropagator_395024687c74c4c6] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
                mids$[mid_getPropagator_54aafda0be43f095] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/data/DataContext;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
                mids$[mid_getPropagator_355ae83e2e2ce3b9] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/data/DataContext;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;D)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
                mids$[mid_getTime_9981f74b2d109da6] = env->getMethodID(cls, "getTime", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GLONASSAlmanac::GLONASSAlmanac(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_db78ca712b0ab225, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14)) {}

            GLONASSAlmanac::GLONASSAlmanac(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, const ::org::orekit::time::TimeScale & a15) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07ce4eba6dbba556, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15.this$)) {}

            ::org::orekit::time::AbsoluteDate GLONASSAlmanac::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
            }

            jdouble GLONASSAlmanac::getDeltaI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaI_9981f74b2d109da6]);
            }

            jdouble GLONASSAlmanac::getDeltaT() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaT_9981f74b2d109da6]);
            }

            jdouble GLONASSAlmanac::getDeltaTDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaTDot_9981f74b2d109da6]);
            }

            jdouble GLONASSAlmanac::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_9981f74b2d109da6]);
            }

            jint GLONASSAlmanac::getFrequencyChannel() const
            {
              return env->callIntMethod(this$, mids$[mid_getFrequencyChannel_d6ab429752e7c267]);
            }

            jdouble GLONASSAlmanac::getGPS2Glo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGPS2Glo_9981f74b2d109da6]);
            }

            jdouble GLONASSAlmanac::getGlo2UTC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGlo2UTC_9981f74b2d109da6]);
            }

            jdouble GLONASSAlmanac::getGloOffset() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGloOffset_9981f74b2d109da6]);
            }

            jint GLONASSAlmanac::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_d6ab429752e7c267]);
            }

            jdouble GLONASSAlmanac::getLambda() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLambda_9981f74b2d109da6]);
            }

            jint GLONASSAlmanac::getN4() const
            {
              return env->callIntMethod(this$, mids$[mid_getN4_d6ab429752e7c267]);
            }

            jint GLONASSAlmanac::getNa() const
            {
              return env->callIntMethod(this$, mids$[mid_getNa_d6ab429752e7c267]);
            }

            jdouble GLONASSAlmanac::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_9981f74b2d109da6]);
            }

            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAlmanac::getPropagator() const
            {
              return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_395024687c74c4c6]));
            }

            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAlmanac::getPropagator(const ::org::orekit::data::DataContext & a0) const
            {
              return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_54aafda0be43f095], a0.this$));
            }

            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAlmanac::getPropagator(const ::org::orekit::data::DataContext & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, jdouble a4) const
            {
              return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_355ae83e2e2ce3b9], a0.this$, a1.this$, a2.this$, a3.this$, a4));
            }

            jdouble GLONASSAlmanac::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_9981f74b2d109da6]);
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
            static PyObject *t_GLONASSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GLONASSAlmanac_init_(t_GLONASSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GLONASSAlmanac_getDate(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getDeltaI(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getDeltaT(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getDeltaTDot(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getE(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getFrequencyChannel(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getGPS2Glo(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getGlo2UTC(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getGloOffset(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getHealth(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getLambda(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getN4(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getNa(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getPa(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_getPropagator(t_GLONASSAlmanac *self, PyObject *args);
            static PyObject *t_GLONASSAlmanac_getTime(t_GLONASSAlmanac *self);
            static PyObject *t_GLONASSAlmanac_get__date(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__deltaI(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__deltaT(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__deltaTDot(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__e(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__frequencyChannel(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__gPS2Glo(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__glo2UTC(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__gloOffset(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__health(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__lambda(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__n4(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__na(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__pa(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__propagator(t_GLONASSAlmanac *self, void *data);
            static PyObject *t_GLONASSAlmanac_get__time(t_GLONASSAlmanac *self, void *data);
            static PyGetSetDef t_GLONASSAlmanac__fields_[] = {
              DECLARE_GET_FIELD(t_GLONASSAlmanac, date),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, deltaI),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, deltaT),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, deltaTDot),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, e),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, frequencyChannel),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, gPS2Glo),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, glo2UTC),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, gloOffset),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, health),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, lambda),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, n4),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, na),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, pa),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, propagator),
              DECLARE_GET_FIELD(t_GLONASSAlmanac, time),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GLONASSAlmanac__methods_[] = {
              DECLARE_METHOD(t_GLONASSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDate, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDeltaI, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDeltaT, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getDeltaTDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getE, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getFrequencyChannel, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getGPS2Glo, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getGlo2UTC, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getGloOffset, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getLambda, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getN4, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getNa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getPa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getPropagator, METH_VARARGS),
              DECLARE_METHOD(t_GLONASSAlmanac, getTime, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GLONASSAlmanac)[] = {
              { Py_tp_methods, t_GLONASSAlmanac__methods_ },
              { Py_tp_init, (void *) t_GLONASSAlmanac_init_ },
              { Py_tp_getset, t_GLONASSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GLONASSAlmanac)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GLONASSAlmanac, t_GLONASSAlmanac, GLONASSAlmanac);

            void t_GLONASSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(GLONASSAlmanac), &PY_TYPE_DEF(GLONASSAlmanac), module, "GLONASSAlmanac", 0);
            }

            void t_GLONASSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAlmanac), "class_", make_descriptor(GLONASSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAlmanac), "wrapfn_", make_descriptor(t_GLONASSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GLONASSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GLONASSAlmanac::initializeClass, 1)))
                return NULL;
              return t_GLONASSAlmanac::wrap_Object(GLONASSAlmanac(((t_GLONASSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_GLONASSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GLONASSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GLONASSAlmanac_init_(t_GLONASSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 15:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  jdouble a8;
                  jdouble a9;
                  jdouble a10;
                  jdouble a11;
                  jdouble a12;
                  jdouble a13;
                  jdouble a14;
                  GLONASSAlmanac object((jobject) NULL);

                  if (!parseArgs(args, "IIIIIDDDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
                  {
                    INT_CALL(object = GLONASSAlmanac(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 16:
                {
                  jint a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  jdouble a8;
                  jdouble a9;
                  jdouble a10;
                  jdouble a11;
                  jdouble a12;
                  jdouble a13;
                  jdouble a14;
                  ::org::orekit::time::TimeScale a15((jobject) NULL);
                  GLONASSAlmanac object((jobject) NULL);

                  if (!parseArgs(args, "IIIIIDDDDDDDDDDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15))
                  {
                    INT_CALL(object = GLONASSAlmanac(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

            static PyObject *t_GLONASSAlmanac_getDate(t_GLONASSAlmanac *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_GLONASSAlmanac_getDeltaI(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaI());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getDeltaT(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaT());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getDeltaTDot(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getE(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getFrequencyChannel(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getFrequencyChannel());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getGPS2Glo(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGPS2Glo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getGlo2UTC(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGlo2UTC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getGloOffset(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGloOffset());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getHealth(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getLambda(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLambda());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getN4(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getN4());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getNa(t_GLONASSAlmanac *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getNa());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSAlmanac_getPa(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_getPropagator(t_GLONASSAlmanac *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);
                  OBJ_CALL(result = self->object.getPropagator());
                  return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
                }
                break;
               case 1:
                {
                  ::org::orekit::data::DataContext a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0));
                    return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
                  }
                }
                break;
               case 5:
                {
                  ::org::orekit::data::DataContext a0((jobject) NULL);
                  ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  ::org::orekit::frames::Frame a3((jobject) NULL);
                  jdouble a4;
                  ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "kkkkD", ::org::orekit::data::DataContext::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1, a2, a3, a4));
                    return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
              return NULL;
            }

            static PyObject *t_GLONASSAlmanac_getTime(t_GLONASSAlmanac *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSAlmanac_get__date(t_GLONASSAlmanac *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_GLONASSAlmanac_get__deltaI(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaI());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__deltaT(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaT());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__deltaTDot(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__e(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__frequencyChannel(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getFrequencyChannel());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__gPS2Glo(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGPS2Glo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__glo2UTC(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGlo2UTC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__gloOffset(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGloOffset());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__health(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__lambda(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLambda());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__n4(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getN4());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__na(t_GLONASSAlmanac *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getNa());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSAlmanac_get__pa(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSAlmanac_get__propagator(t_GLONASSAlmanac *self, void *data)
            {
              ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator value((jobject) NULL);
              OBJ_CALL(value = self->object.getPropagator());
              return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(value);
            }

            static PyObject *t_GLONASSAlmanac_get__time(t_GLONASSAlmanac *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
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
#include "org/orekit/propagation/events/NodeDetector.h"
#include "org/orekit/propagation/events/NodeDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *NodeDetector::class$ = NULL;
        jmethodID *NodeDetector::mids$ = NULL;
        bool NodeDetector::live$ = false;

        jclass NodeDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/NodeDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9725b246c9e25f68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
            mids$[mid_init$_03add8476181a336] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_init$_10430f06061291e5] = env->getMethodID(cls, "<init>", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_create_b181d8342161da6a] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/NodeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NodeDetector::NodeDetector(const ::org::orekit::frames::Frame & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_9725b246c9e25f68, a0.this$)) {}

        NodeDetector::NodeDetector(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_03add8476181a336, a0.this$, a1.this$)) {}

        NodeDetector::NodeDetector(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_10430f06061291e5, a0, a1.this$, a2.this$)) {}

        jdouble NodeDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::frames::Frame NodeDetector::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
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
        static PyObject *t_NodeDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodeDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodeDetector_of_(t_NodeDetector *self, PyObject *args);
        static int t_NodeDetector_init_(t_NodeDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NodeDetector_g(t_NodeDetector *self, PyObject *args);
        static PyObject *t_NodeDetector_getFrame(t_NodeDetector *self);
        static PyObject *t_NodeDetector_get__frame(t_NodeDetector *self, void *data);
        static PyObject *t_NodeDetector_get__parameters_(t_NodeDetector *self, void *data);
        static PyGetSetDef t_NodeDetector__fields_[] = {
          DECLARE_GET_FIELD(t_NodeDetector, frame),
          DECLARE_GET_FIELD(t_NodeDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NodeDetector__methods_[] = {
          DECLARE_METHOD(t_NodeDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodeDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodeDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_NodeDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_NodeDetector, getFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NodeDetector)[] = {
          { Py_tp_methods, t_NodeDetector__methods_ },
          { Py_tp_init, (void *) t_NodeDetector_init_ },
          { Py_tp_getset, t_NodeDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NodeDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(NodeDetector, t_NodeDetector, NodeDetector);
        PyObject *t_NodeDetector::wrap_Object(const NodeDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodeDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodeDetector *self = (t_NodeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NodeDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodeDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodeDetector *self = (t_NodeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NodeDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(NodeDetector), &PY_TYPE_DEF(NodeDetector), module, "NodeDetector", 0);
        }

        void t_NodeDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodeDetector), "class_", make_descriptor(NodeDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodeDetector), "wrapfn_", make_descriptor(t_NodeDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodeDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NodeDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NodeDetector::initializeClass, 1)))
            return NULL;
          return t_NodeDetector::wrap_Object(NodeDetector(((t_NodeDetector *) arg)->object.this$));
        }
        static PyObject *t_NodeDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NodeDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NodeDetector_of_(t_NodeDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NodeDetector_init_(t_NodeDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              NodeDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
              {
                INT_CALL(object = NodeDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NodeDetector);
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              NodeDetector object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
              {
                INT_CALL(object = NodeDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NodeDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::frames::Frame a2((jobject) NULL);
              NodeDetector object((jobject) NULL);

              if (!parseArgs(args, "Dkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = NodeDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(NodeDetector);
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

        static PyObject *t_NodeDetector_g(t_NodeDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NodeDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_NodeDetector_getFrame(t_NodeDetector *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_NodeDetector_get__parameters_(t_NodeDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_NodeDetector_get__frame(t_NodeDetector *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/PythonCelestialBodyLoader.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonCelestialBodyLoader::class$ = NULL;
      jmethodID *PythonCelestialBodyLoader::mids$ = NULL;
      bool PythonCelestialBodyLoader::live$ = false;

      jclass PythonCelestialBodyLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonCelestialBodyLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_loadCelestialBody_0ed99bba3e5bd60c] = env->getMethodID(cls, "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonCelestialBodyLoader::PythonCelestialBodyLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonCelestialBodyLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonCelestialBodyLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonCelestialBodyLoader::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonCelestialBodyLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonCelestialBodyLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonCelestialBodyLoader_init_(t_PythonCelestialBodyLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonCelestialBodyLoader_finalize(t_PythonCelestialBodyLoader *self);
      static PyObject *t_PythonCelestialBodyLoader_pythonExtension(t_PythonCelestialBodyLoader *self, PyObject *args);
      static jobject JNICALL t_PythonCelestialBodyLoader_loadCelestialBody0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonCelestialBodyLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonCelestialBodyLoader_get__self(t_PythonCelestialBodyLoader *self, void *data);
      static PyGetSetDef t_PythonCelestialBodyLoader__fields_[] = {
        DECLARE_GET_FIELD(t_PythonCelestialBodyLoader, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonCelestialBodyLoader__methods_[] = {
        DECLARE_METHOD(t_PythonCelestialBodyLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodyLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodyLoader, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonCelestialBodyLoader, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonCelestialBodyLoader)[] = {
        { Py_tp_methods, t_PythonCelestialBodyLoader__methods_ },
        { Py_tp_init, (void *) t_PythonCelestialBodyLoader_init_ },
        { Py_tp_getset, t_PythonCelestialBodyLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonCelestialBodyLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonCelestialBodyLoader, t_PythonCelestialBodyLoader, PythonCelestialBodyLoader);

      void t_PythonCelestialBodyLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonCelestialBodyLoader), &PY_TYPE_DEF(PythonCelestialBodyLoader), module, "PythonCelestialBodyLoader", 1);
      }

      void t_PythonCelestialBodyLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodyLoader), "class_", make_descriptor(PythonCelestialBodyLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodyLoader), "wrapfn_", make_descriptor(t_PythonCelestialBodyLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodyLoader), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonCelestialBodyLoader::initializeClass);
        JNINativeMethod methods[] = {
          { "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodyLoader_loadCelestialBody0 },
          { "pythonDecRef", "()V", (void *) t_PythonCelestialBodyLoader_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonCelestialBodyLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonCelestialBodyLoader::initializeClass, 1)))
          return NULL;
        return t_PythonCelestialBodyLoader::wrap_Object(PythonCelestialBodyLoader(((t_PythonCelestialBodyLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonCelestialBodyLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonCelestialBodyLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonCelestialBodyLoader_init_(t_PythonCelestialBodyLoader *self, PyObject *args, PyObject *kwds)
      {
        PythonCelestialBodyLoader object((jobject) NULL);

        INT_CALL(object = PythonCelestialBodyLoader());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonCelestialBodyLoader_finalize(t_PythonCelestialBodyLoader *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonCelestialBodyLoader_pythonExtension(t_PythonCelestialBodyLoader *self, PyObject *args)
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

      static jobject JNICALL t_PythonCelestialBodyLoader_loadCelestialBody0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodyLoader::mids$[PythonCelestialBodyLoader::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "loadCelestialBody", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("loadCelestialBody", result);
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

      static void JNICALL t_PythonCelestialBodyLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodyLoader::mids$[PythonCelestialBodyLoader::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonCelestialBodyLoader::mids$[PythonCelestialBodyLoader::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonCelestialBodyLoader_get__self(t_PythonCelestialBodyLoader *self, void *data)
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
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *IERSConventions$NutationCorrectionConverter::class$ = NULL;
      jmethodID *IERSConventions$NutationCorrectionConverter::mids$ = NULL;
      bool IERSConventions$NutationCorrectionConverter::live$ = false;

      jclass IERSConventions$NutationCorrectionConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/IERSConventions$NutationCorrectionConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toEquinox_0981d119cdbb4f6a] = env->getMethodID(cls, "toEquinox", "(Lorg/orekit/time/AbsoluteDate;DD)[D");
          mids$[mid_toNonRotating_0981d119cdbb4f6a] = env->getMethodID(cls, "toNonRotating", "(Lorg/orekit/time/AbsoluteDate;DD)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > IERSConventions$NutationCorrectionConverter::toEquinox(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toEquinox_0981d119cdbb4f6a], a0.this$, a1, a2));
      }

      JArray< jdouble > IERSConventions$NutationCorrectionConverter::toNonRotating(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toNonRotating_0981d119cdbb4f6a], a0.this$, a1, a2));
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
      static PyObject *t_IERSConventions$NutationCorrectionConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_of_(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_toEquinox(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_toNonRotating(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_get__parameters_(t_IERSConventions$NutationCorrectionConverter *self, void *data);
      static PyGetSetDef t_IERSConventions$NutationCorrectionConverter__fields_[] = {
        DECLARE_GET_FIELD(t_IERSConventions$NutationCorrectionConverter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IERSConventions$NutationCorrectionConverter__methods_[] = {
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, of_, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, toEquinox, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, toNonRotating, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IERSConventions$NutationCorrectionConverter)[] = {
        { Py_tp_methods, t_IERSConventions$NutationCorrectionConverter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IERSConventions$NutationCorrectionConverter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IERSConventions$NutationCorrectionConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IERSConventions$NutationCorrectionConverter, t_IERSConventions$NutationCorrectionConverter, IERSConventions$NutationCorrectionConverter);
      PyObject *t_IERSConventions$NutationCorrectionConverter::wrap_Object(const IERSConventions$NutationCorrectionConverter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions$NutationCorrectionConverter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions$NutationCorrectionConverter *self = (t_IERSConventions$NutationCorrectionConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_IERSConventions$NutationCorrectionConverter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions$NutationCorrectionConverter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions$NutationCorrectionConverter *self = (t_IERSConventions$NutationCorrectionConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_IERSConventions$NutationCorrectionConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(IERSConventions$NutationCorrectionConverter), &PY_TYPE_DEF(IERSConventions$NutationCorrectionConverter), module, "IERSConventions$NutationCorrectionConverter", 0);
      }

      void t_IERSConventions$NutationCorrectionConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions$NutationCorrectionConverter), "class_", make_descriptor(IERSConventions$NutationCorrectionConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions$NutationCorrectionConverter), "wrapfn_", make_descriptor(t_IERSConventions$NutationCorrectionConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions$NutationCorrectionConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IERSConventions$NutationCorrectionConverter::initializeClass, 1)))
          return NULL;
        return t_IERSConventions$NutationCorrectionConverter::wrap_Object(IERSConventions$NutationCorrectionConverter(((t_IERSConventions$NutationCorrectionConverter *) arg)->object.this$));
      }
      static PyObject *t_IERSConventions$NutationCorrectionConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IERSConventions$NutationCorrectionConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_of_(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_toEquinox(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.toEquinox(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "toEquinox", args);
        return NULL;
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_toNonRotating(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.toNonRotating(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "toNonRotating", args);
        return NULL;
      }
      static PyObject *t_IERSConventions$NutationCorrectionConverter_get__parameters_(t_IERSConventions$NutationCorrectionConverter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Date.h"
#include "java/util/Date.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Date::class$ = NULL;
    jmethodID *Date::mids$ = NULL;
    bool Date::live$ = false;

    jclass Date::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Date");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_f5bbab7e97879358] = env->getMethodID(cls, "<init>", "(J)V");
        mids$[mid_init$_48ca1125d4856a74] = env->getMethodID(cls, "<init>", "(III)V");
        mids$[mid_init$_cd8b07b153e58289] = env->getMethodID(cls, "<init>", "(IIIII)V");
        mids$[mid_init$_ee5da648d666a7a9] = env->getMethodID(cls, "<init>", "(IIIIII)V");
        mids$[mid_UTC_af32f82a1a8be01f] = env->getStaticMethodID(cls, "UTC", "(IIIIII)J");
        mids$[mid_after_aa8a9ab2727cc0c7] = env->getMethodID(cls, "after", "(Ljava/util/Date;)Z");
        mids$[mid_before_aa8a9ab2727cc0c7] = env->getMethodID(cls, "before", "(Ljava/util/Date;)Z");
        mids$[mid_clone_704a5bee58538972] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_compareTo_d16b285d3cef665d] = env->getMethodID(cls, "compareTo", "(Ljava/util/Date;)I");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getDate_d6ab429752e7c267] = env->getMethodID(cls, "getDate", "()I");
        mids$[mid_getDay_d6ab429752e7c267] = env->getMethodID(cls, "getDay", "()I");
        mids$[mid_getHours_d6ab429752e7c267] = env->getMethodID(cls, "getHours", "()I");
        mids$[mid_getMinutes_d6ab429752e7c267] = env->getMethodID(cls, "getMinutes", "()I");
        mids$[mid_getMonth_d6ab429752e7c267] = env->getMethodID(cls, "getMonth", "()I");
        mids$[mid_getSeconds_d6ab429752e7c267] = env->getMethodID(cls, "getSeconds", "()I");
        mids$[mid_getTime_42c72b98e3c2e08a] = env->getMethodID(cls, "getTime", "()J");
        mids$[mid_getTimezoneOffset_d6ab429752e7c267] = env->getMethodID(cls, "getTimezoneOffset", "()I");
        mids$[mid_getYear_d6ab429752e7c267] = env->getMethodID(cls, "getYear", "()I");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_parse_bd9949f7787fa510] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)J");
        mids$[mid_setDate_8fd427ab23829bf5] = env->getMethodID(cls, "setDate", "(I)V");
        mids$[mid_setHours_8fd427ab23829bf5] = env->getMethodID(cls, "setHours", "(I)V");
        mids$[mid_setMinutes_8fd427ab23829bf5] = env->getMethodID(cls, "setMinutes", "(I)V");
        mids$[mid_setMonth_8fd427ab23829bf5] = env->getMethodID(cls, "setMonth", "(I)V");
        mids$[mid_setSeconds_8fd427ab23829bf5] = env->getMethodID(cls, "setSeconds", "(I)V");
        mids$[mid_setTime_f5bbab7e97879358] = env->getMethodID(cls, "setTime", "(J)V");
        mids$[mid_setYear_8fd427ab23829bf5] = env->getMethodID(cls, "setYear", "(I)V");
        mids$[mid_toGMTString_d2c8eb4129821f0e] = env->getMethodID(cls, "toGMTString", "()Ljava/lang/String;");
        mids$[mid_toLocaleString_d2c8eb4129821f0e] = env->getMethodID(cls, "toLocaleString", "()Ljava/lang/String;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Date::Date() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    Date::Date(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    Date::Date(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5bbab7e97879358, a0)) {}

    Date::Date(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_48ca1125d4856a74, a0, a1, a2)) {}

    Date::Date(jint a0, jint a1, jint a2, jint a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd8b07b153e58289, a0, a1, a2, a3, a4)) {}

    Date::Date(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ee5da648d666a7a9, a0, a1, a2, a3, a4, a5)) {}

    jlong Date::UTC(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_UTC_af32f82a1a8be01f], a0, a1, a2, a3, a4, a5);
    }

    jboolean Date::after(const Date & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_after_aa8a9ab2727cc0c7], a0.this$);
    }

    jboolean Date::before(const Date & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_before_aa8a9ab2727cc0c7], a0.this$);
    }

    ::java::lang::Object Date::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_704a5bee58538972]));
    }

    jint Date::compareTo(const Date & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_d16b285d3cef665d], a0.this$);
    }

    jboolean Date::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    jint Date::getDate() const
    {
      return env->callIntMethod(this$, mids$[mid_getDate_d6ab429752e7c267]);
    }

    jint Date::getDay() const
    {
      return env->callIntMethod(this$, mids$[mid_getDay_d6ab429752e7c267]);
    }

    jint Date::getHours() const
    {
      return env->callIntMethod(this$, mids$[mid_getHours_d6ab429752e7c267]);
    }

    jint Date::getMinutes() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinutes_d6ab429752e7c267]);
    }

    jint Date::getMonth() const
    {
      return env->callIntMethod(this$, mids$[mid_getMonth_d6ab429752e7c267]);
    }

    jint Date::getSeconds() const
    {
      return env->callIntMethod(this$, mids$[mid_getSeconds_d6ab429752e7c267]);
    }

    jlong Date::getTime() const
    {
      return env->callLongMethod(this$, mids$[mid_getTime_42c72b98e3c2e08a]);
    }

    jint Date::getTimezoneOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getTimezoneOffset_d6ab429752e7c267]);
    }

    jint Date::getYear() const
    {
      return env->callIntMethod(this$, mids$[mid_getYear_d6ab429752e7c267]);
    }

    jint Date::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jlong Date::parse(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parse_bd9949f7787fa510], a0.this$);
    }

    void Date::setDate(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDate_8fd427ab23829bf5], a0);
    }

    void Date::setHours(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setHours_8fd427ab23829bf5], a0);
    }

    void Date::setMinutes(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinutes_8fd427ab23829bf5], a0);
    }

    void Date::setMonth(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMonth_8fd427ab23829bf5], a0);
    }

    void Date::setSeconds(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setSeconds_8fd427ab23829bf5], a0);
    }

    void Date::setTime(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setTime_f5bbab7e97879358], a0);
    }

    void Date::setYear(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setYear_8fd427ab23829bf5], a0);
    }

    ::java::lang::String Date::toGMTString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toGMTString_d2c8eb4129821f0e]));
    }

    ::java::lang::String Date::toLocaleString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toLocaleString_d2c8eb4129821f0e]));
    }

    ::java::lang::String Date::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Date_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Date_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Date_init_(t_Date *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Date_UTC(PyTypeObject *type, PyObject *args);
    static PyObject *t_Date_after(t_Date *self, PyObject *arg);
    static PyObject *t_Date_before(t_Date *self, PyObject *arg);
    static PyObject *t_Date_clone(t_Date *self);
    static PyObject *t_Date_compareTo(t_Date *self, PyObject *arg);
    static PyObject *t_Date_equals(t_Date *self, PyObject *args);
    static PyObject *t_Date_getDate(t_Date *self);
    static PyObject *t_Date_getDay(t_Date *self);
    static PyObject *t_Date_getHours(t_Date *self);
    static PyObject *t_Date_getMinutes(t_Date *self);
    static PyObject *t_Date_getMonth(t_Date *self);
    static PyObject *t_Date_getSeconds(t_Date *self);
    static PyObject *t_Date_getTime(t_Date *self);
    static PyObject *t_Date_getTimezoneOffset(t_Date *self);
    static PyObject *t_Date_getYear(t_Date *self);
    static PyObject *t_Date_hashCode(t_Date *self, PyObject *args);
    static PyObject *t_Date_parse(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Date_setDate(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setHours(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setMinutes(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setMonth(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setSeconds(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setTime(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setYear(t_Date *self, PyObject *arg);
    static PyObject *t_Date_toGMTString(t_Date *self);
    static PyObject *t_Date_toLocaleString(t_Date *self);
    static PyObject *t_Date_toString(t_Date *self, PyObject *args);
    static PyObject *t_Date_get__date(t_Date *self, void *data);
    static int t_Date_set__date(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__day(t_Date *self, void *data);
    static PyObject *t_Date_get__hours(t_Date *self, void *data);
    static int t_Date_set__hours(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__minutes(t_Date *self, void *data);
    static int t_Date_set__minutes(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__month(t_Date *self, void *data);
    static int t_Date_set__month(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__seconds(t_Date *self, void *data);
    static int t_Date_set__seconds(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__time(t_Date *self, void *data);
    static int t_Date_set__time(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__timezoneOffset(t_Date *self, void *data);
    static PyObject *t_Date_get__year(t_Date *self, void *data);
    static int t_Date_set__year(t_Date *self, PyObject *arg, void *data);
    static PyGetSetDef t_Date__fields_[] = {
      DECLARE_GETSET_FIELD(t_Date, date),
      DECLARE_GET_FIELD(t_Date, day),
      DECLARE_GETSET_FIELD(t_Date, hours),
      DECLARE_GETSET_FIELD(t_Date, minutes),
      DECLARE_GETSET_FIELD(t_Date, month),
      DECLARE_GETSET_FIELD(t_Date, seconds),
      DECLARE_GETSET_FIELD(t_Date, time),
      DECLARE_GET_FIELD(t_Date, timezoneOffset),
      DECLARE_GETSET_FIELD(t_Date, year),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Date__methods_[] = {
      DECLARE_METHOD(t_Date, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Date, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Date, UTC, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Date, after, METH_O),
      DECLARE_METHOD(t_Date, before, METH_O),
      DECLARE_METHOD(t_Date, clone, METH_NOARGS),
      DECLARE_METHOD(t_Date, compareTo, METH_O),
      DECLARE_METHOD(t_Date, equals, METH_VARARGS),
      DECLARE_METHOD(t_Date, getDate, METH_NOARGS),
      DECLARE_METHOD(t_Date, getDay, METH_NOARGS),
      DECLARE_METHOD(t_Date, getHours, METH_NOARGS),
      DECLARE_METHOD(t_Date, getMinutes, METH_NOARGS),
      DECLARE_METHOD(t_Date, getMonth, METH_NOARGS),
      DECLARE_METHOD(t_Date, getSeconds, METH_NOARGS),
      DECLARE_METHOD(t_Date, getTime, METH_NOARGS),
      DECLARE_METHOD(t_Date, getTimezoneOffset, METH_NOARGS),
      DECLARE_METHOD(t_Date, getYear, METH_NOARGS),
      DECLARE_METHOD(t_Date, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Date, parse, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Date, setDate, METH_O),
      DECLARE_METHOD(t_Date, setHours, METH_O),
      DECLARE_METHOD(t_Date, setMinutes, METH_O),
      DECLARE_METHOD(t_Date, setMonth, METH_O),
      DECLARE_METHOD(t_Date, setSeconds, METH_O),
      DECLARE_METHOD(t_Date, setTime, METH_O),
      DECLARE_METHOD(t_Date, setYear, METH_O),
      DECLARE_METHOD(t_Date, toGMTString, METH_NOARGS),
      DECLARE_METHOD(t_Date, toLocaleString, METH_NOARGS),
      DECLARE_METHOD(t_Date, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Date)[] = {
      { Py_tp_methods, t_Date__methods_ },
      { Py_tp_init, (void *) t_Date_init_ },
      { Py_tp_getset, t_Date__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Date)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Date, t_Date, Date);

    void t_Date::install(PyObject *module)
    {
      installType(&PY_TYPE(Date), &PY_TYPE_DEF(Date), module, "Date", 0);
    }

    void t_Date::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Date), "class_", make_descriptor(Date::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Date), "wrapfn_", make_descriptor(t_Date::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Date), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Date_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Date::initializeClass, 1)))
        return NULL;
      return t_Date::wrap_Object(Date(((t_Date *) arg)->object.this$));
    }
    static PyObject *t_Date_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Date::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Date_init_(t_Date *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Date object((jobject) NULL);

          INT_CALL(object = Date());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Date object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Date(a0));
            self->object = object;
            break;
          }
        }
        {
          jlong a0;
          Date object((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            INT_CALL(object = Date(a0));
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
          Date object((jobject) NULL);

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            INT_CALL(object = Date(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        goto err;
       case 5:
        {
          jint a0;
          jint a1;
          jint a2;
          jint a3;
          jint a4;
          Date object((jobject) NULL);

          if (!parseArgs(args, "IIIII", &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = Date(a0, a1, a2, a3, a4));
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
          Date object((jobject) NULL);

          if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = Date(a0, a1, a2, a3, a4, a5));
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

    static PyObject *t_Date_UTC(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint a2;
      jint a3;
      jint a4;
      jint a5;
      jlong result;

      if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
      {
        OBJ_CALL(result = ::java::util::Date::UTC(a0, a1, a2, a3, a4, a5));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "UTC", args);
      return NULL;
    }

    static PyObject *t_Date_after(t_Date *self, PyObject *arg)
    {
      Date a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", Date::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.after(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "after", arg);
      return NULL;
    }

    static PyObject *t_Date_before(t_Date *self, PyObject *arg)
    {
      Date a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", Date::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.before(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "before", arg);
      return NULL;
    }

    static PyObject *t_Date_clone(t_Date *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Date_compareTo(t_Date *self, PyObject *arg)
    {
      Date a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "k", Date::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Date_equals(t_Date *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Date), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Date_getDate(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDate());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getDay(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDay());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getHours(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getHours());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getMinutes(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMinutes());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getMonth(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMonth());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getSeconds(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getSeconds());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getTime(t_Date *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getTime());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Date_getTimezoneOffset(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getTimezoneOffset());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getYear(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getYear());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_hashCode(t_Date *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Date), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Date_parse(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jlong result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::Date::parse(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "parse", arg);
      return NULL;
    }

    static PyObject *t_Date_setDate(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setDate(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDate", arg);
      return NULL;
    }

    static PyObject *t_Date_setHours(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setHours(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setHours", arg);
      return NULL;
    }

    static PyObject *t_Date_setMinutes(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMinutes(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMinutes", arg);
      return NULL;
    }

    static PyObject *t_Date_setMonth(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMonth(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMonth", arg);
      return NULL;
    }

    static PyObject *t_Date_setSeconds(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setSeconds(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setSeconds", arg);
      return NULL;
    }

    static PyObject *t_Date_setTime(t_Date *self, PyObject *arg)
    {
      jlong a0;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(self->object.setTime(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setTime", arg);
      return NULL;
    }

    static PyObject *t_Date_setYear(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setYear(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setYear", arg);
      return NULL;
    }

    static PyObject *t_Date_toGMTString(t_Date *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toGMTString());
      return j2p(result);
    }

    static PyObject *t_Date_toLocaleString(t_Date *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toLocaleString());
      return j2p(result);
    }

    static PyObject *t_Date_toString(t_Date *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Date), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Date_get__date(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDate());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__date(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setDate(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "date", arg);
      return -1;
    }

    static PyObject *t_Date_get__day(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDay());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Date_get__hours(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getHours());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__hours(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setHours(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "hours", arg);
      return -1;
    }

    static PyObject *t_Date_get__minutes(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinutes());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__minutes(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinutes(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minutes", arg);
      return -1;
    }

    static PyObject *t_Date_get__month(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMonth());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__month(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMonth(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "month", arg);
      return -1;
    }

    static PyObject *t_Date_get__seconds(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getSeconds());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__seconds(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setSeconds(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "seconds", arg);
      return -1;
    }

    static PyObject *t_Date_get__time(t_Date *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getTime());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }
    static int t_Date_set__time(t_Date *self, PyObject *arg, void *data)
    {
      {
        jlong value;
        if (!parseArg(arg, "J", &value))
        {
          INT_CALL(self->object.setTime(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "time", arg);
      return -1;
    }

    static PyObject *t_Date_get__timezoneOffset(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getTimezoneOffset());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Date_get__year(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getYear());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__year(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setYear(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "year", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/EulerIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EulerIntegrator::class$ = NULL;
        jmethodID *EulerIntegrator::mids$ = NULL;
        bool EulerIntegrator::live$ = false;

        jclass EulerIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EulerIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_eda3f19b8225f78f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_be783177b060994b] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_be783177b060994b] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_ee24a2e068c0ae7a] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/EulerStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerIntegrator::EulerIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        JArray< JArray< jdouble > > EulerIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_eda3f19b8225f78f]));
        }

        JArray< jdouble > EulerIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_be783177b060994b]));
        }

        JArray< jdouble > EulerIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_be783177b060994b]));
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
        static PyObject *t_EulerIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EulerIntegrator_init_(t_EulerIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerIntegrator_getA(t_EulerIntegrator *self, PyObject *args);
        static PyObject *t_EulerIntegrator_getB(t_EulerIntegrator *self, PyObject *args);
        static PyObject *t_EulerIntegrator_getC(t_EulerIntegrator *self, PyObject *args);
        static PyObject *t_EulerIntegrator_get__a(t_EulerIntegrator *self, void *data);
        static PyObject *t_EulerIntegrator_get__b(t_EulerIntegrator *self, void *data);
        static PyObject *t_EulerIntegrator_get__c(t_EulerIntegrator *self, void *data);
        static PyGetSetDef t_EulerIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_EulerIntegrator, a),
          DECLARE_GET_FIELD(t_EulerIntegrator, b),
          DECLARE_GET_FIELD(t_EulerIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EulerIntegrator__methods_[] = {
          DECLARE_METHOD(t_EulerIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_EulerIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_EulerIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerIntegrator)[] = {
          { Py_tp_methods, t_EulerIntegrator__methods_ },
          { Py_tp_init, (void *) t_EulerIntegrator_init_ },
          { Py_tp_getset, t_EulerIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(EulerIntegrator, t_EulerIntegrator, EulerIntegrator);

        void t_EulerIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerIntegrator), &PY_TYPE_DEF(EulerIntegrator), module, "EulerIntegrator", 0);
        }

        void t_EulerIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegrator), "class_", make_descriptor(EulerIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegrator), "wrapfn_", make_descriptor(t_EulerIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerIntegrator::initializeClass, 1)))
            return NULL;
          return t_EulerIntegrator::wrap_Object(EulerIntegrator(((t_EulerIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EulerIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EulerIntegrator_init_(t_EulerIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          EulerIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = EulerIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EulerIntegrator_getA(t_EulerIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(EulerIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_EulerIntegrator_getB(t_EulerIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(EulerIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_EulerIntegrator_getC(t_EulerIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(EulerIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_EulerIntegrator_get__a(t_EulerIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_EulerIntegrator_get__b(t_EulerIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_EulerIntegrator_get__c(t_EulerIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm05Header::class$ = NULL;
              jmethodID *SsrIgm05Header::mids$ = NULL;
              bool SsrIgm05Header::live$ = false;

              jclass SsrIgm05Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm05Header::SsrIgm05Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
              static PyObject *t_SsrIgm05Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm05Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm05Header_init_(t_SsrIgm05Header *self, PyObject *args, PyObject *kwds);

              static PyMethodDef t_SsrIgm05Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm05Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05Header, instance_, METH_O | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm05Header)[] = {
                { Py_tp_methods, t_SsrIgm05Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm05Header_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm05Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm05Header, t_SsrIgm05Header, SsrIgm05Header);

              void t_SsrIgm05Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm05Header), &PY_TYPE_DEF(SsrIgm05Header), module, "SsrIgm05Header", 0);
              }

              void t_SsrIgm05Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Header), "class_", make_descriptor(SsrIgm05Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Header), "wrapfn_", make_descriptor(t_SsrIgm05Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm05Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm05Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm05Header::wrap_Object(SsrIgm05Header(((t_SsrIgm05Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm05Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm05Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm05Header_init_(t_SsrIgm05Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm05Header object((jobject) NULL);

                INT_CALL(object = SsrIgm05Header());
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
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *WeightedObservedPoint::class$ = NULL;
      jmethodID *WeightedObservedPoint::mids$ = NULL;
      bool WeightedObservedPoint::live$ = false;

      jclass WeightedObservedPoint::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/WeightedObservedPoint");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
          mids$[mid_getWeight_9981f74b2d109da6] = env->getMethodID(cls, "getWeight", "()D");
          mids$[mid_getX_9981f74b2d109da6] = env->getMethodID(cls, "getX", "()D");
          mids$[mid_getY_9981f74b2d109da6] = env->getMethodID(cls, "getY", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      WeightedObservedPoint::WeightedObservedPoint(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

      jdouble WeightedObservedPoint::getWeight() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getWeight_9981f74b2d109da6]);
      }

      jdouble WeightedObservedPoint::getX() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getX_9981f74b2d109da6]);
      }

      jdouble WeightedObservedPoint::getY() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getY_9981f74b2d109da6]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_WeightedObservedPoint_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WeightedObservedPoint_instance_(PyTypeObject *type, PyObject *arg);
      static int t_WeightedObservedPoint_init_(t_WeightedObservedPoint *self, PyObject *args, PyObject *kwds);
      static PyObject *t_WeightedObservedPoint_getWeight(t_WeightedObservedPoint *self);
      static PyObject *t_WeightedObservedPoint_getX(t_WeightedObservedPoint *self);
      static PyObject *t_WeightedObservedPoint_getY(t_WeightedObservedPoint *self);
      static PyObject *t_WeightedObservedPoint_get__weight(t_WeightedObservedPoint *self, void *data);
      static PyObject *t_WeightedObservedPoint_get__x(t_WeightedObservedPoint *self, void *data);
      static PyObject *t_WeightedObservedPoint_get__y(t_WeightedObservedPoint *self, void *data);
      static PyGetSetDef t_WeightedObservedPoint__fields_[] = {
        DECLARE_GET_FIELD(t_WeightedObservedPoint, weight),
        DECLARE_GET_FIELD(t_WeightedObservedPoint, x),
        DECLARE_GET_FIELD(t_WeightedObservedPoint, y),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_WeightedObservedPoint__methods_[] = {
        DECLARE_METHOD(t_WeightedObservedPoint, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WeightedObservedPoint, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WeightedObservedPoint, getWeight, METH_NOARGS),
        DECLARE_METHOD(t_WeightedObservedPoint, getX, METH_NOARGS),
        DECLARE_METHOD(t_WeightedObservedPoint, getY, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WeightedObservedPoint)[] = {
        { Py_tp_methods, t_WeightedObservedPoint__methods_ },
        { Py_tp_init, (void *) t_WeightedObservedPoint_init_ },
        { Py_tp_getset, t_WeightedObservedPoint__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WeightedObservedPoint)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WeightedObservedPoint, t_WeightedObservedPoint, WeightedObservedPoint);

      void t_WeightedObservedPoint::install(PyObject *module)
      {
        installType(&PY_TYPE(WeightedObservedPoint), &PY_TYPE_DEF(WeightedObservedPoint), module, "WeightedObservedPoint", 0);
      }

      void t_WeightedObservedPoint::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoint), "class_", make_descriptor(WeightedObservedPoint::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoint), "wrapfn_", make_descriptor(t_WeightedObservedPoint::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoint), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WeightedObservedPoint_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WeightedObservedPoint::initializeClass, 1)))
          return NULL;
        return t_WeightedObservedPoint::wrap_Object(WeightedObservedPoint(((t_WeightedObservedPoint *) arg)->object.this$));
      }
      static PyObject *t_WeightedObservedPoint_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WeightedObservedPoint::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_WeightedObservedPoint_init_(t_WeightedObservedPoint *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        WeightedObservedPoint object((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          INT_CALL(object = WeightedObservedPoint(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_WeightedObservedPoint_getWeight(t_WeightedObservedPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getWeight());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_WeightedObservedPoint_getX(t_WeightedObservedPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getX());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_WeightedObservedPoint_getY(t_WeightedObservedPoint *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getY());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_WeightedObservedPoint_get__weight(t_WeightedObservedPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getWeight());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_WeightedObservedPoint_get__x(t_WeightedObservedPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getX());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_WeightedObservedPoint_get__y(t_WeightedObservedPoint *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getY());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/LatitudeCrossingDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/LatitudeCrossingDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LatitudeCrossingDetector::class$ = NULL;
        jmethodID *LatitudeCrossingDetector::mids$ = NULL;
        bool LatitudeCrossingDetector::live$ = false;

        jclass LatitudeCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LatitudeCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4a8b2a0e42b8245c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_50506f2259cf207f] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_dc8275c31111ad9c] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLatitude_9981f74b2d109da6] = env->getMethodID(cls, "getLatitude", "()D");
            mids$[mid_create_b5bed3b1eb7b893f] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LatitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LatitudeCrossingDetector::LatitudeCrossingDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_4a8b2a0e42b8245c, a0.this$, a1)) {}

        LatitudeCrossingDetector::LatitudeCrossingDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_50506f2259cf207f, a0, a1, a2.this$, a3)) {}

        jdouble LatitudeCrossingDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::bodies::OneAxisEllipsoid LatitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_dc8275c31111ad9c]));
        }

        jdouble LatitudeCrossingDetector::getLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitude_9981f74b2d109da6]);
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
        static PyObject *t_LatitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeCrossingDetector_of_(t_LatitudeCrossingDetector *self, PyObject *args);
        static int t_LatitudeCrossingDetector_init_(t_LatitudeCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LatitudeCrossingDetector_g(t_LatitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_LatitudeCrossingDetector_getBody(t_LatitudeCrossingDetector *self);
        static PyObject *t_LatitudeCrossingDetector_getLatitude(t_LatitudeCrossingDetector *self);
        static PyObject *t_LatitudeCrossingDetector_get__body(t_LatitudeCrossingDetector *self, void *data);
        static PyObject *t_LatitudeCrossingDetector_get__latitude(t_LatitudeCrossingDetector *self, void *data);
        static PyObject *t_LatitudeCrossingDetector_get__parameters_(t_LatitudeCrossingDetector *self, void *data);
        static PyGetSetDef t_LatitudeCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LatitudeCrossingDetector, body),
          DECLARE_GET_FIELD(t_LatitudeCrossingDetector, latitude),
          DECLARE_GET_FIELD(t_LatitudeCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LatitudeCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_LatitudeCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_LatitudeCrossingDetector, getLatitude, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LatitudeCrossingDetector)[] = {
          { Py_tp_methods, t_LatitudeCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_LatitudeCrossingDetector_init_ },
          { Py_tp_getset, t_LatitudeCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LatitudeCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LatitudeCrossingDetector, t_LatitudeCrossingDetector, LatitudeCrossingDetector);
        PyObject *t_LatitudeCrossingDetector::wrap_Object(const LatitudeCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeCrossingDetector *self = (t_LatitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LatitudeCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeCrossingDetector *self = (t_LatitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LatitudeCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LatitudeCrossingDetector), &PY_TYPE_DEF(LatitudeCrossingDetector), module, "LatitudeCrossingDetector", 0);
        }

        void t_LatitudeCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeCrossingDetector), "class_", make_descriptor(LatitudeCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeCrossingDetector), "wrapfn_", make_descriptor(t_LatitudeCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LatitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LatitudeCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_LatitudeCrossingDetector::wrap_Object(LatitudeCrossingDetector(((t_LatitudeCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_LatitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LatitudeCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LatitudeCrossingDetector_of_(t_LatitudeCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LatitudeCrossingDetector_init_(t_LatitudeCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              jdouble a1;
              LatitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
              {
                INT_CALL(object = LatitudeCrossingDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeCrossingDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              jdouble a3;
              LatitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = LatitudeCrossingDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeCrossingDetector);
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

        static PyObject *t_LatitudeCrossingDetector_g(t_LatitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LatitudeCrossingDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LatitudeCrossingDetector_getBody(t_LatitudeCrossingDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_LatitudeCrossingDetector_getLatitude(t_LatitudeCrossingDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLatitude());
          return PyFloat_FromDouble((double) result);
        }
        static PyObject *t_LatitudeCrossingDetector_get__parameters_(t_LatitudeCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LatitudeCrossingDetector_get__body(t_LatitudeCrossingDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_LatitudeCrossingDetector_get__latitude(t_LatitudeCrossingDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLatitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitInternalError.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitInternalError::class$ = NULL;
      jmethodID *OrekitInternalError::mids$ = NULL;
      bool OrekitInternalError::live$ = false;

      jclass OrekitInternalError::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitInternalError");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0a70d77e3c5fdad0] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
          mids$[mid_getLocalizedMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_5969ecf7afac3dba] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_2ab86268ef7a6631] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_667bcd34994d9d31] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitInternalError::OrekitInternalError(const ::java::lang::Throwable & a0) : ::java::lang::IllegalStateException(env->newObject(initializeClass, &mids$, mid_init$_0a70d77e3c5fdad0, a0.this$)) {}

      ::java::lang::String OrekitInternalError::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_d2c8eb4129821f0e]));
      }

      ::java::lang::String OrekitInternalError::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_d2c8eb4129821f0e]));
      }

      ::java::lang::String OrekitInternalError::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_5969ecf7afac3dba], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitInternalError::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_2ab86268ef7a6631]));
      }

      ::org::hipparchus::exception::Localizable OrekitInternalError::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_667bcd34994d9d31]));
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
      static PyObject *t_OrekitInternalError_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitInternalError_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitInternalError_init_(t_OrekitInternalError *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitInternalError_getLocalizedMessage(t_OrekitInternalError *self, PyObject *args);
      static PyObject *t_OrekitInternalError_getMessage(t_OrekitInternalError *self, PyObject *args);
      static PyObject *t_OrekitInternalError_getParts(t_OrekitInternalError *self);
      static PyObject *t_OrekitInternalError_getSpecifier(t_OrekitInternalError *self);
      static PyObject *t_OrekitInternalError_get__localizedMessage(t_OrekitInternalError *self, void *data);
      static PyObject *t_OrekitInternalError_get__message(t_OrekitInternalError *self, void *data);
      static PyObject *t_OrekitInternalError_get__parts(t_OrekitInternalError *self, void *data);
      static PyObject *t_OrekitInternalError_get__specifier(t_OrekitInternalError *self, void *data);
      static PyGetSetDef t_OrekitInternalError__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitInternalError, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitInternalError, message),
        DECLARE_GET_FIELD(t_OrekitInternalError, parts),
        DECLARE_GET_FIELD(t_OrekitInternalError, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitInternalError__methods_[] = {
        DECLARE_METHOD(t_OrekitInternalError, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitInternalError, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitInternalError, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitInternalError, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitInternalError, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitInternalError, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitInternalError)[] = {
        { Py_tp_methods, t_OrekitInternalError__methods_ },
        { Py_tp_init, (void *) t_OrekitInternalError_init_ },
        { Py_tp_getset, t_OrekitInternalError__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitInternalError)[] = {
        &PY_TYPE_DEF(::java::lang::IllegalStateException),
        NULL
      };

      DEFINE_TYPE(OrekitInternalError, t_OrekitInternalError, OrekitInternalError);

      void t_OrekitInternalError::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitInternalError), &PY_TYPE_DEF(OrekitInternalError), module, "OrekitInternalError", 0);
      }

      void t_OrekitInternalError::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitInternalError), "class_", make_descriptor(OrekitInternalError::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitInternalError), "wrapfn_", make_descriptor(t_OrekitInternalError::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitInternalError), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitInternalError_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitInternalError::initializeClass, 1)))
          return NULL;
        return t_OrekitInternalError::wrap_Object(OrekitInternalError(((t_OrekitInternalError *) arg)->object.this$));
      }
      static PyObject *t_OrekitInternalError_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitInternalError::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitInternalError_init_(t_OrekitInternalError *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Throwable a0((jobject) NULL);
        OrekitInternalError object((jobject) NULL);

        if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
        {
          INT_CALL(object = OrekitInternalError(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitInternalError_getLocalizedMessage(t_OrekitInternalError *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitInternalError), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitInternalError_getMessage(t_OrekitInternalError *self, PyObject *args)
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

        return callSuper(PY_TYPE(OrekitInternalError), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitInternalError_getParts(t_OrekitInternalError *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitInternalError_getSpecifier(t_OrekitInternalError *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitInternalError_get__localizedMessage(t_OrekitInternalError *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitInternalError_get__message(t_OrekitInternalError *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitInternalError_get__parts(t_OrekitInternalError *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitInternalError_get__specifier(t_OrekitInternalError *self, void *data)
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
#include "org/orekit/gnss/antenna/AntexLoader.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/antenna/ReceiverAntenna.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/gnss/antenna/SatelliteAntenna.h"
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
            mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_init$_b9046d0be8f2b6e0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_init$_ab02e9635eee86ad] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_findSatelliteAntenna_b76719579cd012cc] = env->getMethodID(cls, "findSatelliteAntenna", "(Lorg/orekit/gnss/SatelliteSystem;I)Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_getReceiversAntennas_d751c1a57012b438] = env->getMethodID(cls, "getReceiversAntennas", "()Ljava/util/List;");
            mids$[mid_getSatellitesAntennas_d751c1a57012b438] = env->getMethodID(cls, "getSatellitesAntennas", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ANTEX_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ANTEX_SUPPORTED_NAMES", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AntexLoader::AntexLoader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

        AntexLoader::AntexLoader(const ::org::orekit::data::DataSource & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b9046d0be8f2b6e0, a0.this$, a1.this$)) {}

        AntexLoader::AntexLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab02e9635eee86ad, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::utils::TimeSpanMap AntexLoader::findSatelliteAntenna(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1) const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_findSatelliteAntenna_b76719579cd012cc], a0.this$, a1));
        }

        ::java::util::List AntexLoader::getReceiversAntennas() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getReceiversAntennas_d751c1a57012b438]));
        }

        ::java::util::List AntexLoader::getSatellitesAntennas() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellitesAntennas_d751c1a57012b438]));
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
#include "org/orekit/utils/StateJacobian.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *StateJacobian::class$ = NULL;
      jmethodID *StateJacobian::mids$ = NULL;
      bool StateJacobian::live$ = false;

      jclass StateJacobian::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/StateJacobian");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_9f1f355491808400] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > StateJacobian::value(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_9f1f355491808400], a0.this$));
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
      static PyObject *t_StateJacobian_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateJacobian_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateJacobian_value(t_StateJacobian *self, PyObject *arg);

      static PyMethodDef t_StateJacobian__methods_[] = {
        DECLARE_METHOD(t_StateJacobian, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateJacobian, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateJacobian, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateJacobian)[] = {
        { Py_tp_methods, t_StateJacobian__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateJacobian)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateJacobian, t_StateJacobian, StateJacobian);

      void t_StateJacobian::install(PyObject *module)
      {
        installType(&PY_TYPE(StateJacobian), &PY_TYPE_DEF(StateJacobian), module, "StateJacobian", 0);
      }

      void t_StateJacobian::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateJacobian), "class_", make_descriptor(StateJacobian::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateJacobian), "wrapfn_", make_descriptor(t_StateJacobian::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateJacobian), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateJacobian_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateJacobian::initializeClass, 1)))
          return NULL;
        return t_StateJacobian::wrap_Object(StateJacobian(((t_StateJacobian *) arg)->object.this$));
      }
      static PyObject *t_StateJacobian_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateJacobian::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StateJacobian_value(t_StateJacobian *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1063.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1063::class$ = NULL;
              jmethodID *Rtcm1063::mids$ = NULL;
              bool Rtcm1063::live$ = false;

              jclass Rtcm1063::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1063");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a31f35e7af490700] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1063::Rtcm1063(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_a31f35e7af490700, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1063_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1063_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1063_of_(t_Rtcm1063 *self, PyObject *args);
              static int t_Rtcm1063_init_(t_Rtcm1063 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1063_get__parameters_(t_Rtcm1063 *self, void *data);
              static PyGetSetDef t_Rtcm1063__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1063, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1063__methods_[] = {
                DECLARE_METHOD(t_Rtcm1063, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1063, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1063, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1063)[] = {
                { Py_tp_methods, t_Rtcm1063__methods_ },
                { Py_tp_init, (void *) t_Rtcm1063_init_ },
                { Py_tp_getset, t_Rtcm1063__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1063)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1063, t_Rtcm1063, Rtcm1063);
              PyObject *t_Rtcm1063::wrap_Object(const Rtcm1063& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1063::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1063 *self = (t_Rtcm1063 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1063::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1063::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1063 *self = (t_Rtcm1063 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1063::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1063), &PY_TYPE_DEF(Rtcm1063), module, "Rtcm1063", 0);
              }

              void t_Rtcm1063::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1063), "class_", make_descriptor(Rtcm1063::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1063), "wrapfn_", make_descriptor(t_Rtcm1063::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1063), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1063_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1063::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1063::wrap_Object(Rtcm1063(((t_Rtcm1063 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1063_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1063::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1063_of_(t_Rtcm1063 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1063_init_(t_Rtcm1063 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1063 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1063(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1063_get__parameters_(t_Rtcm1063 *self, void *data)
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
#include "org/orekit/propagation/conversion/PythonPropagatorBuilder.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonPropagatorBuilder::class$ = NULL;
        jmethodID *PythonPropagatorBuilder::mids$ = NULL;
        bool PythonPropagatorBuilder::live$ = false;

        jclass PythonPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildLeastSquaresModel_434804ad6c6cc8a8] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_dbf963913bad78cb] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_3ae868590960a3fb] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialOrbitDate_80e11148db499dda] = env->getMethodID(cls, "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getOrbitalParametersDrivers_7c5a416c83e442be] = env->getMethodID(cls, "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getPropagationParametersDrivers_7c5a416c83e442be] = env->getMethodID(cls, "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedNormalizedParameters_be783177b060994b] = env->getMethodID(cls, "getSelectedNormalizedParameters", "()[D");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_resetOrbit_17534ef58ef3aaef] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPropagatorBuilder::PythonPropagatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonPropagatorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonPropagatorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonPropagatorBuilder::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace conversion {
        static PyObject *t_PythonPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPropagatorBuilder_init_(t_PythonPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPropagatorBuilder_finalize(t_PythonPropagatorBuilder *self);
        static PyObject *t_PythonPropagatorBuilder_pythonExtension(t_PythonPropagatorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getFrame3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getInitialOrbitDate4(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonPropagatorBuilder_getMu5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitType6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitalParametersDrivers7(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getPositionAngleType8(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getPropagationParametersDrivers9(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getSelectedNormalizedParameters10(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonPropagatorBuilder_pythonDecRef11(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonPropagatorBuilder_resetOrbit12(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonPropagatorBuilder_get__self(t_PythonPropagatorBuilder *self, void *data);
        static PyGetSetDef t_PythonPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPropagatorBuilder, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPropagatorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPropagatorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPropagatorBuilder)[] = {
          { Py_tp_methods, t_PythonPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonPropagatorBuilder_init_ },
          { Py_tp_getset, t_PythonPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPropagatorBuilder, t_PythonPropagatorBuilder, PythonPropagatorBuilder);

        void t_PythonPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPropagatorBuilder), &PY_TYPE_DEF(PythonPropagatorBuilder), module, "PythonPropagatorBuilder", 1);
        }

        void t_PythonPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorBuilder), "class_", make_descriptor(PythonPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorBuilder), "wrapfn_", make_descriptor(t_PythonPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPropagatorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;", (void *) t_PythonPropagatorBuilder_buildLeastSquaresModel0 },
            { "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorBuilder_buildPropagator1 },
            { "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;", (void *) t_PythonPropagatorBuilder_copy2 },
            { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonPropagatorBuilder_getFrame3 },
            { "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonPropagatorBuilder_getInitialOrbitDate4 },
            { "getMu", "()D", (void *) t_PythonPropagatorBuilder_getMu5 },
            { "getOrbitType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonPropagatorBuilder_getOrbitType6 },
            { "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonPropagatorBuilder_getOrbitalParametersDrivers7 },
            { "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;", (void *) t_PythonPropagatorBuilder_getPositionAngleType8 },
            { "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonPropagatorBuilder_getPropagationParametersDrivers9 },
            { "getSelectedNormalizedParameters", "()[D", (void *) t_PythonPropagatorBuilder_getSelectedNormalizedParameters10 },
            { "pythonDecRef", "()V", (void *) t_PythonPropagatorBuilder_pythonDecRef11 },
            { "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V", (void *) t_PythonPropagatorBuilder_resetOrbit12 },
          };
          env->registerNatives(cls, methods, 13);
        }

        static PyObject *t_PythonPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonPropagatorBuilder::wrap_Object(PythonPropagatorBuilder(((t_PythonPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPropagatorBuilder_init_(t_PythonPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          PythonPropagatorBuilder object((jobject) NULL);

          INT_CALL(object = PythonPropagatorBuilder());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPropagatorBuilder_finalize(t_PythonPropagatorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPropagatorBuilder_pythonExtension(t_PythonPropagatorBuilder *self, PyObject *args)
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

        static jobject JNICALL t_PythonPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel value((jobject) NULL);
          PyObject *o0 = JArray<jobject>(a0).wrap(::org::orekit::propagation::conversion::t_PropagatorBuilder::wrap_jobject);
          PyObject *o1 = ::java::util::t_List::wrap_Object(::java::util::List(a1));
          PyObject *o2 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a2));
          PyObject *o3 = ::org::orekit::estimation::leastsquares::t_ModelObserver::wrap_Object(::org::orekit::estimation::leastsquares::ModelObserver(a3));
          PyObject *result = PyObject_CallMethod(obj, "buildLeastSquaresModel", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::initializeClass, &value))
          {
            throwTypeError("buildLeastSquaresModel", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = JArray<jdouble>(a0).wrap();
          PyObject *result = PyObject_CallMethod(obj, "buildPropagator", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("buildPropagator", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::conversion::PropagatorBuilder value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "copy", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &value))
          {
            throwTypeError("copy", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getFrame3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::frames::Frame value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getFrame", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
          {
            throwTypeError("getFrame", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getInitialOrbitDate4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getInitialOrbitDate", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getInitialOrbitDate", result);
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

        static jdouble JNICALL t_PythonPropagatorBuilder_getMu5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getMu", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMu", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitType6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getOrbitType", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
          {
            throwTypeError("getOrbitType", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitalParametersDrivers7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getOrbitalParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getOrbitalParametersDrivers", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getPositionAngleType8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPositionAngleType", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
          {
            throwTypeError("getPositionAngleType", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getPropagationParametersDrivers9(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPropagationParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getPropagationParametersDrivers", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getSelectedNormalizedParameters10(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSelectedNormalizedParameters", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getSelectedNormalizedParameters", result);
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

        static void JNICALL t_PythonPropagatorBuilder_pythonDecRef11(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonPropagatorBuilder_resetOrbit12(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
          PyObject *result = PyObject_CallMethod(obj, "resetOrbit", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonPropagatorBuilder_get__self(t_PythonPropagatorBuilder *self, void *data)
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
#include "org/orekit/frames/AbstractEopLoader.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *AbstractEopLoader::class$ = NULL;
      jmethodID *AbstractEopLoader::mids$ = NULL;
      bool AbstractEopLoader::live$ = false;

      jclass AbstractEopLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/AbstractEopLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b2466f5f478374ec] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Ljava/util/function/Supplier;)V");
          mids$[mid_getUtc_5e2cac12ab8da943] = env->getMethodID(cls, "getUtc", "()Lorg/orekit/time/TimeScale;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractEopLoader::AbstractEopLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::java::util::function::Supplier & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_b2466f5f478374ec, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_AbstractEopLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractEopLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractEopLoader_init_(t_AbstractEopLoader *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_AbstractEopLoader__methods_[] = {
        DECLARE_METHOD(t_AbstractEopLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractEopLoader, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractEopLoader)[] = {
        { Py_tp_methods, t_AbstractEopLoader__methods_ },
        { Py_tp_init, (void *) t_AbstractEopLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractEopLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(AbstractEopLoader, t_AbstractEopLoader, AbstractEopLoader);

      void t_AbstractEopLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractEopLoader), &PY_TYPE_DEF(AbstractEopLoader), module, "AbstractEopLoader", 0);
      }

      void t_AbstractEopLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopLoader), "class_", make_descriptor(AbstractEopLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopLoader), "wrapfn_", make_descriptor(t_AbstractEopLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractEopLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractEopLoader::initializeClass, 1)))
          return NULL;
        return t_AbstractEopLoader::wrap_Object(AbstractEopLoader(((t_AbstractEopLoader *) arg)->object.this$));
      }
      static PyObject *t_AbstractEopLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractEopLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractEopLoader_init_(t_AbstractEopLoader *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
        ::java::util::function::Supplier a2((jobject) NULL);
        PyTypeObject **p2;
        AbstractEopLoader object((jobject) NULL);

        if (!parseArgs(args, "skK", ::org::orekit::data::DataProvidersManager::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &a2, &p2, ::java::util::function::t_Supplier::parameters_))
        {
          INT_CALL(object = AbstractEopLoader(a0, a1, a2));
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
#include "org/hipparchus/analysis/interpolation/HermiteInterpolator.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/NullArgumentException.h"
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
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSamplePoint_ccd76cfbeb0c8870] = env->getMethodID(cls, "addSamplePoint", "(D[[D)V");
            mids$[mid_derivatives_3b25998771cb513c] = env->getMethodID(cls, "derivatives", "(DI)[[D");
            mids$[mid_getPolynomials_a2c0c7b172d95f6c] = env->getMethodID(cls, "getPolynomials", "()[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_value_736338d28c26591e] = env->getMethodID(cls, "value", "(D)[D");
            mids$[mid_value_12ff40993688331d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)[Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HermiteInterpolator::HermiteInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void HermiteInterpolator::addSamplePoint(jdouble a0, const JArray< JArray< jdouble > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSamplePoint_ccd76cfbeb0c8870], a0, a1.this$);
        }

        JArray< JArray< jdouble > > HermiteInterpolator::derivatives(jdouble a0, jint a1) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_derivatives_3b25998771cb513c], a0, a1));
        }

        JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > HermiteInterpolator::getPolynomials() const
        {
          return JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getPolynomials_a2c0c7b172d95f6c]));
        }

        JArray< jdouble > HermiteInterpolator::value(jdouble a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_736338d28c26591e], a0));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > HermiteInterpolator::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_value_12ff40993688331d], a0.this$));
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
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Rotation::class$ = NULL;
          jmethodID *Rotation::mids$ = NULL;
          bool Rotation::live$ = false;
          Rotation *Rotation::IDENTITY = NULL;

          jclass Rotation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Rotation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c8e9682f0daaca68] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_c5c31e89a68c0b64] = env->getMethodID(cls, "<init>", "([[DD)V");
              mids$[mid_init$_8e113468e1d0b227] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/RotationConvention;)V");
              mids$[mid_init$_d48631c3a44dc662] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_adfb2f933ffda657] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;DDD)V");
              mids$[mid_init$_9fbe2e1f25f3b32b] = env->getMethodID(cls, "<init>", "(DDDDZ)V");
              mids$[mid_applyInverseTo_1481d82ae902b1df] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_applyInverseTo_53c542efd8574582] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_applyInverseTo_64100e41ba74de8f] = env->getMethodID(cls, "applyInverseTo", "([D[D)V");
              mids$[mid_applyTo_1481d82ae902b1df] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_applyTo_53c542efd8574582] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_applyTo_64100e41ba74de8f] = env->getMethodID(cls, "applyTo", "([D[D)V");
              mids$[mid_compose_5fda24242ec16b36] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_composeInverse_5fda24242ec16b36] = env->getMethodID(cls, "composeInverse", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_distance_e52ef6c5917ecd0e] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)D");
              mids$[mid_getAngle_9981f74b2d109da6] = env->getMethodID(cls, "getAngle", "()D");
              mids$[mid_getAngles_8244d7d1cde77ff0] = env->getMethodID(cls, "getAngles", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)[D");
              mids$[mid_getAxis_882b8d638222834b] = env->getMethodID(cls, "getAxis", "(Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getMatrix_eda3f19b8225f78f] = env->getMethodID(cls, "getMatrix", "()[[D");
              mids$[mid_getQ0_9981f74b2d109da6] = env->getMethodID(cls, "getQ0", "()D");
              mids$[mid_getQ1_9981f74b2d109da6] = env->getMethodID(cls, "getQ1", "()D");
              mids$[mid_getQ2_9981f74b2d109da6] = env->getMethodID(cls, "getQ2", "()D");
              mids$[mid_getQ3_9981f74b2d109da6] = env->getMethodID(cls, "getQ3", "()D");
              mids$[mid_revert_4d68cff5f6e4403a] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IDENTITY = new Rotation(env->getStaticObjectField(cls, "IDENTITY", "Lorg/hipparchus/geometry/euclidean/threed/Rotation;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c8e9682f0daaca68, a0.this$, a1.this$)) {}

          Rotation::Rotation(const JArray< JArray< jdouble > > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c5c31e89a68c0b64, a0.this$, a1)) {}

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8e113468e1d0b227, a0.this$, a1, a2.this$)) {}

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d48631c3a44dc662, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_adfb2f933ffda657, a0.this$, a1.this$, a2, a3, a4)) {}

          Rotation::Rotation(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9fbe2e1f25f3b32b, a0, a1, a2, a3, a4)) {}

          Rotation Rotation::applyInverseTo(const Rotation & a0) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_applyInverseTo_1481d82ae902b1df], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Rotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_applyInverseTo_53c542efd8574582], a0.this$));
          }

          void Rotation::applyInverseTo(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyInverseTo_64100e41ba74de8f], a0.this$, a1.this$);
          }

          Rotation Rotation::applyTo(const Rotation & a0) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_applyTo_1481d82ae902b1df], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Rotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_applyTo_53c542efd8574582], a0.this$));
          }

          void Rotation::applyTo(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyTo_64100e41ba74de8f], a0.this$, a1.this$);
          }

          Rotation Rotation::compose(const Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_compose_5fda24242ec16b36], a0.this$, a1.this$));
          }

          Rotation Rotation::composeInverse(const Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_composeInverse_5fda24242ec16b36], a0.this$, a1.this$));
          }

          jdouble Rotation::distance(const Rotation & a0, const Rotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_e52ef6c5917ecd0e], a0.this$, a1.this$);
          }

          jdouble Rotation::getAngle() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAngle_9981f74b2d109da6]);
          }

          JArray< jdouble > Rotation::getAngles(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAngles_8244d7d1cde77ff0], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Rotation::getAxis(const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxis_882b8d638222834b], a0.this$));
          }

          JArray< JArray< jdouble > > Rotation::getMatrix() const
          {
            return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getMatrix_eda3f19b8225f78f]));
          }

          jdouble Rotation::getQ0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ0_9981f74b2d109da6]);
          }

          jdouble Rotation::getQ1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ1_9981f74b2d109da6]);
          }

          jdouble Rotation::getQ2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ2_9981f74b2d109da6]);
          }

          jdouble Rotation::getQ3() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ3_9981f74b2d109da6]);
          }

          Rotation Rotation::revert() const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_revert_4d68cff5f6e4403a]));
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
          static PyObject *t_Rotation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Rotation_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Rotation_init_(t_Rotation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Rotation_applyInverseTo(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_applyTo(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_compose(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_composeInverse(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_distance(PyTypeObject *type, PyObject *args);
          static PyObject *t_Rotation_getAngle(t_Rotation *self);
          static PyObject *t_Rotation_getAngles(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_getAxis(t_Rotation *self, PyObject *arg);
          static PyObject *t_Rotation_getMatrix(t_Rotation *self);
          static PyObject *t_Rotation_getQ0(t_Rotation *self);
          static PyObject *t_Rotation_getQ1(t_Rotation *self);
          static PyObject *t_Rotation_getQ2(t_Rotation *self);
          static PyObject *t_Rotation_getQ3(t_Rotation *self);
          static PyObject *t_Rotation_revert(t_Rotation *self);
          static PyObject *t_Rotation_get__angle(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__matrix(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q0(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q1(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q2(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q3(t_Rotation *self, void *data);
          static PyGetSetDef t_Rotation__fields_[] = {
            DECLARE_GET_FIELD(t_Rotation, angle),
            DECLARE_GET_FIELD(t_Rotation, matrix),
            DECLARE_GET_FIELD(t_Rotation, q0),
            DECLARE_GET_FIELD(t_Rotation, q1),
            DECLARE_GET_FIELD(t_Rotation, q2),
            DECLARE_GET_FIELD(t_Rotation, q3),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Rotation__methods_[] = {
            DECLARE_METHOD(t_Rotation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Rotation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Rotation, applyInverseTo, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, applyTo, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, compose, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, composeInverse, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, distance, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Rotation, getAngle, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getAngles, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, getAxis, METH_O),
            DECLARE_METHOD(t_Rotation, getMatrix, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ0, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ1, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ2, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ3, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, revert, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Rotation)[] = {
            { Py_tp_methods, t_Rotation__methods_ },
            { Py_tp_init, (void *) t_Rotation_init_ },
            { Py_tp_getset, t_Rotation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Rotation)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Rotation, t_Rotation, Rotation);

          void t_Rotation::install(PyObject *module)
          {
            installType(&PY_TYPE(Rotation), &PY_TYPE_DEF(Rotation), module, "Rotation", 0);
          }

          void t_Rotation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "class_", make_descriptor(Rotation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "wrapfn_", make_descriptor(t_Rotation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "boxfn_", make_descriptor(boxObject));
            env->getClass(Rotation::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "IDENTITY", make_descriptor(t_Rotation::wrap_Object(*Rotation::IDENTITY)));
          }

          static PyObject *t_Rotation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Rotation::initializeClass, 1)))
              return NULL;
            return t_Rotation::wrap_Object(Rotation(((t_Rotation *) arg)->object.this$));
          }
          static PyObject *t_Rotation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Rotation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Rotation_init_(t_Rotation *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                JArray< JArray< jdouble > > a0((jobject) NULL);
                jdouble a1;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "[[DD", &a0, &a1))
                {
                  INT_CALL(object = Rotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a2((jobject) NULL);
                PyTypeObject **p2;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  INT_CALL(object = Rotation(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Rotation(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "KKDDD", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_, &a2, &a3, &a4))
                {
                  INT_CALL(object = Rotation(a0, a1, a2, a3, a4));
                  self->object = object;
                  break;
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jboolean a4;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "DDDDZ", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = Rotation(a0, a1, a2, a3, a4));
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

          static PyObject *t_Rotation_applyInverseTo(t_Rotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Rotation a0((jobject) NULL);
                Rotation result((jobject) NULL);

                if (!parseArgs(args, "k", Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return t_Rotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  OBJ_CALL(self->object.applyInverseTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyInverseTo", args);
            return NULL;
          }

          static PyObject *t_Rotation_applyTo(t_Rotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Rotation a0((jobject) NULL);
                Rotation result((jobject) NULL);

                if (!parseArgs(args, "k", Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return t_Rotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  OBJ_CALL(self->object.applyTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyTo", args);
            return NULL;
          }

          static PyObject *t_Rotation_compose(t_Rotation *self, PyObject *args)
          {
            Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            Rotation result((jobject) NULL);

            if (!parseArgs(args, "kK", Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.compose(a0, a1));
              return t_Rotation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "compose", args);
            return NULL;
          }

          static PyObject *t_Rotation_composeInverse(t_Rotation *self, PyObject *args)
          {
            Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            Rotation result((jobject) NULL);

            if (!parseArgs(args, "kK", Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.composeInverse(a0, a1));
              return t_Rotation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "composeInverse", args);
            return NULL;
          }

          static PyObject *t_Rotation_distance(PyTypeObject *type, PyObject *args)
          {
            Rotation a0((jobject) NULL);
            Rotation a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Rotation::initializeClass, Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Rotation::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance", args);
            return NULL;
          }

          static PyObject *t_Rotation_getAngle(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAngle());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getAngles(t_Rotation *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAngles(a0, a1));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAngles", args);
            return NULL;
          }

          static PyObject *t_Rotation_getAxis(t_Rotation *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAxis(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAxis", arg);
            return NULL;
          }

          static PyObject *t_Rotation_getMatrix(t_Rotation *self)
          {
            JArray< JArray< jdouble > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getMatrix());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          static PyObject *t_Rotation_getQ0(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getQ1(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getQ2(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getQ3(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ3());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_revert(t_Rotation *self)
          {
            Rotation result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_Rotation::wrap_Object(result);
          }

          static PyObject *t_Rotation_get__angle(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAngle());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__matrix(t_Rotation *self, void *data)
          {
            JArray< JArray< jdouble > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getMatrix());
            return JArray<jobject>(value.this$).wrap(NULL);
          }

          static PyObject *t_Rotation_get__q0(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__q1(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__q2(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ2());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__q3(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ3());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPEntry::class$ = NULL;
      jmethodID *EOPEntry::mids$ = NULL;
      bool EOPEntry::live$ = false;

      jclass EOPEntry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPEntry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0e7468bd511b7d4e] = env->getMethodID(cls, "<init>", "(IDDDDDDDDDDLorg/orekit/frames/ITRFVersion;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getDdEps_9981f74b2d109da6] = env->getMethodID(cls, "getDdEps", "()D");
          mids$[mid_getDdPsi_9981f74b2d109da6] = env->getMethodID(cls, "getDdPsi", "()D");
          mids$[mid_getDx_9981f74b2d109da6] = env->getMethodID(cls, "getDx", "()D");
          mids$[mid_getDy_9981f74b2d109da6] = env->getMethodID(cls, "getDy", "()D");
          mids$[mid_getITRFType_4865f340ec39b9c4] = env->getMethodID(cls, "getITRFType", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getLOD_9981f74b2d109da6] = env->getMethodID(cls, "getLOD", "()D");
          mids$[mid_getMjd_d6ab429752e7c267] = env->getMethodID(cls, "getMjd", "()I");
          mids$[mid_getUT1MinusUTC_9981f74b2d109da6] = env->getMethodID(cls, "getUT1MinusUTC", "()D");
          mids$[mid_getX_9981f74b2d109da6] = env->getMethodID(cls, "getX", "()D");
          mids$[mid_getXRate_9981f74b2d109da6] = env->getMethodID(cls, "getXRate", "()D");
          mids$[mid_getY_9981f74b2d109da6] = env->getMethodID(cls, "getY", "()D");
          mids$[mid_getYRate_9981f74b2d109da6] = env->getMethodID(cls, "getYRate", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPEntry::EOPEntry(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, const ::org::orekit::frames::ITRFVersion & a11, const ::org::orekit::time::AbsoluteDate & a12) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0e7468bd511b7d4e, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11.this$, a12.this$)) {}

      ::org::orekit::time::AbsoluteDate EOPEntry::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      jdouble EOPEntry::getDdEps() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDdEps_9981f74b2d109da6]);
      }

      jdouble EOPEntry::getDdPsi() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDdPsi_9981f74b2d109da6]);
      }

      jdouble EOPEntry::getDx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDx_9981f74b2d109da6]);
      }

      jdouble EOPEntry::getDy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDy_9981f74b2d109da6]);
      }

      ::org::orekit::frames::ITRFVersion EOPEntry::getITRFType() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFType_4865f340ec39b9c4]));
      }

      jdouble EOPEntry::getLOD() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLOD_9981f74b2d109da6]);
      }

      jint EOPEntry::getMjd() const
      {
        return env->callIntMethod(this$, mids$[mid_getMjd_d6ab429752e7c267]);
      }

      jdouble EOPEntry::getUT1MinusUTC() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getUT1MinusUTC_9981f74b2d109da6]);
      }

      jdouble EOPEntry::getX() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getX_9981f74b2d109da6]);
      }

      jdouble EOPEntry::getXRate() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getXRate_9981f74b2d109da6]);
      }

      jdouble EOPEntry::getY() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getY_9981f74b2d109da6]);
      }

      jdouble EOPEntry::getYRate() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getYRate_9981f74b2d109da6]);
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
      static PyObject *t_EOPEntry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPEntry_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPEntry_init_(t_EOPEntry *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPEntry_getDate(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDdEps(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDdPsi(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDx(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDy(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getITRFType(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getLOD(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getMjd(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getUT1MinusUTC(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getX(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getXRate(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getY(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getYRate(t_EOPEntry *self);
      static PyObject *t_EOPEntry_get__date(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__ddEps(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__ddPsi(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__dx(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__dy(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__iTRFType(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__lOD(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__mjd(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__uT1MinusUTC(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__x(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__xRate(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__y(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__yRate(t_EOPEntry *self, void *data);
      static PyGetSetDef t_EOPEntry__fields_[] = {
        DECLARE_GET_FIELD(t_EOPEntry, date),
        DECLARE_GET_FIELD(t_EOPEntry, ddEps),
        DECLARE_GET_FIELD(t_EOPEntry, ddPsi),
        DECLARE_GET_FIELD(t_EOPEntry, dx),
        DECLARE_GET_FIELD(t_EOPEntry, dy),
        DECLARE_GET_FIELD(t_EOPEntry, iTRFType),
        DECLARE_GET_FIELD(t_EOPEntry, lOD),
        DECLARE_GET_FIELD(t_EOPEntry, mjd),
        DECLARE_GET_FIELD(t_EOPEntry, uT1MinusUTC),
        DECLARE_GET_FIELD(t_EOPEntry, x),
        DECLARE_GET_FIELD(t_EOPEntry, xRate),
        DECLARE_GET_FIELD(t_EOPEntry, y),
        DECLARE_GET_FIELD(t_EOPEntry, yRate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPEntry__methods_[] = {
        DECLARE_METHOD(t_EOPEntry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPEntry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPEntry, getDate, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDdEps, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDdPsi, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDx, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDy, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getITRFType, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getLOD, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getMjd, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getUT1MinusUTC, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getX, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getXRate, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getY, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getYRate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPEntry)[] = {
        { Py_tp_methods, t_EOPEntry__methods_ },
        { Py_tp_init, (void *) t_EOPEntry_init_ },
        { Py_tp_getset, t_EOPEntry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPEntry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPEntry, t_EOPEntry, EOPEntry);

      void t_EOPEntry::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPEntry), &PY_TYPE_DEF(EOPEntry), module, "EOPEntry", 0);
      }

      void t_EOPEntry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPEntry), "class_", make_descriptor(EOPEntry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPEntry), "wrapfn_", make_descriptor(t_EOPEntry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPEntry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPEntry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPEntry::initializeClass, 1)))
          return NULL;
        return t_EOPEntry::wrap_Object(EOPEntry(((t_EOPEntry *) arg)->object.this$));
      }
      static PyObject *t_EOPEntry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPEntry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPEntry_init_(t_EOPEntry *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
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
        ::org::orekit::frames::ITRFVersion a11((jobject) NULL);
        PyTypeObject **p11;
        ::org::orekit::time::AbsoluteDate a12((jobject) NULL);
        EOPEntry object((jobject) NULL);

        if (!parseArgs(args, "IDDDDDDDDDDKk", ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &p11, ::org::orekit::frames::t_ITRFVersion::parameters_, &a12))
        {
          INT_CALL(object = EOPEntry(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPEntry_getDate(t_EOPEntry *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_EOPEntry_getDdEps(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDdEps());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getDdPsi(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDdPsi());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getDx(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getDy(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getITRFType(t_EOPEntry *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getITRFType());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_EOPEntry_getLOD(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLOD());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getMjd(t_EOPEntry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMjd());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EOPEntry_getUT1MinusUTC(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getUT1MinusUTC());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getX(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getX());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getXRate(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getXRate());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getY(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getY());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getYRate(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getYRate());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_get__date(t_EOPEntry *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_EOPEntry_get__ddEps(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDdEps());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__ddPsi(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDdPsi());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__dx(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__dy(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__iTRFType(t_EOPEntry *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getITRFType());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_EOPEntry_get__lOD(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLOD());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__mjd(t_EOPEntry *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMjd());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_EOPEntry_get__uT1MinusUTC(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getUT1MinusUTC());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__x(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getX());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__xRate(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getXRate());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__y(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getY());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__yRate(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getYRate());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/GeometricDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *GeometricDistribution::class$ = NULL;
        jmethodID *GeometricDistribution::mids$ = NULL;
        bool GeometricDistribution::live$ = false;

        jclass GeometricDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/GeometricDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_cumulativeProbability_ce4c02d583456bc9] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getProbabilityOfSuccess_9981f74b2d109da6] = env->getMethodID(cls, "getProbabilityOfSuccess", "()D");
            mids$[mid_getSupportLowerBound_d6ab429752e7c267] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_d6ab429752e7c267] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_inverseCumulativeProbability_9e72cb20adb363fb] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)I");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_ce4c02d583456bc9] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_ce4c02d583456bc9] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeometricDistribution::GeometricDistribution(jdouble a0) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        jdouble GeometricDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_ce4c02d583456bc9], a0);
        }

        jdouble GeometricDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble GeometricDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble GeometricDistribution::getProbabilityOfSuccess() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProbabilityOfSuccess_9981f74b2d109da6]);
        }

        jint GeometricDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_d6ab429752e7c267]);
        }

        jint GeometricDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_d6ab429752e7c267]);
        }

        jint GeometricDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_inverseCumulativeProbability_9e72cb20adb363fb], a0);
        }

        jboolean GeometricDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble GeometricDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_ce4c02d583456bc9], a0);
        }

        jdouble GeometricDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_ce4c02d583456bc9], a0);
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
        static PyObject *t_GeometricDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeometricDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GeometricDistribution_init_(t_GeometricDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeometricDistribution_cumulativeProbability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getNumericalMean(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getNumericalVariance(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getProbabilityOfSuccess(t_GeometricDistribution *self);
        static PyObject *t_GeometricDistribution_getSupportLowerBound(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getSupportUpperBound(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_inverseCumulativeProbability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_isSupportConnected(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_logProbability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_probability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_get__numericalMean(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__numericalVariance(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__probabilityOfSuccess(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__supportConnected(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__supportLowerBound(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__supportUpperBound(t_GeometricDistribution *self, void *data);
        static PyGetSetDef t_GeometricDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_GeometricDistribution, numericalMean),
          DECLARE_GET_FIELD(t_GeometricDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_GeometricDistribution, probabilityOfSuccess),
          DECLARE_GET_FIELD(t_GeometricDistribution, supportConnected),
          DECLARE_GET_FIELD(t_GeometricDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_GeometricDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeometricDistribution__methods_[] = {
          DECLARE_METHOD(t_GeometricDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeometricDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeometricDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getProbabilityOfSuccess, METH_NOARGS),
          DECLARE_METHOD(t_GeometricDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeometricDistribution)[] = {
          { Py_tp_methods, t_GeometricDistribution__methods_ },
          { Py_tp_init, (void *) t_GeometricDistribution_init_ },
          { Py_tp_getset, t_GeometricDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeometricDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(GeometricDistribution, t_GeometricDistribution, GeometricDistribution);

        void t_GeometricDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(GeometricDistribution), &PY_TYPE_DEF(GeometricDistribution), module, "GeometricDistribution", 0);
        }

        void t_GeometricDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricDistribution), "class_", make_descriptor(GeometricDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricDistribution), "wrapfn_", make_descriptor(t_GeometricDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeometricDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeometricDistribution::initializeClass, 1)))
            return NULL;
          return t_GeometricDistribution::wrap_Object(GeometricDistribution(((t_GeometricDistribution *) arg)->object.this$));
        }
        static PyObject *t_GeometricDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeometricDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GeometricDistribution_init_(t_GeometricDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          GeometricDistribution object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = GeometricDistribution(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GeometricDistribution_cumulativeProbability(t_GeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_GeometricDistribution_getNumericalMean(t_GeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_GeometricDistribution_getNumericalVariance(t_GeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_GeometricDistribution_getProbabilityOfSuccess(t_GeometricDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeometricDistribution_getSupportLowerBound(t_GeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_GeometricDistribution_getSupportUpperBound(t_GeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_GeometricDistribution_inverseCumulativeProbability(t_GeometricDistribution *self, PyObject *args)
        {
          jdouble a0;
          jint result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_GeometricDistribution_isSupportConnected(t_GeometricDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_GeometricDistribution_logProbability(t_GeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_GeometricDistribution_probability(t_GeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_GeometricDistribution_get__numericalMean(t_GeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeometricDistribution_get__numericalVariance(t_GeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeometricDistribution_get__probabilityOfSuccess(t_GeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeometricDistribution_get__supportConnected(t_GeometricDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_GeometricDistribution_get__supportLowerBound(t_GeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_GeometricDistribution_get__supportUpperBound(t_GeometricDistribution *self, void *data)
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
#include "org/orekit/rugged/errors/DumpReplayer$Result.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *DumpReplayer$Result::class$ = NULL;
        jmethodID *DumpReplayer$Result::mids$ = NULL;
        bool DumpReplayer$Result::live$ = false;

        jclass DumpReplayer$Result::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/DumpReplayer$Result");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getExpected_704a5bee58538972] = env->getMethodID(cls, "getExpected", "()Ljava/lang/Object;");
            mids$[mid_getReplayed_704a5bee58538972] = env->getMethodID(cls, "getReplayed", "()Ljava/lang/Object;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::Object DumpReplayer$Result::getExpected() const
        {
          return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getExpected_704a5bee58538972]));
        }

        ::java::lang::Object DumpReplayer$Result::getReplayed() const
        {
          return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getReplayed_704a5bee58538972]));
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
        static PyObject *t_DumpReplayer$Result_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpReplayer$Result_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpReplayer$Result_getExpected(t_DumpReplayer$Result *self);
        static PyObject *t_DumpReplayer$Result_getReplayed(t_DumpReplayer$Result *self);
        static PyObject *t_DumpReplayer$Result_get__expected(t_DumpReplayer$Result *self, void *data);
        static PyObject *t_DumpReplayer$Result_get__replayed(t_DumpReplayer$Result *self, void *data);
        static PyGetSetDef t_DumpReplayer$Result__fields_[] = {
          DECLARE_GET_FIELD(t_DumpReplayer$Result, expected),
          DECLARE_GET_FIELD(t_DumpReplayer$Result, replayed),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DumpReplayer$Result__methods_[] = {
          DECLARE_METHOD(t_DumpReplayer$Result, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpReplayer$Result, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpReplayer$Result, getExpected, METH_NOARGS),
          DECLARE_METHOD(t_DumpReplayer$Result, getReplayed, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DumpReplayer$Result)[] = {
          { Py_tp_methods, t_DumpReplayer$Result__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DumpReplayer$Result__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DumpReplayer$Result)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DumpReplayer$Result, t_DumpReplayer$Result, DumpReplayer$Result);

        void t_DumpReplayer$Result::install(PyObject *module)
        {
          installType(&PY_TYPE(DumpReplayer$Result), &PY_TYPE_DEF(DumpReplayer$Result), module, "DumpReplayer$Result", 0);
        }

        void t_DumpReplayer$Result::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer$Result), "class_", make_descriptor(DumpReplayer$Result::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer$Result), "wrapfn_", make_descriptor(t_DumpReplayer$Result::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer$Result), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DumpReplayer$Result_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DumpReplayer$Result::initializeClass, 1)))
            return NULL;
          return t_DumpReplayer$Result::wrap_Object(DumpReplayer$Result(((t_DumpReplayer$Result *) arg)->object.this$));
        }
        static PyObject *t_DumpReplayer$Result_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DumpReplayer$Result::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DumpReplayer$Result_getExpected(t_DumpReplayer$Result *self)
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getExpected());
          return ::java::lang::t_Object::wrap_Object(result);
        }

        static PyObject *t_DumpReplayer$Result_getReplayed(t_DumpReplayer$Result *self)
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getReplayed());
          return ::java::lang::t_Object::wrap_Object(result);
        }

        static PyObject *t_DumpReplayer$Result_get__expected(t_DumpReplayer$Result *self, void *data)
        {
          ::java::lang::Object value((jobject) NULL);
          OBJ_CALL(value = self->object.getExpected());
          return ::java::lang::t_Object::wrap_Object(value);
        }

        static PyObject *t_DumpReplayer$Result_get__replayed(t_DumpReplayer$Result *self, void *data)
        {
          ::java::lang::Object value((jobject) NULL);
          OBJ_CALL(value = self->object.getReplayed());
          return ::java::lang::t_Object::wrap_Object(value);
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
                mids$[mid_accept_9d367e34fba0a5ea] = env->getMethodID(cls, "accept", "(I[D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedDoubleArrayConsumer::accept(jint a0, const JArray< jdouble > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_9d367e34fba0a5ea], a0, a1.this$);
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
#include "org/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$SoftwareConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$SoftwareConfiguration::mids$ = NULL;
        bool CRDConfiguration$SoftwareConfiguration::live$ = false;

        jclass CRDConfiguration$SoftwareConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getProcessingSoftwareVersions_f81c0644d57ae495] = env->getMethodID(cls, "getProcessingSoftwareVersions", "()[Ljava/lang/String;");
            mids$[mid_getProcessingSoftwares_f81c0644d57ae495] = env->getMethodID(cls, "getProcessingSoftwares", "()[Ljava/lang/String;");
            mids$[mid_getSoftwareId_d2c8eb4129821f0e] = env->getMethodID(cls, "getSoftwareId", "()Ljava/lang/String;");
            mids$[mid_getTrackingSoftwareVersions_f81c0644d57ae495] = env->getMethodID(cls, "getTrackingSoftwareVersions", "()[Ljava/lang/String;");
            mids$[mid_getTrackingSoftwares_f81c0644d57ae495] = env->getMethodID(cls, "getTrackingSoftwares", "()[Ljava/lang/String;");
            mids$[mid_setProcessingSoftwareVersions_0b0682dc773e1ff1] = env->getMethodID(cls, "setProcessingSoftwareVersions", "([Ljava/lang/String;)V");
            mids$[mid_setProcessingSoftwares_0b0682dc773e1ff1] = env->getMethodID(cls, "setProcessingSoftwares", "([Ljava/lang/String;)V");
            mids$[mid_setSoftwareId_105e1eadb709d9ac] = env->getMethodID(cls, "setSoftwareId", "(Ljava/lang/String;)V");
            mids$[mid_setTrackingSoftwareVersions_0b0682dc773e1ff1] = env->getMethodID(cls, "setTrackingSoftwareVersions", "([Ljava/lang/String;)V");
            mids$[mid_setTrackingSoftwares_0b0682dc773e1ff1] = env->getMethodID(cls, "setTrackingSoftwares", "([Ljava/lang/String;)V");
            mids$[mid_toCrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$SoftwareConfiguration::CRDConfiguration$SoftwareConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getProcessingSoftwareVersions() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwareVersions_f81c0644d57ae495]));
        }

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getProcessingSoftwares() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwares_f81c0644d57ae495]));
        }

        ::java::lang::String CRDConfiguration$SoftwareConfiguration::getSoftwareId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSoftwareId_d2c8eb4129821f0e]));
        }

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getTrackingSoftwareVersions() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getTrackingSoftwareVersions_f81c0644d57ae495]));
        }

        JArray< ::java::lang::String > CRDConfiguration$SoftwareConfiguration::getTrackingSoftwares() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getTrackingSoftwares_f81c0644d57ae495]));
        }

        void CRDConfiguration$SoftwareConfiguration::setProcessingSoftwareVersions(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwareVersions_0b0682dc773e1ff1], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setProcessingSoftwares(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwares_0b0682dc773e1ff1], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setSoftwareId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSoftwareId_105e1eadb709d9ac], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setTrackingSoftwareVersions(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTrackingSoftwareVersions_0b0682dc773e1ff1], a0.this$);
        }

        void CRDConfiguration$SoftwareConfiguration::setTrackingSoftwares(const JArray< ::java::lang::String > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTrackingSoftwares_0b0682dc773e1ff1], a0.this$);
        }

        ::java::lang::String CRDConfiguration$SoftwareConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDConfiguration$SoftwareConfiguration::toString() const
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
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$SoftwareConfiguration_init_(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toCrdString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data);
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$SoftwareConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, processingSoftwareVersions),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, processingSoftwares),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, softwareId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, trackingSoftwareVersions),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$SoftwareConfiguration, trackingSoftwares),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$SoftwareConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getProcessingSoftwareVersions, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getProcessingSoftwares, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getSoftwareId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getTrackingSoftwareVersions, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, getTrackingSoftwares, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setProcessingSoftwareVersions, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setProcessingSoftwares, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setSoftwareId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setTrackingSoftwareVersions, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, setTrackingSoftwares, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$SoftwareConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$SoftwareConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$SoftwareConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$SoftwareConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$SoftwareConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$SoftwareConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$SoftwareConfiguration, t_CRDConfiguration$SoftwareConfiguration, CRDConfiguration$SoftwareConfiguration);

        void t_CRDConfiguration$SoftwareConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$SoftwareConfiguration), &PY_TYPE_DEF(CRDConfiguration$SoftwareConfiguration), module, "CRDConfiguration$SoftwareConfiguration", 0);
        }

        void t_CRDConfiguration$SoftwareConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SoftwareConfiguration), "class_", make_descriptor(CRDConfiguration$SoftwareConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SoftwareConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$SoftwareConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$SoftwareConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$SoftwareConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$SoftwareConfiguration::wrap_Object(CRDConfiguration$SoftwareConfiguration(((t_CRDConfiguration$SoftwareConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$SoftwareConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$SoftwareConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$SoftwareConfiguration_init_(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$SoftwareConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$SoftwareConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwareVersions());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwares());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSoftwareId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrackingSoftwareVersions());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_getTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrackingSoftwares());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwareVersions(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwareVersions", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setProcessingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwares(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwares", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setSoftwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSoftwareId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSoftwareId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setTrackingSoftwareVersions(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTrackingSoftwareVersions", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_setTrackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg)
        {
          JArray< ::java::lang::String > a0((jobject) NULL);

          if (!parseArg(arg, "[s", &a0))
          {
            OBJ_CALL(self->object.setTrackingSoftwares(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTrackingSoftwares", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toCrdString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SoftwareConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_toString(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$SoftwareConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwareVersions());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwareVersions(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwareVersions", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwares());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__processingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwares(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwares", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSoftwareId());
          return j2p(value);
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__softwareId(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSoftwareId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "softwareId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrackingSoftwareVersions());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwareVersions(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setTrackingSoftwareVersions(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "trackingSoftwareVersions", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$SoftwareConfiguration_get__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrackingSoftwares());
          return JArray<jstring>(value.this$).wrap();
        }
        static int t_CRDConfiguration$SoftwareConfiguration_set__trackingSoftwares(t_CRDConfiguration$SoftwareConfiguration *self, PyObject *arg, void *data)
        {
          {
            JArray< ::java::lang::String > value((jobject) NULL);
            if (!parseArg(arg, "[s", &value))
            {
              INT_CALL(self->object.setTrackingSoftwares(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "trackingSoftwares", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GLONASSNavigationMessage::class$ = NULL;
            jmethodID *GLONASSNavigationMessage::mids$ = NULL;
            bool GLONASSNavigationMessage::live$ = false;

            jclass GLONASSNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getFrequencyNumber_d6ab429752e7c267] = env->getMethodID(cls, "getFrequencyNumber", "()I");
                mids$[mid_getGammaN_9981f74b2d109da6] = env->getMethodID(cls, "getGammaN", "()D");
                mids$[mid_getGroupDelayDifference_9981f74b2d109da6] = env->getMethodID(cls, "getGroupDelayDifference", "()D");
                mids$[mid_getHealthFlags_d6ab429752e7c267] = env->getMethodID(cls, "getHealthFlags", "()I");
                mids$[mid_getPropagator_4f5533f6ec0d19aa] = env->getMethodID(cls, "getPropagator", "(D)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
                mids$[mid_getPropagator_14cd6f8fde919df8] = env->getMethodID(cls, "getPropagator", "(DLorg/orekit/data/DataContext;)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
                mids$[mid_getPropagator_15a10a4b40e0f3b4] = env->getMethodID(cls, "getPropagator", "(DLorg/orekit/data/DataContext;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;D)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
                mids$[mid_getStatusFlags_d6ab429752e7c267] = env->getMethodID(cls, "getStatusFlags", "()I");
                mids$[mid_getTN_9981f74b2d109da6] = env->getMethodID(cls, "getTN", "()D");
                mids$[mid_getTime_9981f74b2d109da6] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getURA_9981f74b2d109da6] = env->getMethodID(cls, "getURA", "()D");
                mids$[mid_setFrequencyNumber_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setFrequencyNumber", "(D)V");
                mids$[mid_setGammaN_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setGammaN", "(D)V");
                mids$[mid_setGroupDelayDifference_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setGroupDelayDifference", "(D)V");
                mids$[mid_setHealthFlags_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setHealthFlags", "(D)V");
                mids$[mid_setStatusFlags_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setStatusFlags", "(D)V");
                mids$[mid_setTauN_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTauN", "(D)V");
                mids$[mid_setTime_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTime", "(D)V");
                mids$[mid_setURA_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setURA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GLONASSNavigationMessage::GLONASSNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            jint GLONASSNavigationMessage::getFrequencyNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getFrequencyNumber_d6ab429752e7c267]);
            }

            jdouble GLONASSNavigationMessage::getGammaN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGammaN_9981f74b2d109da6]);
            }

            jdouble GLONASSNavigationMessage::getGroupDelayDifference() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGroupDelayDifference_9981f74b2d109da6]);
            }

            jint GLONASSNavigationMessage::getHealthFlags() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthFlags_d6ab429752e7c267]);
            }

            ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNavigationMessage::getPropagator(jdouble a0) const
            {
              return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_4f5533f6ec0d19aa], a0));
            }

            ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNavigationMessage::getPropagator(jdouble a0, const ::org::orekit::data::DataContext & a1) const
            {
              return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_14cd6f8fde919df8], a0, a1.this$));
            }

            ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNavigationMessage::getPropagator(jdouble a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::orekit::frames::Frame & a3, jdouble a4) const
            {
              return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_15a10a4b40e0f3b4], a0, a1.this$, a2.this$, a3.this$, a4));
            }

            jint GLONASSNavigationMessage::getStatusFlags() const
            {
              return env->callIntMethod(this$, mids$[mid_getStatusFlags_d6ab429752e7c267]);
            }

            jdouble GLONASSNavigationMessage::getTN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTN_9981f74b2d109da6]);
            }

            jdouble GLONASSNavigationMessage::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_9981f74b2d109da6]);
            }

            jdouble GLONASSNavigationMessage::getURA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getURA_9981f74b2d109da6]);
            }

            void GLONASSNavigationMessage::setFrequencyNumber(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrequencyNumber_1ad26e8c8c0cd65b], a0);
            }

            void GLONASSNavigationMessage::setGammaN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setGammaN_1ad26e8c8c0cd65b], a0);
            }

            void GLONASSNavigationMessage::setGroupDelayDifference(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setGroupDelayDifference_1ad26e8c8c0cd65b], a0);
            }

            void GLONASSNavigationMessage::setHealthFlags(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthFlags_1ad26e8c8c0cd65b], a0);
            }

            void GLONASSNavigationMessage::setStatusFlags(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStatusFlags_1ad26e8c8c0cd65b], a0);
            }

            void GLONASSNavigationMessage::setTauN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTauN_1ad26e8c8c0cd65b], a0);
            }

            void GLONASSNavigationMessage::setTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTime_1ad26e8c8c0cd65b], a0);
            }

            void GLONASSNavigationMessage::setURA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_GLONASSNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GLONASSNavigationMessage_init_(t_GLONASSNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GLONASSNavigationMessage_getFrequencyNumber(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getGammaN(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getGroupDelayDifference(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getHealthFlags(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getPropagator(t_GLONASSNavigationMessage *self, PyObject *args);
            static PyObject *t_GLONASSNavigationMessage_getStatusFlags(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getTN(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getTime(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_getURA(t_GLONASSNavigationMessage *self);
            static PyObject *t_GLONASSNavigationMessage_setFrequencyNumber(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setGammaN(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setGroupDelayDifference(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setHealthFlags(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setStatusFlags(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setTauN(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setTime(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_setURA(t_GLONASSNavigationMessage *self, PyObject *arg);
            static PyObject *t_GLONASSNavigationMessage_get__frequencyNumber(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__frequencyNumber(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__gammaN(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__gammaN(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__groupDelayDifference(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__groupDelayDifference(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__healthFlags(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__healthFlags(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__statusFlags(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__statusFlags(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__tN(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__tauN(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__time(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__time(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GLONASSNavigationMessage_get__uRA(t_GLONASSNavigationMessage *self, void *data);
            static int t_GLONASSNavigationMessage_set__uRA(t_GLONASSNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_GLONASSNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, frequencyNumber),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, gammaN),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, groupDelayDifference),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, healthFlags),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, statusFlags),
              DECLARE_GET_FIELD(t_GLONASSNavigationMessage, tN),
              DECLARE_SET_FIELD(t_GLONASSNavigationMessage, tauN),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, time),
              DECLARE_GETSET_FIELD(t_GLONASSNavigationMessage, uRA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GLONASSNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_GLONASSNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getFrequencyNumber, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getGammaN, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getGroupDelayDifference, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getHealthFlags, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getPropagator, METH_VARARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getStatusFlags, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getTN, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getTime, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, getURA, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setFrequencyNumber, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setGammaN, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setGroupDelayDifference, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setHealthFlags, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setStatusFlags, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setTauN, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setTime, METH_O),
              DECLARE_METHOD(t_GLONASSNavigationMessage, setURA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GLONASSNavigationMessage)[] = {
              { Py_tp_methods, t_GLONASSNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_GLONASSNavigationMessage_init_ },
              { Py_tp_getset, t_GLONASSNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GLONASSNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage),
              NULL
            };

            DEFINE_TYPE(GLONASSNavigationMessage, t_GLONASSNavigationMessage, GLONASSNavigationMessage);

            void t_GLONASSNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(GLONASSNavigationMessage), &PY_TYPE_DEF(GLONASSNavigationMessage), module, "GLONASSNavigationMessage", 0);
            }

            void t_GLONASSNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNavigationMessage), "class_", make_descriptor(GLONASSNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNavigationMessage), "wrapfn_", make_descriptor(t_GLONASSNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GLONASSNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GLONASSNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_GLONASSNavigationMessage::wrap_Object(GLONASSNavigationMessage(((t_GLONASSNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_GLONASSNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GLONASSNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GLONASSNavigationMessage_init_(t_GLONASSNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              GLONASSNavigationMessage object((jobject) NULL);

              INT_CALL(object = GLONASSNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_GLONASSNavigationMessage_getFrequencyNumber(t_GLONASSNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getFrequencyNumber());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getGammaN(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGammaN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getGroupDelayDifference(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGroupDelayDifference());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getHealthFlags(t_GLONASSNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealthFlags());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getPropagator(t_GLONASSNavigationMessage *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jdouble a0;
                  ::org::orekit::propagation::numerical::GLONASSNumericalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "D", &a0))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0));
                    return ::org::orekit::propagation::numerical::t_GLONASSNumericalPropagator::wrap_Object(result);
                  }
                }
                break;
               case 2:
                {
                  jdouble a0;
                  ::org::orekit::data::DataContext a1((jobject) NULL);
                  ::org::orekit::propagation::numerical::GLONASSNumericalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "Dk", ::org::orekit::data::DataContext::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1));
                    return ::org::orekit::propagation::numerical::t_GLONASSNumericalPropagator::wrap_Object(result);
                  }
                }
                break;
               case 5:
                {
                  jdouble a0;
                  ::org::orekit::data::DataContext a1((jobject) NULL);
                  ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
                  ::org::orekit::frames::Frame a3((jobject) NULL);
                  jdouble a4;
                  ::org::orekit::propagation::numerical::GLONASSNumericalPropagator result((jobject) NULL);

                  if (!parseArgs(args, "DkkkD", ::org::orekit::data::DataContext::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1, a2, a3, a4));
                    return ::org::orekit::propagation::numerical::t_GLONASSNumericalPropagator::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_getStatusFlags(t_GLONASSNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getStatusFlags());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getTN(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getTime(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_getURA(t_GLONASSNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getURA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSNavigationMessage_setFrequencyNumber(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setFrequencyNumber(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrequencyNumber", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setGammaN(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setGammaN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setGammaN", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setGroupDelayDifference(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setGroupDelayDifference(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setGroupDelayDifference", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setHealthFlags(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setHealthFlags(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealthFlags", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setStatusFlags(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setStatusFlags(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStatusFlags", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setTauN(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTauN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTauN", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setTime(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTime", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_setURA(t_GLONASSNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setURA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setURA", arg);
              return NULL;
            }

            static PyObject *t_GLONASSNavigationMessage_get__frequencyNumber(t_GLONASSNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getFrequencyNumber());
              return PyLong_FromLong((long) value);
            }
            static int t_GLONASSNavigationMessage_set__frequencyNumber(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setFrequencyNumber(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frequencyNumber", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__gammaN(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGammaN());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GLONASSNavigationMessage_set__gammaN(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setGammaN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "gammaN", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__groupDelayDifference(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGroupDelayDifference());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GLONASSNavigationMessage_set__groupDelayDifference(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setGroupDelayDifference(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "groupDelayDifference", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__healthFlags(t_GLONASSNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealthFlags());
              return PyLong_FromLong((long) value);
            }
            static int t_GLONASSNavigationMessage_set__healthFlags(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setHealthFlags(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "healthFlags", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__statusFlags(t_GLONASSNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getStatusFlags());
              return PyLong_FromLong((long) value);
            }
            static int t_GLONASSNavigationMessage_set__statusFlags(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setStatusFlags(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "statusFlags", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__tN(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTN());
              return PyFloat_FromDouble((double) value);
            }

            static int t_GLONASSNavigationMessage_set__tauN(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTauN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tauN", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__time(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GLONASSNavigationMessage_set__time(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "time", arg);
              return -1;
            }

            static PyObject *t_GLONASSNavigationMessage_get__uRA(t_GLONASSNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getURA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GLONASSNavigationMessage_set__uRA(t_GLONASSNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setURA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uRA", arg);
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
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GLONASSAnalyticalPropagator::class$ = NULL;
          jmethodID *GLONASSAnalyticalPropagator::mids$ = NULL;
          bool GLONASSAnalyticalPropagator::live$ = false;

          jclass GLONASSAnalyticalPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getECEF_cb151471db4570f0] = env->getMethodID(cls, "getECEF", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getECI_cb151471db4570f0] = env->getMethodID(cls, "getECI", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getGLONASSOrbitalElements_96e04bba8548a588] = env->getMethodID(cls, "getGLONASSOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;");
              mids$[mid_getMU_9981f74b2d109da6] = env->getStaticMethodID(cls, "getMU", "()D");
              mids$[mid_propagateInEcef_37ec40ec795d4b0a] = env->getMethodID(cls, "propagateInEcef", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_resetInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_getMass_209f08246d708042] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_propagateOrbit_776cca2e85dfe61d] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
              mids$[mid_resetIntermediateState_b69b5541e48d21c0] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame GLONASSAnalyticalPropagator::getECEF() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECEF_cb151471db4570f0]));
          }

          ::org::orekit::frames::Frame GLONASSAnalyticalPropagator::getECI() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECI_cb151471db4570f0]));
          }

          ::org::orekit::frames::Frame GLONASSAnalyticalPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
          }

          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements GLONASSAnalyticalPropagator::getGLONASSOrbitalElements() const
          {
            return ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements(env->callObjectMethod(this$, mids$[mid_getGLONASSOrbitalElements_96e04bba8548a588]));
          }

          jdouble GLONASSAnalyticalPropagator::getMU()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMU_9981f74b2d109da6]);
          }

          ::org::orekit::utils::PVCoordinates GLONASSAnalyticalPropagator::propagateInEcef(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_propagateInEcef_37ec40ec795d4b0a], a0.this$));
          }

          void GLONASSAnalyticalPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_72b846eb87f3af9a], a0.this$);
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
          static PyObject *t_GLONASSAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagator_getECEF(t_GLONASSAnalyticalPropagator *self);
          static PyObject *t_GLONASSAnalyticalPropagator_getECI(t_GLONASSAnalyticalPropagator *self);
          static PyObject *t_GLONASSAnalyticalPropagator_getFrame(t_GLONASSAnalyticalPropagator *self, PyObject *args);
          static PyObject *t_GLONASSAnalyticalPropagator_getGLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self);
          static PyObject *t_GLONASSAnalyticalPropagator_getMU(PyTypeObject *type);
          static PyObject *t_GLONASSAnalyticalPropagator_propagateInEcef(t_GLONASSAnalyticalPropagator *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagator_resetInitialState(t_GLONASSAnalyticalPropagator *self, PyObject *args);
          static PyObject *t_GLONASSAnalyticalPropagator_get__eCEF(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__eCI(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__frame(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__gLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__mU(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyGetSetDef t_GLONASSAnalyticalPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, eCEF),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, eCI),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, frame),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, gLONASSOrbitalElements),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, mU),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GLONASSAnalyticalPropagator__methods_[] = {
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getECEF, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getECI, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getGLONASSOrbitalElements, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getMU, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, propagateInEcef, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, resetInitialState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GLONASSAnalyticalPropagator)[] = {
            { Py_tp_methods, t_GLONASSAnalyticalPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GLONASSAnalyticalPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GLONASSAnalyticalPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(GLONASSAnalyticalPropagator, t_GLONASSAnalyticalPropagator, GLONASSAnalyticalPropagator);

          void t_GLONASSAnalyticalPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(GLONASSAnalyticalPropagator), &PY_TYPE_DEF(GLONASSAnalyticalPropagator), module, "GLONASSAnalyticalPropagator", 0);
          }

          void t_GLONASSAnalyticalPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagator), "class_", make_descriptor(GLONASSAnalyticalPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagator), "wrapfn_", make_descriptor(t_GLONASSAnalyticalPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GLONASSAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GLONASSAnalyticalPropagator::initializeClass, 1)))
              return NULL;
            return t_GLONASSAnalyticalPropagator::wrap_Object(GLONASSAnalyticalPropagator(((t_GLONASSAnalyticalPropagator *) arg)->object.this$));
          }
          static PyObject *t_GLONASSAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GLONASSAnalyticalPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getECEF(t_GLONASSAnalyticalPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getECI(t_GLONASSAnalyticalPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getFrame(t_GLONASSAnalyticalPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GLONASSAnalyticalPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getGLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self)
          {
            ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements result((jobject) NULL);
            OBJ_CALL(result = self->object.getGLONASSOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getMU(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator::getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_propagateInEcef(t_GLONASSAnalyticalPropagator *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.propagateInEcef(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "propagateInEcef", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagator_resetInitialState(t_GLONASSAnalyticalPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GLONASSAnalyticalPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__eCEF(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__eCI(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__frame(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__gLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements value((jobject) NULL);
            OBJ_CALL(value = self->object.getGLONASSOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__mU(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldAdditionalDerivativesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/integration/FieldCombinedDerivatives.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldAdditionalDerivativesProvider::class$ = NULL;
        jmethodID *FieldAdditionalDerivativesProvider::mids$ = NULL;
        bool FieldAdditionalDerivativesProvider::live$ = false;

        jclass FieldAdditionalDerivativesProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldAdditionalDerivativesProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_combinedDerivatives_1031021bd411f1f1] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/integration/FieldCombinedDerivatives;");
            mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_yields_712e981f67f3ccbe] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::integration::FieldCombinedDerivatives FieldAdditionalDerivativesProvider::combinedDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::orekit::propagation::integration::FieldCombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_1031021bd411f1f1], a0.this$));
        }

        jint FieldAdditionalDerivativesProvider::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
        }

        ::java::lang::String FieldAdditionalDerivativesProvider::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
        }

        void FieldAdditionalDerivativesProvider::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
        }

        jboolean FieldAdditionalDerivativesProvider::yields(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_yields_712e981f67f3ccbe], a0.this$);
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
        static PyObject *t_FieldAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdditionalDerivativesProvider_of_(t_FieldAdditionalDerivativesProvider *self, PyObject *args);
        static PyObject *t_FieldAdditionalDerivativesProvider_combinedDerivatives(t_FieldAdditionalDerivativesProvider *self, PyObject *arg);
        static PyObject *t_FieldAdditionalDerivativesProvider_getDimension(t_FieldAdditionalDerivativesProvider *self);
        static PyObject *t_FieldAdditionalDerivativesProvider_getName(t_FieldAdditionalDerivativesProvider *self);
        static PyObject *t_FieldAdditionalDerivativesProvider_init(t_FieldAdditionalDerivativesProvider *self, PyObject *args);
        static PyObject *t_FieldAdditionalDerivativesProvider_yields(t_FieldAdditionalDerivativesProvider *self, PyObject *arg);
        static PyObject *t_FieldAdditionalDerivativesProvider_get__dimension(t_FieldAdditionalDerivativesProvider *self, void *data);
        static PyObject *t_FieldAdditionalDerivativesProvider_get__name(t_FieldAdditionalDerivativesProvider *self, void *data);
        static PyObject *t_FieldAdditionalDerivativesProvider_get__parameters_(t_FieldAdditionalDerivativesProvider *self, void *data);
        static PyGetSetDef t_FieldAdditionalDerivativesProvider__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAdditionalDerivativesProvider, dimension),
          DECLARE_GET_FIELD(t_FieldAdditionalDerivativesProvider, name),
          DECLARE_GET_FIELD(t_FieldAdditionalDerivativesProvider, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAdditionalDerivativesProvider__methods_[] = {
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, combinedDerivatives, METH_O),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, getName, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, yields, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAdditionalDerivativesProvider)[] = {
          { Py_tp_methods, t_FieldAdditionalDerivativesProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAdditionalDerivativesProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAdditionalDerivativesProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAdditionalDerivativesProvider, t_FieldAdditionalDerivativesProvider, FieldAdditionalDerivativesProvider);
        PyObject *t_FieldAdditionalDerivativesProvider::wrap_Object(const FieldAdditionalDerivativesProvider& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdditionalDerivativesProvider::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdditionalDerivativesProvider *self = (t_FieldAdditionalDerivativesProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAdditionalDerivativesProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdditionalDerivativesProvider::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdditionalDerivativesProvider *self = (t_FieldAdditionalDerivativesProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAdditionalDerivativesProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAdditionalDerivativesProvider), &PY_TYPE_DEF(FieldAdditionalDerivativesProvider), module, "FieldAdditionalDerivativesProvider", 0);
        }

        void t_FieldAdditionalDerivativesProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalDerivativesProvider), "class_", make_descriptor(FieldAdditionalDerivativesProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalDerivativesProvider), "wrapfn_", make_descriptor(t_FieldAdditionalDerivativesProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalDerivativesProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAdditionalDerivativesProvider::initializeClass, 1)))
            return NULL;
          return t_FieldAdditionalDerivativesProvider::wrap_Object(FieldAdditionalDerivativesProvider(((t_FieldAdditionalDerivativesProvider *) arg)->object.this$));
        }
        static PyObject *t_FieldAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAdditionalDerivativesProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_of_(t_FieldAdditionalDerivativesProvider *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_combinedDerivatives(t_FieldAdditionalDerivativesProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::integration::FieldCombinedDerivatives result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.combinedDerivatives(a0));
            return ::org::orekit::propagation::integration::t_FieldCombinedDerivatives::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
          return NULL;
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_getDimension(t_FieldAdditionalDerivativesProvider *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_getName(t_FieldAdditionalDerivativesProvider *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_init(t_FieldAdditionalDerivativesProvider *self, PyObject *args)
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

        static PyObject *t_FieldAdditionalDerivativesProvider_yields(t_FieldAdditionalDerivativesProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.yields(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "yields", arg);
          return NULL;
        }
        static PyObject *t_FieldAdditionalDerivativesProvider_get__parameters_(t_FieldAdditionalDerivativesProvider *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_get__dimension(t_FieldAdditionalDerivativesProvider *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_get__name(t_FieldAdditionalDerivativesProvider *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1058.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1058::class$ = NULL;
              jmethodID *Rtcm1058::mids$ = NULL;
              bool Rtcm1058::live$ = false;

              jclass Rtcm1058::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1058");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a690f6f327f6cb67] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1058::Rtcm1058(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_a690f6f327f6cb67, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1058_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1058_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1058_of_(t_Rtcm1058 *self, PyObject *args);
              static int t_Rtcm1058_init_(t_Rtcm1058 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1058_get__parameters_(t_Rtcm1058 *self, void *data);
              static PyGetSetDef t_Rtcm1058__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1058, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1058__methods_[] = {
                DECLARE_METHOD(t_Rtcm1058, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1058, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1058, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1058)[] = {
                { Py_tp_methods, t_Rtcm1058__methods_ },
                { Py_tp_init, (void *) t_Rtcm1058_init_ },
                { Py_tp_getset, t_Rtcm1058__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1058)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1058, t_Rtcm1058, Rtcm1058);
              PyObject *t_Rtcm1058::wrap_Object(const Rtcm1058& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1058::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1058 *self = (t_Rtcm1058 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1058::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1058::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1058 *self = (t_Rtcm1058 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1058::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1058), &PY_TYPE_DEF(Rtcm1058), module, "Rtcm1058", 0);
              }

              void t_Rtcm1058::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1058), "class_", make_descriptor(Rtcm1058::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1058), "wrapfn_", make_descriptor(t_Rtcm1058::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1058), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1058_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1058::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1058::wrap_Object(Rtcm1058(((t_Rtcm1058 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1058_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1058::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1058_of_(t_Rtcm1058 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1058_init_(t_Rtcm1058 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1058 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1058(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmClockCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1058_get__parameters_(t_Rtcm1058 *self, void *data)
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
#include "org/orekit/models/earth/displacement/TectonicsDisplacement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *TectonicsDisplacement::class$ = NULL;
          jmethodID *TectonicsDisplacement::mids$ = NULL;
          bool TectonicsDisplacement::live$ = false;

          jclass TectonicsDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/TectonicsDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6cd7edb8044c4c4f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_displacement_44ddfc2adc2cc28a] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TectonicsDisplacement::TectonicsDisplacement(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6cd7edb8044c4c4f, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D TectonicsDisplacement::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_44ddfc2adc2cc28a], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_TectonicsDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TectonicsDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TectonicsDisplacement_init_(t_TectonicsDisplacement *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TectonicsDisplacement_displacement(t_TectonicsDisplacement *self, PyObject *args);

          static PyMethodDef t_TectonicsDisplacement__methods_[] = {
            DECLARE_METHOD(t_TectonicsDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TectonicsDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TectonicsDisplacement, displacement, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TectonicsDisplacement)[] = {
            { Py_tp_methods, t_TectonicsDisplacement__methods_ },
            { Py_tp_init, (void *) t_TectonicsDisplacement_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TectonicsDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TectonicsDisplacement, t_TectonicsDisplacement, TectonicsDisplacement);

          void t_TectonicsDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(TectonicsDisplacement), &PY_TYPE_DEF(TectonicsDisplacement), module, "TectonicsDisplacement", 0);
          }

          void t_TectonicsDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TectonicsDisplacement), "class_", make_descriptor(TectonicsDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TectonicsDisplacement), "wrapfn_", make_descriptor(t_TectonicsDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TectonicsDisplacement), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TectonicsDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TectonicsDisplacement::initializeClass, 1)))
              return NULL;
            return t_TectonicsDisplacement::wrap_Object(TectonicsDisplacement(((t_TectonicsDisplacement *) arg)->object.this$));
          }
          static PyObject *t_TectonicsDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TectonicsDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TectonicsDisplacement_init_(t_TectonicsDisplacement *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            TectonicsDisplacement object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TectonicsDisplacement(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TectonicsDisplacement_displacement(t_TectonicsDisplacement *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::data::BodiesElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.displacement(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "displacement", args);
            return NULL;
          }
        }
      }
    }
  }
}
