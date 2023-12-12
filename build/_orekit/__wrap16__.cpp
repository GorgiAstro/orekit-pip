#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/OpenIntToDoubleHashMap$Iterator.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/lang/Class.h"
#include "java/util/NoSuchElementException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToDoubleHashMap$Iterator::class$ = NULL;
      jmethodID *OpenIntToDoubleHashMap$Iterator::mids$ = NULL;
      bool OpenIntToDoubleHashMap$Iterator::live$ = false;

      jclass OpenIntToDoubleHashMap$Iterator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToDoubleHashMap$Iterator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_advance_0640e6acf969ed28] = env->getMethodID(cls, "advance", "()V");
          mids$[mid_hasNext_89b302893bdbe1f1] = env->getMethodID(cls, "hasNext", "()Z");
          mids$[mid_key_412668abc8d889e9] = env->getMethodID(cls, "key", "()I");
          mids$[mid_value_557b8123390d8d0c] = env->getMethodID(cls, "value", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void OpenIntToDoubleHashMap$Iterator::advance() const
      {
        env->callVoidMethod(this$, mids$[mid_advance_0640e6acf969ed28]);
      }

      jboolean OpenIntToDoubleHashMap$Iterator::hasNext() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasNext_89b302893bdbe1f1]);
      }

      jint OpenIntToDoubleHashMap$Iterator::key() const
      {
        return env->callIntMethod(this$, mids$[mid_key_412668abc8d889e9]);
      }

      jdouble OpenIntToDoubleHashMap$Iterator::value() const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_557b8123390d8d0c]);
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
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_advance(t_OpenIntToDoubleHashMap$Iterator *self);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_hasNext(t_OpenIntToDoubleHashMap$Iterator *self);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_key(t_OpenIntToDoubleHashMap$Iterator *self);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_value(t_OpenIntToDoubleHashMap$Iterator *self);

      static PyMethodDef t_OpenIntToDoubleHashMap$Iterator__methods_[] = {
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, advance, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, hasNext, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, key, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, value, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToDoubleHashMap$Iterator)[] = {
        { Py_tp_methods, t_OpenIntToDoubleHashMap$Iterator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToDoubleHashMap$Iterator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToDoubleHashMap$Iterator, t_OpenIntToDoubleHashMap$Iterator, OpenIntToDoubleHashMap$Iterator);

      void t_OpenIntToDoubleHashMap$Iterator::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToDoubleHashMap$Iterator), &PY_TYPE_DEF(OpenIntToDoubleHashMap$Iterator), module, "OpenIntToDoubleHashMap$Iterator", 0);
      }

      void t_OpenIntToDoubleHashMap$Iterator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap$Iterator), "class_", make_descriptor(OpenIntToDoubleHashMap$Iterator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap$Iterator), "wrapfn_", make_descriptor(t_OpenIntToDoubleHashMap$Iterator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap$Iterator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToDoubleHashMap$Iterator::initializeClass, 1)))
          return NULL;
        return t_OpenIntToDoubleHashMap$Iterator::wrap_Object(OpenIntToDoubleHashMap$Iterator(((t_OpenIntToDoubleHashMap$Iterator *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToDoubleHashMap$Iterator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_advance(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        OBJ_CALL(self->object.advance());
        Py_RETURN_NONE;
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_hasNext(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasNext());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_key(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.key());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_value(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.value());
        return PyFloat_FromDouble((double) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/LyapunovOrbit.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/RichardsonExpansion.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LyapunovOrbit::class$ = NULL;
      jmethodID *LyapunovOrbit::mids$ = NULL;
      bool LyapunovOrbit::live$ = false;

      jclass LyapunovOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LyapunovOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bdcb30870316daf0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/RichardsonExpansion;D)V");
          mids$[mid_init$_cba003a7418c96ab] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_applyCorrectionOnPV_0f6106070ec4ffe8] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LyapunovOrbit::LyapunovOrbit(const ::org::orekit::orbits::RichardsonExpansion & a0, jdouble a1) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_bdcb30870316daf0, a0.this$, a1)) {}

      LyapunovOrbit::LyapunovOrbit(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::PVCoordinates & a1, jdouble a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_cba003a7418c96ab, a0.this$, a1.this$, a2)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_LyapunovOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LyapunovOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LyapunovOrbit_init_(t_LyapunovOrbit *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_LyapunovOrbit__methods_[] = {
        DECLARE_METHOD(t_LyapunovOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LyapunovOrbit, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LyapunovOrbit)[] = {
        { Py_tp_methods, t_LyapunovOrbit__methods_ },
        { Py_tp_init, (void *) t_LyapunovOrbit_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LyapunovOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::LibrationOrbit),
        NULL
      };

      DEFINE_TYPE(LyapunovOrbit, t_LyapunovOrbit, LyapunovOrbit);

      void t_LyapunovOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(LyapunovOrbit), &PY_TYPE_DEF(LyapunovOrbit), module, "LyapunovOrbit", 0);
      }

      void t_LyapunovOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LyapunovOrbit), "class_", make_descriptor(LyapunovOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LyapunovOrbit), "wrapfn_", make_descriptor(t_LyapunovOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LyapunovOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LyapunovOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LyapunovOrbit::initializeClass, 1)))
          return NULL;
        return t_LyapunovOrbit::wrap_Object(LyapunovOrbit(((t_LyapunovOrbit *) arg)->object.this$));
      }
      static PyObject *t_LyapunovOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LyapunovOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LyapunovOrbit_init_(t_LyapunovOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::RichardsonExpansion a0((jobject) NULL);
            jdouble a1;
            LyapunovOrbit object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::orbits::RichardsonExpansion::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LyapunovOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            jdouble a2;
            LyapunovOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::bodies::CR3BPSystem::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LyapunovOrbit(a0, a1, a2));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/SubCircle.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *SubCircle::class$ = NULL;
          jmethodID *SubCircle::mids$ = NULL;
          bool SubCircle::live$ = false;

          jclass SubCircle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/SubCircle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_08c86faf9fec8eaa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_split_ae8e2bbf2389e86e] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_0ffd07a16ed53139] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubCircle::SubCircle(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_08c86faf9fec8eaa, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubCircle::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_ae8e2bbf2389e86e], a0.this$));
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
          static PyObject *t_SubCircle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubCircle_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubCircle_of_(t_SubCircle *self, PyObject *args);
          static int t_SubCircle_init_(t_SubCircle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubCircle_split(t_SubCircle *self, PyObject *args);
          static PyObject *t_SubCircle_get__parameters_(t_SubCircle *self, void *data);
          static PyGetSetDef t_SubCircle__fields_[] = {
            DECLARE_GET_FIELD(t_SubCircle, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubCircle__methods_[] = {
            DECLARE_METHOD(t_SubCircle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubCircle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubCircle, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubCircle, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubCircle)[] = {
            { Py_tp_methods, t_SubCircle__methods_ },
            { Py_tp_init, (void *) t_SubCircle_init_ },
            { Py_tp_getset, t_SubCircle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubCircle)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubCircle, t_SubCircle, SubCircle);
          PyObject *t_SubCircle::wrap_Object(const SubCircle& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubCircle::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubCircle *self = (t_SubCircle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubCircle::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubCircle::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubCircle *self = (t_SubCircle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubCircle::install(PyObject *module)
          {
            installType(&PY_TYPE(SubCircle), &PY_TYPE_DEF(SubCircle), module, "SubCircle", 0);
          }

          void t_SubCircle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubCircle), "class_", make_descriptor(SubCircle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubCircle), "wrapfn_", make_descriptor(t_SubCircle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubCircle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubCircle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubCircle::initializeClass, 1)))
              return NULL;
            return t_SubCircle::wrap_Object(SubCircle(((t_SubCircle *) arg)->object.this$));
          }
          static PyObject *t_SubCircle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubCircle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubCircle_of_(t_SubCircle *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubCircle_init_(t_SubCircle *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubCircle object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubCircle(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
              self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubCircle_split(t_SubCircle *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D));
            }

            return callSuper(PY_TYPE(SubCircle), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubCircle_get__parameters_(t_SubCircle *self, void *data)
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
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalUnscentedKalmanEstimator::class$ = NULL;
        jmethodID *SemiAnalyticalUnscentedKalmanEstimator::mids$ = NULL;
        bool SemiAnalyticalUnscentedKalmanEstimator::live$ = false;

        jclass SemiAnalyticalUnscentedKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_processMeasurements_59e9b5905b4638f0] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_4275515b1ffe8ceb] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_32faeba2996c6566] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalUnscentedKalmanEstimator::processMeasurements(const ::java::util::List & a0) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_59e9b5905b4638f0], a0.this$));
        }

        void SemiAnalyticalUnscentedKalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_4275515b1ffe8ceb], a0.this$);
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
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_processMeasurements(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_setObserver(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg);
        static int t_SemiAnalyticalUnscentedKalmanEstimator_set__observer(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_SemiAnalyticalUnscentedKalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_SemiAnalyticalUnscentedKalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalUnscentedKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalUnscentedKalmanEstimator)[] = {
          { Py_tp_methods, t_SemiAnalyticalUnscentedKalmanEstimator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalUnscentedKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalUnscentedKalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalUnscentedKalmanEstimator, t_SemiAnalyticalUnscentedKalmanEstimator, SemiAnalyticalUnscentedKalmanEstimator);

        void t_SemiAnalyticalUnscentedKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), &PY_TYPE_DEF(SemiAnalyticalUnscentedKalmanEstimator), module, "SemiAnalyticalUnscentedKalmanEstimator", 0);
        }

        void t_SemiAnalyticalUnscentedKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), "class_", make_descriptor(SemiAnalyticalUnscentedKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), "wrapfn_", make_descriptor(t_SemiAnalyticalUnscentedKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalUnscentedKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalUnscentedKalmanEstimator::wrap_Object(SemiAnalyticalUnscentedKalmanEstimator(((t_SemiAnalyticalUnscentedKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalUnscentedKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_processMeasurements(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_setObserver(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static int t_SemiAnalyticalUnscentedKalmanEstimator_set__observer(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/PythonProcessingState.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *PythonProcessingState::class$ = NULL;
            jmethodID *PythonProcessingState::mids$ = NULL;
            bool PythonProcessingState::live$ = false;

            jclass PythonProcessingState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/PythonProcessingState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_processToken_7f6d4ab73f1deb26] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonProcessingState::PythonProcessingState() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void PythonProcessingState::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonProcessingState::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonProcessingState::pythonExtension(jlong a0) const
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
          namespace parsing {
            static PyObject *t_PythonProcessingState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonProcessingState_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonProcessingState_init_(t_PythonProcessingState *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonProcessingState_finalize(t_PythonProcessingState *self);
            static PyObject *t_PythonProcessingState_pythonExtension(t_PythonProcessingState *self, PyObject *args);
            static jboolean JNICALL t_PythonProcessingState_processToken0(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonProcessingState_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonProcessingState_get__self(t_PythonProcessingState *self, void *data);
            static PyGetSetDef t_PythonProcessingState__fields_[] = {
              DECLARE_GET_FIELD(t_PythonProcessingState, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonProcessingState__methods_[] = {
              DECLARE_METHOD(t_PythonProcessingState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonProcessingState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonProcessingState, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonProcessingState, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonProcessingState)[] = {
              { Py_tp_methods, t_PythonProcessingState__methods_ },
              { Py_tp_init, (void *) t_PythonProcessingState_init_ },
              { Py_tp_getset, t_PythonProcessingState__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonProcessingState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonProcessingState, t_PythonProcessingState, PythonProcessingState);

            void t_PythonProcessingState::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonProcessingState), &PY_TYPE_DEF(PythonProcessingState), module, "PythonProcessingState", 1);
            }

            void t_PythonProcessingState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonProcessingState), "class_", make_descriptor(PythonProcessingState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonProcessingState), "wrapfn_", make_descriptor(t_PythonProcessingState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonProcessingState), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonProcessingState::initializeClass);
              JNINativeMethod methods[] = {
                { "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z", (void *) t_PythonProcessingState_processToken0 },
                { "pythonDecRef", "()V", (void *) t_PythonProcessingState_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonProcessingState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonProcessingState::initializeClass, 1)))
                return NULL;
              return t_PythonProcessingState::wrap_Object(PythonProcessingState(((t_PythonProcessingState *) arg)->object.this$));
            }
            static PyObject *t_PythonProcessingState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonProcessingState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonProcessingState_init_(t_PythonProcessingState *self, PyObject *args, PyObject *kwds)
            {
              PythonProcessingState object((jobject) NULL);

              INT_CALL(object = PythonProcessingState());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonProcessingState_finalize(t_PythonProcessingState *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonProcessingState_pythonExtension(t_PythonProcessingState *self, PyObject *args)
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

            static jboolean JNICALL t_PythonProcessingState_processToken0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonProcessingState::mids$[PythonProcessingState::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *o0 = ::org::orekit::files::ccsds::utils::lexical::t_ParseToken::wrap_Object(::org::orekit::files::ccsds::utils::lexical::ParseToken(a0));
              PyObject *result = PyObject_CallMethod(obj, "processToken", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("processToken", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static void JNICALL t_PythonProcessingState_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonProcessingState::mids$[PythonProcessingState::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonProcessingState::mids$[PythonProcessingState::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonProcessingState_get__self(t_PythonProcessingState *self, void *data)
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
#include "org/orekit/rugged/los/FixedRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *FixedRotation::class$ = NULL;
        jmethodID *FixedRotation::mids$ = NULL;
        bool FixedRotation::live$ = false;

        jclass FixedRotation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/FixedRotation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b345141f3bdd1b46] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_getParametersDrivers_d7cce92225eb0db2] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_871f750b8782ea1a] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_1f552c4ec2328a5b] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FixedRotation::FixedRotation(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b345141f3bdd1b46, a0.this$, a1.this$, a2)) {}

        ::java::util::stream::Stream FixedRotation::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d7cce92225eb0db2]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FixedRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_871f750b8782ea1a], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FixedRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_1f552c4ec2328a5b], a0, a1.this$, a2.this$));
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
      namespace los {
        static PyObject *t_FixedRotation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FixedRotation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FixedRotation_init_(t_FixedRotation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FixedRotation_getParametersDrivers(t_FixedRotation *self);
        static PyObject *t_FixedRotation_transformLOS(t_FixedRotation *self, PyObject *args);
        static PyObject *t_FixedRotation_get__parametersDrivers(t_FixedRotation *self, void *data);
        static PyGetSetDef t_FixedRotation__fields_[] = {
          DECLARE_GET_FIELD(t_FixedRotation, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FixedRotation__methods_[] = {
          DECLARE_METHOD(t_FixedRotation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FixedRotation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FixedRotation, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_FixedRotation, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FixedRotation)[] = {
          { Py_tp_methods, t_FixedRotation__methods_ },
          { Py_tp_init, (void *) t_FixedRotation_init_ },
          { Py_tp_getset, t_FixedRotation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FixedRotation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FixedRotation, t_FixedRotation, FixedRotation);

        void t_FixedRotation::install(PyObject *module)
        {
          installType(&PY_TYPE(FixedRotation), &PY_TYPE_DEF(FixedRotation), module, "FixedRotation", 0);
        }

        void t_FixedRotation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRotation), "class_", make_descriptor(FixedRotation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRotation), "wrapfn_", make_descriptor(t_FixedRotation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRotation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FixedRotation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FixedRotation::initializeClass, 1)))
            return NULL;
          return t_FixedRotation::wrap_Object(FixedRotation(((t_FixedRotation *) arg)->object.this$));
        }
        static PyObject *t_FixedRotation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FixedRotation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FixedRotation_init_(t_FixedRotation *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          FixedRotation object((jobject) NULL);

          if (!parseArgs(args, "skD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = FixedRotation(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FixedRotation_getParametersDrivers(t_FixedRotation *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_FixedRotation_transformLOS(t_FixedRotation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ik", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_FixedRotation_get__parametersDrivers(t_FixedRotation *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersionLoader$ITRFVersionConfiguration::class$ = NULL;
      jmethodID *ITRFVersionLoader$ITRFVersionConfiguration::mids$ = NULL;
      bool ITRFVersionLoader$ITRFVersionConfiguration::live$ = false;

      jclass ITRFVersionLoader$ITRFVersionConfiguration::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0faa264352fa9521] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/frames/ITRFVersion;II)V");
          mids$[mid_appliesTo_fd2162b8a05a22fe] = env->getMethodID(cls, "appliesTo", "(Ljava/lang/String;)Z");
          mids$[mid_getVersion_b311296551ce8af2] = env->getMethodID(cls, "getVersion", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_isValid_e034cac2b514bb09] = env->getMethodID(cls, "isValid", "(I)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ITRFVersionLoader$ITRFVersionConfiguration::ITRFVersionLoader$ITRFVersionConfiguration(const ::java::lang::String & a0, const ::org::orekit::frames::ITRFVersion & a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0faa264352fa9521, a0.this$, a1.this$, a2, a3)) {}

      jboolean ITRFVersionLoader$ITRFVersionConfiguration::appliesTo(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_appliesTo_fd2162b8a05a22fe], a0.this$);
      }

      ::org::orekit::frames::ITRFVersion ITRFVersionLoader$ITRFVersionConfiguration::getVersion() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getVersion_b311296551ce8af2]));
      }

      jboolean ITRFVersionLoader$ITRFVersionConfiguration::isValid(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isValid_e034cac2b514bb09], a0);
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
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ITRFVersionLoader$ITRFVersionConfiguration_init_(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_appliesTo(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *arg);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_getVersion(t_ITRFVersionLoader$ITRFVersionConfiguration *self);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_isValid(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *arg);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_get__version(t_ITRFVersionLoader$ITRFVersionConfiguration *self, void *data);
      static PyGetSetDef t_ITRFVersionLoader$ITRFVersionConfiguration__fields_[] = {
        DECLARE_GET_FIELD(t_ITRFVersionLoader$ITRFVersionConfiguration, version),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ITRFVersionLoader$ITRFVersionConfiguration__methods_[] = {
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, appliesTo, METH_O),
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, getVersion, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, isValid, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersionLoader$ITRFVersionConfiguration)[] = {
        { Py_tp_methods, t_ITRFVersionLoader$ITRFVersionConfiguration__methods_ },
        { Py_tp_init, (void *) t_ITRFVersionLoader$ITRFVersionConfiguration_init_ },
        { Py_tp_getset, t_ITRFVersionLoader$ITRFVersionConfiguration__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersionLoader$ITRFVersionConfiguration)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ITRFVersionLoader$ITRFVersionConfiguration, t_ITRFVersionLoader$ITRFVersionConfiguration, ITRFVersionLoader$ITRFVersionConfiguration);

      void t_ITRFVersionLoader$ITRFVersionConfiguration::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersionLoader$ITRFVersionConfiguration), &PY_TYPE_DEF(ITRFVersionLoader$ITRFVersionConfiguration), module, "ITRFVersionLoader$ITRFVersionConfiguration", 0);
      }

      void t_ITRFVersionLoader$ITRFVersionConfiguration::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader$ITRFVersionConfiguration), "class_", make_descriptor(ITRFVersionLoader$ITRFVersionConfiguration::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader$ITRFVersionConfiguration), "wrapfn_", make_descriptor(t_ITRFVersionLoader$ITRFVersionConfiguration::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader$ITRFVersionConfiguration), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersionLoader$ITRFVersionConfiguration::initializeClass, 1)))
          return NULL;
        return t_ITRFVersionLoader$ITRFVersionConfiguration::wrap_Object(ITRFVersionLoader$ITRFVersionConfiguration(((t_ITRFVersionLoader$ITRFVersionConfiguration *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersionLoader$ITRFVersionConfiguration::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ITRFVersionLoader$ITRFVersionConfiguration_init_(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::frames::ITRFVersion a1((jobject) NULL);
        PyTypeObject **p1;
        jint a2;
        jint a3;
        ITRFVersionLoader$ITRFVersionConfiguration object((jobject) NULL);

        if (!parseArgs(args, "sKII", ::org::orekit::frames::ITRFVersion::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_ITRFVersion::parameters_, &a2, &a3))
        {
          INT_CALL(object = ITRFVersionLoader$ITRFVersionConfiguration(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_appliesTo(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.appliesTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "appliesTo", arg);
        return NULL;
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_getVersion(t_ITRFVersionLoader$ITRFVersionConfiguration *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getVersion());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_isValid(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *arg)
      {
        jint a0;
        jboolean result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.isValid(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isValid", arg);
        return NULL;
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_get__version(t_ITRFVersionLoader$ITRFVersionConfiguration *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getVersion());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonPropagator.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonPropagator::class$ = NULL;
      jmethodID *PythonPropagator::mids$ = NULL;
      bool PythonPropagator::live$ = false;

      jclass PythonPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_8af102d28e19f725] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_addEventDetector_2e2dfaf38ed50d1d] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_0640e6acf969ed28] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_0d9551367f7ecdef] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_6df6b78ab9377151] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_6a3edfe13bcee780] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_12ee61573a18f417] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_15e85d5301b90ef8] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_5d7d8c500345981d] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_82f3fa0ddb2ba923] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_17742a9a6655bdb1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_fd2162b8a05a22fe] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_15e0d02372b1347b] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_propagate_b96c0d97a162784d] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_8655761ebf04b503] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setEphemerisModeHandler_94f65743c8fc9296] = env->getMethodID(cls, "setEphemerisModeHandler", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");
          mids$[mid_setupMatricesComputation_31c2066d459d0537] = env->getMethodID(cls, "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonPropagator::PythonPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonPropagator::pythonExtension(jlong a0) const
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
    namespace propagation {
      static PyObject *t_PythonPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonPropagator_init_(t_PythonPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonPropagator_finalize(t_PythonPropagator *self);
      static PyObject *t_PythonPropagator_pythonExtension(t_PythonPropagator *self, PyObject *args);
      static void JNICALL t_PythonPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getFrame7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getInitialState8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getMultiplexer10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonPropagator_getPVCoordinates11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonPropagator_isAdditionalStateManaged12(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonPropagator_propagate13(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonPropagator_propagate14(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonPropagator_pythonDecRef15(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonPropagator_setAttitudeProvider17(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonPropagator_setEphemerisModeHandler18(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonPropagator_setupMatricesComputation19(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonPropagator_get__self(t_PythonPropagator *self, void *data);
      static PyGetSetDef t_PythonPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonPropagator, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonPropagator)[] = {
        { Py_tp_methods, t_PythonPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonPropagator_init_ },
        { Py_tp_getset, t_PythonPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonPropagator, t_PythonPropagator, PythonPropagator);

      void t_PythonPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonPropagator), &PY_TYPE_DEF(PythonPropagator), module, "PythonPropagator", 1);
      }

      void t_PythonPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagator), "class_", make_descriptor(PythonPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagator), "wrapfn_", make_descriptor(t_PythonPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V", (void *) t_PythonPropagator_addAdditionalStateProvider0 },
          { "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V", (void *) t_PythonPropagator_addEventDetector1 },
          { "clearEventsDetectors", "()V", (void *) t_PythonPropagator_clearEventsDetectors2 },
          { "getAdditionalStateProviders", "()Ljava/util/List;", (void *) t_PythonPropagator_getAdditionalStateProviders3 },
          { "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonPropagator_getAttitudeProvider4 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;", (void *) t_PythonPropagator_getEphemerisGenerator5 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonPropagator_getEventsDetectors6 },
          { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonPropagator_getFrame7 },
          { "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonPropagator_getInitialState8 },
          { "getManagedAdditionalStates", "()[Ljava/lang/String;", (void *) t_PythonPropagator_getManagedAdditionalStates9 },
          { "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;", (void *) t_PythonPropagator_getMultiplexer10 },
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonPropagator_getPVCoordinates11 },
          { "isAdditionalStateManaged", "(Ljava/lang/String;)Z", (void *) t_PythonPropagator_isAdditionalStateManaged12 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonPropagator_propagate13 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonPropagator_propagate14 },
          { "pythonDecRef", "()V", (void *) t_PythonPropagator_pythonDecRef15 },
          { "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonPropagator_resetInitialState16 },
          { "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonPropagator_setAttitudeProvider17 },
          { "setEphemerisModeHandler", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V", (void *) t_PythonPropagator_setEphemerisModeHandler18 },
          { "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;", (void *) t_PythonPropagator_setupMatricesComputation19 },
        };
        env->registerNatives(cls, methods, 20);
      }

      static PyObject *t_PythonPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonPropagator::wrap_Object(PythonPropagator(((t_PythonPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonPropagator_init_(t_PythonPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonPropagator object((jobject) NULL);

        INT_CALL(object = PythonPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonPropagator_finalize(t_PythonPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonPropagator_pythonExtension(t_PythonPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_AdditionalStateProvider::wrap_Object(::org::orekit::propagation::AdditionalStateProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "addAdditionalStateProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalStateProviders", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getAdditionalStateProviders", result);
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

      static jobject JNICALL t_PythonPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
        {
          throwTypeError("getAttitudeProvider", result);
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

      static jobject JNICALL t_PythonPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::EphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
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

      static jobject JNICALL t_PythonPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
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

      static jobject JNICALL t_PythonPropagator_getFrame7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
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

      static jobject JNICALL t_PythonPropagator_getInitialState8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInitialState", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("getInitialState", result);
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

      static jobject JNICALL t_PythonPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::java::lang::String > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getManagedAdditionalStates", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[s", &value))
        {
          throwTypeError("getManagedAdditionalStates", result);
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

      static jobject JNICALL t_PythonPropagator_getMultiplexer10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMultiplexer", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::sampling::StepHandlerMultiplexer::initializeClass, &value))
        {
          throwTypeError("getMultiplexer", result);
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

      static jobject JNICALL t_PythonPropagator_getPVCoordinates11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
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

      static jboolean JNICALL t_PythonPropagator_isAdditionalStateManaged12(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "isAdditionalStateManaged", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("isAdditionalStateManaged", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static jobject JNICALL t_PythonPropagator_propagate13(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static jobject JNICALL t_PythonPropagator_propagate14(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static void JNICALL t_PythonPropagator_pythonDecRef15(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonPropagator_resetInitialState16(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "resetInitialState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonPropagator_setAttitudeProvider17(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "setAttitudeProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonPropagator_setEphemerisModeHandler18(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::sampling::t_OrekitStepHandler::wrap_Object(::org::orekit::propagation::sampling::OrekitStepHandler(a0));
        PyObject *result = PyObject_CallMethod(obj, "setEphemerisModeHandler", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonPropagator_setupMatricesComputation19(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonPropagator::mids$[PythonPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::MatricesHarvester value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *o1 = ::org::hipparchus::linear::t_RealMatrix::wrap_Object(::org::hipparchus::linear::RealMatrix(a1));
        PyObject *o2 = ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(::org::orekit::utils::DoubleArrayDictionary(a2));
        PyObject *result = PyObject_CallMethod(obj, "setupMatricesComputation", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::MatricesHarvester::initializeClass, &value))
        {
          throwTypeError("setupMatricesComputation", result);
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

      static PyObject *t_PythonPropagator_get__self(t_PythonPropagator *self, void *data)
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
#include "org/orekit/propagation/events/FieldOfViewDetector.h"
#include "org/orekit/propagation/events/FieldOfViewDetector.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldOfViewDetector::class$ = NULL;
        jmethodID *FieldOfViewDetector::mids$ = NULL;
        bool FieldOfViewDetector::live$ = false;

        jclass FieldOfViewDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldOfViewDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6c681b191ca832f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/geometry/fov/FieldOfView;)V");
            mids$[mid_init$_fe0bb2231c861b04] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/propagation/events/VisibilityTrigger;Lorg/orekit/geometry/fov/FieldOfView;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getFOV_0cb1db9d43d06211] = env->getMethodID(cls, "getFOV", "()Lorg/orekit/geometry/fov/FieldOfView;");
            mids$[mid_getPVTarget_dec199e86bf037eb] = env->getMethodID(cls, "getPVTarget", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_98c6297a1b069502] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/FieldOfViewDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldOfViewDetector::FieldOfViewDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::geometry::fov::FieldOfView & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_6c681b191ca832f2, a0.this$, a1.this$)) {}

        FieldOfViewDetector::FieldOfViewDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2, const ::org::orekit::geometry::fov::FieldOfView & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_fe0bb2231c861b04, a0.this$, a1, a2.this$, a3.this$)) {}

        jdouble FieldOfViewDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::geometry::fov::FieldOfView FieldOfViewDetector::getFOV() const
        {
          return ::org::orekit::geometry::fov::FieldOfView(env->callObjectMethod(this$, mids$[mid_getFOV_0cb1db9d43d06211]));
        }

        ::org::orekit::utils::PVCoordinatesProvider FieldOfViewDetector::getPVTarget() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPVTarget_dec199e86bf037eb]));
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
        static PyObject *t_FieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfViewDetector_of_(t_FieldOfViewDetector *self, PyObject *args);
        static int t_FieldOfViewDetector_init_(t_FieldOfViewDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldOfViewDetector_g(t_FieldOfViewDetector *self, PyObject *args);
        static PyObject *t_FieldOfViewDetector_getFOV(t_FieldOfViewDetector *self);
        static PyObject *t_FieldOfViewDetector_getPVTarget(t_FieldOfViewDetector *self);
        static PyObject *t_FieldOfViewDetector_get__fOV(t_FieldOfViewDetector *self, void *data);
        static PyObject *t_FieldOfViewDetector_get__pVTarget(t_FieldOfViewDetector *self, void *data);
        static PyObject *t_FieldOfViewDetector_get__parameters_(t_FieldOfViewDetector *self, void *data);
        static PyGetSetDef t_FieldOfViewDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOfViewDetector, fOV),
          DECLARE_GET_FIELD(t_FieldOfViewDetector, pVTarget),
          DECLARE_GET_FIELD(t_FieldOfViewDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOfViewDetector__methods_[] = {
          DECLARE_METHOD(t_FieldOfViewDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfViewDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfViewDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfViewDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfViewDetector, getFOV, METH_NOARGS),
          DECLARE_METHOD(t_FieldOfViewDetector, getPVTarget, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOfViewDetector)[] = {
          { Py_tp_methods, t_FieldOfViewDetector__methods_ },
          { Py_tp_init, (void *) t_FieldOfViewDetector_init_ },
          { Py_tp_getset, t_FieldOfViewDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOfViewDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldOfViewDetector, t_FieldOfViewDetector, FieldOfViewDetector);
        PyObject *t_FieldOfViewDetector::wrap_Object(const FieldOfViewDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOfViewDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOfViewDetector *self = (t_FieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOfViewDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOfViewDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOfViewDetector *self = (t_FieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOfViewDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOfViewDetector), &PY_TYPE_DEF(FieldOfViewDetector), module, "FieldOfViewDetector", 0);
        }

        void t_FieldOfViewDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfViewDetector), "class_", make_descriptor(FieldOfViewDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfViewDetector), "wrapfn_", make_descriptor(t_FieldOfViewDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfViewDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOfViewDetector::initializeClass, 1)))
            return NULL;
          return t_FieldOfViewDetector::wrap_Object(FieldOfViewDetector(((t_FieldOfViewDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOfViewDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOfViewDetector_of_(t_FieldOfViewDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldOfViewDetector_init_(t_FieldOfViewDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::geometry::fov::FieldOfView a1((jobject) NULL);
              FieldOfViewDetector object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::geometry::fov::FieldOfView::initializeClass, &a0, &a1))
              {
                INT_CALL(object = FieldOfViewDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FieldOfViewDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::geometry::fov::FieldOfView a3((jobject) NULL);
              FieldOfViewDetector object((jobject) NULL);

              if (!parseArgs(args, "kDKk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, ::org::orekit::geometry::fov::FieldOfView::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_, &a3))
              {
                INT_CALL(object = FieldOfViewDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FieldOfViewDetector);
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

        static PyObject *t_FieldOfViewDetector_g(t_FieldOfViewDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FieldOfViewDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldOfViewDetector_getFOV(t_FieldOfViewDetector *self)
        {
          ::org::orekit::geometry::fov::FieldOfView result((jobject) NULL);
          OBJ_CALL(result = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(result);
        }

        static PyObject *t_FieldOfViewDetector_getPVTarget(t_FieldOfViewDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPVTarget());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_FieldOfViewDetector_get__parameters_(t_FieldOfViewDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldOfViewDetector_get__fOV(t_FieldOfViewDetector *self, void *data)
        {
          ::org::orekit::geometry::fov::FieldOfView value((jobject) NULL);
          OBJ_CALL(value = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(value);
        }

        static PyObject *t_FieldOfViewDetector_get__pVTarget(t_FieldOfViewDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPVTarget());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/AbstractSet.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractSet::class$ = NULL;
    jmethodID *AbstractSet::mids$ = NULL;
    bool AbstractSet::live$ = false;

    jclass AbstractSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_removeAll_15ecf331dcc5aaf3] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean AbstractSet::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    jint AbstractSet::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jboolean AbstractSet::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_15ecf331dcc5aaf3], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_AbstractSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractSet_of_(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_equals(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_hashCode(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_removeAll(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_get__parameters_(t_AbstractSet *self, void *data);
    static PyGetSetDef t_AbstractSet__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractSet__methods_[] = {
      DECLARE_METHOD(t_AbstractSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractSet, equals, METH_VARARGS),
      DECLARE_METHOD(t_AbstractSet, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_AbstractSet, removeAll, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractSet)[] = {
      { Py_tp_methods, t_AbstractSet__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractSet__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractSet)[] = {
      &PY_TYPE_DEF(::java::util::AbstractCollection),
      NULL
    };

    DEFINE_TYPE(AbstractSet, t_AbstractSet, AbstractSet);
    PyObject *t_AbstractSet::wrap_Object(const AbstractSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractSet *self = (t_AbstractSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_AbstractSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractSet *self = (t_AbstractSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_AbstractSet::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractSet), &PY_TYPE_DEF(AbstractSet), module, "AbstractSet", 0);
    }

    void t_AbstractSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSet), "class_", make_descriptor(AbstractSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSet), "wrapfn_", make_descriptor(t_AbstractSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractSet::initializeClass, 1)))
        return NULL;
      return t_AbstractSet::wrap_Object(AbstractSet(((t_AbstractSet *) arg)->object.this$));
    }
    static PyObject *t_AbstractSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractSet_of_(t_AbstractSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractSet_equals(t_AbstractSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractSet), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_AbstractSet_hashCode(t_AbstractSet *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(AbstractSet), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_AbstractSet_removeAll(t_AbstractSet *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractSet), (PyObject *) self, "removeAll", args, 2);
    }
    static PyObject *t_AbstractSet_get__parameters_(t_AbstractSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/GRGSFormatReader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
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
              mids$[mid_init$_e5ca4b97ee6bd2b6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_738db7d6574836ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_getProvider_f0b357b475e18957] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GRGSFormatReader::GRGSFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_e5ca4b97ee6bd2b6, a0.this$, a1)) {}

          GRGSFormatReader::GRGSFormatReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_738db7d6574836ac, a0.this$, a1, a2.this$)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider GRGSFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_f0b357b475e18957], a0, a1, a2));
          }

          void GRGSFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
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
#include "org/orekit/propagation/integration/PythonAdditionalDerivativesProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonAdditionalDerivativesProvider::class$ = NULL;
        jmethodID *PythonAdditionalDerivativesProvider::mids$ = NULL;
        bool PythonAdditionalDerivativesProvider::live$ = false;

        jclass PythonAdditionalDerivativesProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonAdditionalDerivativesProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_combinedDerivatives_5fc55a092d474e7c] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_yields_abdf3beb789bbd4e] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAdditionalDerivativesProvider::PythonAdditionalDerivativesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonAdditionalDerivativesProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAdditionalDerivativesProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAdditionalDerivativesProvider::pythonExtension(jlong a0) const
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
      namespace integration {
        static PyObject *t_PythonAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAdditionalDerivativesProvider_init_(t_PythonAdditionalDerivativesProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAdditionalDerivativesProvider_finalize(t_PythonAdditionalDerivativesProvider *self);
        static PyObject *t_PythonAdditionalDerivativesProvider_pythonExtension(t_PythonAdditionalDerivativesProvider *self, PyObject *args);
        static jobject JNICALL t_PythonAdditionalDerivativesProvider_combinedDerivatives0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jint JNICALL t_PythonAdditionalDerivativesProvider_getDimension1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAdditionalDerivativesProvider_getName2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAdditionalDerivativesProvider_init3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAdditionalDerivativesProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonAdditionalDerivativesProvider_get__self(t_PythonAdditionalDerivativesProvider *self, void *data);
        static PyGetSetDef t_PythonAdditionalDerivativesProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAdditionalDerivativesProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAdditionalDerivativesProvider__methods_[] = {
          DECLARE_METHOD(t_PythonAdditionalDerivativesProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAdditionalDerivativesProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAdditionalDerivativesProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAdditionalDerivativesProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAdditionalDerivativesProvider)[] = {
          { Py_tp_methods, t_PythonAdditionalDerivativesProvider__methods_ },
          { Py_tp_init, (void *) t_PythonAdditionalDerivativesProvider_init_ },
          { Py_tp_getset, t_PythonAdditionalDerivativesProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAdditionalDerivativesProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAdditionalDerivativesProvider, t_PythonAdditionalDerivativesProvider, PythonAdditionalDerivativesProvider);

        void t_PythonAdditionalDerivativesProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAdditionalDerivativesProvider), &PY_TYPE_DEF(PythonAdditionalDerivativesProvider), module, "PythonAdditionalDerivativesProvider", 1);
        }

        void t_PythonAdditionalDerivativesProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalDerivativesProvider), "class_", make_descriptor(PythonAdditionalDerivativesProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalDerivativesProvider), "wrapfn_", make_descriptor(t_PythonAdditionalDerivativesProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalDerivativesProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAdditionalDerivativesProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;", (void *) t_PythonAdditionalDerivativesProvider_combinedDerivatives0 },
            { "getDimension", "()I", (void *) t_PythonAdditionalDerivativesProvider_getDimension1 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonAdditionalDerivativesProvider_getName2 },
            { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonAdditionalDerivativesProvider_init3 },
            { "pythonDecRef", "()V", (void *) t_PythonAdditionalDerivativesProvider_pythonDecRef4 },
            { "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z", (void *) t_PythonAdditionalDerivativesProvider_yields5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAdditionalDerivativesProvider::initializeClass, 1)))
            return NULL;
          return t_PythonAdditionalDerivativesProvider::wrap_Object(PythonAdditionalDerivativesProvider(((t_PythonAdditionalDerivativesProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAdditionalDerivativesProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAdditionalDerivativesProvider_init_(t_PythonAdditionalDerivativesProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonAdditionalDerivativesProvider object((jobject) NULL);

          INT_CALL(object = PythonAdditionalDerivativesProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAdditionalDerivativesProvider_finalize(t_PythonAdditionalDerivativesProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAdditionalDerivativesProvider_pythonExtension(t_PythonAdditionalDerivativesProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonAdditionalDerivativesProvider_combinedDerivatives0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::CombinedDerivatives value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "combinedDerivatives", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::CombinedDerivatives::initializeClass, &value))
          {
            throwTypeError("combinedDerivatives", result);
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

        static jint JNICALL t_PythonAdditionalDerivativesProvider_getDimension1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getDimension", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getDimension", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonAdditionalDerivativesProvider_getName2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getName", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getName", result);
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

        static void JNICALL t_PythonAdditionalDerivativesProvider_init3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_9e26256fb0d384a2]);
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

        static void JNICALL t_PythonAdditionalDerivativesProvider_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jboolean JNICALL t_PythonAdditionalDerivativesProvider_yields5(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalDerivativesProvider::mids$[PythonAdditionalDerivativesProvider::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "yields", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("yields", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static PyObject *t_PythonAdditionalDerivativesProvider_get__self(t_PythonAdditionalDerivativesProvider *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/ODParametersKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParametersKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParameters.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ODParametersKey::class$ = NULL;
            jmethodID *ODParametersKey::mids$ = NULL;
            bool ODParametersKey::live$ = false;
            ODParametersKey *ODParametersKey::ACTUAL_OD_SPAN = NULL;
            ODParametersKey *ODParametersKey::COMMENT = NULL;
            ODParametersKey *ODParametersKey::OBS_AVAILABLE = NULL;
            ODParametersKey *ODParametersKey::OBS_USED = NULL;
            ODParametersKey *ODParametersKey::OD_EPOCH = NULL;
            ODParametersKey *ODParametersKey::RECOMMENDED_OD_SPAN = NULL;
            ODParametersKey *ODParametersKey::RESIDUALS_ACCEPTED = NULL;
            ODParametersKey *ODParametersKey::TIME_LASTOB_END = NULL;
            ODParametersKey *ODParametersKey::TIME_LASTOB_START = NULL;
            ODParametersKey *ODParametersKey::TRACKS_AVAILABLE = NULL;
            ODParametersKey *ODParametersKey::TRACKS_USED = NULL;
            ODParametersKey *ODParametersKey::WEIGHTED_RMS = NULL;

            jclass ODParametersKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ODParametersKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_c70b16095465b4c7] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;)Z");
                mids$[mid_valueOf_622a00e4c0322e6c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;");
                mids$[mid_values_7bae0afa23732d36] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ACTUAL_OD_SPAN = new ODParametersKey(env->getStaticObjectField(cls, "ACTUAL_OD_SPAN", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                COMMENT = new ODParametersKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                OBS_AVAILABLE = new ODParametersKey(env->getStaticObjectField(cls, "OBS_AVAILABLE", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                OBS_USED = new ODParametersKey(env->getStaticObjectField(cls, "OBS_USED", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                OD_EPOCH = new ODParametersKey(env->getStaticObjectField(cls, "OD_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                RECOMMENDED_OD_SPAN = new ODParametersKey(env->getStaticObjectField(cls, "RECOMMENDED_OD_SPAN", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                RESIDUALS_ACCEPTED = new ODParametersKey(env->getStaticObjectField(cls, "RESIDUALS_ACCEPTED", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                TIME_LASTOB_END = new ODParametersKey(env->getStaticObjectField(cls, "TIME_LASTOB_END", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                TIME_LASTOB_START = new ODParametersKey(env->getStaticObjectField(cls, "TIME_LASTOB_START", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                TRACKS_AVAILABLE = new ODParametersKey(env->getStaticObjectField(cls, "TRACKS_AVAILABLE", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                TRACKS_USED = new ODParametersKey(env->getStaticObjectField(cls, "TRACKS_USED", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                WEIGHTED_RMS = new ODParametersKey(env->getStaticObjectField(cls, "WEIGHTED_RMS", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean ODParametersKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_c70b16095465b4c7], a0.this$, a1.this$, a2.this$);
            }

            ODParametersKey ODParametersKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ODParametersKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_622a00e4c0322e6c], a0.this$));
            }

            JArray< ODParametersKey > ODParametersKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ODParametersKey >(env->callStaticObjectMethod(cls, mids$[mid_values_7bae0afa23732d36]));
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
            static PyObject *t_ODParametersKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ODParametersKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ODParametersKey_of_(t_ODParametersKey *self, PyObject *args);
            static PyObject *t_ODParametersKey_process(t_ODParametersKey *self, PyObject *args);
            static PyObject *t_ODParametersKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ODParametersKey_values(PyTypeObject *type);
            static PyObject *t_ODParametersKey_get__parameters_(t_ODParametersKey *self, void *data);
            static PyGetSetDef t_ODParametersKey__fields_[] = {
              DECLARE_GET_FIELD(t_ODParametersKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ODParametersKey__methods_[] = {
              DECLARE_METHOD(t_ODParametersKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParametersKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParametersKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_ODParametersKey, process, METH_VARARGS),
              DECLARE_METHOD(t_ODParametersKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ODParametersKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ODParametersKey)[] = {
              { Py_tp_methods, t_ODParametersKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ODParametersKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ODParametersKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ODParametersKey, t_ODParametersKey, ODParametersKey);
            PyObject *t_ODParametersKey::wrap_Object(const ODParametersKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ODParametersKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ODParametersKey *self = (t_ODParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ODParametersKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ODParametersKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ODParametersKey *self = (t_ODParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ODParametersKey::install(PyObject *module)
            {
              installType(&PY_TYPE(ODParametersKey), &PY_TYPE_DEF(ODParametersKey), module, "ODParametersKey", 0);
            }

            void t_ODParametersKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "class_", make_descriptor(ODParametersKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "wrapfn_", make_descriptor(t_ODParametersKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(ODParametersKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "ACTUAL_OD_SPAN", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::ACTUAL_OD_SPAN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "COMMENT", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "OBS_AVAILABLE", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::OBS_AVAILABLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "OBS_USED", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::OBS_USED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "OD_EPOCH", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::OD_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "RECOMMENDED_OD_SPAN", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::RECOMMENDED_OD_SPAN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "RESIDUALS_ACCEPTED", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::RESIDUALS_ACCEPTED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "TIME_LASTOB_END", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::TIME_LASTOB_END)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "TIME_LASTOB_START", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::TIME_LASTOB_START)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "TRACKS_AVAILABLE", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::TRACKS_AVAILABLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "TRACKS_USED", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::TRACKS_USED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "WEIGHTED_RMS", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::WEIGHTED_RMS)));
            }

            static PyObject *t_ODParametersKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ODParametersKey::initializeClass, 1)))
                return NULL;
              return t_ODParametersKey::wrap_Object(ODParametersKey(((t_ODParametersKey *) arg)->object.this$));
            }
            static PyObject *t_ODParametersKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ODParametersKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ODParametersKey_of_(t_ODParametersKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ODParametersKey_process(t_ODParametersKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_ODParametersKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ODParametersKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ODParametersKey::valueOf(a0));
                return t_ODParametersKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ODParametersKey_values(PyTypeObject *type)
            {
              JArray< ODParametersKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ODParametersKey::values());
              return JArray<jobject>(result.this$).wrap(t_ODParametersKey::wrap_jobject);
            }
            static PyObject *t_ODParametersKey_get__parameters_(t_ODParametersKey *self, void *data)
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
#include "org/hipparchus/filtering/kalman/AbstractKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *AbstractKalmanFilter::class$ = NULL;
        jmethodID *AbstractKalmanFilter::mids$ = NULL;
        bool AbstractKalmanFilter::live$ = false;

        jclass AbstractKalmanFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/AbstractKalmanFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCorrected_55b445719d7de2a7] = env->getMethodID(cls, "getCorrected", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getPredicted_55b445719d7de2a7] = env->getMethodID(cls, "getPredicted", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_predict_570ed598f04500be] = env->getMethodID(cls, "predict", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_correct_f5fbdb2f00887037] = env->getMethodID(cls, "correct", "(Lorg/hipparchus/filtering/kalman/Measurement;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_computeInnovationCovarianceMatrix_13c4114cb11d13ae] = env->getMethodID(cls, "computeInnovationCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate AbstractKalmanFilter::getCorrected() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getCorrected_55b445719d7de2a7]));
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate AbstractKalmanFilter::getPredicted() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getPredicted_55b445719d7de2a7]));
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
    namespace filtering {
      namespace kalman {
        static PyObject *t_AbstractKalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractKalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractKalmanFilter_of_(t_AbstractKalmanFilter *self, PyObject *args);
        static PyObject *t_AbstractKalmanFilter_getCorrected(t_AbstractKalmanFilter *self);
        static PyObject *t_AbstractKalmanFilter_getPredicted(t_AbstractKalmanFilter *self);
        static PyObject *t_AbstractKalmanFilter_get__corrected(t_AbstractKalmanFilter *self, void *data);
        static PyObject *t_AbstractKalmanFilter_get__predicted(t_AbstractKalmanFilter *self, void *data);
        static PyObject *t_AbstractKalmanFilter_get__parameters_(t_AbstractKalmanFilter *self, void *data);
        static PyGetSetDef t_AbstractKalmanFilter__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractKalmanFilter, corrected),
          DECLARE_GET_FIELD(t_AbstractKalmanFilter, predicted),
          DECLARE_GET_FIELD(t_AbstractKalmanFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractKalmanFilter__methods_[] = {
          DECLARE_METHOD(t_AbstractKalmanFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractKalmanFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractKalmanFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractKalmanFilter, getCorrected, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanFilter, getPredicted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractKalmanFilter)[] = {
          { Py_tp_methods, t_AbstractKalmanFilter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractKalmanFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractKalmanFilter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractKalmanFilter, t_AbstractKalmanFilter, AbstractKalmanFilter);
        PyObject *t_AbstractKalmanFilter::wrap_Object(const AbstractKalmanFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractKalmanFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractKalmanFilter *self = (t_AbstractKalmanFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractKalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractKalmanFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractKalmanFilter *self = (t_AbstractKalmanFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractKalmanFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractKalmanFilter), &PY_TYPE_DEF(AbstractKalmanFilter), module, "AbstractKalmanFilter", 0);
        }

        void t_AbstractKalmanFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanFilter), "class_", make_descriptor(AbstractKalmanFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanFilter), "wrapfn_", make_descriptor(t_AbstractKalmanFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractKalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractKalmanFilter::initializeClass, 1)))
            return NULL;
          return t_AbstractKalmanFilter::wrap_Object(AbstractKalmanFilter(((t_AbstractKalmanFilter *) arg)->object.this$));
        }
        static PyObject *t_AbstractKalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractKalmanFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractKalmanFilter_of_(t_AbstractKalmanFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractKalmanFilter_getCorrected(t_AbstractKalmanFilter *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrected());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanFilter_getPredicted(t_AbstractKalmanFilter *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredicted());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }
        static PyObject *t_AbstractKalmanFilter_get__parameters_(t_AbstractKalmanFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractKalmanFilter_get__corrected(t_AbstractKalmanFilter *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrected());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_AbstractKalmanFilter_get__predicted(t_AbstractKalmanFilter *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredicted());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BaseSecantSolver.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BaseSecantSolver::class$ = NULL;
        jmethodID *BaseSecantSolver::mids$ = NULL;
        bool BaseSecantSolver::live$ = false;

        jclass BaseSecantSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BaseSecantSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_solve_63a1fb60fcca1695] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solve_50fe689dc1cd3df5] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)D");
            mids$[mid_solve_d706f5f2b1b08d5d] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solveInterval_d50558ec42f23049] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");
            mids$[mid_doSolve_557b8123390d8d0c] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_doSolveInterval_ca1621db2f37d4e2] = env->getMethodID(cls, "doSolveInterval", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseSecantSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_63a1fb60fcca1695], a0, a1.this$, a2, a3, a4.this$);
        }

        jdouble BaseSecantSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_50fe689dc1cd3df5], a0, a1.this$, a2, a3, a4);
        }

        jdouble BaseSecantSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_d706f5f2b1b08d5d], a0, a1.this$, a2, a3, a4, a5.this$);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BaseSecantSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_d50558ec42f23049], a0, a1.this$, a2, a3, a4));
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
      namespace solvers {
        static PyObject *t_BaseSecantSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseSecantSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseSecantSolver_of_(t_BaseSecantSolver *self, PyObject *args);
        static PyObject *t_BaseSecantSolver_solve(t_BaseSecantSolver *self, PyObject *args);
        static PyObject *t_BaseSecantSolver_solveInterval(t_BaseSecantSolver *self, PyObject *args);
        static PyObject *t_BaseSecantSolver_get__parameters_(t_BaseSecantSolver *self, void *data);
        static PyGetSetDef t_BaseSecantSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BaseSecantSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseSecantSolver__methods_[] = {
          DECLARE_METHOD(t_BaseSecantSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseSecantSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseSecantSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseSecantSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BaseSecantSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseSecantSolver)[] = {
          { Py_tp_methods, t_BaseSecantSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseSecantSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseSecantSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BaseSecantSolver, t_BaseSecantSolver, BaseSecantSolver);
        PyObject *t_BaseSecantSolver::wrap_Object(const BaseSecantSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseSecantSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseSecantSolver *self = (t_BaseSecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseSecantSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseSecantSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseSecantSolver *self = (t_BaseSecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseSecantSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseSecantSolver), &PY_TYPE_DEF(BaseSecantSolver), module, "BaseSecantSolver", 0);
        }

        void t_BaseSecantSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseSecantSolver), "class_", make_descriptor(BaseSecantSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseSecantSolver), "wrapfn_", make_descriptor(t_BaseSecantSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseSecantSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BaseSecantSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseSecantSolver::initializeClass, 1)))
            return NULL;
          return t_BaseSecantSolver::wrap_Object(BaseSecantSolver(((t_BaseSecantSolver *) arg)->object.this$));
        }
        static PyObject *t_BaseSecantSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseSecantSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseSecantSolver_of_(t_BaseSecantSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseSecantSolver_solve(t_BaseSecantSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble result;

              if (!parseArgs(args, "IkDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble result;

              if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble result;

              if (!parseArgs(args, "IkDDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          return callSuper(PY_TYPE(BaseSecantSolver), (PyObject *) self, "solve", args, 2);
        }

        static PyObject *t_BaseSecantSolver_solveInterval(t_BaseSecantSolver *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval result((jobject) NULL);

          if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
            return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver$Interval::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_BaseSecantSolver_get__parameters_(t_BaseSecantSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParameters.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovariance.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/section/CommentsContainer.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovariance.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVector.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParameters.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmData::class$ = NULL;
            jmethodID *CdmData::mids$ = NULL;
            bool CdmData::live$ = false;

            jclass CdmData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_76fc76061eea1afb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;)V");
                mids$[mid_init$_76b1357493813a3e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)V");
                mids$[mid_init$_1e1fdec8e3d37a12] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)V");
                mids$[mid_init$_f570526d2cf70c42] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;Lorg/orekit/files/ccsds/ndm/cdm/XYZCovariance;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)V");
                mids$[mid_getAdditionalCovMetadataBlock_51d71003cdef3201] = env->getMethodID(cls, "getAdditionalCovMetadataBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;");
                mids$[mid_getAdditionalParametersBlock_d8ec4184ba2d9519] = env->getMethodID(cls, "getAdditionalParametersBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;");
                mids$[mid_getComments_0d9551367f7ecdef] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
                mids$[mid_getODParametersBlock_0020f60bbf13e998] = env->getMethodID(cls, "getODParametersBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;");
                mids$[mid_getRTNCovarianceBlock_f35cb101c37dfe18] = env->getMethodID(cls, "getRTNCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;");
                mids$[mid_getSig3EigVec3CovarianceBlock_3a93c5d667b1e50f] = env->getMethodID(cls, "getSig3EigVec3CovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance;");
                mids$[mid_getStateVectorBlock_14f76bd8275c6fa5] = env->getMethodID(cls, "getStateVectorBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/StateVector;");
                mids$[mid_getUserDefinedBlock_e8dd2483e310f990] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                mids$[mid_getXYZCovarianceBlock_96e1008345660840] = env->getMethodID(cls, "getXYZCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/XYZCovariance;");
                mids$[mid_setAdditionalParametersBlock_291c80f4c3cce790] = env->getMethodID(cls, "setAdditionalParametersBlock", "(Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;)V");
                mids$[mid_setCovarianceMatrixBlock_2a5fb3f2cfb52003] = env->getMethodID(cls, "setCovarianceMatrixBlock", "(Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;)V");
                mids$[mid_setODParametersBlock_df8e815bd8ef9dde] = env->getMethodID(cls, "setODParametersBlock", "(Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;)V");
                mids$[mid_setUserDefinedBlock_82440f920e26626d] = env->getMethodID(cls, "setUserDefinedBlock", "(Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_76fc76061eea1afb, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_76b1357493813a3e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4, const ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance & a5, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1e1fdec8e3d37a12, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4, const ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance & a5, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f570526d2cf70c42, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

            ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata CdmData::getAdditionalCovMetadataBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata(env->callObjectMethod(this$, mids$[mid_getAdditionalCovMetadataBlock_51d71003cdef3201]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters CdmData::getAdditionalParametersBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters(env->callObjectMethod(this$, mids$[mid_getAdditionalParametersBlock_d8ec4184ba2d9519]));
            }

            ::java::util::List CdmData::getComments() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_0d9551367f7ecdef]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::ODParameters CdmData::getODParametersBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ODParameters(env->callObjectMethod(this$, mids$[mid_getODParametersBlock_0020f60bbf13e998]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance CdmData::getRTNCovarianceBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance(env->callObjectMethod(this$, mids$[mid_getRTNCovarianceBlock_f35cb101c37dfe18]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance CdmData::getSig3EigVec3CovarianceBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance(env->callObjectMethod(this$, mids$[mid_getSig3EigVec3CovarianceBlock_3a93c5d667b1e50f]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::StateVector CdmData::getStateVectorBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::StateVector(env->callObjectMethod(this$, mids$[mid_getStateVectorBlock_14f76bd8275c6fa5]));
            }

            ::org::orekit::files::ccsds::ndm::odm::UserDefined CdmData::getUserDefinedBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_e8dd2483e310f990]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance CdmData::getXYZCovarianceBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance(env->callObjectMethod(this$, mids$[mid_getXYZCovarianceBlock_96e1008345660840]));
            }

            void CdmData::setAdditionalParametersBlock(const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAdditionalParametersBlock_291c80f4c3cce790], a0.this$);
            }

            void CdmData::setCovarianceMatrixBlock(const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixBlock_2a5fb3f2cfb52003], a0.this$);
            }

            void CdmData::setODParametersBlock(const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setODParametersBlock_df8e815bd8ef9dde], a0.this$);
            }

            void CdmData::setUserDefinedBlock(const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUserDefinedBlock_82440f920e26626d], a0.this$);
            }

            void CdmData::validate(jdouble a0) const
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
            static PyObject *t_CdmData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmData_init_(t_CdmData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmData_getAdditionalCovMetadataBlock(t_CdmData *self);
            static PyObject *t_CdmData_getAdditionalParametersBlock(t_CdmData *self);
            static PyObject *t_CdmData_getComments(t_CdmData *self);
            static PyObject *t_CdmData_getODParametersBlock(t_CdmData *self);
            static PyObject *t_CdmData_getRTNCovarianceBlock(t_CdmData *self);
            static PyObject *t_CdmData_getSig3EigVec3CovarianceBlock(t_CdmData *self);
            static PyObject *t_CdmData_getStateVectorBlock(t_CdmData *self);
            static PyObject *t_CdmData_getUserDefinedBlock(t_CdmData *self);
            static PyObject *t_CdmData_getXYZCovarianceBlock(t_CdmData *self);
            static PyObject *t_CdmData_setAdditionalParametersBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_setCovarianceMatrixBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_setODParametersBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_setUserDefinedBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_validate(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_get__additionalCovMetadataBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__additionalParametersBlock(t_CdmData *self, void *data);
            static int t_CdmData_set__additionalParametersBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__comments(t_CdmData *self, void *data);
            static int t_CdmData_set__covarianceMatrixBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__oDParametersBlock(t_CdmData *self, void *data);
            static int t_CdmData_set__oDParametersBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__rTNCovarianceBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__sig3EigVec3CovarianceBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__stateVectorBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__userDefinedBlock(t_CdmData *self, void *data);
            static int t_CdmData_set__userDefinedBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__xYZCovarianceBlock(t_CdmData *self, void *data);
            static PyGetSetDef t_CdmData__fields_[] = {
              DECLARE_GET_FIELD(t_CdmData, additionalCovMetadataBlock),
              DECLARE_GETSET_FIELD(t_CdmData, additionalParametersBlock),
              DECLARE_GET_FIELD(t_CdmData, comments),
              DECLARE_SET_FIELD(t_CdmData, covarianceMatrixBlock),
              DECLARE_GETSET_FIELD(t_CdmData, oDParametersBlock),
              DECLARE_GET_FIELD(t_CdmData, rTNCovarianceBlock),
              DECLARE_GET_FIELD(t_CdmData, sig3EigVec3CovarianceBlock),
              DECLARE_GET_FIELD(t_CdmData, stateVectorBlock),
              DECLARE_GETSET_FIELD(t_CdmData, userDefinedBlock),
              DECLARE_GET_FIELD(t_CdmData, xYZCovarianceBlock),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmData__methods_[] = {
              DECLARE_METHOD(t_CdmData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmData, getAdditionalCovMetadataBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getAdditionalParametersBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getComments, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getODParametersBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getRTNCovarianceBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getSig3EigVec3CovarianceBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getStateVectorBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getUserDefinedBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getXYZCovarianceBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, setAdditionalParametersBlock, METH_O),
              DECLARE_METHOD(t_CdmData, setCovarianceMatrixBlock, METH_O),
              DECLARE_METHOD(t_CdmData, setODParametersBlock, METH_O),
              DECLARE_METHOD(t_CdmData, setUserDefinedBlock, METH_O),
              DECLARE_METHOD(t_CdmData, validate, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmData)[] = {
              { Py_tp_methods, t_CdmData__methods_ },
              { Py_tp_init, (void *) t_CdmData_init_ },
              { Py_tp_getset, t_CdmData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmData, t_CdmData, CdmData);

            void t_CdmData::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmData), &PY_TYPE_DEF(CdmData), module, "CdmData", 0);
            }

            void t_CdmData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmData), "class_", make_descriptor(CdmData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmData), "wrapfn_", make_descriptor(t_CdmData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmData::initializeClass, 1)))
                return NULL;
              return t_CdmData::wrap_Object(CdmData(((t_CdmData *) arg)->object.this$));
            }
            static PyObject *t_CdmData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmData_init_(t_CdmData *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 5:
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a5((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance a5((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a6((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4, a5, a6));
                    self->object = object;
                    break;
                  }
                }
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance a5((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a6((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4, a5, a6));
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

            static PyObject *t_CdmData_getAdditionalCovMetadataBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getAdditionalCovMetadataBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalCovarianceMetadata::wrap_Object(result);
            }

            static PyObject *t_CdmData_getAdditionalParametersBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters result((jobject) NULL);
              OBJ_CALL(result = self->object.getAdditionalParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalParameters::wrap_Object(result);
            }

            static PyObject *t_CdmData_getComments(t_CdmData *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getComments());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_CdmData_getODParametersBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters result((jobject) NULL);
              OBJ_CALL(result = self->object.getODParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ODParameters::wrap_Object(result);
            }

            static PyObject *t_CdmData_getRTNCovarianceBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance result((jobject) NULL);
              OBJ_CALL(result = self->object.getRTNCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_RTNCovariance::wrap_Object(result);
            }

            static PyObject *t_CdmData_getSig3EigVec3CovarianceBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance result((jobject) NULL);
              OBJ_CALL(result = self->object.getSig3EigVec3CovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_SigmaEigenvectorsCovariance::wrap_Object(result);
            }

            static PyObject *t_CdmData_getStateVectorBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::StateVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getStateVectorBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_StateVector::wrap_Object(result);
            }

            static PyObject *t_CdmData_getUserDefinedBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
              OBJ_CALL(result = self->object.getUserDefinedBlock());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
            }

            static PyObject *t_CdmData_getXYZCovarianceBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance result((jobject) NULL);
              OBJ_CALL(result = self->object.getXYZCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_XYZCovariance::wrap_Object(result);
            }

            static PyObject *t_CdmData_setAdditionalParametersBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setAdditionalParametersBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAdditionalParametersBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_setCovarianceMatrixBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setCovarianceMatrixBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_setODParametersBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setODParametersBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setODParametersBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_setUserDefinedBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setUserDefinedBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUserDefinedBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_validate(t_CdmData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "validate", arg);
              return NULL;
            }

            static PyObject *t_CdmData_get__additionalCovMetadataBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getAdditionalCovMetadataBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalCovarianceMetadata::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__additionalParametersBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters value((jobject) NULL);
              OBJ_CALL(value = self->object.getAdditionalParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalParameters::wrap_Object(value);
            }
            static int t_CdmData_set__additionalParametersBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, &value))
                {
                  INT_CALL(self->object.setAdditionalParametersBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "additionalParametersBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__comments(t_CdmData *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getComments());
              return ::java::util::t_List::wrap_Object(value);
            }

            static int t_CdmData_set__covarianceMatrixBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &value))
                {
                  INT_CALL(self->object.setCovarianceMatrixBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covarianceMatrixBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__oDParametersBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters value((jobject) NULL);
              OBJ_CALL(value = self->object.getODParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ODParameters::wrap_Object(value);
            }
            static int t_CdmData_set__oDParametersBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ODParameters value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, &value))
                {
                  INT_CALL(self->object.setODParametersBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "oDParametersBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__rTNCovarianceBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance value((jobject) NULL);
              OBJ_CALL(value = self->object.getRTNCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_RTNCovariance::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__sig3EigVec3CovarianceBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance value((jobject) NULL);
              OBJ_CALL(value = self->object.getSig3EigVec3CovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_SigmaEigenvectorsCovariance::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__stateVectorBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::StateVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getStateVectorBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_StateVector::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__userDefinedBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
              OBJ_CALL(value = self->object.getUserDefinedBlock());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
            }
            static int t_CdmData_set__userDefinedBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &value))
                {
                  INT_CALL(self->object.setUserDefinedBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "userDefinedBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__xYZCovarianceBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance value((jobject) NULL);
              OBJ_CALL(value = self->object.getXYZCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_XYZCovariance::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$DoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$DoubleConsumer::mids$ = NULL;
            bool ParseToken$DoubleConsumer::live$ = false;

            jclass ParseToken$DoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_10f281d777284cea] = env->getMethodID(cls, "accept", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DoubleConsumer::accept(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_10f281d777284cea], a0);
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
            static PyObject *t_ParseToken$DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoubleConsumer_accept(t_ParseToken$DoubleConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$DoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$DoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoubleConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$DoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$DoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$DoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$DoubleConsumer, t_ParseToken$DoubleConsumer, ParseToken$DoubleConsumer);

            void t_ParseToken$DoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$DoubleConsumer), &PY_TYPE_DEF(ParseToken$DoubleConsumer), module, "ParseToken$DoubleConsumer", 0);
            }

            void t_ParseToken$DoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleConsumer), "class_", make_descriptor(ParseToken$DoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$DoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$DoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$DoubleConsumer::wrap_Object(ParseToken$DoubleConsumer(((t_ParseToken$DoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$DoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$DoubleConsumer_accept(t_ParseToken$DoubleConsumer *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
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
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *RangeUnitsConverter::class$ = NULL;
            jmethodID *RangeUnitsConverter::mids$ = NULL;
            bool RangeUnitsConverter::live$ = false;

            jclass RangeUnitsConverter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_metersToRu_5e4513d7d070fbb0] = env->getMethodID(cls, "metersToRu", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");
                mids$[mid_ruToMeters_5e4513d7d070fbb0] = env->getMethodID(cls, "ruToMeters", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;Lorg/orekit/time/AbsoluteDate;D)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble RangeUnitsConverter::metersToRu(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_metersToRu_5e4513d7d070fbb0], a0.this$, a1.this$, a2);
            }

            jdouble RangeUnitsConverter::ruToMeters(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_ruToMeters_5e4513d7d070fbb0], a0.this$, a1.this$, a2);
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
          namespace tdm {
            static PyObject *t_RangeUnitsConverter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnitsConverter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeUnitsConverter_metersToRu(t_RangeUnitsConverter *self, PyObject *args);
            static PyObject *t_RangeUnitsConverter_ruToMeters(t_RangeUnitsConverter *self, PyObject *args);

            static PyMethodDef t_RangeUnitsConverter__methods_[] = {
              DECLARE_METHOD(t_RangeUnitsConverter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnitsConverter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeUnitsConverter, metersToRu, METH_VARARGS),
              DECLARE_METHOD(t_RangeUnitsConverter, ruToMeters, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RangeUnitsConverter)[] = {
              { Py_tp_methods, t_RangeUnitsConverter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RangeUnitsConverter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RangeUnitsConverter, t_RangeUnitsConverter, RangeUnitsConverter);

            void t_RangeUnitsConverter::install(PyObject *module)
            {
              installType(&PY_TYPE(RangeUnitsConverter), &PY_TYPE_DEF(RangeUnitsConverter), module, "RangeUnitsConverter", 0);
            }

            void t_RangeUnitsConverter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnitsConverter), "class_", make_descriptor(RangeUnitsConverter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnitsConverter), "wrapfn_", make_descriptor(t_RangeUnitsConverter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeUnitsConverter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RangeUnitsConverter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RangeUnitsConverter::initializeClass, 1)))
                return NULL;
              return t_RangeUnitsConverter::wrap_Object(RangeUnitsConverter(((t_RangeUnitsConverter *) arg)->object.this$));
            }
            static PyObject *t_RangeUnitsConverter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RangeUnitsConverter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RangeUnitsConverter_metersToRu(t_RangeUnitsConverter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.metersToRu(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "metersToRu", args);
              return NULL;
            }

            static PyObject *t_RangeUnitsConverter_ruToMeters(t_RangeUnitsConverter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.ruToMeters(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "ruToMeters", args);
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
#include "org/hipparchus/analysis/solvers/BaseUnivariateSolver.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BaseUnivariateSolver::class$ = NULL;
        jmethodID *BaseUnivariateSolver::mids$ = NULL;
        bool BaseUnivariateSolver::live$ = false;

        jclass BaseUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BaseUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getFunctionValueAccuracy", "()D");
            mids$[mid_getRelativeAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_solve_2acf1fcf666df32e] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;D)D");
            mids$[mid_solve_277b266ef2505d2d] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_solve_50fe689dc1cd3df5] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseUnivariateSolver::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_557b8123390d8d0c]);
        }

        jint BaseUnivariateSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_412668abc8d889e9]);
        }

        jdouble BaseUnivariateSolver::getFunctionValueAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFunctionValueAccuracy_557b8123390d8d0c]);
        }

        jdouble BaseUnivariateSolver::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_557b8123390d8d0c]);
        }

        jdouble BaseUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_2acf1fcf666df32e], a0, a1.this$, a2);
        }

        jdouble BaseUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_277b266ef2505d2d], a0, a1.this$, a2, a3);
        }

        jdouble BaseUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_50fe689dc1cd3df5], a0, a1.this$, a2, a3, a4);
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
      namespace solvers {
        static PyObject *t_BaseUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseUnivariateSolver_of_(t_BaseUnivariateSolver *self, PyObject *args);
        static PyObject *t_BaseUnivariateSolver_getAbsoluteAccuracy(t_BaseUnivariateSolver *self);
        static PyObject *t_BaseUnivariateSolver_getEvaluations(t_BaseUnivariateSolver *self);
        static PyObject *t_BaseUnivariateSolver_getFunctionValueAccuracy(t_BaseUnivariateSolver *self);
        static PyObject *t_BaseUnivariateSolver_getRelativeAccuracy(t_BaseUnivariateSolver *self);
        static PyObject *t_BaseUnivariateSolver_solve(t_BaseUnivariateSolver *self, PyObject *args);
        static PyObject *t_BaseUnivariateSolver_get__absoluteAccuracy(t_BaseUnivariateSolver *self, void *data);
        static PyObject *t_BaseUnivariateSolver_get__evaluations(t_BaseUnivariateSolver *self, void *data);
        static PyObject *t_BaseUnivariateSolver_get__functionValueAccuracy(t_BaseUnivariateSolver *self, void *data);
        static PyObject *t_BaseUnivariateSolver_get__relativeAccuracy(t_BaseUnivariateSolver *self, void *data);
        static PyObject *t_BaseUnivariateSolver_get__parameters_(t_BaseUnivariateSolver *self, void *data);
        static PyGetSetDef t_BaseUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, evaluations),
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_BaseUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BaseUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseUnivariateSolver, solve, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseUnivariateSolver)[] = {
          { Py_tp_methods, t_BaseUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseUnivariateSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseUnivariateSolver, t_BaseUnivariateSolver, BaseUnivariateSolver);
        PyObject *t_BaseUnivariateSolver::wrap_Object(const BaseUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseUnivariateSolver *self = (t_BaseUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseUnivariateSolver *self = (t_BaseUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseUnivariateSolver), &PY_TYPE_DEF(BaseUnivariateSolver), module, "BaseUnivariateSolver", 0);
        }

        void t_BaseUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseUnivariateSolver), "class_", make_descriptor(BaseUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseUnivariateSolver), "wrapfn_", make_descriptor(t_BaseUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BaseUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BaseUnivariateSolver::wrap_Object(BaseUnivariateSolver(((t_BaseUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BaseUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseUnivariateSolver_of_(t_BaseUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseUnivariateSolver_getAbsoluteAccuracy(t_BaseUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseUnivariateSolver_getEvaluations(t_BaseUnivariateSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseUnivariateSolver_getFunctionValueAccuracy(t_BaseUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseUnivariateSolver_getRelativeAccuracy(t_BaseUnivariateSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseUnivariateSolver_solve(t_BaseUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "IkD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble result;

              if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble result;

              if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }
        static PyObject *t_BaseUnivariateSolver_get__parameters_(t_BaseUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BaseUnivariateSolver_get__absoluteAccuracy(t_BaseUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseUnivariateSolver_get__evaluations(t_BaseUnivariateSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseUnivariateSolver_get__functionValueAccuracy(t_BaseUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseUnivariateSolver_get__relativeAccuracy(t_BaseUnivariateSolver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }
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
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_3cd6a6b354c6aa22] = env->getMethodID(cls, "<init>", "(J)V");
        mids$[mid_init$_3796b665437eba81] = env->getMethodID(cls, "<init>", "(III)V");
        mids$[mid_init$_a0ab3b1da64ee815] = env->getMethodID(cls, "<init>", "(IIIII)V");
        mids$[mid_init$_b02282271d2e33e3] = env->getMethodID(cls, "<init>", "(IIIIII)V");
        mids$[mid_UTC_b0db397422ad42fa] = env->getStaticMethodID(cls, "UTC", "(IIIIII)J");
        mids$[mid_after_7bb053a7183a5e9b] = env->getMethodID(cls, "after", "(Ljava/util/Date;)Z");
        mids$[mid_before_7bb053a7183a5e9b] = env->getMethodID(cls, "before", "(Ljava/util/Date;)Z");
        mids$[mid_clone_e661fe3ba2fafb22] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_compareTo_690e4181a3b58622] = env->getMethodID(cls, "compareTo", "(Ljava/util/Date;)I");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getDate_412668abc8d889e9] = env->getMethodID(cls, "getDate", "()I");
        mids$[mid_getDay_412668abc8d889e9] = env->getMethodID(cls, "getDay", "()I");
        mids$[mid_getHours_412668abc8d889e9] = env->getMethodID(cls, "getHours", "()I");
        mids$[mid_getMinutes_412668abc8d889e9] = env->getMethodID(cls, "getMinutes", "()I");
        mids$[mid_getMonth_412668abc8d889e9] = env->getMethodID(cls, "getMonth", "()I");
        mids$[mid_getSeconds_412668abc8d889e9] = env->getMethodID(cls, "getSeconds", "()I");
        mids$[mid_getTime_9e26256fb0d384a2] = env->getMethodID(cls, "getTime", "()J");
        mids$[mid_getTimezoneOffset_412668abc8d889e9] = env->getMethodID(cls, "getTimezoneOffset", "()I");
        mids$[mid_getYear_412668abc8d889e9] = env->getMethodID(cls, "getYear", "()I");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_parse_8524bc32bc995ef2] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)J");
        mids$[mid_setDate_a3da1a935cb37f7b] = env->getMethodID(cls, "setDate", "(I)V");
        mids$[mid_setHours_a3da1a935cb37f7b] = env->getMethodID(cls, "setHours", "(I)V");
        mids$[mid_setMinutes_a3da1a935cb37f7b] = env->getMethodID(cls, "setMinutes", "(I)V");
        mids$[mid_setMonth_a3da1a935cb37f7b] = env->getMethodID(cls, "setMonth", "(I)V");
        mids$[mid_setSeconds_a3da1a935cb37f7b] = env->getMethodID(cls, "setSeconds", "(I)V");
        mids$[mid_setTime_3cd6a6b354c6aa22] = env->getMethodID(cls, "setTime", "(J)V");
        mids$[mid_setYear_a3da1a935cb37f7b] = env->getMethodID(cls, "setYear", "(I)V");
        mids$[mid_toGMTString_3cffd47377eca18a] = env->getMethodID(cls, "toGMTString", "()Ljava/lang/String;");
        mids$[mid_toLocaleString_3cffd47377eca18a] = env->getMethodID(cls, "toLocaleString", "()Ljava/lang/String;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Date::Date() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    Date::Date(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    Date::Date(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3cd6a6b354c6aa22, a0)) {}

    Date::Date(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3796b665437eba81, a0, a1, a2)) {}

    Date::Date(jint a0, jint a1, jint a2, jint a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a0ab3b1da64ee815, a0, a1, a2, a3, a4)) {}

    Date::Date(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b02282271d2e33e3, a0, a1, a2, a3, a4, a5)) {}

    jlong Date::UTC(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_UTC_b0db397422ad42fa], a0, a1, a2, a3, a4, a5);
    }

    jboolean Date::after(const Date & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_after_7bb053a7183a5e9b], a0.this$);
    }

    jboolean Date::before(const Date & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_before_7bb053a7183a5e9b], a0.this$);
    }

    ::java::lang::Object Date::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_e661fe3ba2fafb22]));
    }

    jint Date::compareTo(const Date & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_690e4181a3b58622], a0.this$);
    }

    jboolean Date::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    jint Date::getDate() const
    {
      return env->callIntMethod(this$, mids$[mid_getDate_412668abc8d889e9]);
    }

    jint Date::getDay() const
    {
      return env->callIntMethod(this$, mids$[mid_getDay_412668abc8d889e9]);
    }

    jint Date::getHours() const
    {
      return env->callIntMethod(this$, mids$[mid_getHours_412668abc8d889e9]);
    }

    jint Date::getMinutes() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinutes_412668abc8d889e9]);
    }

    jint Date::getMonth() const
    {
      return env->callIntMethod(this$, mids$[mid_getMonth_412668abc8d889e9]);
    }

    jint Date::getSeconds() const
    {
      return env->callIntMethod(this$, mids$[mid_getSeconds_412668abc8d889e9]);
    }

    jlong Date::getTime() const
    {
      return env->callLongMethod(this$, mids$[mid_getTime_9e26256fb0d384a2]);
    }

    jint Date::getTimezoneOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getTimezoneOffset_412668abc8d889e9]);
    }

    jint Date::getYear() const
    {
      return env->callIntMethod(this$, mids$[mid_getYear_412668abc8d889e9]);
    }

    jint Date::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jlong Date::parse(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parse_8524bc32bc995ef2], a0.this$);
    }

    void Date::setDate(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDate_a3da1a935cb37f7b], a0);
    }

    void Date::setHours(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setHours_a3da1a935cb37f7b], a0);
    }

    void Date::setMinutes(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinutes_a3da1a935cb37f7b], a0);
    }

    void Date::setMonth(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMonth_a3da1a935cb37f7b], a0);
    }

    void Date::setSeconds(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setSeconds_a3da1a935cb37f7b], a0);
    }

    void Date::setTime(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setTime_3cd6a6b354c6aa22], a0);
    }

    void Date::setYear(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setYear_a3da1a935cb37f7b], a0);
    }

    ::java::lang::String Date::toGMTString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toGMTString_3cffd47377eca18a]));
    }

    ::java::lang::String Date::toLocaleString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toLocaleString_3cffd47377eca18a]));
    }

    ::java::lang::String Date::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
