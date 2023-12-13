#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/UnitSphereRandomVectorGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *UnitSphereRandomVectorGenerator::class$ = NULL;
      jmethodID *UnitSphereRandomVectorGenerator::mids$ = NULL;
      bool UnitSphereRandomVectorGenerator::live$ = false;

      jclass UnitSphereRandomVectorGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/UnitSphereRandomVectorGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_bf920f5be5cd75f9] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextVector_25e1757a36c4dde2] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UnitSphereRandomVectorGenerator::UnitSphereRandomVectorGenerator(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      UnitSphereRandomVectorGenerator::UnitSphereRandomVectorGenerator(jint a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bf920f5be5cd75f9, a0, a1.this$)) {}

      JArray< jdouble > UnitSphereRandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_25e1757a36c4dde2]));
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
      static PyObject *t_UnitSphereRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnitSphereRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UnitSphereRandomVectorGenerator_init_(t_UnitSphereRandomVectorGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UnitSphereRandomVectorGenerator_nextVector(t_UnitSphereRandomVectorGenerator *self);

      static PyMethodDef t_UnitSphereRandomVectorGenerator__methods_[] = {
        DECLARE_METHOD(t_UnitSphereRandomVectorGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnitSphereRandomVectorGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnitSphereRandomVectorGenerator, nextVector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnitSphereRandomVectorGenerator)[] = {
        { Py_tp_methods, t_UnitSphereRandomVectorGenerator__methods_ },
        { Py_tp_init, (void *) t_UnitSphereRandomVectorGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnitSphereRandomVectorGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnitSphereRandomVectorGenerator, t_UnitSphereRandomVectorGenerator, UnitSphereRandomVectorGenerator);

      void t_UnitSphereRandomVectorGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(UnitSphereRandomVectorGenerator), &PY_TYPE_DEF(UnitSphereRandomVectorGenerator), module, "UnitSphereRandomVectorGenerator", 0);
      }

      void t_UnitSphereRandomVectorGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnitSphereRandomVectorGenerator), "class_", make_descriptor(UnitSphereRandomVectorGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnitSphereRandomVectorGenerator), "wrapfn_", make_descriptor(t_UnitSphereRandomVectorGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnitSphereRandomVectorGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnitSphereRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnitSphereRandomVectorGenerator::initializeClass, 1)))
          return NULL;
        return t_UnitSphereRandomVectorGenerator::wrap_Object(UnitSphereRandomVectorGenerator(((t_UnitSphereRandomVectorGenerator *) arg)->object.this$));
      }
      static PyObject *t_UnitSphereRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnitSphereRandomVectorGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UnitSphereRandomVectorGenerator_init_(t_UnitSphereRandomVectorGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            UnitSphereRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = UnitSphereRandomVectorGenerator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
            UnitSphereRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
            {
              INT_CALL(object = UnitSphereRandomVectorGenerator(a0, a1));
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

      static PyObject *t_UnitSphereRandomVectorGenerator_nextVector(t_UnitSphereRandomVectorGenerator *self)
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
#include "org/hipparchus/util/ContinuedFraction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ContinuedFraction::class$ = NULL;
      jmethodID *ContinuedFraction::mids$ = NULL;
      bool ContinuedFraction::live$ = false;

      jclass ContinuedFraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ContinuedFraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluate_04fd0666b613d2ab] = env->getMethodID(cls, "evaluate", "(D)D");
          mids$[mid_evaluate_99e3200dafc19573] = env->getMethodID(cls, "evaluate", "(DD)D");
          mids$[mid_evaluate_2eeda88661ae34d3] = env->getMethodID(cls, "evaluate", "(DI)D");
          mids$[mid_evaluate_c35488bf93c357d0] = env->getMethodID(cls, "evaluate", "(DDI)D");
          mids$[mid_getA_98e10c261c066ee7] = env->getMethodID(cls, "getA", "(ID)D");
          mids$[mid_getB_98e10c261c066ee7] = env->getMethodID(cls, "getB", "(ID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ContinuedFraction::evaluate(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_04fd0666b613d2ab], a0);
      }

      jdouble ContinuedFraction::evaluate(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_99e3200dafc19573], a0, a1);
      }

      jdouble ContinuedFraction::evaluate(jdouble a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_2eeda88661ae34d3], a0, a1);
      }

      jdouble ContinuedFraction::evaluate(jdouble a0, jdouble a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_c35488bf93c357d0], a0, a1, a2);
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
      static PyObject *t_ContinuedFraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ContinuedFraction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ContinuedFraction_evaluate(t_ContinuedFraction *self, PyObject *args);

      static PyMethodDef t_ContinuedFraction__methods_[] = {
        DECLARE_METHOD(t_ContinuedFraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ContinuedFraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ContinuedFraction, evaluate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ContinuedFraction)[] = {
        { Py_tp_methods, t_ContinuedFraction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ContinuedFraction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ContinuedFraction, t_ContinuedFraction, ContinuedFraction);

      void t_ContinuedFraction::install(PyObject *module)
      {
        installType(&PY_TYPE(ContinuedFraction), &PY_TYPE_DEF(ContinuedFraction), module, "ContinuedFraction", 0);
      }

      void t_ContinuedFraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuedFraction), "class_", make_descriptor(ContinuedFraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuedFraction), "wrapfn_", make_descriptor(t_ContinuedFraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuedFraction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ContinuedFraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ContinuedFraction::initializeClass, 1)))
          return NULL;
        return t_ContinuedFraction::wrap_Object(ContinuedFraction(((t_ContinuedFraction *) arg)->object.this$));
      }
      static PyObject *t_ContinuedFraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ContinuedFraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ContinuedFraction_evaluate(t_ContinuedFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.evaluate(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jdouble a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/ContinuousScheduler.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *ContinuousScheduler::class$ = NULL;
          jmethodID *ContinuousScheduler::mids$ = NULL;
          bool ContinuousScheduler::live$ = false;

          jclass ContinuousScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/ContinuousScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1c3d87302302feaf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;Lorg/orekit/time/DatesSelector;)V");
              mids$[mid_measurementIsFeasible_a35647bda2901f54] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ContinuousScheduler::ContinuousScheduler(const ::org::orekit::estimation::measurements::generation::MeasurementBuilder & a0, const ::org::orekit::time::DatesSelector & a1) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(env->newObject(initializeClass, &mids$, mid_init$_1c3d87302302feaf, a0.this$, a1.this$)) {}

          jboolean ContinuousScheduler::measurementIsFeasible(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_measurementIsFeasible_a35647bda2901f54], a0.this$);
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
          static PyObject *t_ContinuousScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContinuousScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContinuousScheduler_of_(t_ContinuousScheduler *self, PyObject *args);
          static int t_ContinuousScheduler_init_(t_ContinuousScheduler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ContinuousScheduler_measurementIsFeasible(t_ContinuousScheduler *self, PyObject *arg);
          static PyObject *t_ContinuousScheduler_get__parameters_(t_ContinuousScheduler *self, void *data);
          static PyGetSetDef t_ContinuousScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_ContinuousScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ContinuousScheduler__methods_[] = {
            DECLARE_METHOD(t_ContinuousScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContinuousScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContinuousScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_ContinuousScheduler, measurementIsFeasible, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ContinuousScheduler)[] = {
            { Py_tp_methods, t_ContinuousScheduler__methods_ },
            { Py_tp_init, (void *) t_ContinuousScheduler_init_ },
            { Py_tp_getset, t_ContinuousScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ContinuousScheduler)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractScheduler),
            NULL
          };

          DEFINE_TYPE(ContinuousScheduler, t_ContinuousScheduler, ContinuousScheduler);
          PyObject *t_ContinuousScheduler::wrap_Object(const ContinuousScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ContinuousScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ContinuousScheduler *self = (t_ContinuousScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ContinuousScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ContinuousScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ContinuousScheduler *self = (t_ContinuousScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ContinuousScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(ContinuousScheduler), &PY_TYPE_DEF(ContinuousScheduler), module, "ContinuousScheduler", 0);
          }

          void t_ContinuousScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuousScheduler), "class_", make_descriptor(ContinuousScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuousScheduler), "wrapfn_", make_descriptor(t_ContinuousScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContinuousScheduler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ContinuousScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ContinuousScheduler::initializeClass, 1)))
              return NULL;
            return t_ContinuousScheduler::wrap_Object(ContinuousScheduler(((t_ContinuousScheduler *) arg)->object.this$));
          }
          static PyObject *t_ContinuousScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ContinuousScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ContinuousScheduler_of_(t_ContinuousScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ContinuousScheduler_init_(t_ContinuousScheduler *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DatesSelector a1((jobject) NULL);
            ContinuousScheduler object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::generation::MeasurementBuilder::initializeClass, ::org::orekit::time::DatesSelector::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::parameters_, &a1))
            {
              INT_CALL(object = ContinuousScheduler(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ContinuousScheduler_measurementIsFeasible(t_ContinuousScheduler *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.measurementIsFeasible(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "measurementIsFeasible", arg);
            return NULL;
          }
          static PyObject *t_ContinuousScheduler_get__parameters_(t_ContinuousScheduler *self, void *data)
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
#include "org/orekit/utils/TimeStampedCache.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/stream/Stream.h"
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
          mids$[mid_getEarliest_a63f3f151ca9e302] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getLatest_a63f3f151ca9e302] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_55546ef6a647f39b] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getNeighbors_1fe1e227b3891e66] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighbors_70177eb25c19b8d4] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::TimeStamped TimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_a63f3f151ca9e302]));
      }

      ::org::orekit::time::TimeStamped TimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_a63f3f151ca9e302]));
      }

      jint TimeStampedCache::getMaxNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxNeighborsSize_55546ef6a647f39b]);
      }

      ::java::util::stream::Stream TimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_1fe1e227b3891e66], a0.this$));
      }

      ::java::util::stream::Stream TimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_70177eb25c19b8d4], a0.this$, a1));
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
#include "org/hipparchus/optim/SimplePointChecker.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimplePointChecker::class$ = NULL;
      jmethodID *SimplePointChecker::mids$ = NULL;
      bool SimplePointChecker::live$ = false;

      jclass SimplePointChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimplePointChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_init$_2aa803b9073e6a76] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_converged_093700f2f7221ef4] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/util/Pair;Lorg/hipparchus/util/Pair;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimplePointChecker::SimplePointChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

      SimplePointChecker::SimplePointChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_2aa803b9073e6a76, a0, a1, a2)) {}

      jboolean SimplePointChecker::converged(jint a0, const ::org::hipparchus::util::Pair & a1, const ::org::hipparchus::util::Pair & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_093700f2f7221ef4], a0, a1.this$, a2.this$);
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
      static PyObject *t_SimplePointChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimplePointChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimplePointChecker_of_(t_SimplePointChecker *self, PyObject *args);
      static int t_SimplePointChecker_init_(t_SimplePointChecker *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimplePointChecker_converged(t_SimplePointChecker *self, PyObject *args);
      static PyObject *t_SimplePointChecker_get__parameters_(t_SimplePointChecker *self, void *data);
      static PyGetSetDef t_SimplePointChecker__fields_[] = {
        DECLARE_GET_FIELD(t_SimplePointChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimplePointChecker__methods_[] = {
        DECLARE_METHOD(t_SimplePointChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimplePointChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimplePointChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimplePointChecker, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimplePointChecker)[] = {
        { Py_tp_methods, t_SimplePointChecker__methods_ },
        { Py_tp_init, (void *) t_SimplePointChecker_init_ },
        { Py_tp_getset, t_SimplePointChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimplePointChecker)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
        NULL
      };

      DEFINE_TYPE(SimplePointChecker, t_SimplePointChecker, SimplePointChecker);
      PyObject *t_SimplePointChecker::wrap_Object(const SimplePointChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimplePointChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimplePointChecker *self = (t_SimplePointChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimplePointChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimplePointChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimplePointChecker *self = (t_SimplePointChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimplePointChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(SimplePointChecker), &PY_TYPE_DEF(SimplePointChecker), module, "SimplePointChecker", 0);
      }

      void t_SimplePointChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimplePointChecker), "class_", make_descriptor(SimplePointChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimplePointChecker), "wrapfn_", make_descriptor(t_SimplePointChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimplePointChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimplePointChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimplePointChecker::initializeClass, 1)))
          return NULL;
        return t_SimplePointChecker::wrap_Object(SimplePointChecker(((t_SimplePointChecker *) arg)->object.this$));
      }
      static PyObject *t_SimplePointChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimplePointChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimplePointChecker_of_(t_SimplePointChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SimplePointChecker_init_(t_SimplePointChecker *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            SimplePointChecker object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = SimplePointChecker(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            SimplePointChecker object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = SimplePointChecker(a0, a1, a2));
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

      static PyObject *t_SimplePointChecker_converged(t_SimplePointChecker *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::util::Pair a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::util::Pair a2((jobject) NULL);
        PyTypeObject **p2;
        jboolean result;

        if (!parseArgs(args, "IKK", ::org::hipparchus::util::Pair::initializeClass, ::org::hipparchus::util::Pair::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_Pair::parameters_, &a2, &p2, ::org::hipparchus::util::t_Pair::parameters_))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SimplePointChecker), (PyObject *) self, "converged", args, 2);
      }
      static PyObject *t_SimplePointChecker_get__parameters_(t_SimplePointChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldEventSlopeFilter.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldEventSlopeFilter::class$ = NULL;
        jmethodID *FieldEventSlopeFilter::mids$ = NULL;
        bool FieldEventSlopeFilter::live$ = false;

        jclass FieldEventSlopeFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldEventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_230ecae14305e5ab] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/events/FieldODEEventDetector;Lorg/hipparchus/ode/events/FilterType;)V");
            mids$[mid_g_751903dc38e0b7e8] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_12e77528668ead99] = env->getMethodID(cls, "getDetector", "()Lorg/hipparchus/ode/events/FieldODEEventDetector;");
            mids$[mid_init_55fdeef582303a99] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_create_c305cfb32393293f] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/FieldAdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;Lorg/hipparchus/ode/events/FieldODEEventHandler;)Lorg/hipparchus/ode/events/FieldEventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventSlopeFilter::FieldEventSlopeFilter(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::events::FieldODEEventDetector & a1, const ::org::hipparchus::ode::events::FilterType & a2) : ::org::hipparchus::ode::events::AbstractFieldODEDetector(env->newObject(initializeClass, &mids$, mid_init$_230ecae14305e5ab, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEventSlopeFilter::g(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_751903dc38e0b7e8], a0.this$));
        }

        ::org::hipparchus::ode::events::FieldODEEventDetector FieldEventSlopeFilter::getDetector() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_12e77528668ead99]));
        }

        void FieldEventSlopeFilter::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_55fdeef582303a99], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventSlopeFilter_of_(t_FieldEventSlopeFilter *self, PyObject *args);
        static int t_FieldEventSlopeFilter_init_(t_FieldEventSlopeFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventSlopeFilter_g(t_FieldEventSlopeFilter *self, PyObject *args);
        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self);
        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args);
        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data);
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data);
        static PyGetSetDef t_FieldEventSlopeFilter__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventSlopeFilter, detector),
          DECLARE_GET_FIELD(t_FieldEventSlopeFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventSlopeFilter__methods_[] = {
          DECLARE_METHOD(t_FieldEventSlopeFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventSlopeFilter)[] = {
          { Py_tp_methods, t_FieldEventSlopeFilter__methods_ },
          { Py_tp_init, (void *) t_FieldEventSlopeFilter_init_ },
          { Py_tp_getset, t_FieldEventSlopeFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventSlopeFilter)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::events::AbstractFieldODEDetector),
          NULL
        };

        DEFINE_TYPE(FieldEventSlopeFilter, t_FieldEventSlopeFilter, FieldEventSlopeFilter);
        PyObject *t_FieldEventSlopeFilter::wrap_Object(const FieldEventSlopeFilter& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventSlopeFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventSlopeFilter *self = (t_FieldEventSlopeFilter *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldEventSlopeFilter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventSlopeFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventSlopeFilter *self = (t_FieldEventSlopeFilter *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldEventSlopeFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventSlopeFilter), &PY_TYPE_DEF(FieldEventSlopeFilter), module, "FieldEventSlopeFilter", 0);
        }

        void t_FieldEventSlopeFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "class_", make_descriptor(FieldEventSlopeFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "wrapfn_", make_descriptor(t_FieldEventSlopeFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventSlopeFilter::initializeClass, 1)))
            return NULL;
          return t_FieldEventSlopeFilter::wrap_Object(FieldEventSlopeFilter(((t_FieldEventSlopeFilter *) arg)->object.this$));
        }
        static PyObject *t_FieldEventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventSlopeFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventSlopeFilter_of_(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventSlopeFilter_init_(t_FieldEventSlopeFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldODEEventDetector a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::events::FilterType a2((jobject) NULL);
          PyTypeObject **p2;
          FieldEventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, ::org::hipparchus::ode::events::FilterType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_, &a2, &p2, ::org::hipparchus::ode::events::t_FilterType::parameters_))
          {
            INT_CALL(object = FieldEventSlopeFilter(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventSlopeFilter_g(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(result);
        }

        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AbsolutePVCoordinatesHermiteInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AbsolutePVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *AbsolutePVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool AbsolutePVCoordinatesHermiteInterpolator::live$ = false;

      jclass AbsolutePVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AbsolutePVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_237ae1c2ddd68062] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_92e0516c51076c2f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_5295144d3ac34660] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_7f6d7ca3076fa7fe] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_63bfdcc4b7a0536c] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_getOutputFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_350bdb8501ef57d7] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/utils/AbsolutePVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_237ae1c2ddd68062, a0.this$)) {}

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_92e0516c51076c2f, a0, a1.this$)) {}

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_5295144d3ac34660, a0, a1.this$, a2.this$)) {}

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_7f6d7ca3076fa7fe, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter AbsolutePVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_63bfdcc4b7a0536c]));
      }

      ::org::orekit::frames::Frame AbsolutePVCoordinatesHermiteInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_2c51111cc6894ba1]));
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
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_of_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_AbsolutePVCoordinatesHermiteInterpolator_init_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getFilter(t_AbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__filter(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_AbsolutePVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbsolutePVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_AbsolutePVCoordinatesHermiteInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_AbsolutePVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbsolutePVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, getOutputFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbsolutePVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_AbsolutePVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbsolutePVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_AbsolutePVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbsolutePVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbsolutePVCoordinatesHermiteInterpolator, t_AbsolutePVCoordinatesHermiteInterpolator, AbsolutePVCoordinatesHermiteInterpolator);
      PyObject *t_AbsolutePVCoordinatesHermiteInterpolator::wrap_Object(const AbsolutePVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbsolutePVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbsolutePVCoordinatesHermiteInterpolator *self = (t_AbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbsolutePVCoordinatesHermiteInterpolator *self = (t_AbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbsolutePVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(AbsolutePVCoordinatesHermiteInterpolator), module, "AbsolutePVCoordinatesHermiteInterpolator", 0);
      }

      void t_AbsolutePVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), "class_", make_descriptor(AbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_AbsolutePVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbsolutePVCoordinatesHermiteInterpolator::wrap_Object(AbsolutePVCoordinatesHermiteInterpolator(((t_AbsolutePVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbsolutePVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_of_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbsolutePVCoordinatesHermiteInterpolator_init_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
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

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getFilter(t_AbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__filter(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalMeasurementHandler.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalMeasurementHandler::class$ = NULL;
        jmethodID *SemiAnalyticalMeasurementHandler::mids$ = NULL;
        bool SemiAnalyticalMeasurementHandler::live$ = false;

        jclass SemiAnalyticalMeasurementHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalMeasurementHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_576e684ce95b43e9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/sequential/SemiAnalyticalProcess;Lorg/hipparchus/filtering/kalman/KalmanFilter;Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_init$_d3a3df9f88279d79] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/sequential/SemiAnalyticalProcess;Lorg/hipparchus/filtering/kalman/KalmanFilter;Ljava/util/List;Lorg/orekit/time/AbsoluteDate;Z)V");
            mids$[mid_handleStep_13c351c10f00bcd7] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalMeasurementHandler::SemiAnalyticalMeasurementHandler(const ::org::orekit::estimation::sequential::SemiAnalyticalProcess & a0, const ::org::hipparchus::filtering::kalman::KalmanFilter & a1, const ::java::util::List & a2, const ::org::orekit::time::AbsoluteDate & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_576e684ce95b43e9, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        SemiAnalyticalMeasurementHandler::SemiAnalyticalMeasurementHandler(const ::org::orekit::estimation::sequential::SemiAnalyticalProcess & a0, const ::org::hipparchus::filtering::kalman::KalmanFilter & a1, const ::java::util::List & a2, const ::org::orekit::time::AbsoluteDate & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d3a3df9f88279d79, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

        void SemiAnalyticalMeasurementHandler::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_13c351c10f00bcd7], a0.this$);
        }

        void SemiAnalyticalMeasurementHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
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
        static PyObject *t_SemiAnalyticalMeasurementHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalMeasurementHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SemiAnalyticalMeasurementHandler_init_(t_SemiAnalyticalMeasurementHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SemiAnalyticalMeasurementHandler_handleStep(t_SemiAnalyticalMeasurementHandler *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalMeasurementHandler_init(t_SemiAnalyticalMeasurementHandler *self, PyObject *args);

        static PyMethodDef t_SemiAnalyticalMeasurementHandler__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalMeasurementHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalMeasurementHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalMeasurementHandler, handleStep, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalMeasurementHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalMeasurementHandler)[] = {
          { Py_tp_methods, t_SemiAnalyticalMeasurementHandler__methods_ },
          { Py_tp_init, (void *) t_SemiAnalyticalMeasurementHandler_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalMeasurementHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalMeasurementHandler, t_SemiAnalyticalMeasurementHandler, SemiAnalyticalMeasurementHandler);

        void t_SemiAnalyticalMeasurementHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalMeasurementHandler), &PY_TYPE_DEF(SemiAnalyticalMeasurementHandler), module, "SemiAnalyticalMeasurementHandler", 0);
        }

        void t_SemiAnalyticalMeasurementHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalMeasurementHandler), "class_", make_descriptor(SemiAnalyticalMeasurementHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalMeasurementHandler), "wrapfn_", make_descriptor(t_SemiAnalyticalMeasurementHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalMeasurementHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalMeasurementHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalMeasurementHandler::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalMeasurementHandler::wrap_Object(SemiAnalyticalMeasurementHandler(((t_SemiAnalyticalMeasurementHandler *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalMeasurementHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalMeasurementHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SemiAnalyticalMeasurementHandler_init_(t_SemiAnalyticalMeasurementHandler *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::estimation::sequential::SemiAnalyticalProcess a0((jobject) NULL);
              ::org::hipparchus::filtering::kalman::KalmanFilter a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              SemiAnalyticalMeasurementHandler object((jobject) NULL);

              if (!parseArgs(args, "kKKk", ::org::orekit::estimation::sequential::SemiAnalyticalProcess::initializeClass, ::org::hipparchus::filtering::kalman::KalmanFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::t_KalmanFilter::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3))
              {
                INT_CALL(object = SemiAnalyticalMeasurementHandler(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::estimation::sequential::SemiAnalyticalProcess a0((jobject) NULL);
              ::org::hipparchus::filtering::kalman::KalmanFilter a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              jboolean a4;
              SemiAnalyticalMeasurementHandler object((jobject) NULL);

              if (!parseArgs(args, "kKKkZ", ::org::orekit::estimation::sequential::SemiAnalyticalProcess::initializeClass, ::org::hipparchus::filtering::kalman::KalmanFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::t_KalmanFilter::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4))
              {
                INT_CALL(object = SemiAnalyticalMeasurementHandler(a0, a1, a2, a3, a4));
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

        static PyObject *t_SemiAnalyticalMeasurementHandler_handleStep(t_SemiAnalyticalMeasurementHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalMeasurementHandler_init(t_SemiAnalyticalMeasurementHandler *self, PyObject *args)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionMessage.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCorrectionMessage::class$ = NULL;
              jmethodID *RtcmCorrectionMessage::mids$ = NULL;
              bool RtcmCorrectionMessage::live$ = false;

              jclass RtcmCorrectionMessage::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionMessage");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_90dd1894a609a178] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");
                  mids$[mid_getDataMap_810bed48fafb0b9a] = env->getMethodID(cls, "getDataMap", "()Ljava/util/Map;");
                  mids$[mid_getHeader_aac3742e5aad8835] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;");
                  mids$[mid_getSatelliteSystem_21bd759cc4a81606] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCorrectionMessage::RtcmCorrectionMessage(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::rtcm::RtcmMessage(env->newObject(initializeClass, &mids$, mid_init$_90dd1894a609a178, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map RtcmCorrectionMessage::getDataMap() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getDataMap_810bed48fafb0b9a]));
              }

              ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader RtcmCorrectionMessage::getHeader() const
              {
                return ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader(env->callObjectMethod(this$, mids$[mid_getHeader_aac3742e5aad8835]));
              }

              ::org::orekit::gnss::SatelliteSystem RtcmCorrectionMessage::getSatelliteSystem() const
              {
                return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_21bd759cc4a81606]));
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
              static PyObject *t_RtcmCorrectionMessage_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionMessage_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionMessage_of_(t_RtcmCorrectionMessage *self, PyObject *args);
              static int t_RtcmCorrectionMessage_init_(t_RtcmCorrectionMessage *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCorrectionMessage_getDataMap(t_RtcmCorrectionMessage *self);
              static PyObject *t_RtcmCorrectionMessage_getHeader(t_RtcmCorrectionMessage *self);
              static PyObject *t_RtcmCorrectionMessage_getSatelliteSystem(t_RtcmCorrectionMessage *self);
              static PyObject *t_RtcmCorrectionMessage_get__dataMap(t_RtcmCorrectionMessage *self, void *data);
              static PyObject *t_RtcmCorrectionMessage_get__header(t_RtcmCorrectionMessage *self, void *data);
              static PyObject *t_RtcmCorrectionMessage_get__satelliteSystem(t_RtcmCorrectionMessage *self, void *data);
              static PyObject *t_RtcmCorrectionMessage_get__parameters_(t_RtcmCorrectionMessage *self, void *data);
              static PyGetSetDef t_RtcmCorrectionMessage__fields_[] = {
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, dataMap),
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, header),
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, satelliteSystem),
                DECLARE_GET_FIELD(t_RtcmCorrectionMessage, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCorrectionMessage__methods_[] = {
                DECLARE_METHOD(t_RtcmCorrectionMessage, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, of_, METH_VARARGS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, getDataMap, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, getHeader, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionMessage, getSatelliteSystem, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCorrectionMessage)[] = {
                { Py_tp_methods, t_RtcmCorrectionMessage__methods_ },
                { Py_tp_init, (void *) t_RtcmCorrectionMessage_init_ },
                { Py_tp_getset, t_RtcmCorrectionMessage__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCorrectionMessage)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmMessage),
                NULL
              };

              DEFINE_TYPE(RtcmCorrectionMessage, t_RtcmCorrectionMessage, RtcmCorrectionMessage);
              PyObject *t_RtcmCorrectionMessage::wrap_Object(const RtcmCorrectionMessage& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_RtcmCorrectionMessage::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmCorrectionMessage *self = (t_RtcmCorrectionMessage *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_RtcmCorrectionMessage::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_RtcmCorrectionMessage::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmCorrectionMessage *self = (t_RtcmCorrectionMessage *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_RtcmCorrectionMessage::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCorrectionMessage), &PY_TYPE_DEF(RtcmCorrectionMessage), module, "RtcmCorrectionMessage", 0);
              }

              void t_RtcmCorrectionMessage::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionMessage), "class_", make_descriptor(RtcmCorrectionMessage::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionMessage), "wrapfn_", make_descriptor(t_RtcmCorrectionMessage::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionMessage), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCorrectionMessage_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCorrectionMessage::initializeClass, 1)))
                  return NULL;
                return t_RtcmCorrectionMessage::wrap_Object(RtcmCorrectionMessage(((t_RtcmCorrectionMessage *) arg)->object.this$));
              }
              static PyObject *t_RtcmCorrectionMessage_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCorrectionMessage::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_RtcmCorrectionMessage_of_(t_RtcmCorrectionMessage *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_RtcmCorrectionMessage_init_(t_RtcmCorrectionMessage *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                RtcmCorrectionMessage object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = RtcmCorrectionMessage(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_RtcmCorrectionMessage_getDataMap(t_RtcmCorrectionMessage *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getDataMap());
                return ::java::util::t_Map::wrap_Object(result);
              }

              static PyObject *t_RtcmCorrectionMessage_getHeader(t_RtcmCorrectionMessage *self)
              {
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader result((jobject) NULL);
                OBJ_CALL(result = self->object.getHeader());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::gnss::metric::messages::rtcm::correction::t_RtcmCorrectionHeader::wrap_Object(result);
              }

              static PyObject *t_RtcmCorrectionMessage_getSatelliteSystem(t_RtcmCorrectionMessage *self)
              {
                ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatelliteSystem());
                return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
              }
              static PyObject *t_RtcmCorrectionMessage_get__parameters_(t_RtcmCorrectionMessage *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_RtcmCorrectionMessage_get__dataMap(t_RtcmCorrectionMessage *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getDataMap());
                return ::java::util::t_Map::wrap_Object(value);
              }

              static PyObject *t_RtcmCorrectionMessage_get__header(t_RtcmCorrectionMessage *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::gnss::metric::messages::rtcm::correction::t_RtcmCorrectionHeader::wrap_Object(value);
              }

              static PyObject *t_RtcmCorrectionMessage_get__satelliteSystem(t_RtcmCorrectionMessage *self, void *data)
              {
                ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatelliteSystem());
                return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
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
#include "org/orekit/bodies/CelestialBodyFactory.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBodyFactory::class$ = NULL;
      jmethodID *CelestialBodyFactory::mids$ = NULL;
      bool CelestialBodyFactory::live$ = false;
      ::java::lang::String *CelestialBodyFactory::EARTH = NULL;
      ::java::lang::String *CelestialBodyFactory::EARTH_MOON = NULL;
      ::java::lang::String *CelestialBodyFactory::JUPITER = NULL;
      ::java::lang::String *CelestialBodyFactory::MARS = NULL;
      ::java::lang::String *CelestialBodyFactory::MERCURY = NULL;
      ::java::lang::String *CelestialBodyFactory::MOON = NULL;
      ::java::lang::String *CelestialBodyFactory::NEPTUNE = NULL;
      ::java::lang::String *CelestialBodyFactory::PLUTO = NULL;
      ::java::lang::String *CelestialBodyFactory::SATURN = NULL;
      ::java::lang::String *CelestialBodyFactory::SOLAR_SYSTEM_BARYCENTER = NULL;
      ::java::lang::String *CelestialBodyFactory::SUN = NULL;
      ::java::lang::String *CelestialBodyFactory::URANUS = NULL;
      ::java::lang::String *CelestialBodyFactory::VENUS = NULL;

      jclass CelestialBodyFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBodyFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addCelestialBodyLoader_3ecf386d8e3fd776] = env->getStaticMethodID(cls, "addCelestialBodyLoader", "(Ljava/lang/String;Lorg/orekit/bodies/CelestialBodyLoader;)V");
          mids$[mid_addDefaultCelestialBodyLoader_734b91ac30d5f9b4] = env->getStaticMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;)V");
          mids$[mid_addDefaultCelestialBodyLoader_a627ad9c5959309d] = env->getStaticMethodID(cls, "addDefaultCelestialBodyLoader", "(Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyCache_a1fa5dae97ea5ed2] = env->getStaticMethodID(cls, "clearCelestialBodyCache", "()V");
          mids$[mid_clearCelestialBodyCache_734b91ac30d5f9b4] = env->getStaticMethodID(cls, "clearCelestialBodyCache", "(Ljava/lang/String;)V");
          mids$[mid_clearCelestialBodyLoaders_a1fa5dae97ea5ed2] = env->getStaticMethodID(cls, "clearCelestialBodyLoaders", "()V");
          mids$[mid_clearCelestialBodyLoaders_734b91ac30d5f9b4] = env->getStaticMethodID(cls, "clearCelestialBodyLoaders", "(Ljava/lang/String;)V");
          mids$[mid_getBody_7eb4325e211386e9] = env->getStaticMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getCelestialBodies_6bb03bd1907ccb0e] = env->getStaticMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/LazyLoadedCelestialBodies;");
          mids$[mid_getEarth_5df52e80cbb5eb85] = env->getStaticMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_5df52e80cbb5eb85] = env->getStaticMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_5df52e80cbb5eb85] = env->getStaticMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_5df52e80cbb5eb85] = env->getStaticMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_5df52e80cbb5eb85] = env->getStaticMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_5df52e80cbb5eb85] = env->getStaticMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_5df52e80cbb5eb85] = env->getStaticMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_5df52e80cbb5eb85] = env->getStaticMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_5df52e80cbb5eb85] = env->getStaticMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_5df52e80cbb5eb85] = env->getStaticMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_5df52e80cbb5eb85] = env->getStaticMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_5df52e80cbb5eb85] = env->getStaticMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_5df52e80cbb5eb85] = env->getStaticMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EARTH = new ::java::lang::String(env->getStaticObjectField(cls, "EARTH", "Ljava/lang/String;"));
          EARTH_MOON = new ::java::lang::String(env->getStaticObjectField(cls, "EARTH_MOON", "Ljava/lang/String;"));
          JUPITER = new ::java::lang::String(env->getStaticObjectField(cls, "JUPITER", "Ljava/lang/String;"));
          MARS = new ::java::lang::String(env->getStaticObjectField(cls, "MARS", "Ljava/lang/String;"));
          MERCURY = new ::java::lang::String(env->getStaticObjectField(cls, "MERCURY", "Ljava/lang/String;"));
          MOON = new ::java::lang::String(env->getStaticObjectField(cls, "MOON", "Ljava/lang/String;"));
          NEPTUNE = new ::java::lang::String(env->getStaticObjectField(cls, "NEPTUNE", "Ljava/lang/String;"));
          PLUTO = new ::java::lang::String(env->getStaticObjectField(cls, "PLUTO", "Ljava/lang/String;"));
          SATURN = new ::java::lang::String(env->getStaticObjectField(cls, "SATURN", "Ljava/lang/String;"));
          SOLAR_SYSTEM_BARYCENTER = new ::java::lang::String(env->getStaticObjectField(cls, "SOLAR_SYSTEM_BARYCENTER", "Ljava/lang/String;"));
          SUN = new ::java::lang::String(env->getStaticObjectField(cls, "SUN", "Ljava/lang/String;"));
          URANUS = new ::java::lang::String(env->getStaticObjectField(cls, "URANUS", "Ljava/lang/String;"));
          VENUS = new ::java::lang::String(env->getStaticObjectField(cls, "VENUS", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void CelestialBodyFactory::addCelestialBodyLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::CelestialBodyLoader & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addCelestialBodyLoader_3ecf386d8e3fd776], a0.this$, a1.this$);
      }

      void CelestialBodyFactory::addDefaultCelestialBodyLoader(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultCelestialBodyLoader_734b91ac30d5f9b4], a0.this$);
      }

      void CelestialBodyFactory::addDefaultCelestialBodyLoader(const ::java::lang::String & a0, const ::java::lang::String & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultCelestialBodyLoader_a627ad9c5959309d], a0.this$, a1.this$);
      }

      void CelestialBodyFactory::clearCelestialBodyCache()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyCache_a1fa5dae97ea5ed2]);
      }

      void CelestialBodyFactory::clearCelestialBodyCache(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyCache_734b91ac30d5f9b4], a0.this$);
      }

      void CelestialBodyFactory::clearCelestialBodyLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyLoaders_a1fa5dae97ea5ed2]);
      }

      void CelestialBodyFactory::clearCelestialBodyLoaders(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearCelestialBodyLoaders_734b91ac30d5f9b4], a0.this$);
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getBody(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getBody_7eb4325e211386e9], a0.this$));
      }

      ::org::orekit::bodies::LazyLoadedCelestialBodies CelestialBodyFactory::getCelestialBodies()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::LazyLoadedCelestialBodies(env->callStaticObjectMethod(cls, mids$[mid_getCelestialBodies_6bb03bd1907ccb0e]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getEarth()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getEarth_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getEarthMoonBarycenter()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getEarthMoonBarycenter_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getJupiter()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getJupiter_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getMars()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getMars_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getMercury()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getMercury_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getMoon()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getMoon_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getNeptune()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getNeptune_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getPluto()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getPluto_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getSaturn()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getSaturn_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getSolarSystemBarycenter()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getSolarSystemBarycenter_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getSun()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getSun_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getUranus()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getUranus_5df52e80cbb5eb85]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyFactory::getVenus()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CelestialBody(env->callStaticObjectMethod(cls, mids$[mid_getVenus_5df52e80cbb5eb85]));
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
      static PyObject *t_CelestialBodyFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyFactory_addCelestialBodyLoader(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_addDefaultCelestialBodyLoader(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_clearCelestialBodyCache(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_clearCelestialBodyLoaders(PyTypeObject *type, PyObject *args);
      static PyObject *t_CelestialBodyFactory_getBody(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyFactory_getCelestialBodies(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getEarth(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getEarthMoonBarycenter(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getJupiter(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getMars(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getMercury(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getMoon(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getNeptune(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getPluto(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getSaturn(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getSolarSystemBarycenter(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getSun(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getUranus(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_getVenus(PyTypeObject *type);
      static PyObject *t_CelestialBodyFactory_get__celestialBodies(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__earth(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__earthMoonBarycenter(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__jupiter(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__mars(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__mercury(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__moon(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__neptune(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__pluto(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__saturn(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__solarSystemBarycenter(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__sun(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__uranus(t_CelestialBodyFactory *self, void *data);
      static PyObject *t_CelestialBodyFactory_get__venus(t_CelestialBodyFactory *self, void *data);
      static PyGetSetDef t_CelestialBodyFactory__fields_[] = {
        DECLARE_GET_FIELD(t_CelestialBodyFactory, celestialBodies),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, earth),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, earthMoonBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, jupiter),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, mars),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, mercury),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, moon),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, neptune),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, pluto),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, saturn),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, solarSystemBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, sun),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, uranus),
        DECLARE_GET_FIELD(t_CelestialBodyFactory, venus),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CelestialBodyFactory__methods_[] = {
        DECLARE_METHOD(t_CelestialBodyFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, addCelestialBodyLoader, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, addDefaultCelestialBodyLoader, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, clearCelestialBodyCache, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, clearCelestialBodyLoaders, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getBody, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getCelestialBodies, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getEarth, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getEarthMoonBarycenter, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getJupiter, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getMars, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getMercury, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getMoon, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getNeptune, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getPluto, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getSaturn, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getSolarSystemBarycenter, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getSun, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getUranus, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyFactory, getVenus, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodyFactory)[] = {
        { Py_tp_methods, t_CelestialBodyFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CelestialBodyFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodyFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodyFactory, t_CelestialBodyFactory, CelestialBodyFactory);

      void t_CelestialBodyFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodyFactory), &PY_TYPE_DEF(CelestialBodyFactory), module, "CelestialBodyFactory", 0);
      }

      void t_CelestialBodyFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "class_", make_descriptor(CelestialBodyFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "wrapfn_", make_descriptor(t_CelestialBodyFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "boxfn_", make_descriptor(boxObject));
        env->getClass(CelestialBodyFactory::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "EARTH", make_descriptor(j2p(*CelestialBodyFactory::EARTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "EARTH_MOON", make_descriptor(j2p(*CelestialBodyFactory::EARTH_MOON)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "JUPITER", make_descriptor(j2p(*CelestialBodyFactory::JUPITER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "MARS", make_descriptor(j2p(*CelestialBodyFactory::MARS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "MERCURY", make_descriptor(j2p(*CelestialBodyFactory::MERCURY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "MOON", make_descriptor(j2p(*CelestialBodyFactory::MOON)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "NEPTUNE", make_descriptor(j2p(*CelestialBodyFactory::NEPTUNE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "PLUTO", make_descriptor(j2p(*CelestialBodyFactory::PLUTO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "SATURN", make_descriptor(j2p(*CelestialBodyFactory::SATURN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "SOLAR_SYSTEM_BARYCENTER", make_descriptor(j2p(*CelestialBodyFactory::SOLAR_SYSTEM_BARYCENTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "SUN", make_descriptor(j2p(*CelestialBodyFactory::SUN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "URANUS", make_descriptor(j2p(*CelestialBodyFactory::URANUS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFactory), "VENUS", make_descriptor(j2p(*CelestialBodyFactory::VENUS)));
      }

      static PyObject *t_CelestialBodyFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodyFactory::initializeClass, 1)))
          return NULL;
        return t_CelestialBodyFactory::wrap_Object(CelestialBodyFactory(((t_CelestialBodyFactory *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodyFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodyFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBodyFactory_addCelestialBodyLoader(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBodyLoader a1((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::bodies::CelestialBodyLoader::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::addCelestialBodyLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_addDefaultCelestialBodyLoader(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::addDefaultCelestialBodyLoader(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::addDefaultCelestialBodyLoader(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "addDefaultCelestialBodyLoader", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_clearCelestialBodyCache(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyCache());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyCache(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "clearCelestialBodyCache", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_clearCelestialBodyLoaders(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyLoaders());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(::org::orekit::bodies::CelestialBodyFactory::clearCelestialBodyLoaders(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "clearCelestialBodyLoaders", args);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_getBody(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getBody", arg);
        return NULL;
      }

      static PyObject *t_CelestialBodyFactory_getCelestialBodies(PyTypeObject *type)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getEarth(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getEarthMoonBarycenter(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getJupiter(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getMars(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getMercury(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getMoon(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getNeptune(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getPluto(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getSaturn(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getSolarSystemBarycenter(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getSun(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getUranus(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_getVenus(PyTypeObject *type)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CelestialBodyFactory::getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodyFactory_get__celestialBodies(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__earth(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__earthMoonBarycenter(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__jupiter(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__mars(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__mercury(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__moon(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__neptune(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__pluto(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__saturn(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__solarSystemBarycenter(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__sun(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__uranus(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodyFactory_get__venus(t_CelestialBodyFactory *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeDeterminationSensorKey::class$ = NULL;
              jmethodID *AttitudeDeterminationSensorKey::mids$ = NULL;
              bool AttitudeDeterminationSensorKey::live$ = false;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::NUMBER_SENSOR_NOISE_COVARIANCE = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_FREQUENCY = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_NOISE_STDDEV = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_NUMBER = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_USED = NULL;

              jclass AttitudeDeterminationSensorKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_cc5e36437a5221c7] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor;)Z");
                  mids$[mid_valueOf_e43f0d52c48ffda1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;");
                  mids$[mid_values_24949786a6c33ca8] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  NUMBER_SENSOR_NOISE_COVARIANCE = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "NUMBER_SENSOR_NOISE_COVARIANCE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_FREQUENCY = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_FREQUENCY", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_NOISE_STDDEV = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_NOISE_STDDEV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_NUMBER = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_NUMBER", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_USED = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_USED", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeDeterminationSensorKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_cc5e36437a5221c7], a0.this$, a1.this$, a2.this$);
              }

              AttitudeDeterminationSensorKey AttitudeDeterminationSensorKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeDeterminationSensorKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e43f0d52c48ffda1], a0.this$));
              }

              JArray< AttitudeDeterminationSensorKey > AttitudeDeterminationSensorKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeDeterminationSensorKey >(env->callStaticObjectMethod(cls, mids$[mid_values_24949786a6c33ca8]));
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
              static PyObject *t_AttitudeDeterminationSensorKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensorKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensorKey_of_(t_AttitudeDeterminationSensorKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationSensorKey_process(t_AttitudeDeterminationSensorKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationSensorKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeDeterminationSensorKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeDeterminationSensorKey_get__parameters_(t_AttitudeDeterminationSensorKey *self, void *data);
              static PyGetSetDef t_AttitudeDeterminationSensorKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeDeterminationSensorKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeDeterminationSensorKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeDeterminationSensorKey)[] = {
                { Py_tp_methods, t_AttitudeDeterminationSensorKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeDeterminationSensorKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeDeterminationSensorKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeDeterminationSensorKey, t_AttitudeDeterminationSensorKey, AttitudeDeterminationSensorKey);
              PyObject *t_AttitudeDeterminationSensorKey::wrap_Object(const AttitudeDeterminationSensorKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationSensorKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationSensorKey *self = (t_AttitudeDeterminationSensorKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeDeterminationSensorKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationSensorKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationSensorKey *self = (t_AttitudeDeterminationSensorKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeDeterminationSensorKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeDeterminationSensorKey), &PY_TYPE_DEF(AttitudeDeterminationSensorKey), module, "AttitudeDeterminationSensorKey", 0);
              }

              void t_AttitudeDeterminationSensorKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "class_", make_descriptor(AttitudeDeterminationSensorKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "wrapfn_", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeDeterminationSensorKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "NUMBER_SENSOR_NOISE_COVARIANCE", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::NUMBER_SENSOR_NOISE_COVARIANCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_FREQUENCY", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_FREQUENCY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_NOISE_STDDEV", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_NOISE_STDDEV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_NUMBER", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_NUMBER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_USED", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_USED)));
              }

              static PyObject *t_AttitudeDeterminationSensorKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeDeterminationSensorKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeDeterminationSensorKey::wrap_Object(AttitudeDeterminationSensorKey(((t_AttitudeDeterminationSensorKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeDeterminationSensorKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeDeterminationSensorKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeDeterminationSensorKey_of_(t_AttitudeDeterminationSensorKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeDeterminationSensorKey_process(t_AttitudeDeterminationSensorKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensorKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeDeterminationSensorKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensorKey::valueOf(a0));
                  return t_AttitudeDeterminationSensorKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeDeterminationSensorKey_values(PyTypeObject *type)
              {
                JArray< AttitudeDeterminationSensorKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensorKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeDeterminationSensorKey::wrap_jobject);
              }
              static PyObject *t_AttitudeDeterminationSensorKey_get__parameters_(t_AttitudeDeterminationSensorKey *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IntConsumer::class$ = NULL;
            jmethodID *ParseToken$IntConsumer::mids$ = NULL;
            bool ParseToken$IntConsumer::live$ = false;

            jclass ParseToken$IntConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_44ed599e93e8a30c] = env->getMethodID(cls, "accept", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IntConsumer::accept(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_44ed599e93e8a30c], a0);
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
            static PyObject *t_ParseToken$IntConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IntConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IntConsumer_accept(t_ParseToken$IntConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$IntConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IntConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IntConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IntConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IntConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IntConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IntConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IntConsumer, t_ParseToken$IntConsumer, ParseToken$IntConsumer);

            void t_ParseToken$IntConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IntConsumer), &PY_TYPE_DEF(ParseToken$IntConsumer), module, "ParseToken$IntConsumer", 0);
            }

            void t_ParseToken$IntConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntConsumer), "class_", make_descriptor(ParseToken$IntConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntConsumer), "wrapfn_", make_descriptor(t_ParseToken$IntConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IntConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IntConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IntConsumer::wrap_Object(ParseToken$IntConsumer(((t_ParseToken$IntConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IntConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IntConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IntConsumer_accept(t_ParseToken$IntConsumer *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
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
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *GLONASSNumericalPropagatorBuilder::class$ = NULL;
        jmethodID *GLONASSNumericalPropagatorBuilder::mids$ = NULL;
        bool GLONASSNumericalPropagatorBuilder::live$ = false;

        jclass GLONASSNumericalPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5a157716d99d2dba] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator;Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;Z)V");
            mids$[mid_init$_f806e2b3093232f1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator;Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;ZLorg/orekit/data/DataContext;)V");
            mids$[mid_attitudeProvider_7169e102dfc73eee] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder;");
            mids$[mid_build_07f50350551620b7] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
            mids$[mid_eci_15065cfa26ddd9c8] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder;");
            mids$[mid_mass_d0621a951657be02] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GLONASSNumericalPropagatorBuilder::GLONASSNumericalPropagatorBuilder(const ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator & a0, const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5a157716d99d2dba, a0.this$, a1.this$, a2)) {}

        GLONASSNumericalPropagatorBuilder::GLONASSNumericalPropagatorBuilder(const ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator & a0, const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a1, jboolean a2, const ::org::orekit::data::DataContext & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f806e2b3093232f1, a0.this$, a1.this$, a2, a3.this$)) {}

        GLONASSNumericalPropagatorBuilder GLONASSNumericalPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return GLONASSNumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_7169e102dfc73eee], a0.this$));
        }

        ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNumericalPropagatorBuilder::build() const
        {
          return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_build_07f50350551620b7]));
        }

        GLONASSNumericalPropagatorBuilder GLONASSNumericalPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
        {
          return GLONASSNumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_15065cfa26ddd9c8], a0.this$));
        }

        GLONASSNumericalPropagatorBuilder GLONASSNumericalPropagatorBuilder::mass(jdouble a0) const
        {
          return GLONASSNumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_d0621a951657be02], a0));
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
        static PyObject *t_GLONASSNumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GLONASSNumericalPropagatorBuilder_init_(t_GLONASSNumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_attitudeProvider(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_build(t_GLONASSNumericalPropagatorBuilder *self);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_eci(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagatorBuilder_mass(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg);

        static PyMethodDef t_GLONASSNumericalPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, attitudeProvider, METH_O),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, eci, METH_O),
          DECLARE_METHOD(t_GLONASSNumericalPropagatorBuilder, mass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GLONASSNumericalPropagatorBuilder)[] = {
          { Py_tp_methods, t_GLONASSNumericalPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_GLONASSNumericalPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GLONASSNumericalPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GLONASSNumericalPropagatorBuilder, t_GLONASSNumericalPropagatorBuilder, GLONASSNumericalPropagatorBuilder);

        void t_GLONASSNumericalPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GLONASSNumericalPropagatorBuilder), &PY_TYPE_DEF(GLONASSNumericalPropagatorBuilder), module, "GLONASSNumericalPropagatorBuilder", 0);
        }

        void t_GLONASSNumericalPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagatorBuilder), "class_", make_descriptor(GLONASSNumericalPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagatorBuilder), "wrapfn_", make_descriptor(t_GLONASSNumericalPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GLONASSNumericalPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_GLONASSNumericalPropagatorBuilder::wrap_Object(GLONASSNumericalPropagatorBuilder(((t_GLONASSNumericalPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_GLONASSNumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GLONASSNumericalPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GLONASSNumericalPropagatorBuilder_init_(t_GLONASSNumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator a0((jobject) NULL);
              ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a1((jobject) NULL);
              jboolean a2;
              GLONASSNumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkZ", ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator::initializeClass, ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = GLONASSNumericalPropagatorBuilder(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator a0((jobject) NULL);
              ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              GLONASSNumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkZk", ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator::initializeClass, ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = GLONASSNumericalPropagatorBuilder(a0, a1, a2, a3));
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

        static PyObject *t_GLONASSNumericalPropagatorBuilder_attitudeProvider(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
          GLONASSNumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.attitudeProvider(a0));
            return t_GLONASSNumericalPropagatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return NULL;
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_build(t_GLONASSNumericalPropagatorBuilder *self)
        {
          ::org::orekit::propagation::numerical::GLONASSNumericalPropagator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::propagation::numerical::t_GLONASSNumericalPropagator::wrap_Object(result);
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_eci(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          GLONASSNumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.eci(a0));
            return t_GLONASSNumericalPropagatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eci", arg);
          return NULL;
        }

        static PyObject *t_GLONASSNumericalPropagatorBuilder_mass(t_GLONASSNumericalPropagatorBuilder *self, PyObject *arg)
        {
          jdouble a0;
          GLONASSNumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.mass(a0));
            return t_GLONASSNumericalPropagatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "mass", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "java/lang/String.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *GaussNewtonOptimizer::class$ = NULL;
            jmethodID *GaussNewtonOptimizer::mids$ = NULL;
            bool GaussNewtonOptimizer::live$ = false;

            jclass GaussNewtonOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_6a24b5864415ec4c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Z)V");
                mids$[mid_getDecomposer_777cbca2854e04bd] = env->getMethodID(cls, "getDecomposer", "()Lorg/hipparchus/linear/MatrixDecomposer;");
                mids$[mid_isFormNormalEquations_9ab94ac1dc23b105] = env->getMethodID(cls, "isFormNormalEquations", "()Z");
                mids$[mid_optimize_b4aa3e5bf3a16dc8] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
                mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_withDecomposer_125b5fdb4c804b74] = env->getMethodID(cls, "withDecomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer;");
                mids$[mid_withFormNormalEquations_0a5b3f6fe3c0e19a] = env->getMethodID(cls, "withFormNormalEquations", "(Z)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GaussNewtonOptimizer::GaussNewtonOptimizer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            GaussNewtonOptimizer::GaussNewtonOptimizer(const ::org::hipparchus::linear::MatrixDecomposer & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a24b5864415ec4c, a0.this$, a1)) {}

            ::org::hipparchus::linear::MatrixDecomposer GaussNewtonOptimizer::getDecomposer() const
            {
              return ::org::hipparchus::linear::MatrixDecomposer(env->callObjectMethod(this$, mids$[mid_getDecomposer_777cbca2854e04bd]));
            }

            jboolean GaussNewtonOptimizer::isFormNormalEquations() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isFormNormalEquations_9ab94ac1dc23b105]);
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum GaussNewtonOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_b4aa3e5bf3a16dc8], a0.this$));
            }

            ::java::lang::String GaussNewtonOptimizer::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
            }

            GaussNewtonOptimizer GaussNewtonOptimizer::withDecomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
            {
              return GaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withDecomposer_125b5fdb4c804b74], a0.this$));
            }

            GaussNewtonOptimizer GaussNewtonOptimizer::withFormNormalEquations(jboolean a0) const
            {
              return GaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withFormNormalEquations_0a5b3f6fe3c0e19a], a0));
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
            static PyObject *t_GaussNewtonOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GaussNewtonOptimizer_init_(t_GaussNewtonOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GaussNewtonOptimizer_getDecomposer(t_GaussNewtonOptimizer *self);
            static PyObject *t_GaussNewtonOptimizer_isFormNormalEquations(t_GaussNewtonOptimizer *self);
            static PyObject *t_GaussNewtonOptimizer_optimize(t_GaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_toString(t_GaussNewtonOptimizer *self, PyObject *args);
            static PyObject *t_GaussNewtonOptimizer_withDecomposer(t_GaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_withFormNormalEquations(t_GaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_GaussNewtonOptimizer_get__decomposer(t_GaussNewtonOptimizer *self, void *data);
            static PyObject *t_GaussNewtonOptimizer_get__formNormalEquations(t_GaussNewtonOptimizer *self, void *data);
            static PyGetSetDef t_GaussNewtonOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_GaussNewtonOptimizer, decomposer),
              DECLARE_GET_FIELD(t_GaussNewtonOptimizer, formNormalEquations),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GaussNewtonOptimizer__methods_[] = {
              DECLARE_METHOD(t_GaussNewtonOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, getDecomposer, METH_NOARGS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, isFormNormalEquations, METH_NOARGS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, optimize, METH_O),
              DECLARE_METHOD(t_GaussNewtonOptimizer, toString, METH_VARARGS),
              DECLARE_METHOD(t_GaussNewtonOptimizer, withDecomposer, METH_O),
              DECLARE_METHOD(t_GaussNewtonOptimizer, withFormNormalEquations, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GaussNewtonOptimizer)[] = {
              { Py_tp_methods, t_GaussNewtonOptimizer__methods_ },
              { Py_tp_init, (void *) t_GaussNewtonOptimizer_init_ },
              { Py_tp_getset, t_GaussNewtonOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GaussNewtonOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GaussNewtonOptimizer, t_GaussNewtonOptimizer, GaussNewtonOptimizer);

            void t_GaussNewtonOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(GaussNewtonOptimizer), &PY_TYPE_DEF(GaussNewtonOptimizer), module, "GaussNewtonOptimizer", 0);
            }

            void t_GaussNewtonOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GaussNewtonOptimizer), "class_", make_descriptor(GaussNewtonOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GaussNewtonOptimizer), "wrapfn_", make_descriptor(t_GaussNewtonOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GaussNewtonOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GaussNewtonOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GaussNewtonOptimizer::initializeClass, 1)))
                return NULL;
              return t_GaussNewtonOptimizer::wrap_Object(GaussNewtonOptimizer(((t_GaussNewtonOptimizer *) arg)->object.this$));
            }
            static PyObject *t_GaussNewtonOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GaussNewtonOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GaussNewtonOptimizer_init_(t_GaussNewtonOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  GaussNewtonOptimizer object((jobject) NULL);

                  INT_CALL(object = GaussNewtonOptimizer());
                  self->object = object;
                  break;
                }
               case 2:
                {
                  ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
                  jboolean a1;
                  GaussNewtonOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "kZ", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0, &a1))
                  {
                    INT_CALL(object = GaussNewtonOptimizer(a0, a1));
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

            static PyObject *t_GaussNewtonOptimizer_getDecomposer(t_GaussNewtonOptimizer *self)
            {
              ::org::hipparchus::linear::MatrixDecomposer result((jobject) NULL);
              OBJ_CALL(result = self->object.getDecomposer());
              return ::org::hipparchus::linear::t_MatrixDecomposer::wrap_Object(result);
            }

            static PyObject *t_GaussNewtonOptimizer_isFormNormalEquations(t_GaussNewtonOptimizer *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFormNormalEquations());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_GaussNewtonOptimizer_optimize(t_GaussNewtonOptimizer *self, PyObject *arg)
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

            static PyObject *t_GaussNewtonOptimizer_toString(t_GaussNewtonOptimizer *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(GaussNewtonOptimizer), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_GaussNewtonOptimizer_withDecomposer(t_GaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
              GaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withDecomposer(a0));
                return t_GaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withDecomposer", arg);
              return NULL;
            }

            static PyObject *t_GaussNewtonOptimizer_withFormNormalEquations(t_GaussNewtonOptimizer *self, PyObject *arg)
            {
              jboolean a0;
              GaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(result = self->object.withFormNormalEquations(a0));
                return t_GaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withFormNormalEquations", arg);
              return NULL;
            }

            static PyObject *t_GaussNewtonOptimizer_get__decomposer(t_GaussNewtonOptimizer *self, void *data)
            {
              ::org::hipparchus::linear::MatrixDecomposer value((jobject) NULL);
              OBJ_CALL(value = self->object.getDecomposer());
              return ::org::hipparchus::linear::t_MatrixDecomposer::wrap_Object(value);
            }

            static PyObject *t_GaussNewtonOptimizer_get__formNormalEquations(t_GaussNewtonOptimizer *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isFormNormalEquations());
              Py_RETURN_BOOL(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldDenseOutputModel.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/FieldDenseOutputModel.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldDenseOutputModel::class$ = NULL;
      jmethodID *FieldDenseOutputModel::mids$ = NULL;
      bool FieldDenseOutputModel::live$ = false;

      jclass FieldDenseOutputModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldDenseOutputModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_append_94b833ec8c7c437c] = env->getMethodID(cls, "append", "(Lorg/hipparchus/ode/FieldDenseOutputModel;)V");
          mids$[mid_finish_5b8144cf9ccecc03] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
          mids$[mid_getFinalTime_81520b552cb3fa26] = env->getMethodID(cls, "getFinalTime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getInitialTime_81520b552cb3fa26] = env->getMethodID(cls, "getInitialTime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getInterpolatedState_285853fa8f6e2f48] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_handleStep_bd804f650c074774] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
          mids$[mid_init_55fdeef582303a99] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldDenseOutputModel::FieldDenseOutputModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void FieldDenseOutputModel::append(const FieldDenseOutputModel & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_append_94b833ec8c7c437c], a0.this$);
      }

      void FieldDenseOutputModel::finish(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_finish_5b8144cf9ccecc03], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldDenseOutputModel::getFinalTime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFinalTime_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDenseOutputModel::getInitialTime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getInitialTime_81520b552cb3fa26]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldDenseOutputModel::getInterpolatedState(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_285853fa8f6e2f48], a0.this$));
      }

      void FieldDenseOutputModel::handleStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_handleStep_bd804f650c074774], a0.this$);
      }

      void FieldDenseOutputModel::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_55fdeef582303a99], a0.this$, a1.this$);
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
      static PyObject *t_FieldDenseOutputModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_of_(t_FieldDenseOutputModel *self, PyObject *args);
      static int t_FieldDenseOutputModel_init_(t_FieldDenseOutputModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldDenseOutputModel_append(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_finish(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_getFinalTime(t_FieldDenseOutputModel *self);
      static PyObject *t_FieldDenseOutputModel_getInitialTime(t_FieldDenseOutputModel *self);
      static PyObject *t_FieldDenseOutputModel_getInterpolatedState(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_handleStep(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_init(t_FieldDenseOutputModel *self, PyObject *args);
      static PyObject *t_FieldDenseOutputModel_get__finalTime(t_FieldDenseOutputModel *self, void *data);
      static PyObject *t_FieldDenseOutputModel_get__initialTime(t_FieldDenseOutputModel *self, void *data);
      static PyObject *t_FieldDenseOutputModel_get__parameters_(t_FieldDenseOutputModel *self, void *data);
      static PyGetSetDef t_FieldDenseOutputModel__fields_[] = {
        DECLARE_GET_FIELD(t_FieldDenseOutputModel, finalTime),
        DECLARE_GET_FIELD(t_FieldDenseOutputModel, initialTime),
        DECLARE_GET_FIELD(t_FieldDenseOutputModel, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldDenseOutputModel__methods_[] = {
        DECLARE_METHOD(t_FieldDenseOutputModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDenseOutputModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDenseOutputModel, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldDenseOutputModel, append, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, finish, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, getFinalTime, METH_NOARGS),
        DECLARE_METHOD(t_FieldDenseOutputModel, getInitialTime, METH_NOARGS),
        DECLARE_METHOD(t_FieldDenseOutputModel, getInterpolatedState, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, handleStep, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldDenseOutputModel)[] = {
        { Py_tp_methods, t_FieldDenseOutputModel__methods_ },
        { Py_tp_init, (void *) t_FieldDenseOutputModel_init_ },
        { Py_tp_getset, t_FieldDenseOutputModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldDenseOutputModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldDenseOutputModel, t_FieldDenseOutputModel, FieldDenseOutputModel);
      PyObject *t_FieldDenseOutputModel::wrap_Object(const FieldDenseOutputModel& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDenseOutputModel::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDenseOutputModel *self = (t_FieldDenseOutputModel *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldDenseOutputModel::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDenseOutputModel::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDenseOutputModel *self = (t_FieldDenseOutputModel *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldDenseOutputModel::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldDenseOutputModel), &PY_TYPE_DEF(FieldDenseOutputModel), module, "FieldDenseOutputModel", 0);
      }

      void t_FieldDenseOutputModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDenseOutputModel), "class_", make_descriptor(FieldDenseOutputModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDenseOutputModel), "wrapfn_", make_descriptor(t_FieldDenseOutputModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDenseOutputModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldDenseOutputModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldDenseOutputModel::initializeClass, 1)))
          return NULL;
        return t_FieldDenseOutputModel::wrap_Object(FieldDenseOutputModel(((t_FieldDenseOutputModel *) arg)->object.this$));
      }
      static PyObject *t_FieldDenseOutputModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldDenseOutputModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldDenseOutputModel_of_(t_FieldDenseOutputModel *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldDenseOutputModel_init_(t_FieldDenseOutputModel *self, PyObject *args, PyObject *kwds)
      {
        FieldDenseOutputModel object((jobject) NULL);

        INT_CALL(object = FieldDenseOutputModel());
        self->object = object;

        return 0;
      }

      static PyObject *t_FieldDenseOutputModel_append(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        FieldDenseOutputModel a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", FieldDenseOutputModel::initializeClass, &a0, &p0, t_FieldDenseOutputModel::parameters_))
        {
          OBJ_CALL(self->object.append(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "append", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_finish(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
        {
          OBJ_CALL(self->object.finish(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "finish", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_getFinalTime(t_FieldDenseOutputModel *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getFinalTime());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDenseOutputModel_getInitialTime(t_FieldDenseOutputModel *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialTime());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDenseOutputModel_getInterpolatedState(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.getInterpolatedState(a0));
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_handleStep(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
        {
          OBJ_CALL(self->object.handleStep(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_init(t_FieldDenseOutputModel *self, PyObject *args)
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
      static PyObject *t_FieldDenseOutputModel_get__parameters_(t_FieldDenseOutputModel *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldDenseOutputModel_get__finalTime(t_FieldDenseOutputModel *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getFinalTime());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDenseOutputModel_get__initialTime(t_FieldDenseOutputModel *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialTime());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/EllipsoidId.h"
#include "org/orekit/rugged/api/EllipsoidId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *EllipsoidId::class$ = NULL;
        jmethodID *EllipsoidId::mids$ = NULL;
        bool EllipsoidId::live$ = false;
        EllipsoidId *EllipsoidId::GRS80 = NULL;
        EllipsoidId *EllipsoidId::IERS2003 = NULL;
        EllipsoidId *EllipsoidId::IERS96 = NULL;
        EllipsoidId *EllipsoidId::WGS84 = NULL;

        jclass EllipsoidId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/EllipsoidId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_c5aee1fe2d2805ec] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/EllipsoidId;");
            mids$[mid_values_61c42d93d894b6f1] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/EllipsoidId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GRS80 = new EllipsoidId(env->getStaticObjectField(cls, "GRS80", "Lorg/orekit/rugged/api/EllipsoidId;"));
            IERS2003 = new EllipsoidId(env->getStaticObjectField(cls, "IERS2003", "Lorg/orekit/rugged/api/EllipsoidId;"));
            IERS96 = new EllipsoidId(env->getStaticObjectField(cls, "IERS96", "Lorg/orekit/rugged/api/EllipsoidId;"));
            WGS84 = new EllipsoidId(env->getStaticObjectField(cls, "WGS84", "Lorg/orekit/rugged/api/EllipsoidId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EllipsoidId EllipsoidId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return EllipsoidId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c5aee1fe2d2805ec], a0.this$));
        }

        JArray< EllipsoidId > EllipsoidId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< EllipsoidId >(env->callStaticObjectMethod(cls, mids$[mid_values_61c42d93d894b6f1]));
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
        static PyObject *t_EllipsoidId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EllipsoidId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EllipsoidId_of_(t_EllipsoidId *self, PyObject *args);
        static PyObject *t_EllipsoidId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_EllipsoidId_values(PyTypeObject *type);
        static PyObject *t_EllipsoidId_get__parameters_(t_EllipsoidId *self, void *data);
        static PyGetSetDef t_EllipsoidId__fields_[] = {
          DECLARE_GET_FIELD(t_EllipsoidId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EllipsoidId__methods_[] = {
          DECLARE_METHOD(t_EllipsoidId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipsoidId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipsoidId, of_, METH_VARARGS),
          DECLARE_METHOD(t_EllipsoidId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EllipsoidId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EllipsoidId)[] = {
          { Py_tp_methods, t_EllipsoidId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EllipsoidId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EllipsoidId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(EllipsoidId, t_EllipsoidId, EllipsoidId);
        PyObject *t_EllipsoidId::wrap_Object(const EllipsoidId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EllipsoidId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EllipsoidId *self = (t_EllipsoidId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EllipsoidId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EllipsoidId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EllipsoidId *self = (t_EllipsoidId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EllipsoidId::install(PyObject *module)
        {
          installType(&PY_TYPE(EllipsoidId), &PY_TYPE_DEF(EllipsoidId), module, "EllipsoidId", 0);
        }

        void t_EllipsoidId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "class_", make_descriptor(EllipsoidId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "wrapfn_", make_descriptor(t_EllipsoidId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "boxfn_", make_descriptor(boxObject));
          env->getClass(EllipsoidId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "GRS80", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::GRS80)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "IERS2003", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::IERS2003)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "IERS96", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::IERS96)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "WGS84", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::WGS84)));
        }

        static PyObject *t_EllipsoidId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EllipsoidId::initializeClass, 1)))
            return NULL;
          return t_EllipsoidId::wrap_Object(EllipsoidId(((t_EllipsoidId *) arg)->object.this$));
        }
        static PyObject *t_EllipsoidId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EllipsoidId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EllipsoidId_of_(t_EllipsoidId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EllipsoidId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          EllipsoidId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::EllipsoidId::valueOf(a0));
            return t_EllipsoidId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_EllipsoidId_values(PyTypeObject *type)
        {
          JArray< EllipsoidId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::EllipsoidId::values());
          return JArray<jobject>(result.this$).wrap(t_EllipsoidId::wrap_jobject);
        }
        static PyObject *t_EllipsoidId_get__parameters_(t_EllipsoidId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/UpdatingMultipleLinearRegression.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *UpdatingMultipleLinearRegression::class$ = NULL;
        jmethodID *UpdatingMultipleLinearRegression::mids$ = NULL;
        bool UpdatingMultipleLinearRegression::live$ = false;

        jclass UpdatingMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/UpdatingMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addObservation_334f245ec9cee46b] = env->getMethodID(cls, "addObservation", "([DD)V");
            mids$[mid_addObservations_8a9d29a6bd2c9070] = env->getMethodID(cls, "addObservations", "([[D[D)V");
            mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_hasIntercept_9ab94ac1dc23b105] = env->getMethodID(cls, "hasIntercept", "()Z");
            mids$[mid_regress_d38bcfe2c0d5b843] = env->getMethodID(cls, "regress", "()Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_6d4269f398dcfc41] = env->getMethodID(cls, "regress", "([I)Lorg/hipparchus/stat/regression/RegressionResults;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void UpdatingMultipleLinearRegression::addObservation(const JArray< jdouble > & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservation_334f245ec9cee46b], a0.this$, a1);
        }

        void UpdatingMultipleLinearRegression::addObservations(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservations_8a9d29a6bd2c9070], a0.this$, a1.this$);
        }

        void UpdatingMultipleLinearRegression::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
        }

        jlong UpdatingMultipleLinearRegression::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
        }

        jboolean UpdatingMultipleLinearRegression::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_9ab94ac1dc23b105]);
        }

        ::org::hipparchus::stat::regression::RegressionResults UpdatingMultipleLinearRegression::regress() const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_d38bcfe2c0d5b843]));
        }

        ::org::hipparchus::stat::regression::RegressionResults UpdatingMultipleLinearRegression::regress(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_6d4269f398dcfc41], a0.this$));
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
        static PyObject *t_UpdatingMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatingMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatingMultipleLinearRegression_addObservation(t_UpdatingMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_UpdatingMultipleLinearRegression_addObservations(t_UpdatingMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_UpdatingMultipleLinearRegression_clear(t_UpdatingMultipleLinearRegression *self);
        static PyObject *t_UpdatingMultipleLinearRegression_getN(t_UpdatingMultipleLinearRegression *self);
        static PyObject *t_UpdatingMultipleLinearRegression_hasIntercept(t_UpdatingMultipleLinearRegression *self);
        static PyObject *t_UpdatingMultipleLinearRegression_regress(t_UpdatingMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_UpdatingMultipleLinearRegression_get__n(t_UpdatingMultipleLinearRegression *self, void *data);
        static PyGetSetDef t_UpdatingMultipleLinearRegression__fields_[] = {
          DECLARE_GET_FIELD(t_UpdatingMultipleLinearRegression, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UpdatingMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, addObservation, METH_VARARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, addObservations, METH_VARARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, clear, METH_NOARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, getN, METH_NOARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, hasIntercept, METH_NOARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, regress, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UpdatingMultipleLinearRegression)[] = {
          { Py_tp_methods, t_UpdatingMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UpdatingMultipleLinearRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UpdatingMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UpdatingMultipleLinearRegression, t_UpdatingMultipleLinearRegression, UpdatingMultipleLinearRegression);

        void t_UpdatingMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(UpdatingMultipleLinearRegression), &PY_TYPE_DEF(UpdatingMultipleLinearRegression), module, "UpdatingMultipleLinearRegression", 0);
        }

        void t_UpdatingMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatingMultipleLinearRegression), "class_", make_descriptor(UpdatingMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatingMultipleLinearRegression), "wrapfn_", make_descriptor(t_UpdatingMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatingMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UpdatingMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UpdatingMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_UpdatingMultipleLinearRegression::wrap_Object(UpdatingMultipleLinearRegression(((t_UpdatingMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_UpdatingMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UpdatingMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_addObservation(t_UpdatingMultipleLinearRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservation", args);
          return NULL;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_addObservations(t_UpdatingMultipleLinearRegression *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservations(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservations", args);
          return NULL;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_clear(t_UpdatingMultipleLinearRegression *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_getN(t_UpdatingMultipleLinearRegression *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_UpdatingMultipleLinearRegression_hasIntercept(t_UpdatingMultipleLinearRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_UpdatingMultipleLinearRegression_regress(t_UpdatingMultipleLinearRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);
              OBJ_CALL(result = self->object.regress());
              return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
            }
            break;
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.regress(a0));
                return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "regress", args);
          return NULL;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_get__n(t_UpdatingMultipleLinearRegression *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *AbstractConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *AbstractConstantThrustPropulsionModel::mids$ = NULL;
          bool AbstractConstantThrustPropulsionModel::live$ = false;

          jclass AbstractConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c0d617667838be49] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
              mids$[mid_init$_5c295347eb1c7d1a] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_getControl3DVectorCostType_2eba60c257188b83] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getDirection_8b724f8b4fdad1a2] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getDirection_082e6346b274f880] = env->getMethodID(cls, "getDirection", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getFlowRate_b74f83833fdad017] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_b060e4326765ccf1] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_ba5ea64a789ad864] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_a17ea857ce74d258] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_fd347811007a6ba3] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getFlowRate_8e86371c61460f23] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getFlowRate_f867476668f8eb00] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getIsp_b74f83833fdad017] = env->getMethodID(cls, "getIsp", "()D");
              mids$[mid_getIsp_fd347811007a6ba3] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getThrustMagnitude_b74f83833fdad017] = env->getMethodID(cls, "getThrustMagnitude", "()D");
              mids$[mid_getThrustMagnitude_fd347811007a6ba3] = env->getMethodID(cls, "getThrustMagnitude", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getThrustVector_8b724f8b4fdad1a2] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_5dc321c3ba065f30] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_b7e5bd35daed8b40] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_9019a5b32b11453a] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_082e6346b274f880] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_0ce449c67b5ffd9c] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_20bded0292328743] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getInitialThrustVector_8b724f8b4fdad1a2] = env->getMethodID(cls, "getInitialThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getInitialFlowRate_b74f83833fdad017] = env->getMethodID(cls, "getInitialFlowRate", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractConstantThrustPropulsionModel::AbstractConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c0d617667838be49, a0, a1, a2.this$, a3.this$)) {}

          AbstractConstantThrustPropulsionModel::AbstractConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a3, const ::java::lang::String & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5c295347eb1c7d1a, a0, a1, a2.this$, a3.this$, a4.this$)) {}

          ::org::orekit::forces::maneuvers::Control3DVectorCostType AbstractConstantThrustPropulsionModel::getControl3DVectorCostType() const
          {
            return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_2eba60c257188b83]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_8b724f8b4fdad1a2]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getDirection(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_082e6346b274f880], a0.this$));
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_b74f83833fdad017]);
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_b060e4326765ccf1], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement AbstractConstantThrustPropulsionModel::getFlowRate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_ba5ea64a789ad864], a0.this$));
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_a17ea857ce74d258], a0.this$);
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_fd347811007a6ba3], a0.this$);
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_8e86371c61460f23], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_f867476668f8eb00], a0.this$, a1.this$));
          }

          jdouble AbstractConstantThrustPropulsionModel::getIsp() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIsp_b74f83833fdad017]);
          }

          jdouble AbstractConstantThrustPropulsionModel::getIsp(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIsp_fd347811007a6ba3], a0.this$);
          }

          ::java::lang::String AbstractConstantThrustPropulsionModel::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
          }

          jdouble AbstractConstantThrustPropulsionModel::getThrustMagnitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_b74f83833fdad017]);
          }

          jdouble AbstractConstantThrustPropulsionModel::getThrustMagnitude(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_fd347811007a6ba3], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_8b724f8b4fdad1a2]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const JArray< jdouble > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_5dc321c3ba065f30], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D AbstractConstantThrustPropulsionModel::getThrustVector(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_b7e5bd35daed8b40], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_9019a5b32b11453a], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_082e6346b274f880], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_0ce449c67b5ffd9c], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_20bded0292328743], a0.this$, a1.this$));
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
          static PyObject *t_AbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractConstantThrustPropulsionModel_init_(t_AbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getControl3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getDirection(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getFlowRate(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getIsp(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getName(t_AbstractConstantThrustPropulsionModel *self);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustVector(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__control3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__direction(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__flowRate(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__isp(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__name(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustVector(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_AbstractConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, control3DVectorCostType),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, direction),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, flowRate),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, isp),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, name),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, thrustMagnitude),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, thrustVector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getControl3DVectorCostType, METH_NOARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getDirection, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getIsp, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getName, METH_NOARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getThrustMagnitude, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_AbstractConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_AbstractConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_AbstractConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractConstantThrustPropulsionModel, t_AbstractConstantThrustPropulsionModel, AbstractConstantThrustPropulsionModel);

          void t_AbstractConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractConstantThrustPropulsionModel), &PY_TYPE_DEF(AbstractConstantThrustPropulsionModel), module, "AbstractConstantThrustPropulsionModel", 0);
          }

          void t_AbstractConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstantThrustPropulsionModel), "class_", make_descriptor(AbstractConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_AbstractConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_AbstractConstantThrustPropulsionModel::wrap_Object(AbstractConstantThrustPropulsionModel(((t_AbstractConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_AbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractConstantThrustPropulsionModel_init_(t_AbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                AbstractConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDks", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = AbstractConstantThrustPropulsionModel(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::org::orekit::forces::maneuvers::Control3DVectorCostType a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                AbstractConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDkKs", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a4))
                {
                  INT_CALL(object = AbstractConstantThrustPropulsionModel(a0, a1, a2, a3, a4));
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

          static PyObject *t_AbstractConstantThrustPropulsionModel_getControl3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
            OBJ_CALL(result = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getDirection(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDirection());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getDirection(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDirection", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getFlowRate(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFlowRate());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
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

          static PyObject *t_AbstractConstantThrustPropulsionModel_getIsp(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getIsp());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getIsp(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getIsp", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getName(t_AbstractConstantThrustPropulsionModel *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustMagnitude());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustMagnitude(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustMagnitude", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustVector(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrustVector());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
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

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__control3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            OBJ_CALL(value = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__direction(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__flowRate(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlowRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__isp(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getIsp());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__name(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getThrustMagnitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustVector(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getThrustVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Opm.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmData.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
                  mids$[mid_init$_9639e27fba1a1f36] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;D)V");
                  mids$[mid_generateCartesianOrbit_0e89356511a1622a] = env->getMethodID(cls, "generateCartesianOrbit", "()Lorg/orekit/orbits/CartesianOrbit;");
                  mids$[mid_generateKeplerianOrbit_f50f1bbccaeb207e] = env->getMethodID(cls, "generateKeplerianOrbit", "()Lorg/orekit/orbits/KeplerianOrbit;");
                  mids$[mid_generateSpacecraftState_9d155cc8314c99cf] = env->getMethodID(cls, "generateSpacecraftState", "()Lorg/orekit/propagation/SpacecraftState;");
                  mids$[mid_getData_6abd8fe67a2faefe] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/odm/opm/OpmData;");
                  mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManeuver_b5f4acb06008530a] = env->getMethodID(cls, "getManeuver", "(I)Lorg/orekit/files/ccsds/ndm/odm/opm/Maneuver;");
                  mids$[mid_getManeuvers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getMetadata_c7fe65359339297c] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/OdmCommonMetadata;");
                  mids$[mid_getNbManeuvers_55546ef6a647f39b] = env->getMethodID(cls, "getNbManeuvers", "()I");
                  mids$[mid_getPVCoordinates_136cc8ba23b21c29] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
                  mids$[mid_hasManeuvers_9ab94ac1dc23b105] = env->getMethodID(cls, "hasManeuvers", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Opm::Opm(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3, jdouble a4) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_9639e27fba1a1f36, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::orbits::CartesianOrbit Opm::generateCartesianOrbit() const
              {
                return ::org::orekit::orbits::CartesianOrbit(env->callObjectMethod(this$, mids$[mid_generateCartesianOrbit_0e89356511a1622a]));
              }

              ::org::orekit::orbits::KeplerianOrbit Opm::generateKeplerianOrbit() const
              {
                return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_generateKeplerianOrbit_f50f1bbccaeb207e]));
              }

              ::org::orekit::propagation::SpacecraftState Opm::generateSpacecraftState() const
              {
                return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_generateSpacecraftState_9d155cc8314c99cf]));
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::OpmData Opm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::OpmData(env->callObjectMethod(this$, mids$[mid_getData_6abd8fe67a2faefe]));
              }

              ::org::orekit::time::AbsoluteDate Opm::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver Opm::getManeuver(jint a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver(env->callObjectMethod(this$, mids$[mid_getManeuver_b5f4acb06008530a], a0));
              }

              ::java::util::List Opm::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_e62d3bb06d56d7e3]));
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata Opm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_c7fe65359339297c]));
              }

              jint Opm::getNbManeuvers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbManeuvers_55546ef6a647f39b]);
              }

              ::org::orekit::utils::TimeStampedPVCoordinates Opm::getPVCoordinates() const
              {
                return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_136cc8ba23b21c29]));
              }

              jboolean Opm::hasManeuvers() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasManeuvers_9ab94ac1dc23b105]);
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
#include "org/orekit/gnss/metric/ntrip/StreamMonitor.h"
#include "java/lang/Runnable.h"
#include "org/orekit/gnss/metric/ntrip/NtripClient.h"
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *StreamMonitor::class$ = NULL;
          jmethodID *StreamMonitor::mids$ = NULL;
          bool StreamMonitor::live$ = false;

          jclass StreamMonitor::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/StreamMonitor");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2112f85aabdccc46] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/metric/ntrip/NtripClient;Ljava/lang/String;Lorg/orekit/gnss/metric/ntrip/Type;ZZDDI)V");
              mids$[mid_addObserver_73b46a1f96d253c0] = env->getMethodID(cls, "addObserver", "(ILorg/orekit/gnss/metric/ntrip/MessageObserver;)V");
              mids$[mid_getException_22e7e02500f6b5b8] = env->getMethodID(cls, "getException", "()Lorg/orekit/errors/OrekitException;");
              mids$[mid_run_a1fa5dae97ea5ed2] = env->getMethodID(cls, "run", "()V");
              mids$[mid_stopMonitoring_a1fa5dae97ea5ed2] = env->getMethodID(cls, "stopMonitoring", "()V");
              mids$[mid_fetchByte_55546ef6a647f39b] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StreamMonitor::StreamMonitor(const ::org::orekit::gnss::metric::ntrip::NtripClient & a0, const ::java::lang::String & a1, const ::org::orekit::gnss::metric::ntrip::Type & a2, jboolean a3, jboolean a4, jdouble a5, jdouble a6, jint a7) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_2112f85aabdccc46, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7)) {}

          void StreamMonitor::addObserver(jint a0, const ::org::orekit::gnss::metric::ntrip::MessageObserver & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addObserver_73b46a1f96d253c0], a0, a1.this$);
          }

          ::org::orekit::errors::OrekitException StreamMonitor::getException() const
          {
            return ::org::orekit::errors::OrekitException(env->callObjectMethod(this$, mids$[mid_getException_22e7e02500f6b5b8]));
          }

          void StreamMonitor::run() const
          {
            env->callVoidMethod(this$, mids$[mid_run_a1fa5dae97ea5ed2]);
          }

          void StreamMonitor::stopMonitoring() const
          {
            env->callVoidMethod(this$, mids$[mid_stopMonitoring_a1fa5dae97ea5ed2]);
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
          static PyObject *t_StreamMonitor_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StreamMonitor_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StreamMonitor_init_(t_StreamMonitor *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StreamMonitor_addObserver(t_StreamMonitor *self, PyObject *args);
          static PyObject *t_StreamMonitor_getException(t_StreamMonitor *self);
          static PyObject *t_StreamMonitor_run(t_StreamMonitor *self);
          static PyObject *t_StreamMonitor_stopMonitoring(t_StreamMonitor *self);
          static PyObject *t_StreamMonitor_get__exception(t_StreamMonitor *self, void *data);
          static PyGetSetDef t_StreamMonitor__fields_[] = {
            DECLARE_GET_FIELD(t_StreamMonitor, exception),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_StreamMonitor__methods_[] = {
            DECLARE_METHOD(t_StreamMonitor, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StreamMonitor, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StreamMonitor, addObserver, METH_VARARGS),
            DECLARE_METHOD(t_StreamMonitor, getException, METH_NOARGS),
            DECLARE_METHOD(t_StreamMonitor, run, METH_NOARGS),
            DECLARE_METHOD(t_StreamMonitor, stopMonitoring, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StreamMonitor)[] = {
            { Py_tp_methods, t_StreamMonitor__methods_ },
            { Py_tp_init, (void *) t_StreamMonitor_init_ },
            { Py_tp_getset, t_StreamMonitor__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StreamMonitor)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(StreamMonitor, t_StreamMonitor, StreamMonitor);

          void t_StreamMonitor::install(PyObject *module)
          {
            installType(&PY_TYPE(StreamMonitor), &PY_TYPE_DEF(StreamMonitor), module, "StreamMonitor", 0);
          }

          void t_StreamMonitor::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamMonitor), "class_", make_descriptor(StreamMonitor::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamMonitor), "wrapfn_", make_descriptor(t_StreamMonitor::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamMonitor), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StreamMonitor_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StreamMonitor::initializeClass, 1)))
              return NULL;
            return t_StreamMonitor::wrap_Object(StreamMonitor(((t_StreamMonitor *) arg)->object.this$));
          }
          static PyObject *t_StreamMonitor_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StreamMonitor::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StreamMonitor_init_(t_StreamMonitor *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::metric::ntrip::NtripClient a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::gnss::metric::ntrip::Type a2((jobject) NULL);
            PyTypeObject **p2;
            jboolean a3;
            jboolean a4;
            jdouble a5;
            jdouble a6;
            jint a7;
            StreamMonitor object((jobject) NULL);

            if (!parseArgs(args, "ksKZZDDI", ::org::orekit::gnss::metric::ntrip::NtripClient::initializeClass, ::org::orekit::gnss::metric::ntrip::Type::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::metric::ntrip::t_Type::parameters_, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = StreamMonitor(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_StreamMonitor_addObserver(t_StreamMonitor *self, PyObject *args)
          {
            jint a0;
            ::org::orekit::gnss::metric::ntrip::MessageObserver a1((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::ntrip::MessageObserver::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addObserver(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addObserver", args);
            return NULL;
          }

          static PyObject *t_StreamMonitor_getException(t_StreamMonitor *self)
          {
            ::org::orekit::errors::OrekitException result((jobject) NULL);
            OBJ_CALL(result = self->object.getException());
            return ::org::orekit::errors::t_OrekitException::wrap_Object(result);
          }

          static PyObject *t_StreamMonitor_run(t_StreamMonitor *self)
          {
            OBJ_CALL(self->object.run());
            Py_RETURN_NONE;
          }

          static PyObject *t_StreamMonitor_stopMonitoring(t_StreamMonitor *self)
          {
            OBJ_CALL(self->object.stopMonitoring());
            Py_RETURN_NONE;
          }

          static PyObject *t_StreamMonitor_get__exception(t_StreamMonitor *self, void *data)
          {
            ::org::orekit::errors::OrekitException value((jobject) NULL);
            OBJ_CALL(value = self->object.getException());
            return ::org::orekit::errors::t_OrekitException::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/ODEFixedStepHandler.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *ODEFixedStepHandler::class$ = NULL;
        jmethodID *ODEFixedStepHandler::mids$ = NULL;
        bool ODEFixedStepHandler::live$ = false;

        jclass ODEFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/ODEFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_handleStep_55b681844909c935] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Z)V");
            mids$[mid_init_a7556bd72cab73f1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ODEFixedStepHandler::handleStep(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jboolean a1) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_55b681844909c935], a0.this$, a1);
        }

        void ODEFixedStepHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_a7556bd72cab73f1], a0.this$, a1);
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
        static PyObject *t_ODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEFixedStepHandler_handleStep(t_ODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_ODEFixedStepHandler_init(t_ODEFixedStepHandler *self, PyObject *args);

        static PyMethodDef t_ODEFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_ODEFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEFixedStepHandler, handleStep, METH_VARARGS),
          DECLARE_METHOD(t_ODEFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEFixedStepHandler)[] = {
          { Py_tp_methods, t_ODEFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEFixedStepHandler, t_ODEFixedStepHandler, ODEFixedStepHandler);

        void t_ODEFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEFixedStepHandler), &PY_TYPE_DEF(ODEFixedStepHandler), module, "ODEFixedStepHandler", 0);
        }

        void t_ODEFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEFixedStepHandler), "class_", make_descriptor(ODEFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEFixedStepHandler), "wrapfn_", make_descriptor(t_ODEFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_ODEFixedStepHandler::wrap_Object(ODEFixedStepHandler(((t_ODEFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEFixedStepHandler_handleStep(t_ODEFixedStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jboolean a1;

          if (!parseArgs(args, "kZ", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.handleStep(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", args);
          return NULL;
        }

        static PyObject *t_ODEFixedStepHandler_init(t_ODEFixedStepHandler *self, PyObject *args)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/XmlStructureProcessingState.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *XmlStructureProcessingState::class$ = NULL;
          jmethodID *XmlStructureProcessingState::mids$ = NULL;
          bool XmlStructureProcessingState::live$ = false;

          jclass XmlStructureProcessingState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/XmlStructureProcessingState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_136315fcdbcf2678] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)V");
              mids$[mid_processToken_5949d4df22f33350] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          XmlStructureProcessingState::XmlStructureProcessingState(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_136315fcdbcf2678, a0.this$, a1.this$)) {}

          jboolean XmlStructureProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_processToken_5949d4df22f33350], a0.this$);
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
          static PyObject *t_XmlStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_XmlStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_XmlStructureProcessingState_init_(t_XmlStructureProcessingState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_XmlStructureProcessingState_processToken(t_XmlStructureProcessingState *self, PyObject *arg);

          static PyMethodDef t_XmlStructureProcessingState__methods_[] = {
            DECLARE_METHOD(t_XmlStructureProcessingState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureProcessingState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureProcessingState, processToken, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(XmlStructureProcessingState)[] = {
            { Py_tp_methods, t_XmlStructureProcessingState__methods_ },
            { Py_tp_init, (void *) t_XmlStructureProcessingState_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(XmlStructureProcessingState)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(XmlStructureProcessingState, t_XmlStructureProcessingState, XmlStructureProcessingState);

          void t_XmlStructureProcessingState::install(PyObject *module)
          {
            installType(&PY_TYPE(XmlStructureProcessingState), &PY_TYPE_DEF(XmlStructureProcessingState), module, "XmlStructureProcessingState", 0);
          }

          void t_XmlStructureProcessingState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureProcessingState), "class_", make_descriptor(XmlStructureProcessingState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureProcessingState), "wrapfn_", make_descriptor(t_XmlStructureProcessingState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureProcessingState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_XmlStructureProcessingState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, XmlStructureProcessingState::initializeClass, 1)))
              return NULL;
            return t_XmlStructureProcessingState::wrap_Object(XmlStructureProcessingState(((t_XmlStructureProcessingState *) arg)->object.this$));
          }
          static PyObject *t_XmlStructureProcessingState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, XmlStructureProcessingState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_XmlStructureProcessingState_init_(t_XmlStructureProcessingState *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a1((jobject) NULL);
            PyTypeObject **p1;
            XmlStructureProcessingState object((jobject) NULL);

            if (!parseArgs(args, "sK", ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              INT_CALL(object = XmlStructureProcessingState(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_XmlStructureProcessingState_processToken(t_XmlStructureProcessingState *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.processToken(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "processToken", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *PiecewiseBicubicSplineInterpolator::class$ = NULL;
        jmethodID *PiecewiseBicubicSplineInterpolator::mids$ = NULL;
        bool PiecewiseBicubicSplineInterpolator::live$ = false;

        jclass PiecewiseBicubicSplineInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_0b3e497abe93ecbd] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PiecewiseBicubicSplineInterpolator::PiecewiseBicubicSplineInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::hipparchus::analysis::interpolation::PiecewiseBicubicSplineInterpolatingFunction PiecewiseBicubicSplineInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::interpolation::PiecewiseBicubicSplineInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_0b3e497abe93ecbd], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_PiecewiseBicubicSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PiecewiseBicubicSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PiecewiseBicubicSplineInterpolator_init_(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PiecewiseBicubicSplineInterpolator_interpolate(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args);

        static PyMethodDef t_PiecewiseBicubicSplineInterpolator__methods_[] = {
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PiecewiseBicubicSplineInterpolator)[] = {
          { Py_tp_methods, t_PiecewiseBicubicSplineInterpolator__methods_ },
          { Py_tp_init, (void *) t_PiecewiseBicubicSplineInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PiecewiseBicubicSplineInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PiecewiseBicubicSplineInterpolator, t_PiecewiseBicubicSplineInterpolator, PiecewiseBicubicSplineInterpolator);

        void t_PiecewiseBicubicSplineInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(PiecewiseBicubicSplineInterpolator), &PY_TYPE_DEF(PiecewiseBicubicSplineInterpolator), module, "PiecewiseBicubicSplineInterpolator", 0);
        }

        void t_PiecewiseBicubicSplineInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolator), "class_", make_descriptor(PiecewiseBicubicSplineInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolator), "wrapfn_", make_descriptor(t_PiecewiseBicubicSplineInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PiecewiseBicubicSplineInterpolator::initializeClass, 1)))
            return NULL;
          return t_PiecewiseBicubicSplineInterpolator::wrap_Object(PiecewiseBicubicSplineInterpolator(((t_PiecewiseBicubicSplineInterpolator *) arg)->object.this$));
        }
        static PyObject *t_PiecewiseBicubicSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PiecewiseBicubicSplineInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PiecewiseBicubicSplineInterpolator_init_(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args, PyObject *kwds)
        {
          PiecewiseBicubicSplineInterpolator object((jobject) NULL);

          INT_CALL(object = PiecewiseBicubicSplineInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolator_interpolate(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::PiecewiseBicubicSplineInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::interpolation::t_PiecewiseBicubicSplineInterpolatingFunction::wrap_Object(result);
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
#include "org/hipparchus/fraction/AbstractFormat.h"
#include "java/text/FieldPosition.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *AbstractFormat::class$ = NULL;
      jmethodID *AbstractFormat::mids$ = NULL;
      bool AbstractFormat::live$ = false;

      jclass AbstractFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/AbstractFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_format_cdee9bc08b68d2f3] = env->getMethodID(cls, "format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_1d561f51d282798c] = env->getMethodID(cls, "format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getDenominatorFormat_87ffffc449cd25a5] = env->getMethodID(cls, "getDenominatorFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getNumeratorFormat_87ffffc449cd25a5] = env->getMethodID(cls, "getNumeratorFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getDefaultNumberFormat_3c858cd11341b00a] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
          mids$[mid_getDefaultNumberFormat_87ffffc449cd25a5] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parseAndIgnoreWhitespace_1df84bc342ab1345] = env->getStaticMethodID(cls, "parseAndIgnoreWhitespace", "(Ljava/lang/String;Ljava/text/ParsePosition;)V");
          mids$[mid_parseNextCharacter_ab936c5146b74d5a] = env->getStaticMethodID(cls, "parseNextCharacter", "(Ljava/lang/String;Ljava/text/ParsePosition;)C");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::StringBuffer AbstractFormat::format(jdouble a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_cdee9bc08b68d2f3], a0, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer AbstractFormat::format(jlong a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_1d561f51d282798c], a0, a1.this$, a2.this$));
      }

      ::java::text::NumberFormat AbstractFormat::getDenominatorFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getDenominatorFormat_87ffffc449cd25a5]));
      }

      ::java::text::NumberFormat AbstractFormat::getNumeratorFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getNumeratorFormat_87ffffc449cd25a5]));
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
      static PyObject *t_AbstractFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFormat_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFormat_format(t_AbstractFormat *self, PyObject *args);
      static PyObject *t_AbstractFormat_getDenominatorFormat(t_AbstractFormat *self);
      static PyObject *t_AbstractFormat_getNumeratorFormat(t_AbstractFormat *self);
      static PyObject *t_AbstractFormat_get__denominatorFormat(t_AbstractFormat *self, void *data);
      static PyObject *t_AbstractFormat_get__numeratorFormat(t_AbstractFormat *self, void *data);
      static PyGetSetDef t_AbstractFormat__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFormat, denominatorFormat),
        DECLARE_GET_FIELD(t_AbstractFormat, numeratorFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFormat__methods_[] = {
        DECLARE_METHOD(t_AbstractFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFormat, getDenominatorFormat, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFormat, getNumeratorFormat, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFormat)[] = {
        { Py_tp_methods, t_AbstractFormat__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFormat)[] = {
        &PY_TYPE_DEF(::java::text::NumberFormat),
        NULL
      };

      DEFINE_TYPE(AbstractFormat, t_AbstractFormat, AbstractFormat);

      void t_AbstractFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFormat), &PY_TYPE_DEF(AbstractFormat), module, "AbstractFormat", 0);
      }

      void t_AbstractFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFormat), "class_", make_descriptor(AbstractFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFormat), "wrapfn_", make_descriptor(t_AbstractFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFormat::initializeClass, 1)))
          return NULL;
        return t_AbstractFormat::wrap_Object(AbstractFormat(((t_AbstractFormat *) arg)->object.this$));
      }
      static PyObject *t_AbstractFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFormat_format(t_AbstractFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Dkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
          {
            jlong a0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Jkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(AbstractFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_AbstractFormat_getDenominatorFormat(t_AbstractFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getDenominatorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_AbstractFormat_getNumeratorFormat(t_AbstractFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getNumeratorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_AbstractFormat_get__denominatorFormat(t_AbstractFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getDenominatorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }

      static PyObject *t_AbstractFormat_get__numeratorFormat(t_AbstractFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getNumeratorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/summary/Product.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/summary/Product.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *Product::class$ = NULL;
          jmethodID *Product::mids$ = NULL;
          bool Product::live$ = false;

          jclass Product::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/Product");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_3a18f2033845eaa9] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/Product;)V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_3380530ccfff2f18] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/Product;");
              mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_0f0d79795aa485ac] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_b74f83833fdad017] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_8ba9fe7a847cecad] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Product::Product() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void Product::aggregate(const Product & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_3a18f2033845eaa9], a0.this$);
          }

          void Product::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          Product Product::copy() const
          {
            return Product(env->callObjectMethod(this$, mids$[mid_copy_3380530ccfff2f18]));
          }

          jdouble Product::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
          }

          jdouble Product::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0f0d79795aa485ac], a0.this$, a1.this$, a2, a3);
          }

          jlong Product::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
          }

          jdouble Product::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_b74f83833fdad017]);
          }

          void Product::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_8ba9fe7a847cecad], a0);
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
        namespace summary {
          static PyObject *t_Product_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Product_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Product_init_(t_Product *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Product_aggregate(t_Product *self, PyObject *arg);
          static PyObject *t_Product_clear(t_Product *self, PyObject *args);
          static PyObject *t_Product_copy(t_Product *self, PyObject *args);
          static PyObject *t_Product_evaluate(t_Product *self, PyObject *args);
          static PyObject *t_Product_getN(t_Product *self, PyObject *args);
          static PyObject *t_Product_getResult(t_Product *self, PyObject *args);
          static PyObject *t_Product_increment(t_Product *self, PyObject *args);
          static PyObject *t_Product_get__n(t_Product *self, void *data);
          static PyObject *t_Product_get__result(t_Product *self, void *data);
          static PyGetSetDef t_Product__fields_[] = {
            DECLARE_GET_FIELD(t_Product, n),
            DECLARE_GET_FIELD(t_Product, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Product__methods_[] = {
            DECLARE_METHOD(t_Product, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Product, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Product, aggregate, METH_O),
            DECLARE_METHOD(t_Product, clear, METH_VARARGS),
            DECLARE_METHOD(t_Product, copy, METH_VARARGS),
            DECLARE_METHOD(t_Product, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Product, getN, METH_VARARGS),
            DECLARE_METHOD(t_Product, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Product, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Product)[] = {
            { Py_tp_methods, t_Product__methods_ },
            { Py_tp_init, (void *) t_Product_init_ },
            { Py_tp_getset, t_Product__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Product)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Product, t_Product, Product);

          void t_Product::install(PyObject *module)
          {
            installType(&PY_TYPE(Product), &PY_TYPE_DEF(Product), module, "Product", 0);
          }

          void t_Product::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Product), "class_", make_descriptor(Product::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Product), "wrapfn_", make_descriptor(t_Product::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Product), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Product_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Product::initializeClass, 1)))
              return NULL;
            return t_Product::wrap_Object(Product(((t_Product *) arg)->object.this$));
          }
          static PyObject *t_Product_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Product::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Product_init_(t_Product *self, PyObject *args, PyObject *kwds)
          {
            Product object((jobject) NULL);

            INT_CALL(object = Product());
            self->object = object;

            return 0;
          }

          static PyObject *t_Product_aggregate(t_Product *self, PyObject *arg)
          {
            Product a0((jobject) NULL);

            if (!parseArg(arg, "k", Product::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Product_clear(t_Product *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Product_copy(t_Product *self, PyObject *args)
          {
            Product result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Product::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Product_evaluate(t_Product *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
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
              }
              break;
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Product_getN(t_Product *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Product_getResult(t_Product *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Product_increment(t_Product *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Product_get__n(t_Product *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Product_get__result(t_Product *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/GatheringSubscriber.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/SortedSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *GatheringSubscriber::class$ = NULL;
          jmethodID *GatheringSubscriber::mids$ = NULL;
          bool GatheringSubscriber::live$ = false;

          jclass GatheringSubscriber::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/GatheringSubscriber");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getGeneratedMeasurements_7961e54fd3a47d94] = env->getMethodID(cls, "getGeneratedMeasurements", "()Ljava/util/SortedSet;");
              mids$[mid_handleGeneratedMeasurement_1640bf51befb0c77] = env->getMethodID(cls, "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
              mids$[mid_init_f89af00fc113b524] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GatheringSubscriber::GatheringSubscriber() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::java::util::SortedSet GatheringSubscriber::getGeneratedMeasurements() const
          {
            return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getGeneratedMeasurements_7961e54fd3a47d94]));
          }

          void GatheringSubscriber::handleGeneratedMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_handleGeneratedMeasurement_1640bf51befb0c77], a0.this$);
          }

          void GatheringSubscriber::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_f89af00fc113b524], a0.this$, a1.this$);
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
          static PyObject *t_GatheringSubscriber_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GatheringSubscriber_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GatheringSubscriber_init_(t_GatheringSubscriber *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GatheringSubscriber_getGeneratedMeasurements(t_GatheringSubscriber *self);
          static PyObject *t_GatheringSubscriber_handleGeneratedMeasurement(t_GatheringSubscriber *self, PyObject *arg);
          static PyObject *t_GatheringSubscriber_init(t_GatheringSubscriber *self, PyObject *args);
          static PyObject *t_GatheringSubscriber_get__generatedMeasurements(t_GatheringSubscriber *self, void *data);
          static PyGetSetDef t_GatheringSubscriber__fields_[] = {
            DECLARE_GET_FIELD(t_GatheringSubscriber, generatedMeasurements),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GatheringSubscriber__methods_[] = {
            DECLARE_METHOD(t_GatheringSubscriber, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GatheringSubscriber, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GatheringSubscriber, getGeneratedMeasurements, METH_NOARGS),
            DECLARE_METHOD(t_GatheringSubscriber, handleGeneratedMeasurement, METH_O),
            DECLARE_METHOD(t_GatheringSubscriber, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GatheringSubscriber)[] = {
            { Py_tp_methods, t_GatheringSubscriber__methods_ },
            { Py_tp_init, (void *) t_GatheringSubscriber_init_ },
            { Py_tp_getset, t_GatheringSubscriber__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GatheringSubscriber)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GatheringSubscriber, t_GatheringSubscriber, GatheringSubscriber);

          void t_GatheringSubscriber::install(PyObject *module)
          {
            installType(&PY_TYPE(GatheringSubscriber), &PY_TYPE_DEF(GatheringSubscriber), module, "GatheringSubscriber", 0);
          }

          void t_GatheringSubscriber::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GatheringSubscriber), "class_", make_descriptor(GatheringSubscriber::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GatheringSubscriber), "wrapfn_", make_descriptor(t_GatheringSubscriber::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GatheringSubscriber), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GatheringSubscriber_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GatheringSubscriber::initializeClass, 1)))
              return NULL;
            return t_GatheringSubscriber::wrap_Object(GatheringSubscriber(((t_GatheringSubscriber *) arg)->object.this$));
          }
          static PyObject *t_GatheringSubscriber_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GatheringSubscriber::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GatheringSubscriber_init_(t_GatheringSubscriber *self, PyObject *args, PyObject *kwds)
          {
            GatheringSubscriber object((jobject) NULL);

            INT_CALL(object = GatheringSubscriber());
            self->object = object;

            return 0;
          }

          static PyObject *t_GatheringSubscriber_getGeneratedMeasurements(t_GatheringSubscriber *self)
          {
            ::java::util::SortedSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getGeneratedMeasurements());
            return ::java::util::t_SortedSet::wrap_Object(result);
          }

          static PyObject *t_GatheringSubscriber_handleGeneratedMeasurement(t_GatheringSubscriber *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.handleGeneratedMeasurement(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "handleGeneratedMeasurement", arg);
            return NULL;
          }

          static PyObject *t_GatheringSubscriber_init(t_GatheringSubscriber *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_GatheringSubscriber_get__generatedMeasurements(t_GatheringSubscriber *self, void *data)
          {
            ::java::util::SortedSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getGeneratedMeasurements());
            return ::java::util::t_SortedSet::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/linesensor/LinearLineDatation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/LineDatation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *LinearLineDatation::class$ = NULL;
        jmethodID *LinearLineDatation::mids$ = NULL;
        bool LinearLineDatation::live$ = false;

        jclass LinearLineDatation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/LinearLineDatation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_574dcea0b820e53f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DD)V");
            mids$[mid_getDate_f359a0110559347a] = env->getMethodID(cls, "getDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLine_fd347811007a6ba3] = env->getMethodID(cls, "getLine", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getRate_04fd0666b613d2ab] = env->getMethodID(cls, "getRate", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearLineDatation::LinearLineDatation(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_574dcea0b820e53f, a0.this$, a1, a2)) {}

        ::org::orekit::time::AbsoluteDate LinearLineDatation::getDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_f359a0110559347a], a0));
        }

        jdouble LinearLineDatation::getLine(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_fd347811007a6ba3], a0.this$);
        }

        jdouble LinearLineDatation::getRate(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRate_04fd0666b613d2ab], a0);
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
        static PyObject *t_LinearLineDatation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearLineDatation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearLineDatation_init_(t_LinearLineDatation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearLineDatation_getDate(t_LinearLineDatation *self, PyObject *arg);
        static PyObject *t_LinearLineDatation_getLine(t_LinearLineDatation *self, PyObject *arg);
        static PyObject *t_LinearLineDatation_getRate(t_LinearLineDatation *self, PyObject *arg);

        static PyMethodDef t_LinearLineDatation__methods_[] = {
          DECLARE_METHOD(t_LinearLineDatation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearLineDatation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearLineDatation, getDate, METH_O),
          DECLARE_METHOD(t_LinearLineDatation, getLine, METH_O),
          DECLARE_METHOD(t_LinearLineDatation, getRate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearLineDatation)[] = {
          { Py_tp_methods, t_LinearLineDatation__methods_ },
          { Py_tp_init, (void *) t_LinearLineDatation_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearLineDatation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearLineDatation, t_LinearLineDatation, LinearLineDatation);

        void t_LinearLineDatation::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearLineDatation), &PY_TYPE_DEF(LinearLineDatation), module, "LinearLineDatation", 0);
        }

        void t_LinearLineDatation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearLineDatation), "class_", make_descriptor(LinearLineDatation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearLineDatation), "wrapfn_", make_descriptor(t_LinearLineDatation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearLineDatation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearLineDatation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearLineDatation::initializeClass, 1)))
            return NULL;
          return t_LinearLineDatation::wrap_Object(LinearLineDatation(((t_LinearLineDatation *) arg)->object.this$));
        }
        static PyObject *t_LinearLineDatation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearLineDatation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearLineDatation_init_(t_LinearLineDatation *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          LinearLineDatation object((jobject) NULL);

          if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = LinearLineDatation(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LinearLineDatation_getDate(t_LinearLineDatation *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getDate(a0));
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDate", arg);
          return NULL;
        }

        static PyObject *t_LinearLineDatation_getLine(t_LinearLineDatation *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getLine(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLine", arg);
          return NULL;
        }

        static PyObject *t_LinearLineDatation_getRate(t_LinearLineDatation *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/AbstractSelfFeedingLoader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *AbstractSelfFeedingLoader::class$ = NULL;
      jmethodID *AbstractSelfFeedingLoader::mids$ = NULL;
      bool AbstractSelfFeedingLoader::live$ = false;

      jclass AbstractSelfFeedingLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/AbstractSelfFeedingLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0343d25c5af74eca] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_getSupportedNames_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
          mids$[mid_getDataProvidersManager_58cee34d9bd73f33] = env->getMethodID(cls, "getDataProvidersManager", "()Lorg/orekit/data/DataProvidersManager;");
          mids$[mid_feed_e85cadd85939e324] = env->getMethodID(cls, "feed", "(Lorg/orekit/data/DataLoader;)Z");
          mids$[mid_setSupportedNames_734b91ac30d5f9b4] = env->getMethodID(cls, "setSupportedNames", "(Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractSelfFeedingLoader::AbstractSelfFeedingLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0343d25c5af74eca, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_AbstractSelfFeedingLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractSelfFeedingLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractSelfFeedingLoader_init_(t_AbstractSelfFeedingLoader *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_AbstractSelfFeedingLoader__methods_[] = {
        DECLARE_METHOD(t_AbstractSelfFeedingLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractSelfFeedingLoader, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractSelfFeedingLoader)[] = {
        { Py_tp_methods, t_AbstractSelfFeedingLoader__methods_ },
        { Py_tp_init, (void *) t_AbstractSelfFeedingLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractSelfFeedingLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractSelfFeedingLoader, t_AbstractSelfFeedingLoader, AbstractSelfFeedingLoader);

      void t_AbstractSelfFeedingLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractSelfFeedingLoader), &PY_TYPE_DEF(AbstractSelfFeedingLoader), module, "AbstractSelfFeedingLoader", 0);
      }

      void t_AbstractSelfFeedingLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSelfFeedingLoader), "class_", make_descriptor(AbstractSelfFeedingLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSelfFeedingLoader), "wrapfn_", make_descriptor(t_AbstractSelfFeedingLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSelfFeedingLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractSelfFeedingLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractSelfFeedingLoader::initializeClass, 1)))
          return NULL;
        return t_AbstractSelfFeedingLoader::wrap_Object(AbstractSelfFeedingLoader(((t_AbstractSelfFeedingLoader *) arg)->object.this$));
      }
      static PyObject *t_AbstractSelfFeedingLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractSelfFeedingLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractSelfFeedingLoader_init_(t_AbstractSelfFeedingLoader *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
        AbstractSelfFeedingLoader object((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
        {
          INT_CALL(object = AbstractSelfFeedingLoader(a0, a1));
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
#include "org/orekit/models/earth/troposphere/ViennaThreeModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *ViennaThreeModel::class$ = NULL;
          jmethodID *ViennaThreeModel::mids$ = NULL;
          bool ViennaThreeModel::live$ = false;

          jclass ViennaThreeModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/ViennaThreeModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b15baa0161a4e9c7] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_init$_0559b4bd8fb5191f] = env->getMethodID(cls, "<init>", "([D[DLorg/orekit/time/TimeScale;)V");
              mids$[mid_computeZenithDelay_90983db312f6218b] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_computeZenithDelay_0b467d379fb3f504] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_mappingFactors_6e118a7a5998051c] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_6dcded9cb7dee3c2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_pathDelay_6f66c6b7094d6f08] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_2edbfa177156ee09] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaThreeModel::ViennaThreeModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b15baa0161a4e9c7, a0.this$, a1.this$)) {}

          ViennaThreeModel::ViennaThreeModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0559b4bd8fb5191f, a0.this$, a1.this$, a2.this$)) {}

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaThreeModel::computeZenithDelay(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_90983db312f6218b], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > ViennaThreeModel::computeZenithDelay(const ::org::orekit::bodies::GeodeticPoint & a0, const JArray< jdouble > & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_0b467d379fb3f504], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List ViennaThreeModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaThreeModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6e118a7a5998051c], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > ViennaThreeModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6dcded9cb7dee3c2], a0, a1.this$, a2.this$));
          }

          ::org::hipparchus::CalculusFieldElement ViennaThreeModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_6f66c6b7094d6f08], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble ViennaThreeModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_2edbfa177156ee09], a0, a1.this$, a2.this$, a3.this$);
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
          static PyObject *t_ViennaThreeModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaThreeModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ViennaThreeModel_init_(t_ViennaThreeModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ViennaThreeModel_computeZenithDelay(t_ViennaThreeModel *self, PyObject *args);
          static PyObject *t_ViennaThreeModel_getParametersDrivers(t_ViennaThreeModel *self);
          static PyObject *t_ViennaThreeModel_mappingFactors(t_ViennaThreeModel *self, PyObject *args);
          static PyObject *t_ViennaThreeModel_pathDelay(t_ViennaThreeModel *self, PyObject *args);
          static PyObject *t_ViennaThreeModel_get__parametersDrivers(t_ViennaThreeModel *self, void *data);
          static PyGetSetDef t_ViennaThreeModel__fields_[] = {
            DECLARE_GET_FIELD(t_ViennaThreeModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ViennaThreeModel__methods_[] = {
            DECLARE_METHOD(t_ViennaThreeModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaThreeModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaThreeModel, computeZenithDelay, METH_VARARGS),
            DECLARE_METHOD(t_ViennaThreeModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ViennaThreeModel, mappingFactors, METH_VARARGS),
            DECLARE_METHOD(t_ViennaThreeModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ViennaThreeModel)[] = {
            { Py_tp_methods, t_ViennaThreeModel__methods_ },
            { Py_tp_init, (void *) t_ViennaThreeModel_init_ },
            { Py_tp_getset, t_ViennaThreeModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ViennaThreeModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ViennaThreeModel, t_ViennaThreeModel, ViennaThreeModel);

          void t_ViennaThreeModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ViennaThreeModel), &PY_TYPE_DEF(ViennaThreeModel), module, "ViennaThreeModel", 0);
          }

          void t_ViennaThreeModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaThreeModel), "class_", make_descriptor(ViennaThreeModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaThreeModel), "wrapfn_", make_descriptor(t_ViennaThreeModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaThreeModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ViennaThreeModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ViennaThreeModel::initializeClass, 1)))
              return NULL;
            return t_ViennaThreeModel::wrap_Object(ViennaThreeModel(((t_ViennaThreeModel *) arg)->object.this$));
          }
          static PyObject *t_ViennaThreeModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ViennaThreeModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ViennaThreeModel_init_(t_ViennaThreeModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ViennaThreeModel object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = ViennaThreeModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                ViennaThreeModel object((jobject) NULL);

                if (!parseArgs(args, "[D[Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = ViennaThreeModel(a0, a1, a2));
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

          static PyObject *t_ViennaThreeModel_computeZenithDelay(t_ViennaThreeModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "k[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return result.wrap();
                }
              }
              {
                ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "K[KK", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "computeZenithDelay", args);
            return NULL;
          }

          static PyObject *t_ViennaThreeModel_getParametersDrivers(t_ViennaThreeModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ViennaThreeModel_mappingFactors(t_ViennaThreeModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
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
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }

          static PyObject *t_ViennaThreeModel_pathDelay(t_ViennaThreeModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_ViennaThreeModel_get__parametersDrivers(t_ViennaThreeModel *self, void *data)
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
#include "org/orekit/utils/FieldArrayDictionary$Entry.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/FieldArrayDictionary$Entry.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldArrayDictionary$Entry::class$ = NULL;
      jmethodID *FieldArrayDictionary$Entry::mids$ = NULL;
      bool FieldArrayDictionary$Entry::live$ = false;

      jclass FieldArrayDictionary$Entry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldArrayDictionary$Entry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
          mids$[mid_getValue_883be608cfc68c26] = env->getMethodID(cls, "getValue", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_increment_ab69da052b88f50c] = env->getMethodID(cls, "increment", "([D)V");
          mids$[mid_increment_8b0f7facc8a6a46e] = env->getMethodID(cls, "increment", "([Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_scaledIncrement_b116e64aa0ba0a46] = env->getMethodID(cls, "scaledIncrement", "(DLorg/orekit/utils/FieldArrayDictionary$Entry;)V");
          mids$[mid_scaledIncrement_0502d7660b56782c] = env->getMethodID(cls, "scaledIncrement", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary$Entry;)V");
          mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");
          mids$[mid_zero_a1fa5dae97ea5ed2] = env->getMethodID(cls, "zero", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String FieldArrayDictionary$Entry::getKey() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_1c1fa1e935d6cdcf]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldArrayDictionary$Entry::getValue() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getValue_883be608cfc68c26]));
      }

      void FieldArrayDictionary$Entry::increment(const JArray< jdouble > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_ab69da052b88f50c], a0.this$);
      }

      void FieldArrayDictionary$Entry::increment(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_8b0f7facc8a6a46e], a0.this$);
      }

      void FieldArrayDictionary$Entry::scaledIncrement(jdouble a0, const FieldArrayDictionary$Entry & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaledIncrement_b116e64aa0ba0a46], a0, a1.this$);
      }

      void FieldArrayDictionary$Entry::scaledIncrement(const ::org::hipparchus::CalculusFieldElement & a0, const FieldArrayDictionary$Entry & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaledIncrement_0502d7660b56782c], a0.this$, a1.this$);
      }

      jint FieldArrayDictionary$Entry::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
      }

      void FieldArrayDictionary$Entry::zero() const
      {
        env->callVoidMethod(this$, mids$[mid_zero_a1fa5dae97ea5ed2]);
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
      static PyObject *t_FieldArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary$Entry_of_(t_FieldArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary$Entry_getKey(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_getValue(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_increment(t_FieldArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary$Entry_scaledIncrement(t_FieldArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary$Entry_size(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_zero(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_get__key(t_FieldArrayDictionary$Entry *self, void *data);
      static PyObject *t_FieldArrayDictionary$Entry_get__value(t_FieldArrayDictionary$Entry *self, void *data);
      static PyObject *t_FieldArrayDictionary$Entry_get__parameters_(t_FieldArrayDictionary$Entry *self, void *data);
      static PyGetSetDef t_FieldArrayDictionary$Entry__fields_[] = {
        DECLARE_GET_FIELD(t_FieldArrayDictionary$Entry, key),
        DECLARE_GET_FIELD(t_FieldArrayDictionary$Entry, value),
        DECLARE_GET_FIELD(t_FieldArrayDictionary$Entry, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldArrayDictionary$Entry__methods_[] = {
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, getKey, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, getValue, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, increment, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, scaledIncrement, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, size, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, zero, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldArrayDictionary$Entry)[] = {
        { Py_tp_methods, t_FieldArrayDictionary$Entry__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldArrayDictionary$Entry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldArrayDictionary$Entry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldArrayDictionary$Entry, t_FieldArrayDictionary$Entry, FieldArrayDictionary$Entry);
      PyObject *t_FieldArrayDictionary$Entry::wrap_Object(const FieldArrayDictionary$Entry& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary$Entry::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary$Entry *self = (t_FieldArrayDictionary$Entry *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldArrayDictionary$Entry::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary$Entry::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary$Entry *self = (t_FieldArrayDictionary$Entry *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldArrayDictionary$Entry::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldArrayDictionary$Entry), &PY_TYPE_DEF(FieldArrayDictionary$Entry), module, "FieldArrayDictionary$Entry", 0);
      }

      void t_FieldArrayDictionary$Entry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary$Entry), "class_", make_descriptor(FieldArrayDictionary$Entry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary$Entry), "wrapfn_", make_descriptor(t_FieldArrayDictionary$Entry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary$Entry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldArrayDictionary$Entry::initializeClass, 1)))
          return NULL;
        return t_FieldArrayDictionary$Entry::wrap_Object(FieldArrayDictionary$Entry(((t_FieldArrayDictionary$Entry *) arg)->object.this$));
      }
      static PyObject *t_FieldArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldArrayDictionary$Entry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldArrayDictionary$Entry_of_(t_FieldArrayDictionary$Entry *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldArrayDictionary$Entry_getKey(t_FieldArrayDictionary$Entry *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return j2p(result);
      }

      static PyObject *t_FieldArrayDictionary$Entry_getValue(t_FieldArrayDictionary$Entry *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldArrayDictionary$Entry_increment(t_FieldArrayDictionary$Entry *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "increment", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary$Entry_scaledIncrement(t_FieldArrayDictionary$Entry *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            FieldArrayDictionary$Entry a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "DK", FieldArrayDictionary$Entry::initializeClass, &a0, &a1, &p1, t_FieldArrayDictionary$Entry::parameters_))
            {
              OBJ_CALL(self->object.scaledIncrement(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldArrayDictionary$Entry a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldArrayDictionary$Entry::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldArrayDictionary$Entry::parameters_))
            {
              OBJ_CALL(self->object.scaledIncrement(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "scaledIncrement", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary$Entry_size(t_FieldArrayDictionary$Entry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldArrayDictionary$Entry_zero(t_FieldArrayDictionary$Entry *self)
      {
        OBJ_CALL(self->object.zero());
        Py_RETURN_NONE;
      }
      static PyObject *t_FieldArrayDictionary$Entry_get__parameters_(t_FieldArrayDictionary$Entry *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldArrayDictionary$Entry_get__key(t_FieldArrayDictionary$Entry *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return j2p(value);
      }

      static PyObject *t_FieldArrayDictionary$Entry_get__value(t_FieldArrayDictionary$Entry *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/PythonAttitudeProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonAttitudeProvider::class$ = NULL;
      jmethodID *PythonAttitudeProvider::mids$ = NULL;
      bool PythonAttitudeProvider::live$ = false;

      jclass PythonAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAttitudeProvider::PythonAttitudeProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonAttitudeProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonAttitudeProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonAttitudeProvider::pythonExtension(jlong a0) const
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
    namespace attitudes {
      static PyObject *t_PythonAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAttitudeProvider_init_(t_PythonAttitudeProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAttitudeProvider_finalize(t_PythonAttitudeProvider *self);
      static PyObject *t_PythonAttitudeProvider_pythonExtension(t_PythonAttitudeProvider *self, PyObject *args);
      static jobject JNICALL t_PythonAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAttitudeProvider_get__self(t_PythonAttitudeProvider *self, void *data);
      static PyGetSetDef t_PythonAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAttitudeProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_PythonAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAttitudeProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeProvider)[] = {
        { Py_tp_methods, t_PythonAttitudeProvider__methods_ },
        { Py_tp_init, (void *) t_PythonAttitudeProvider_init_ },
        { Py_tp_getset, t_PythonAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAttitudeProvider, t_PythonAttitudeProvider, PythonAttitudeProvider);

      void t_PythonAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAttitudeProvider), &PY_TYPE_DEF(PythonAttitudeProvider), module, "PythonAttitudeProvider", 1);
      }

      void t_PythonAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProvider), "class_", make_descriptor(PythonAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProvider), "wrapfn_", make_descriptor(t_PythonAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAttitudeProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonAttitudeProvider_getAttitude0 },
          { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonAttitudeProvider_getAttitude1 },
          { "pythonDecRef", "()V", (void *) t_PythonAttitudeProvider_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_PythonAttitudeProvider::wrap_Object(PythonAttitudeProvider(((t_PythonAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAttitudeProvider_init_(t_PythonAttitudeProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonAttitudeProvider object((jobject) NULL);

        INT_CALL(object = PythonAttitudeProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAttitudeProvider_finalize(t_PythonAttitudeProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAttitudeProvider_pythonExtension(t_PythonAttitudeProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static jobject JNICALL t_PythonAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static void JNICALL t_PythonAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAttitudeProvider_get__self(t_PythonAttitudeProvider *self, void *data)
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
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPFHeader::class$ = NULL;
        jmethodID *CPFHeader::mids$ = NULL;
        bool CPFHeader::live$ = false;

        jclass CPFHeader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPFHeader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getCenterOfMassOffset_b74f83833fdad017] = env->getMethodID(cls, "getCenterOfMassOffset", "()D");
            mids$[mid_getPrf_b74f83833fdad017] = env->getMethodID(cls, "getPrf", "()D");
            mids$[mid_getRefFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getRefFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getRefFrameId_55546ef6a647f39b] = env->getMethodID(cls, "getRefFrameId", "()I");
            mids$[mid_getRotationalAngleType_55546ef6a647f39b] = env->getMethodID(cls, "getRotationalAngleType", "()I");
            mids$[mid_getSource_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
            mids$[mid_getStep_55546ef6a647f39b] = env->getMethodID(cls, "getStep", "()I");
            mids$[mid_getSubDailySequenceNumber_55546ef6a647f39b] = env->getMethodID(cls, "getSubDailySequenceNumber", "()I");
            mids$[mid_getTranspClkRef_b74f83833fdad017] = env->getMethodID(cls, "getTranspClkRef", "()D");
            mids$[mid_getTranspOscDrift_b74f83833fdad017] = env->getMethodID(cls, "getTranspOscDrift", "()D");
            mids$[mid_getTranspTransmitDelay_b74f83833fdad017] = env->getMethodID(cls, "getTranspTransmitDelay", "()D");
            mids$[mid_getTranspUtcOffset_b74f83833fdad017] = env->getMethodID(cls, "getTranspUtcOffset", "()D");
            mids$[mid_isCenterOfMassCorrectionApplied_9ab94ac1dc23b105] = env->getMethodID(cls, "isCenterOfMassCorrectionApplied", "()Z");
            mids$[mid_isCompatibleWithTIVs_9ab94ac1dc23b105] = env->getMethodID(cls, "isCompatibleWithTIVs", "()Z");
            mids$[mid_setCenterOfMassOffset_8ba9fe7a847cecad] = env->getMethodID(cls, "setCenterOfMassOffset", "(D)V");
            mids$[mid_setIsCenterOfMassCorrectionApplied_fcb96c98de6fad04] = env->getMethodID(cls, "setIsCenterOfMassCorrectionApplied", "(Z)V");
            mids$[mid_setIsCompatibleWithTIVs_fcb96c98de6fad04] = env->getMethodID(cls, "setIsCompatibleWithTIVs", "(Z)V");
            mids$[mid_setPrf_8ba9fe7a847cecad] = env->getMethodID(cls, "setPrf", "(D)V");
            mids$[mid_setRefFrame_237ae1c2ddd68062] = env->getMethodID(cls, "setRefFrame", "(Lorg/orekit/frames/Frame;)V");
            mids$[mid_setRefFrameId_44ed599e93e8a30c] = env->getMethodID(cls, "setRefFrameId", "(I)V");
            mids$[mid_setRotationalAngleType_44ed599e93e8a30c] = env->getMethodID(cls, "setRotationalAngleType", "(I)V");
            mids$[mid_setSource_734b91ac30d5f9b4] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
            mids$[mid_setStep_44ed599e93e8a30c] = env->getMethodID(cls, "setStep", "(I)V");
            mids$[mid_setSubDailySequenceNumber_44ed599e93e8a30c] = env->getMethodID(cls, "setSubDailySequenceNumber", "(I)V");
            mids$[mid_setTranspClkRef_8ba9fe7a847cecad] = env->getMethodID(cls, "setTranspClkRef", "(D)V");
            mids$[mid_setTranspOscDrift_8ba9fe7a847cecad] = env->getMethodID(cls, "setTranspOscDrift", "(D)V");
            mids$[mid_setTranspTransmitDelay_8ba9fe7a847cecad] = env->getMethodID(cls, "setTranspTransmitDelay", "(D)V");
            mids$[mid_setTranspUtcOffset_8ba9fe7a847cecad] = env->getMethodID(cls, "setTranspUtcOffset", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPFHeader::CPFHeader() : ::org::orekit::files::ilrs::ILRSHeader(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble CPFHeader::getCenterOfMassOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCenterOfMassOffset_b74f83833fdad017]);
        }

        jdouble CPFHeader::getPrf() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPrf_b74f83833fdad017]);
        }

        ::org::orekit::frames::Frame CPFHeader::getRefFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getRefFrame_2c51111cc6894ba1]));
        }

        jint CPFHeader::getRefFrameId() const
        {
          return env->callIntMethod(this$, mids$[mid_getRefFrameId_55546ef6a647f39b]);
        }

        jint CPFHeader::getRotationalAngleType() const
        {
          return env->callIntMethod(this$, mids$[mid_getRotationalAngleType_55546ef6a647f39b]);
        }

        ::java::lang::String CPFHeader::getSource() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_1c1fa1e935d6cdcf]));
        }

        jint CPFHeader::getStep() const
        {
          return env->callIntMethod(this$, mids$[mid_getStep_55546ef6a647f39b]);
        }

        jint CPFHeader::getSubDailySequenceNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getSubDailySequenceNumber_55546ef6a647f39b]);
        }

        jdouble CPFHeader::getTranspClkRef() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspClkRef_b74f83833fdad017]);
        }

        jdouble CPFHeader::getTranspOscDrift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspOscDrift_b74f83833fdad017]);
        }

        jdouble CPFHeader::getTranspTransmitDelay() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspTransmitDelay_b74f83833fdad017]);
        }

        jdouble CPFHeader::getTranspUtcOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspUtcOffset_b74f83833fdad017]);
        }

        jboolean CPFHeader::isCenterOfMassCorrectionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCenterOfMassCorrectionApplied_9ab94ac1dc23b105]);
        }

        jboolean CPFHeader::isCompatibleWithTIVs() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCompatibleWithTIVs_9ab94ac1dc23b105]);
        }

        void CPFHeader::setCenterOfMassOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setCenterOfMassOffset_8ba9fe7a847cecad], a0);
        }

        void CPFHeader::setIsCenterOfMassCorrectionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsCenterOfMassCorrectionApplied_fcb96c98de6fad04], a0);
        }

        void CPFHeader::setIsCompatibleWithTIVs(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsCompatibleWithTIVs_fcb96c98de6fad04], a0);
        }

        void CPFHeader::setPrf(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPrf_8ba9fe7a847cecad], a0);
        }

        void CPFHeader::setRefFrame(const ::org::orekit::frames::Frame & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRefFrame_237ae1c2ddd68062], a0.this$);
        }

        void CPFHeader::setRefFrameId(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRefFrameId_44ed599e93e8a30c], a0);
        }

        void CPFHeader::setRotationalAngleType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRotationalAngleType_44ed599e93e8a30c], a0);
        }

        void CPFHeader::setSource(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSource_734b91ac30d5f9b4], a0.this$);
        }

        void CPFHeader::setStep(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStep_44ed599e93e8a30c], a0);
        }

        void CPFHeader::setSubDailySequenceNumber(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSubDailySequenceNumber_44ed599e93e8a30c], a0);
        }

        void CPFHeader::setTranspClkRef(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspClkRef_8ba9fe7a847cecad], a0);
        }

        void CPFHeader::setTranspOscDrift(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspOscDrift_8ba9fe7a847cecad], a0);
        }

        void CPFHeader::setTranspTransmitDelay(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspTransmitDelay_8ba9fe7a847cecad], a0);
        }

        void CPFHeader::setTranspUtcOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspUtcOffset_8ba9fe7a847cecad], a0);
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
        static PyObject *t_CPFHeader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPFHeader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPFHeader_init_(t_CPFHeader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPFHeader_getCenterOfMassOffset(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getPrf(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getRefFrame(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getRefFrameId(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getRotationalAngleType(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getSource(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getStep(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getSubDailySequenceNumber(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getTranspClkRef(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getTranspOscDrift(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getTranspTransmitDelay(t_CPFHeader *self);
        static PyObject *t_CPFHeader_getTranspUtcOffset(t_CPFHeader *self);
        static PyObject *t_CPFHeader_isCenterOfMassCorrectionApplied(t_CPFHeader *self);
        static PyObject *t_CPFHeader_isCompatibleWithTIVs(t_CPFHeader *self);
        static PyObject *t_CPFHeader_setCenterOfMassOffset(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setIsCenterOfMassCorrectionApplied(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setIsCompatibleWithTIVs(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setPrf(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setRefFrame(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setRefFrameId(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setRotationalAngleType(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setSource(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setStep(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setSubDailySequenceNumber(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setTranspClkRef(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setTranspOscDrift(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setTranspTransmitDelay(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_setTranspUtcOffset(t_CPFHeader *self, PyObject *arg);
        static PyObject *t_CPFHeader_get__centerOfMassCorrectionApplied(t_CPFHeader *self, void *data);
        static PyObject *t_CPFHeader_get__centerOfMassOffset(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__centerOfMassOffset(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__compatibleWithTIVs(t_CPFHeader *self, void *data);
        static PyObject *t_CPFHeader_get__prf(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__prf(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__refFrame(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__refFrame(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__refFrameId(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__refFrameId(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__rotationalAngleType(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__rotationalAngleType(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__source(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__source(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__step(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__step(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__subDailySequenceNumber(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__subDailySequenceNumber(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__transpClkRef(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__transpClkRef(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__transpOscDrift(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__transpOscDrift(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__transpTransmitDelay(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__transpTransmitDelay(t_CPFHeader *self, PyObject *arg, void *data);
        static PyObject *t_CPFHeader_get__transpUtcOffset(t_CPFHeader *self, void *data);
        static int t_CPFHeader_set__transpUtcOffset(t_CPFHeader *self, PyObject *arg, void *data);
        static PyGetSetDef t_CPFHeader__fields_[] = {
          DECLARE_GET_FIELD(t_CPFHeader, centerOfMassCorrectionApplied),
          DECLARE_GETSET_FIELD(t_CPFHeader, centerOfMassOffset),
          DECLARE_GET_FIELD(t_CPFHeader, compatibleWithTIVs),
          DECLARE_GETSET_FIELD(t_CPFHeader, prf),
          DECLARE_GETSET_FIELD(t_CPFHeader, refFrame),
          DECLARE_GETSET_FIELD(t_CPFHeader, refFrameId),
          DECLARE_GETSET_FIELD(t_CPFHeader, rotationalAngleType),
          DECLARE_GETSET_FIELD(t_CPFHeader, source),
          DECLARE_GETSET_FIELD(t_CPFHeader, step),
          DECLARE_GETSET_FIELD(t_CPFHeader, subDailySequenceNumber),
          DECLARE_GETSET_FIELD(t_CPFHeader, transpClkRef),
          DECLARE_GETSET_FIELD(t_CPFHeader, transpOscDrift),
          DECLARE_GETSET_FIELD(t_CPFHeader, transpTransmitDelay),
          DECLARE_GETSET_FIELD(t_CPFHeader, transpUtcOffset),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CPFHeader__methods_[] = {
          DECLARE_METHOD(t_CPFHeader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFHeader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFHeader, getCenterOfMassOffset, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getPrf, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getRefFrame, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getRefFrameId, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getRotationalAngleType, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getSource, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getStep, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getSubDailySequenceNumber, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getTranspClkRef, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getTranspOscDrift, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getTranspTransmitDelay, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, getTranspUtcOffset, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, isCenterOfMassCorrectionApplied, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, isCompatibleWithTIVs, METH_NOARGS),
          DECLARE_METHOD(t_CPFHeader, setCenterOfMassOffset, METH_O),
          DECLARE_METHOD(t_CPFHeader, setIsCenterOfMassCorrectionApplied, METH_O),
          DECLARE_METHOD(t_CPFHeader, setIsCompatibleWithTIVs, METH_O),
          DECLARE_METHOD(t_CPFHeader, setPrf, METH_O),
          DECLARE_METHOD(t_CPFHeader, setRefFrame, METH_O),
          DECLARE_METHOD(t_CPFHeader, setRefFrameId, METH_O),
          DECLARE_METHOD(t_CPFHeader, setRotationalAngleType, METH_O),
          DECLARE_METHOD(t_CPFHeader, setSource, METH_O),
          DECLARE_METHOD(t_CPFHeader, setStep, METH_O),
          DECLARE_METHOD(t_CPFHeader, setSubDailySequenceNumber, METH_O),
          DECLARE_METHOD(t_CPFHeader, setTranspClkRef, METH_O),
          DECLARE_METHOD(t_CPFHeader, setTranspOscDrift, METH_O),
          DECLARE_METHOD(t_CPFHeader, setTranspTransmitDelay, METH_O),
          DECLARE_METHOD(t_CPFHeader, setTranspUtcOffset, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPFHeader)[] = {
          { Py_tp_methods, t_CPFHeader__methods_ },
          { Py_tp_init, (void *) t_CPFHeader_init_ },
          { Py_tp_getset, t_CPFHeader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPFHeader)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::ILRSHeader),
          NULL
        };

        DEFINE_TYPE(CPFHeader, t_CPFHeader, CPFHeader);

        void t_CPFHeader::install(PyObject *module)
        {
          installType(&PY_TYPE(CPFHeader), &PY_TYPE_DEF(CPFHeader), module, "CPFHeader", 0);
        }

        void t_CPFHeader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFHeader), "class_", make_descriptor(CPFHeader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFHeader), "wrapfn_", make_descriptor(t_CPFHeader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFHeader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPFHeader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPFHeader::initializeClass, 1)))
            return NULL;
          return t_CPFHeader::wrap_Object(CPFHeader(((t_CPFHeader *) arg)->object.this$));
        }
        static PyObject *t_CPFHeader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPFHeader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPFHeader_init_(t_CPFHeader *self, PyObject *args, PyObject *kwds)
        {
          CPFHeader object((jobject) NULL);

          INT_CALL(object = CPFHeader());
          self->object = object;

          return 0;
        }

        static PyObject *t_CPFHeader_getCenterOfMassOffset(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getCenterOfMassOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getPrf(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPrf());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getRefFrame(t_CPFHeader *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_CPFHeader_getRefFrameId(t_CPFHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getRefFrameId());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPFHeader_getRotationalAngleType(t_CPFHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getRotationalAngleType());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPFHeader_getSource(t_CPFHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSource());
          return j2p(result);
        }

        static PyObject *t_CPFHeader_getStep(t_CPFHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getStep());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPFHeader_getSubDailySequenceNumber(t_CPFHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSubDailySequenceNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPFHeader_getTranspClkRef(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspClkRef());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getTranspOscDrift(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspOscDrift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getTranspTransmitDelay(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspTransmitDelay());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_getTranspUtcOffset(t_CPFHeader *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTranspUtcOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPFHeader_isCenterOfMassCorrectionApplied(t_CPFHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCenterOfMassCorrectionApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CPFHeader_isCompatibleWithTIVs(t_CPFHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCompatibleWithTIVs());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CPFHeader_setCenterOfMassOffset(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setCenterOfMassOffset(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setCenterOfMassOffset", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setIsCenterOfMassCorrectionApplied(t_CPFHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsCenterOfMassCorrectionApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsCenterOfMassCorrectionApplied", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setIsCompatibleWithTIVs(t_CPFHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsCompatibleWithTIVs(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsCompatibleWithTIVs", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setPrf(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPrf(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPrf", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setRefFrame(t_CPFHeader *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setRefFrame(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setRefFrame", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setRefFrameId(t_CPFHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setRefFrameId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setRefFrameId", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setRotationalAngleType(t_CPFHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setRotationalAngleType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setRotationalAngleType", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setSource(t_CPFHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSource(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSource", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setStep(t_CPFHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStep", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setSubDailySequenceNumber(t_CPFHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSubDailySequenceNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSubDailySequenceNumber", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setTranspClkRef(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspClkRef(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspClkRef", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setTranspOscDrift(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspOscDrift(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspOscDrift", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setTranspTransmitDelay(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspTransmitDelay(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspTransmitDelay", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_setTranspUtcOffset(t_CPFHeader *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTranspUtcOffset(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTranspUtcOffset", arg);
          return NULL;
        }

        static PyObject *t_CPFHeader_get__centerOfMassCorrectionApplied(t_CPFHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCenterOfMassCorrectionApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CPFHeader_get__centerOfMassOffset(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getCenterOfMassOffset());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__centerOfMassOffset(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setCenterOfMassOffset(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "centerOfMassOffset", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__compatibleWithTIVs(t_CPFHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCompatibleWithTIVs());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CPFHeader_get__prf(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPrf());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__prf(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPrf(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "prf", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__refFrame(t_CPFHeader *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
        static int t_CPFHeader_set__refFrame(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &value))
            {
              INT_CALL(self->object.setRefFrame(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "refFrame", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__refFrameId(t_CPFHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getRefFrameId());
          return PyLong_FromLong((long) value);
        }
        static int t_CPFHeader_set__refFrameId(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setRefFrameId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "refFrameId", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__rotationalAngleType(t_CPFHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getRotationalAngleType());
          return PyLong_FromLong((long) value);
        }
        static int t_CPFHeader_set__rotationalAngleType(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setRotationalAngleType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "rotationalAngleType", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__source(t_CPFHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSource());
          return j2p(value);
        }
        static int t_CPFHeader_set__source(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSource(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "source", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__step(t_CPFHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getStep());
          return PyLong_FromLong((long) value);
        }
        static int t_CPFHeader_set__step(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setStep(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "step", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__subDailySequenceNumber(t_CPFHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSubDailySequenceNumber());
          return PyLong_FromLong((long) value);
        }
        static int t_CPFHeader_set__subDailySequenceNumber(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSubDailySequenceNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "subDailySequenceNumber", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__transpClkRef(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspClkRef());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__transpClkRef(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspClkRef(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpClkRef", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__transpOscDrift(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspOscDrift());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__transpOscDrift(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspOscDrift(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpOscDrift", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__transpTransmitDelay(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspTransmitDelay());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__transpTransmitDelay(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspTransmitDelay(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpTransmitDelay", arg);
          return -1;
        }

        static PyObject *t_CPFHeader_get__transpUtcOffset(t_CPFHeader *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTranspUtcOffset());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CPFHeader_set__transpUtcOffset(t_CPFHeader *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTranspUtcOffset(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transpUtcOffset", arg);
          return -1;
        }
      }
    }
  }
}