#include "org/orekit/forces/radiation/IsotropicRadiationSingleCoefficient.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *IsotropicRadiationSingleCoefficient::class$ = NULL;
        jmethodID *IsotropicRadiationSingleCoefficient::mids$ = NULL;
        bool IsotropicRadiationSingleCoefficient::live$ = false;

        jclass IsotropicRadiationSingleCoefficient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/IsotropicRadiationSingleCoefficient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_bc3712e794ac7a81] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getRadiationParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_a910b2c2e7db1f82] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_radiationPressureAcceleration_122b60d0431fddf5] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicRadiationSingleCoefficient::IsotropicRadiationSingleCoefficient(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        IsotropicRadiationSingleCoefficient::IsotropicRadiationSingleCoefficient(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc3712e794ac7a81, a0, a1, a2, a3)) {}

        ::java::util::List IsotropicRadiationSingleCoefficient::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_0d9551367f7ecdef]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicRadiationSingleCoefficient::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_a910b2c2e7db1f82], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicRadiationSingleCoefficient::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_122b60d0431fddf5], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_IsotropicRadiationSingleCoefficient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicRadiationSingleCoefficient_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicRadiationSingleCoefficient_init_(t_IsotropicRadiationSingleCoefficient *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicRadiationSingleCoefficient_getRadiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self);
        static PyObject *t_IsotropicRadiationSingleCoefficient_radiationPressureAcceleration(t_IsotropicRadiationSingleCoefficient *self, PyObject *args);
        static PyObject *t_IsotropicRadiationSingleCoefficient_get__radiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self, void *data);
        static PyGetSetDef t_IsotropicRadiationSingleCoefficient__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicRadiationSingleCoefficient, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicRadiationSingleCoefficient__methods_[] = {
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_IsotropicRadiationSingleCoefficient, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicRadiationSingleCoefficient)[] = {
          { Py_tp_methods, t_IsotropicRadiationSingleCoefficient__methods_ },
          { Py_tp_init, (void *) t_IsotropicRadiationSingleCoefficient_init_ },
          { Py_tp_getset, t_IsotropicRadiationSingleCoefficient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicRadiationSingleCoefficient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicRadiationSingleCoefficient, t_IsotropicRadiationSingleCoefficient, IsotropicRadiationSingleCoefficient);

        void t_IsotropicRadiationSingleCoefficient::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicRadiationSingleCoefficient), &PY_TYPE_DEF(IsotropicRadiationSingleCoefficient), module, "IsotropicRadiationSingleCoefficient", 0);
        }

        void t_IsotropicRadiationSingleCoefficient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationSingleCoefficient), "class_", make_descriptor(IsotropicRadiationSingleCoefficient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationSingleCoefficient), "wrapfn_", make_descriptor(t_IsotropicRadiationSingleCoefficient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationSingleCoefficient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicRadiationSingleCoefficient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicRadiationSingleCoefficient::initializeClass, 1)))
            return NULL;
          return t_IsotropicRadiationSingleCoefficient::wrap_Object(IsotropicRadiationSingleCoefficient(((t_IsotropicRadiationSingleCoefficient *) arg)->object.this$));
        }
        static PyObject *t_IsotropicRadiationSingleCoefficient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicRadiationSingleCoefficient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicRadiationSingleCoefficient_init_(t_IsotropicRadiationSingleCoefficient *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              IsotropicRadiationSingleCoefficient object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = IsotropicRadiationSingleCoefficient(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              IsotropicRadiationSingleCoefficient object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = IsotropicRadiationSingleCoefficient(a0, a1, a2, a3));
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

        static PyObject *t_IsotropicRadiationSingleCoefficient_getRadiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicRadiationSingleCoefficient_radiationPressureAcceleration(t_IsotropicRadiationSingleCoefficient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
          return NULL;
        }

        static PyObject *t_IsotropicRadiationSingleCoefficient_get__radiationParametersDrivers(t_IsotropicRadiationSingleCoefficient *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/ranking/NaturalRanking.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/ranking/RankingAlgorithm.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        ::java::lang::Class *NaturalRanking::class$ = NULL;
        jmethodID *NaturalRanking::mids$ = NULL;
        bool NaturalRanking::live$ = false;
        ::org::hipparchus::stat::ranking::NaNStrategy *NaturalRanking::DEFAULT_NAN_STRATEGY = NULL;
        ::org::hipparchus::stat::ranking::TiesStrategy *NaturalRanking::DEFAULT_TIES_STRATEGY = NULL;

        jclass NaturalRanking::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/ranking/NaturalRanking");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_9a0bb4846d6220d9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;)V");
            mids$[mid_init$_8895955433ec1a4f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_init$_19e7f6e95a4dc08e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_init$_08eff940a3336a45] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_init$_da68996d2e70adaf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_getNanStrategy_771b1218ed87a53c] = env->getMethodID(cls, "getNanStrategy", "()Lorg/hipparchus/stat/ranking/NaNStrategy;");
            mids$[mid_getTiesStrategy_31f335b655a6e105] = env->getMethodID(cls, "getTiesStrategy", "()Lorg/hipparchus/stat/ranking/TiesStrategy;");
            mids$[mid_rank_1db7c087750eaffe] = env->getMethodID(cls, "rank", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_NAN_STRATEGY = new ::org::hipparchus::stat::ranking::NaNStrategy(env->getStaticObjectField(cls, "DEFAULT_NAN_STRATEGY", "Lorg/hipparchus/stat/ranking/NaNStrategy;"));
            DEFAULT_TIES_STRATEGY = new ::org::hipparchus::stat::ranking::TiesStrategy(env->getStaticObjectField(cls, "DEFAULT_TIES_STRATEGY", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NaturalRanking::NaturalRanking() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::NaNStrategy & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9a0bb4846d6220d9, a0.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::TiesStrategy & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8895955433ec1a4f, a0.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_19e7f6e95a4dc08e, a0.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::stat::ranking::TiesStrategy & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_08eff940a3336a45, a0.this$, a1.this$)) {}

        NaturalRanking::NaturalRanking(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_da68996d2e70adaf, a0.this$, a1.this$)) {}

        ::org::hipparchus::stat::ranking::NaNStrategy NaturalRanking::getNanStrategy() const
        {
          return ::org::hipparchus::stat::ranking::NaNStrategy(env->callObjectMethod(this$, mids$[mid_getNanStrategy_771b1218ed87a53c]));
        }

        ::org::hipparchus::stat::ranking::TiesStrategy NaturalRanking::getTiesStrategy() const
        {
          return ::org::hipparchus::stat::ranking::TiesStrategy(env->callObjectMethod(this$, mids$[mid_getTiesStrategy_31f335b655a6e105]));
        }

        JArray< jdouble > NaturalRanking::rank(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_rank_1db7c087750eaffe], a0.this$));
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
        static PyObject *t_NaturalRanking_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NaturalRanking_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NaturalRanking_init_(t_NaturalRanking *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NaturalRanking_getNanStrategy(t_NaturalRanking *self);
        static PyObject *t_NaturalRanking_getTiesStrategy(t_NaturalRanking *self);
        static PyObject *t_NaturalRanking_rank(t_NaturalRanking *self, PyObject *arg);
        static PyObject *t_NaturalRanking_get__nanStrategy(t_NaturalRanking *self, void *data);
        static PyObject *t_NaturalRanking_get__tiesStrategy(t_NaturalRanking *self, void *data);
        static PyGetSetDef t_NaturalRanking__fields_[] = {
          DECLARE_GET_FIELD(t_NaturalRanking, nanStrategy),
          DECLARE_GET_FIELD(t_NaturalRanking, tiesStrategy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NaturalRanking__methods_[] = {
          DECLARE_METHOD(t_NaturalRanking, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NaturalRanking, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NaturalRanking, getNanStrategy, METH_NOARGS),
          DECLARE_METHOD(t_NaturalRanking, getTiesStrategy, METH_NOARGS),
          DECLARE_METHOD(t_NaturalRanking, rank, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NaturalRanking)[] = {
          { Py_tp_methods, t_NaturalRanking__methods_ },
          { Py_tp_init, (void *) t_NaturalRanking_init_ },
          { Py_tp_getset, t_NaturalRanking__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NaturalRanking)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NaturalRanking, t_NaturalRanking, NaturalRanking);

        void t_NaturalRanking::install(PyObject *module)
        {
          installType(&PY_TYPE(NaturalRanking), &PY_TYPE_DEF(NaturalRanking), module, "NaturalRanking", 0);
        }

        void t_NaturalRanking::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "class_", make_descriptor(NaturalRanking::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "wrapfn_", make_descriptor(t_NaturalRanking::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "boxfn_", make_descriptor(boxObject));
          env->getClass(NaturalRanking::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "DEFAULT_NAN_STRATEGY", make_descriptor(::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(*NaturalRanking::DEFAULT_NAN_STRATEGY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NaturalRanking), "DEFAULT_TIES_STRATEGY", make_descriptor(::org::hipparchus::stat::ranking::t_TiesStrategy::wrap_Object(*NaturalRanking::DEFAULT_TIES_STRATEGY)));
        }

        static PyObject *t_NaturalRanking_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NaturalRanking::initializeClass, 1)))
            return NULL;
          return t_NaturalRanking::wrap_Object(NaturalRanking(((t_NaturalRanking *) arg)->object.this$));
        }
        static PyObject *t_NaturalRanking_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NaturalRanking::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NaturalRanking_init_(t_NaturalRanking *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              NaturalRanking object((jobject) NULL);

              INT_CALL(object = NaturalRanking());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_))
              {
                INT_CALL(object = NaturalRanking(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::ranking::TiesStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = NaturalRanking(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
              {
                INT_CALL(object = NaturalRanking(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::stat::ranking::TiesStrategy a1((jobject) NULL);
              PyTypeObject **p1;
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1, &p1, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = NaturalRanking(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
              NaturalRanking object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1))
              {
                INT_CALL(object = NaturalRanking(a0, a1));
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

        static PyObject *t_NaturalRanking_getNanStrategy(t_NaturalRanking *self)
        {
          ::org::hipparchus::stat::ranking::NaNStrategy result((jobject) NULL);
          OBJ_CALL(result = self->object.getNanStrategy());
          return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(result);
        }

        static PyObject *t_NaturalRanking_getTiesStrategy(t_NaturalRanking *self)
        {
          ::org::hipparchus::stat::ranking::TiesStrategy result((jobject) NULL);
          OBJ_CALL(result = self->object.getTiesStrategy());
          return ::org::hipparchus::stat::ranking::t_TiesStrategy::wrap_Object(result);
        }

        static PyObject *t_NaturalRanking_rank(t_NaturalRanking *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.rank(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "rank", arg);
          return NULL;
        }

        static PyObject *t_NaturalRanking_get__nanStrategy(t_NaturalRanking *self, void *data)
        {
          ::org::hipparchus::stat::ranking::NaNStrategy value((jobject) NULL);
          OBJ_CALL(value = self->object.getNanStrategy());
          return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(value);
        }

        static PyObject *t_NaturalRanking_get__tiesStrategy(t_NaturalRanking *self, void *data)
        {
          ::org::hipparchus::stat::ranking::TiesStrategy value((jobject) NULL);
          OBJ_CALL(value = self->object.getTiesStrategy());
          return ::org::hipparchus::stat::ranking::t_TiesStrategy::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/LOSTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *LOSTransform::class$ = NULL;
        jmethodID *LOSTransform::mids$ = NULL;
        bool LOSTransform::live$ = false;

        jclass LOSTransform::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/LOSTransform");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getParametersDrivers_d7cce92225eb0db2] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_193bcb23df54ca95] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_da5b61aadada7c1f] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::stream::Stream LOSTransform::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d7cce92225eb0db2]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_193bcb23df54ca95], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LOSTransform::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::rugged::utils::DerivativeGenerator & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_da5b61aadada7c1f], a0, a1.this$, a2.this$, a3.this$));
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
      namespace los {
        static PyObject *t_LOSTransform_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LOSTransform_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LOSTransform_getParametersDrivers(t_LOSTransform *self);
        static PyObject *t_LOSTransform_transformLOS(t_LOSTransform *self, PyObject *args);
        static PyObject *t_LOSTransform_get__parametersDrivers(t_LOSTransform *self, void *data);
        static PyGetSetDef t_LOSTransform__fields_[] = {
          DECLARE_GET_FIELD(t_LOSTransform, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LOSTransform__methods_[] = {
          DECLARE_METHOD(t_LOSTransform, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSTransform, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSTransform, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_LOSTransform, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LOSTransform)[] = {
          { Py_tp_methods, t_LOSTransform__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_LOSTransform__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LOSTransform)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LOSTransform, t_LOSTransform, LOSTransform);

        void t_LOSTransform::install(PyObject *module)
        {
          installType(&PY_TYPE(LOSTransform), &PY_TYPE_DEF(LOSTransform), module, "LOSTransform", 0);
        }

        void t_LOSTransform::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSTransform), "class_", make_descriptor(LOSTransform::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSTransform), "wrapfn_", make_descriptor(t_LOSTransform::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSTransform), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LOSTransform_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LOSTransform::initializeClass, 1)))
            return NULL;
          return t_LOSTransform::wrap_Object(LOSTransform(((t_LOSTransform *) arg)->object.this$));
        }
        static PyObject *t_LOSTransform_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LOSTransform::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LOSTransform_getParametersDrivers(t_LOSTransform *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_LOSTransform_transformLOS(t_LOSTransform *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ikk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::rugged::utils::DerivativeGenerator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_LOSTransform_get__parametersDrivers(t_LOSTransform *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/IterationEvent.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *IterationEvent::class$ = NULL;
      jmethodID *IterationEvent::mids$ = NULL;
      bool IterationEvent::live$ = false;

      jclass IterationEvent::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/IterationEvent");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3b6b1ab3a4013647] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;I)V");
          mids$[mid_getIterations_412668abc8d889e9] = env->getMethodID(cls, "getIterations", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterationEvent::IterationEvent(const ::java::lang::Object & a0, jint a1) : ::java::util::EventObject(env->newObject(initializeClass, &mids$, mid_init$_3b6b1ab3a4013647, a0.this$, a1)) {}

      jint IterationEvent::getIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getIterations_412668abc8d889e9]);
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
      static PyObject *t_IterationEvent_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationEvent_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterationEvent_init_(t_IterationEvent *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterationEvent_getIterations(t_IterationEvent *self);
      static PyObject *t_IterationEvent_get__iterations(t_IterationEvent *self, void *data);
      static PyGetSetDef t_IterationEvent__fields_[] = {
        DECLARE_GET_FIELD(t_IterationEvent, iterations),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterationEvent__methods_[] = {
        DECLARE_METHOD(t_IterationEvent, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationEvent, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationEvent, getIterations, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterationEvent)[] = {
        { Py_tp_methods, t_IterationEvent__methods_ },
        { Py_tp_init, (void *) t_IterationEvent_init_ },
        { Py_tp_getset, t_IterationEvent__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterationEvent)[] = {
        &PY_TYPE_DEF(::java::util::EventObject),
        NULL
      };

      DEFINE_TYPE(IterationEvent, t_IterationEvent, IterationEvent);

      void t_IterationEvent::install(PyObject *module)
      {
        installType(&PY_TYPE(IterationEvent), &PY_TYPE_DEF(IterationEvent), module, "IterationEvent", 0);
      }

      void t_IterationEvent::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationEvent), "class_", make_descriptor(IterationEvent::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationEvent), "wrapfn_", make_descriptor(t_IterationEvent::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationEvent), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterationEvent_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterationEvent::initializeClass, 1)))
          return NULL;
        return t_IterationEvent::wrap_Object(IterationEvent(((t_IterationEvent *) arg)->object.this$));
      }
      static PyObject *t_IterationEvent_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterationEvent::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterationEvent_init_(t_IterationEvent *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        jint a1;
        IterationEvent object((jobject) NULL);

        if (!parseArgs(args, "oI", &a0, &a1))
        {
          INT_CALL(object = IterationEvent(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_IterationEvent_getIterations(t_IterationEvent *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IterationEvent_get__iterations(t_IterationEvent *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIterations());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/MidpointIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *MidpointIntegratorBuilder::class$ = NULL;
        jmethodID *MidpointIntegratorBuilder::mids$ = NULL;
        bool MidpointIntegratorBuilder::live$ = false;

        jclass MidpointIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/MidpointIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_f50d555477b898d8] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointIntegratorBuilder::MidpointIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator MidpointIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
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
        static PyObject *t_MidpointIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MidpointIntegratorBuilder_init_(t_MidpointIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointIntegratorBuilder_buildIntegrator(t_MidpointIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_MidpointIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_MidpointIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointIntegratorBuilder)[] = {
          { Py_tp_methods, t_MidpointIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_MidpointIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MidpointIntegratorBuilder, t_MidpointIntegratorBuilder, MidpointIntegratorBuilder);

        void t_MidpointIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointIntegratorBuilder), &PY_TYPE_DEF(MidpointIntegratorBuilder), module, "MidpointIntegratorBuilder", 0);
        }

        void t_MidpointIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegratorBuilder), "class_", make_descriptor(MidpointIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegratorBuilder), "wrapfn_", make_descriptor(t_MidpointIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_MidpointIntegratorBuilder::wrap_Object(MidpointIntegratorBuilder(((t_MidpointIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_MidpointIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MidpointIntegratorBuilder_init_(t_MidpointIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          MidpointIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = MidpointIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MidpointIntegratorBuilder_buildIntegrator(t_MidpointIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttraction.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTNewtonianAttraction::class$ = NULL;
            jmethodID *DSSTNewtonianAttraction::mids$ = NULL;
            bool DSSTNewtonianAttraction::live$ = false;
            ::java::lang::String *DSSTNewtonianAttraction::CENTRAL_ATTRACTION_COEFFICIENT = NULL;

            jclass DSSTNewtonianAttraction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttraction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
                mids$[mid_getMeanElementRate_6930c150caff50e0] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_3573019cca22a7a6] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMu_b0b988f941da47d8] = env->getMethodID(cls, "getMu", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_57b295149dcd4abd] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_0791dbeb06a23554] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_114c99ef73dfde56] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_a9be3da5be85857d] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CENTRAL_ATTRACTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "CENTRAL_ATTRACTION_COEFFICIENT", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTNewtonianAttraction::DSSTNewtonianAttraction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

            JArray< jdouble > DSSTNewtonianAttraction::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_6930c150caff50e0], a0.this$, a1.this$, a2.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTNewtonianAttraction::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3573019cca22a7a6], a0.this$, a1.this$, a2.this$));
            }

            jdouble DSSTNewtonianAttraction::getMu(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_b0b988f941da47d8], a0.this$);
            }

            ::java::util::List DSSTNewtonianAttraction::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
            }

            ::java::util::List DSSTNewtonianAttraction::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_57b295149dcd4abd], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTNewtonianAttraction::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_0791dbeb06a23554], a0.this$, a1.this$, a2.this$));
            }

            void DSSTNewtonianAttraction::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8fa6c0c067ead7b2], a0.this$);
            }

            void DSSTNewtonianAttraction::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_114c99ef73dfde56], a0.this$, a1.this$);
            }

            void DSSTNewtonianAttraction::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_a9be3da5be85857d], a0.this$, a1.this$);
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
            static PyObject *t_DSSTNewtonianAttraction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTNewtonianAttraction_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTNewtonianAttraction_init_(t_DSSTNewtonianAttraction *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTNewtonianAttraction_getMeanElementRate(t_DSSTNewtonianAttraction *self, PyObject *args);
            static PyObject *t_DSSTNewtonianAttraction_getMu(t_DSSTNewtonianAttraction *self, PyObject *arg);
            static PyObject *t_DSSTNewtonianAttraction_getParametersDrivers(t_DSSTNewtonianAttraction *self);
            static PyObject *t_DSSTNewtonianAttraction_initializeShortPeriodTerms(t_DSSTNewtonianAttraction *self, PyObject *args);
            static PyObject *t_DSSTNewtonianAttraction_registerAttitudeProvider(t_DSSTNewtonianAttraction *self, PyObject *arg);
            static PyObject *t_DSSTNewtonianAttraction_updateShortPeriodTerms(t_DSSTNewtonianAttraction *self, PyObject *args);
            static PyObject *t_DSSTNewtonianAttraction_get__parametersDrivers(t_DSSTNewtonianAttraction *self, void *data);
            static PyGetSetDef t_DSSTNewtonianAttraction__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTNewtonianAttraction, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTNewtonianAttraction__methods_[] = {
              DECLARE_METHOD(t_DSSTNewtonianAttraction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, getMu, METH_O),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTNewtonianAttraction, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTNewtonianAttraction)[] = {
              { Py_tp_methods, t_DSSTNewtonianAttraction__methods_ },
              { Py_tp_init, (void *) t_DSSTNewtonianAttraction_init_ },
              { Py_tp_getset, t_DSSTNewtonianAttraction__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTNewtonianAttraction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTNewtonianAttraction, t_DSSTNewtonianAttraction, DSSTNewtonianAttraction);

            void t_DSSTNewtonianAttraction::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTNewtonianAttraction), &PY_TYPE_DEF(DSSTNewtonianAttraction), module, "DSSTNewtonianAttraction", 0);
            }

            void t_DSSTNewtonianAttraction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttraction), "class_", make_descriptor(DSSTNewtonianAttraction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttraction), "wrapfn_", make_descriptor(t_DSSTNewtonianAttraction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttraction), "boxfn_", make_descriptor(boxObject));
              env->getClass(DSSTNewtonianAttraction::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttraction), "CENTRAL_ATTRACTION_COEFFICIENT", make_descriptor(j2p(*DSSTNewtonianAttraction::CENTRAL_ATTRACTION_COEFFICIENT)));
            }

            static PyObject *t_DSSTNewtonianAttraction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTNewtonianAttraction::initializeClass, 1)))
                return NULL;
              return t_DSSTNewtonianAttraction::wrap_Object(DSSTNewtonianAttraction(((t_DSSTNewtonianAttraction *) arg)->object.this$));
            }
            static PyObject *t_DSSTNewtonianAttraction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTNewtonianAttraction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTNewtonianAttraction_init_(t_DSSTNewtonianAttraction *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              DSSTNewtonianAttraction object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = DSSTNewtonianAttraction(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTNewtonianAttraction_getMeanElementRate(t_DSSTNewtonianAttraction *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTNewtonianAttraction_getMu(t_DSSTNewtonianAttraction *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMu(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getMu", arg);
              return NULL;
            }

            static PyObject *t_DSSTNewtonianAttraction_getParametersDrivers(t_DSSTNewtonianAttraction *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTNewtonianAttraction_initializeShortPeriodTerms(t_DSSTNewtonianAttraction *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTNewtonianAttraction_registerAttitudeProvider(t_DSSTNewtonianAttraction *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTNewtonianAttraction_updateShortPeriodTerms(t_DSSTNewtonianAttraction *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTNewtonianAttraction_get__parametersDrivers(t_DSSTNewtonianAttraction *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldAdaptableInterval.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
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
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_c08c641018e50288] = env->getMethodID(cls, "currentInterval", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble FieldAdaptableInterval::currentInterval(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_c08c641018e50288], a0.this$);
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
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm03Header::class$ = NULL;
              jmethodID *SsrIgm03Header::mids$ = NULL;
              bool SsrIgm03Header::live$ = false;

              jclass SsrIgm03Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCrsIndicator_412668abc8d889e9] = env->getMethodID(cls, "getCrsIndicator", "()I");
                  mids$[mid_setCrsIndicator_a3da1a935cb37f7b] = env->getMethodID(cls, "setCrsIndicator", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm03Header::SsrIgm03Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jint SsrIgm03Header::getCrsIndicator() const
              {
                return env->callIntMethod(this$, mids$[mid_getCrsIndicator_412668abc8d889e9]);
              }

              void SsrIgm03Header::setCrsIndicator(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCrsIndicator_a3da1a935cb37f7b], a0);
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
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm03Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm03Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm03Header_init_(t_SsrIgm03Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm03Header_getCrsIndicator(t_SsrIgm03Header *self);
              static PyObject *t_SsrIgm03Header_setCrsIndicator(t_SsrIgm03Header *self, PyObject *arg);
              static PyObject *t_SsrIgm03Header_get__crsIndicator(t_SsrIgm03Header *self, void *data);
              static int t_SsrIgm03Header_set__crsIndicator(t_SsrIgm03Header *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm03Header__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm03Header, crsIndicator),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm03Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm03Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03Header, getCrsIndicator, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm03Header, setCrsIndicator, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm03Header)[] = {
                { Py_tp_methods, t_SsrIgm03Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm03Header_init_ },
                { Py_tp_getset, t_SsrIgm03Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm03Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm03Header, t_SsrIgm03Header, SsrIgm03Header);

              void t_SsrIgm03Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm03Header), &PY_TYPE_DEF(SsrIgm03Header), module, "SsrIgm03Header", 0);
              }

              void t_SsrIgm03Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Header), "class_", make_descriptor(SsrIgm03Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Header), "wrapfn_", make_descriptor(t_SsrIgm03Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm03Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm03Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm03Header::wrap_Object(SsrIgm03Header(((t_SsrIgm03Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm03Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm03Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm03Header_init_(t_SsrIgm03Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm03Header object((jobject) NULL);

                INT_CALL(object = SsrIgm03Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm03Header_getCrsIndicator(t_SsrIgm03Header *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getCrsIndicator());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm03Header_setCrsIndicator(t_SsrIgm03Header *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setCrsIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCrsIndicator", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm03Header_get__crsIndicator(t_SsrIgm03Header *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getCrsIndicator());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm03Header_set__crsIndicator(t_SsrIgm03Header *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setCrsIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "crsIndicator", arg);
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
#include "org/hipparchus/analysis/solvers/RiddersSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *RiddersSolver::class$ = NULL;
        jmethodID *RiddersSolver::mids$ = NULL;
        bool RiddersSolver::live$ = false;

        jclass RiddersSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/RiddersSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_557b8123390d8d0c] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RiddersSolver::RiddersSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        RiddersSolver::RiddersSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        RiddersSolver::RiddersSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}
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
      namespace solvers {
        static PyObject *t_RiddersSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RiddersSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RiddersSolver_of_(t_RiddersSolver *self, PyObject *args);
        static int t_RiddersSolver_init_(t_RiddersSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RiddersSolver_get__parameters_(t_RiddersSolver *self, void *data);
        static PyGetSetDef t_RiddersSolver__fields_[] = {
          DECLARE_GET_FIELD(t_RiddersSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RiddersSolver__methods_[] = {
          DECLARE_METHOD(t_RiddersSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RiddersSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RiddersSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RiddersSolver)[] = {
          { Py_tp_methods, t_RiddersSolver__methods_ },
          { Py_tp_init, (void *) t_RiddersSolver_init_ },
          { Py_tp_getset, t_RiddersSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RiddersSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(RiddersSolver, t_RiddersSolver, RiddersSolver);
        PyObject *t_RiddersSolver::wrap_Object(const RiddersSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RiddersSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RiddersSolver *self = (t_RiddersSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RiddersSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RiddersSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RiddersSolver *self = (t_RiddersSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RiddersSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(RiddersSolver), &PY_TYPE_DEF(RiddersSolver), module, "RiddersSolver", 0);
        }

        void t_RiddersSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RiddersSolver), "class_", make_descriptor(RiddersSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RiddersSolver), "wrapfn_", make_descriptor(t_RiddersSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RiddersSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RiddersSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RiddersSolver::initializeClass, 1)))
            return NULL;
          return t_RiddersSolver::wrap_Object(RiddersSolver(((t_RiddersSolver *) arg)->object.this$));
        }
        static PyObject *t_RiddersSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RiddersSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RiddersSolver_of_(t_RiddersSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RiddersSolver_init_(t_RiddersSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              RiddersSolver object((jobject) NULL);

              INT_CALL(object = RiddersSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              RiddersSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = RiddersSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              RiddersSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = RiddersSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_RiddersSolver_get__parameters_(t_RiddersSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/AbstractRealDistribution.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *AbstractRealDistribution::class$ = NULL;
        jmethodID *AbstractRealDistribution::mids$ = NULL;
        bool AbstractRealDistribution::live$ = false;

        jclass AbstractRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/AbstractRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_logDensity_7e960cd6eee376d8] = env->getMethodID(cls, "logDensity", "(D)D");
            mids$[mid_probability_2268d18be49a6087] = env->getMethodID(cls, "probability", "(DD)D");
            mids$[mid_getSolverAbsoluteAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getSolverAbsoluteAccuracy", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble AbstractRealDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_7e960cd6eee376d8], a0);
        }

        jdouble AbstractRealDistribution::probability(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_2268d18be49a6087], a0, a1);
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
        static PyObject *t_AbstractRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_inverseCumulativeProbability(t_AbstractRealDistribution *self, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_logDensity(t_AbstractRealDistribution *self, PyObject *arg);
        static PyObject *t_AbstractRealDistribution_probability(t_AbstractRealDistribution *self, PyObject *args);

        static PyMethodDef t_AbstractRealDistribution__methods_[] = {
          DECLARE_METHOD(t_AbstractRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRealDistribution, inverseCumulativeProbability, METH_O),
          DECLARE_METHOD(t_AbstractRealDistribution, logDensity, METH_O),
          DECLARE_METHOD(t_AbstractRealDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractRealDistribution)[] = {
          { Py_tp_methods, t_AbstractRealDistribution__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractRealDistribution)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractRealDistribution, t_AbstractRealDistribution, AbstractRealDistribution);

        void t_AbstractRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractRealDistribution), &PY_TYPE_DEF(AbstractRealDistribution), module, "AbstractRealDistribution", 0);
        }

        void t_AbstractRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealDistribution), "class_", make_descriptor(AbstractRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealDistribution), "wrapfn_", make_descriptor(t_AbstractRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractRealDistribution::initializeClass, 1)))
            return NULL;
          return t_AbstractRealDistribution::wrap_Object(AbstractRealDistribution(((t_AbstractRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_AbstractRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractRealDistribution_inverseCumulativeProbability(t_AbstractRealDistribution *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "inverseCumulativeProbability", arg);
          return NULL;
        }

        static PyObject *t_AbstractRealDistribution_logDensity(t_AbstractRealDistribution *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "logDensity", arg);
          return NULL;
        }

        static PyObject *t_AbstractRealDistribution_probability(t_AbstractRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.probability(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "probability", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$CRDDataBlock.h"
#include "org/orekit/files/ilrs/CRD$SessionStatistics.h"
#include "org/orekit/files/ilrs/CRD$Calibration.h"
#include "java/util/List.h"
#include "org/orekit/files/ilrs/CRD$AnglesMeasurement.h"
#include "org/orekit/files/ilrs/CRD$RangeSupplement.h"
#include "org/orekit/files/ilrs/CRD$Meteo.h"
#include "org/orekit/files/ilrs/CRD$RangeMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRDConfiguration.h"
#include "org/orekit/files/ilrs/CRDHeader.h"
#include "org/orekit/files/ilrs/CRD$CalibrationDetail.h"
#include "java/lang/String.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$CRDDataBlock::class$ = NULL;
        jmethodID *CRD$CRDDataBlock::mids$ = NULL;
        bool CRD$CRDDataBlock::live$ = false;

        jclass CRD$CRDDataBlock::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$CRDDataBlock");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addAnglesData_35383e0c843c3084] = env->getMethodID(cls, "addAnglesData", "(Lorg/orekit/files/ilrs/CRD$AnglesMeasurement;)V");
            mids$[mid_addCalibrationData_cc0e8057595cb595] = env->getMethodID(cls, "addCalibrationData", "(Lorg/orekit/files/ilrs/CRD$Calibration;)V");
            mids$[mid_addCalibrationDetailData_540c2ec67cb130ce] = env->getMethodID(cls, "addCalibrationDetailData", "(Lorg/orekit/files/ilrs/CRD$CalibrationDetail;)V");
            mids$[mid_addMeteoData_e118fb7db41bcff6] = env->getMethodID(cls, "addMeteoData", "(Lorg/orekit/files/ilrs/CRD$MeteorologicalMeasurement;)V");
            mids$[mid_addRangeData_922f4ef45083699e] = env->getMethodID(cls, "addRangeData", "(Lorg/orekit/files/ilrs/CRD$RangeMeasurement;)V");
            mids$[mid_addRangeSupplementData_a0b8f90cbfce5723] = env->getMethodID(cls, "addRangeSupplementData", "(Lorg/orekit/files/ilrs/CRD$RangeSupplement;)V");
            mids$[mid_addSessionStatisticsData_0a7705e408a98b7b] = env->getMethodID(cls, "addSessionStatisticsData", "(Lorg/orekit/files/ilrs/CRD$SessionStatistics;)V");
            mids$[mid_getAnglesData_0d9551367f7ecdef] = env->getMethodID(cls, "getAnglesData", "()Ljava/util/List;");
            mids$[mid_getCalibrationData_0d9551367f7ecdef] = env->getMethodID(cls, "getCalibrationData", "()Ljava/util/List;");
            mids$[mid_getCalibrationDetailData_0d9551367f7ecdef] = env->getMethodID(cls, "getCalibrationDetailData", "()Ljava/util/List;");
            mids$[mid_getCalibrationDetailRecords_0d9551367f7ecdef] = env->getMethodID(cls, "getCalibrationDetailRecords", "()Ljava/util/List;");
            mids$[mid_getCalibrationDetailRecords_112f9b169ddc4fbe] = env->getMethodID(cls, "getCalibrationDetailRecords", "(Ljava/lang/String;)Ljava/util/List;");
            mids$[mid_getCalibrationRecords_0d9551367f7ecdef] = env->getMethodID(cls, "getCalibrationRecords", "()Ljava/util/List;");
            mids$[mid_getCalibrationRecords_112f9b169ddc4fbe] = env->getMethodID(cls, "getCalibrationRecords", "(Ljava/lang/String;)Ljava/util/List;");
            mids$[mid_getConfigurationRecords_6ff2a6b6ea3e1822] = env->getMethodID(cls, "getConfigurationRecords", "()Lorg/orekit/files/ilrs/CRDConfiguration;");
            mids$[mid_getHeader_280bc464d093e3cf] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ilrs/CRDHeader;");
            mids$[mid_getMeteoData_fce7f079c8fc6110] = env->getMethodID(cls, "getMeteoData", "()Lorg/orekit/files/ilrs/CRD$Meteo;");
            mids$[mid_getRangeData_0d9551367f7ecdef] = env->getMethodID(cls, "getRangeData", "()Ljava/util/List;");
            mids$[mid_getRangeSupplementData_0d9551367f7ecdef] = env->getMethodID(cls, "getRangeSupplementData", "()Ljava/util/List;");
            mids$[mid_getSessionStatisticsData_0d9551367f7ecdef] = env->getMethodID(cls, "getSessionStatisticsData", "()Ljava/util/List;");
            mids$[mid_getSessionStatisticsRecord_a385ffee72bd3d9c] = env->getMethodID(cls, "getSessionStatisticsRecord", "()Lorg/orekit/files/ilrs/CRD$SessionStatistics;");
            mids$[mid_getSessionStatisticsRecord_8d772f4eaa89cc95] = env->getMethodID(cls, "getSessionStatisticsRecord", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRD$SessionStatistics;");
            mids$[mid_getWavelength_a02bac742ffcb9ae] = env->getMethodID(cls, "getWavelength", "(Lorg/orekit/files/ilrs/CRD$RangeMeasurement;)D");
            mids$[mid_setConfigurationRecords_3b7f7f9152be91f0] = env->getMethodID(cls, "setConfigurationRecords", "(Lorg/orekit/files/ilrs/CRDConfiguration;)V");
            mids$[mid_setHeader_03439c0671fe86ce] = env->getMethodID(cls, "setHeader", "(Lorg/orekit/files/ilrs/CRDHeader;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$CRDDataBlock::CRD$CRDDataBlock() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void CRD$CRDDataBlock::addAnglesData(const ::org::orekit::files::ilrs::CRD$AnglesMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAnglesData_35383e0c843c3084], a0.this$);
        }

        void CRD$CRDDataBlock::addCalibrationData(const ::org::orekit::files::ilrs::CRD$Calibration & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addCalibrationData_cc0e8057595cb595], a0.this$);
        }

        void CRD$CRDDataBlock::addCalibrationDetailData(const ::org::orekit::files::ilrs::CRD$CalibrationDetail & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addCalibrationDetailData_540c2ec67cb130ce], a0.this$);
        }

        void CRD$CRDDataBlock::addMeteoData(const ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMeteoData_e118fb7db41bcff6], a0.this$);
        }

        void CRD$CRDDataBlock::addRangeData(const ::org::orekit::files::ilrs::CRD$RangeMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addRangeData_922f4ef45083699e], a0.this$);
        }

        void CRD$CRDDataBlock::addRangeSupplementData(const ::org::orekit::files::ilrs::CRD$RangeSupplement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addRangeSupplementData_a0b8f90cbfce5723], a0.this$);
        }

        void CRD$CRDDataBlock::addSessionStatisticsData(const ::org::orekit::files::ilrs::CRD$SessionStatistics & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addSessionStatisticsData_0a7705e408a98b7b], a0.this$);
        }

        ::java::util::List CRD$CRDDataBlock::getAnglesData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAnglesData_0d9551367f7ecdef]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationData_0d9551367f7ecdef]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationDetailData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationDetailData_0d9551367f7ecdef]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationDetailRecords() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationDetailRecords_0d9551367f7ecdef]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationDetailRecords(const ::java::lang::String & a0) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationDetailRecords_112f9b169ddc4fbe], a0.this$));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationRecords() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationRecords_0d9551367f7ecdef]));
        }

        ::java::util::List CRD$CRDDataBlock::getCalibrationRecords(const ::java::lang::String & a0) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCalibrationRecords_112f9b169ddc4fbe], a0.this$));
        }

        ::org::orekit::files::ilrs::CRDConfiguration CRD$CRDDataBlock::getConfigurationRecords() const
        {
          return ::org::orekit::files::ilrs::CRDConfiguration(env->callObjectMethod(this$, mids$[mid_getConfigurationRecords_6ff2a6b6ea3e1822]));
        }

        ::org::orekit::files::ilrs::CRDHeader CRD$CRDDataBlock::getHeader() const
        {
          return ::org::orekit::files::ilrs::CRDHeader(env->callObjectMethod(this$, mids$[mid_getHeader_280bc464d093e3cf]));
        }

        ::org::orekit::files::ilrs::CRD$Meteo CRD$CRDDataBlock::getMeteoData() const
        {
          return ::org::orekit::files::ilrs::CRD$Meteo(env->callObjectMethod(this$, mids$[mid_getMeteoData_fce7f079c8fc6110]));
        }

        ::java::util::List CRD$CRDDataBlock::getRangeData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRangeData_0d9551367f7ecdef]));
        }

        ::java::util::List CRD$CRDDataBlock::getRangeSupplementData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRangeSupplementData_0d9551367f7ecdef]));
        }

        ::java::util::List CRD$CRDDataBlock::getSessionStatisticsData() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSessionStatisticsData_0d9551367f7ecdef]));
        }

        ::org::orekit::files::ilrs::CRD$SessionStatistics CRD$CRDDataBlock::getSessionStatisticsRecord() const
        {
          return ::org::orekit::files::ilrs::CRD$SessionStatistics(env->callObjectMethod(this$, mids$[mid_getSessionStatisticsRecord_a385ffee72bd3d9c]));
        }

        ::org::orekit::files::ilrs::CRD$SessionStatistics CRD$CRDDataBlock::getSessionStatisticsRecord(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::ilrs::CRD$SessionStatistics(env->callObjectMethod(this$, mids$[mid_getSessionStatisticsRecord_8d772f4eaa89cc95], a0.this$));
        }

        jdouble CRD$CRDDataBlock::getWavelength(const ::org::orekit::files::ilrs::CRD$RangeMeasurement & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getWavelength_a02bac742ffcb9ae], a0.this$);
        }

        void CRD$CRDDataBlock::setConfigurationRecords(const ::org::orekit::files::ilrs::CRDConfiguration & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setConfigurationRecords_3b7f7f9152be91f0], a0.this$);
        }

        void CRD$CRDDataBlock::setHeader(const ::org::orekit::files::ilrs::CRDHeader & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHeader_03439c0671fe86ce], a0.this$);
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
        static PyObject *t_CRD$CRDDataBlock_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$CRDDataBlock_init_(t_CRD$CRDDataBlock *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$CRDDataBlock_addAnglesData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addCalibrationData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addCalibrationDetailData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addMeteoData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addRangeData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addRangeSupplementData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_addSessionStatisticsData(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_getAnglesData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailRecords(t_CRD$CRDDataBlock *self, PyObject *args);
        static PyObject *t_CRD$CRDDataBlock_getCalibrationRecords(t_CRD$CRDDataBlock *self, PyObject *args);
        static PyObject *t_CRD$CRDDataBlock_getConfigurationRecords(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getHeader(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getMeteoData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getRangeData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getRangeSupplementData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsData(t_CRD$CRDDataBlock *self);
        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsRecord(t_CRD$CRDDataBlock *self, PyObject *args);
        static PyObject *t_CRD$CRDDataBlock_getWavelength(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_setConfigurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_setHeader(t_CRD$CRDDataBlock *self, PyObject *arg);
        static PyObject *t_CRD$CRDDataBlock_get__anglesData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailRecords(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__calibrationRecords(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__configurationRecords(t_CRD$CRDDataBlock *self, void *data);
        static int t_CRD$CRDDataBlock_set__configurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__header(t_CRD$CRDDataBlock *self, void *data);
        static int t_CRD$CRDDataBlock_set__header(t_CRD$CRDDataBlock *self, PyObject *arg, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__meteoData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__rangeData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__rangeSupplementData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsData(t_CRD$CRDDataBlock *self, void *data);
        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsRecord(t_CRD$CRDDataBlock *self, void *data);
        static PyGetSetDef t_CRD$CRDDataBlock__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, anglesData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationDetailData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationDetailRecords),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, calibrationRecords),
          DECLARE_GETSET_FIELD(t_CRD$CRDDataBlock, configurationRecords),
          DECLARE_GETSET_FIELD(t_CRD$CRDDataBlock, header),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, meteoData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, rangeData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, rangeSupplementData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, sessionStatisticsData),
          DECLARE_GET_FIELD(t_CRD$CRDDataBlock, sessionStatisticsRecord),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$CRDDataBlock__methods_[] = {
          DECLARE_METHOD(t_CRD$CRDDataBlock, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addAnglesData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addCalibrationData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addCalibrationDetailData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addMeteoData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addRangeData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addRangeSupplementData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, addSessionStatisticsData, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getAnglesData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationDetailData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationDetailRecords, METH_VARARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getCalibrationRecords, METH_VARARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getConfigurationRecords, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getHeader, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getMeteoData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getRangeData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getRangeSupplementData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getSessionStatisticsData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getSessionStatisticsRecord, METH_VARARGS),
          DECLARE_METHOD(t_CRD$CRDDataBlock, getWavelength, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, setConfigurationRecords, METH_O),
          DECLARE_METHOD(t_CRD$CRDDataBlock, setHeader, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$CRDDataBlock)[] = {
          { Py_tp_methods, t_CRD$CRDDataBlock__methods_ },
          { Py_tp_init, (void *) t_CRD$CRDDataBlock_init_ },
          { Py_tp_getset, t_CRD$CRDDataBlock__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$CRDDataBlock)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$CRDDataBlock, t_CRD$CRDDataBlock, CRD$CRDDataBlock);

        void t_CRD$CRDDataBlock::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$CRDDataBlock), &PY_TYPE_DEF(CRD$CRDDataBlock), module, "CRD$CRDDataBlock", 0);
        }

        void t_CRD$CRDDataBlock::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CRDDataBlock), "class_", make_descriptor(CRD$CRDDataBlock::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CRDDataBlock), "wrapfn_", make_descriptor(t_CRD$CRDDataBlock::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CRDDataBlock), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$CRDDataBlock_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$CRDDataBlock::initializeClass, 1)))
            return NULL;
          return t_CRD$CRDDataBlock::wrap_Object(CRD$CRDDataBlock(((t_CRD$CRDDataBlock *) arg)->object.this$));
        }
        static PyObject *t_CRD$CRDDataBlock_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$CRDDataBlock::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$CRDDataBlock_init_(t_CRD$CRDDataBlock *self, PyObject *args, PyObject *kwds)
        {
          CRD$CRDDataBlock object((jobject) NULL);

          INT_CALL(object = CRD$CRDDataBlock());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRD$CRDDataBlock_addAnglesData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$AnglesMeasurement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$AnglesMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addAnglesData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAnglesData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addCalibrationData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$Calibration a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$Calibration::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addCalibrationData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCalibrationData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addCalibrationDetailData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$CalibrationDetail a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$CalibrationDetail::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addCalibrationDetailData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCalibrationDetailData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addMeteoData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addMeteoData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMeteoData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addRangeData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$RangeMeasurement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$RangeMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addRangeData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addRangeData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addRangeSupplementData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$RangeSupplement a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$RangeSupplement::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addRangeSupplementData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addRangeSupplementData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_addSessionStatisticsData(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$SessionStatistics a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$SessionStatistics::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addSessionStatisticsData(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSessionStatisticsData", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getAnglesData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAnglesData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$AnglesMeasurement));
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCalibrationData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$Calibration));
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCalibrationDetailData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CalibrationDetail));
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationDetailRecords(t_CRD$CRDDataBlock *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getCalibrationDetailRecords());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CalibrationDetail));
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getCalibrationDetailRecords(a0));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CalibrationDetail));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getCalibrationDetailRecords", args);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getCalibrationRecords(t_CRD$CRDDataBlock *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getCalibrationRecords());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$Calibration));
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getCalibrationRecords(a0));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$Calibration));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getCalibrationRecords", args);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getConfigurationRecords(t_CRD$CRDDataBlock *self)
        {
          ::org::orekit::files::ilrs::CRDConfiguration result((jobject) NULL);
          OBJ_CALL(result = self->object.getConfigurationRecords());
          return ::org::orekit::files::ilrs::t_CRDConfiguration::wrap_Object(result);
        }

        static PyObject *t_CRD$CRDDataBlock_getHeader(t_CRD$CRDDataBlock *self)
        {
          ::org::orekit::files::ilrs::CRDHeader result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CRDHeader::wrap_Object(result);
        }

        static PyObject *t_CRD$CRDDataBlock_getMeteoData(t_CRD$CRDDataBlock *self)
        {
          ::org::orekit::files::ilrs::CRD$Meteo result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeteoData());
          return ::org::orekit::files::ilrs::t_CRD$Meteo::wrap_Object(result);
        }

        static PyObject *t_CRD$CRDDataBlock_getRangeData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRangeData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$RangeMeasurement));
        }

        static PyObject *t_CRD$CRDDataBlock_getRangeSupplementData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRangeSupplementData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$RangeSupplement));
        }

        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsData(t_CRD$CRDDataBlock *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSessionStatisticsData());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$SessionStatistics));
        }

        static PyObject *t_CRD$CRDDataBlock_getSessionStatisticsRecord(t_CRD$CRDDataBlock *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::files::ilrs::CRD$SessionStatistics result((jobject) NULL);
              OBJ_CALL(result = self->object.getSessionStatisticsRecord());
              return ::org::orekit::files::ilrs::t_CRD$SessionStatistics::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::ilrs::CRD$SessionStatistics result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getSessionStatisticsRecord(a0));
                return ::org::orekit::files::ilrs::t_CRD$SessionStatistics::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getSessionStatisticsRecord", args);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_getWavelength(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$RangeMeasurement a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$RangeMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getWavelength(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_setConfigurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRDConfiguration a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDConfiguration::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setConfigurationRecords(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setConfigurationRecords", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_setHeader(t_CRD$CRDDataBlock *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRDHeader a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDHeader::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setHeader(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHeader", arg);
          return NULL;
        }

        static PyObject *t_CRD$CRDDataBlock_get__anglesData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAnglesData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationDetailData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationDetailRecords(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationDetailRecords());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__calibrationRecords(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCalibrationRecords());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__configurationRecords(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDConfiguration value((jobject) NULL);
          OBJ_CALL(value = self->object.getConfigurationRecords());
          return ::org::orekit::files::ilrs::t_CRDConfiguration::wrap_Object(value);
        }
        static int t_CRD$CRDDataBlock_set__configurationRecords(t_CRD$CRDDataBlock *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::ilrs::CRDConfiguration value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDConfiguration::initializeClass, &value))
            {
              INT_CALL(self->object.setConfigurationRecords(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "configurationRecords", arg);
          return -1;
        }

        static PyObject *t_CRD$CRDDataBlock_get__header(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDHeader value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CRDHeader::wrap_Object(value);
        }
        static int t_CRD$CRDDataBlock_set__header(t_CRD$CRDDataBlock *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::ilrs::CRDHeader value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRDHeader::initializeClass, &value))
            {
              INT_CALL(self->object.setHeader(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "header", arg);
          return -1;
        }

        static PyObject *t_CRD$CRDDataBlock_get__meteoData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRD$Meteo value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeteoData());
          return ::org::orekit::files::ilrs::t_CRD$Meteo::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__rangeData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRangeData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__rangeSupplementData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRangeSupplementData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsData(t_CRD$CRDDataBlock *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSessionStatisticsData());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD$CRDDataBlock_get__sessionStatisticsRecord(t_CRD$CRDDataBlock *self, void *data)
        {
          ::org::orekit::files::ilrs::CRD$SessionStatistics value((jobject) NULL);
          OBJ_CALL(value = self->object.getSessionStatisticsRecord());
          return ::org::orekit::files::ilrs::t_CRD$SessionStatistics::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/EcksteinHechlerPropagator.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/PropagationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *EcksteinHechlerPropagator::class$ = NULL;
        jmethodID *EcksteinHechlerPropagator::mids$ = NULL;
        bool EcksteinHechlerPropagator::live$ = false;

        jclass EcksteinHechlerPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/EcksteinHechlerPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_432cfeb1d64c6b24] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_1c0c609dcec92c29] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_db66cf678cb4783b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_b7ad73e24acb9915] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_e3ab774e618884e3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_5de8ec83b6037cbc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_5601cb7796d59a03] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)V");
            mids$[mid_init$_fd651ce50fe0c7d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_c1ce6d7a4b6f55df] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDD)V");
            mids$[mid_init$_6c46459a430a1264] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDDD)V");
            mids$[mid_init$_a4ba5fe6da24ec6b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDD)V");
            mids$[mid_init$_3b89d9d09fc7e150] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDD)V");
            mids$[mid_init$_c7707cc64768005a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDDLorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_463046fe2562eee1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDDLorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_computeMeanOrbit_53400b6ce8f3ad99] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)Lorg/orekit/orbits/CircularOrbit;");
            mids$[mid_computeMeanOrbit_452b7389358181cb] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DI)Lorg/orekit/orbits/CircularOrbit;");
            mids$[mid_computeMeanOrbit_81d1520f0cac91b7] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;DDDDDDDDI)Lorg/orekit/orbits/CircularOrbit;");
            mids$[mid_getCk0_a53a7513ecedada2] = env->getMethodID(cls, "getCk0", "()[D");
            mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getReferenceRadius_557b8123390d8d0c] = env->getMethodID(cls, "getReferenceRadius", "()D");
            mids$[mid_propagateOrbit_04a5f52f279357aa] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/CartesianOrbit;");
            mids$[mid_resetInitialState_8655761ebf04b503] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_resetInitialState_cd59a3a5d9eb366e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_c13195962bdcee40] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_resetIntermediateState_45bf76e836befe86] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_resetIntermediateState_ac5c93ef3cbab63b] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;ZDI)V");
            mids$[mid_getMass_b0b988f941da47d8] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_createHarvester_5f0409a66c29e9c1] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_432cfeb1d64c6b24, a0.this$, a1.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_1c0c609dcec92c29, a0.this$, a1.this$, a2.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_db66cf678cb4783b, a0.this$, a1, a2.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_b7ad73e24acb9915, a0.this$, a1.this$, a2.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e3ab774e618884e3, a0.this$, a1.this$, a2, a3.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_5de8ec83b6037cbc, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_5601cb7796d59a03, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_fd651ce50fe0c7d2, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c1ce6d7a4b6f55df, a0.this$, a1, a2, a3, a4, a5, a6, a7)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_6c46459a430a1264, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a4ba5fe6da24ec6b, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_3b89d9d09fc7e150, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c7707cc64768005a, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9, a10.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_463046fe2562eee1, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9, a10.this$, a11, a12)) {}

        ::org::orekit::orbits::CircularOrbit EcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::CircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_53400b6ce8f3ad99], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::orbits::CircularOrbit EcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::CircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_452b7389358181cb], a0.this$, a1.this$, a2.this$, a3, a4));
        }

        ::org::orekit::orbits::CircularOrbit EcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::CircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_81d1520f0cac91b7], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        JArray< jdouble > EcksteinHechlerPropagator::getCk0() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCk0_a53a7513ecedada2]));
        }

        jdouble EcksteinHechlerPropagator::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
        }

        jdouble EcksteinHechlerPropagator::getReferenceRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReferenceRadius_557b8123390d8d0c]);
        }

        ::org::orekit::orbits::CartesianOrbit EcksteinHechlerPropagator::propagateOrbit(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::orbits::CartesianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_04a5f52f279357aa], a0.this$));
        }

        void EcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_8655761ebf04b503], a0.this$);
        }

        void EcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_cd59a3a5d9eb366e], a0.this$, a1.this$);
        }

        void EcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_c13195962bdcee40], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_EcksteinHechlerPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EcksteinHechlerPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EcksteinHechlerPropagator_init_(t_EcksteinHechlerPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EcksteinHechlerPropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args);
        static PyObject *t_EcksteinHechlerPropagator_getCk0(t_EcksteinHechlerPropagator *self);
        static PyObject *t_EcksteinHechlerPropagator_getMu(t_EcksteinHechlerPropagator *self);
        static PyObject *t_EcksteinHechlerPropagator_getReferenceRadius(t_EcksteinHechlerPropagator *self);
        static PyObject *t_EcksteinHechlerPropagator_propagateOrbit(t_EcksteinHechlerPropagator *self, PyObject *arg);
        static PyObject *t_EcksteinHechlerPropagator_resetInitialState(t_EcksteinHechlerPropagator *self, PyObject *args);
        static PyObject *t_EcksteinHechlerPropagator_get__ck0(t_EcksteinHechlerPropagator *self, void *data);
        static PyObject *t_EcksteinHechlerPropagator_get__mu(t_EcksteinHechlerPropagator *self, void *data);
        static PyObject *t_EcksteinHechlerPropagator_get__referenceRadius(t_EcksteinHechlerPropagator *self, void *data);
        static PyGetSetDef t_EcksteinHechlerPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_EcksteinHechlerPropagator, ck0),
          DECLARE_GET_FIELD(t_EcksteinHechlerPropagator, mu),
          DECLARE_GET_FIELD(t_EcksteinHechlerPropagator, referenceRadius),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EcksteinHechlerPropagator__methods_[] = {
          DECLARE_METHOD(t_EcksteinHechlerPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, computeMeanOrbit, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, getCk0, METH_NOARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, getMu, METH_NOARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, getReferenceRadius, METH_NOARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, propagateOrbit, METH_O),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EcksteinHechlerPropagator)[] = {
          { Py_tp_methods, t_EcksteinHechlerPropagator__methods_ },
          { Py_tp_init, (void *) t_EcksteinHechlerPropagator_init_ },
          { Py_tp_getset, t_EcksteinHechlerPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EcksteinHechlerPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(EcksteinHechlerPropagator, t_EcksteinHechlerPropagator, EcksteinHechlerPropagator);

        void t_EcksteinHechlerPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(EcksteinHechlerPropagator), &PY_TYPE_DEF(EcksteinHechlerPropagator), module, "EcksteinHechlerPropagator", 0);
        }

        void t_EcksteinHechlerPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagator), "class_", make_descriptor(EcksteinHechlerPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagator), "wrapfn_", make_descriptor(t_EcksteinHechlerPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EcksteinHechlerPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EcksteinHechlerPropagator::initializeClass, 1)))
            return NULL;
          return t_EcksteinHechlerPropagator::wrap_Object(EcksteinHechlerPropagator(((t_EcksteinHechlerPropagator *) arg)->object.this$));
        }
        static PyObject *t_EcksteinHechlerPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EcksteinHechlerPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EcksteinHechlerPropagator_init_(t_EcksteinHechlerPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::propagation::PropagationType a2((jobject) NULL);
              PyTypeObject **p2;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              ::org::orekit::propagation::PropagationType a5((jobject) NULL);
              PyTypeObject **p5;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 9:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              ::org::orekit::propagation::PropagationType a10((jobject) NULL);
              PyTypeObject **p10;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDDK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &p10, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              ::org::orekit::propagation::PropagationType a10((jobject) NULL);
              PyTypeObject **p10;
              jdouble a11;
              jint a12;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDDKDI", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &p10, ::org::orekit::propagation::t_PropagationType::parameters_, &a11, &a12))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_EcksteinHechlerPropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::EcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2));
                return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              jint a4;
              ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "kkkDI", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::EcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2, a3, a4));
                return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
              }
            }
            break;
           case 10:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jint a9;
              ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDDI", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::EcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeMeanOrbit", args);
          return NULL;
        }

        static PyObject *t_EcksteinHechlerPropagator_getCk0(t_EcksteinHechlerPropagator *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCk0());
          return result.wrap();
        }

        static PyObject *t_EcksteinHechlerPropagator_getMu(t_EcksteinHechlerPropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EcksteinHechlerPropagator_getReferenceRadius(t_EcksteinHechlerPropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReferenceRadius());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EcksteinHechlerPropagator_propagateOrbit(t_EcksteinHechlerPropagator *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::orbits::CartesianOrbit result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.propagateOrbit(a0));
            return ::org::orekit::orbits::t_CartesianOrbit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "propagateOrbit", arg);
          return NULL;
        }

        static PyObject *t_EcksteinHechlerPropagator_resetInitialState(t_EcksteinHechlerPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(self->object.resetInitialState(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              jint a3;

              if (!parseArgs(args, "kKDI", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &a3))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(EcksteinHechlerPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_EcksteinHechlerPropagator_get__ck0(t_EcksteinHechlerPropagator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCk0());
          return value.wrap();
        }

        static PyObject *t_EcksteinHechlerPropagator_get__mu(t_EcksteinHechlerPropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EcksteinHechlerPropagator_get__referenceRadius(t_EcksteinHechlerPropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReferenceRadius());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
