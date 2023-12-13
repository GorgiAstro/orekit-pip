#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventEnablingPredicateFilter.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldEnablingPredicate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventEnablingPredicateFilter::class$ = NULL;
        jmethodID *FieldEventEnablingPredicateFilter::mids$ = NULL;
        bool FieldEventEnablingPredicateFilter::live$ = false;

        jclass FieldEventEnablingPredicateFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventEnablingPredicateFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d4e28ddd38f6c1a8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/events/FieldEnablingPredicate;)V");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_e78af9d734a5fbe1] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_ea597dbd46e47ae8] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldEventEnablingPredicateFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventEnablingPredicateFilter::FieldEventEnablingPredicateFilter(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::propagation::events::FieldEnablingPredicate & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_d4e28ddd38f6c1a8, a0.this$, a1.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEventEnablingPredicateFilter::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventEnablingPredicateFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_e78af9d734a5fbe1]));
        }

        void FieldEventEnablingPredicateFilter::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventEnablingPredicateFilter_of_(t_FieldEventEnablingPredicateFilter *self, PyObject *args);
        static int t_FieldEventEnablingPredicateFilter_init_(t_FieldEventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventEnablingPredicateFilter_g(t_FieldEventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_FieldEventEnablingPredicateFilter_getDetector(t_FieldEventEnablingPredicateFilter *self);
        static PyObject *t_FieldEventEnablingPredicateFilter_init(t_FieldEventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_FieldEventEnablingPredicateFilter_get__detector(t_FieldEventEnablingPredicateFilter *self, void *data);
        static PyObject *t_FieldEventEnablingPredicateFilter_get__parameters_(t_FieldEventEnablingPredicateFilter *self, void *data);
        static PyGetSetDef t_FieldEventEnablingPredicateFilter__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventEnablingPredicateFilter, detector),
          DECLARE_GET_FIELD(t_FieldEventEnablingPredicateFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventEnablingPredicateFilter__methods_[] = {
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventEnablingPredicateFilter)[] = {
          { Py_tp_methods, t_FieldEventEnablingPredicateFilter__methods_ },
          { Py_tp_init, (void *) t_FieldEventEnablingPredicateFilter_init_ },
          { Py_tp_getset, t_FieldEventEnablingPredicateFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventEnablingPredicateFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldEventEnablingPredicateFilter, t_FieldEventEnablingPredicateFilter, FieldEventEnablingPredicateFilter);
        PyObject *t_FieldEventEnablingPredicateFilter::wrap_Object(const FieldEventEnablingPredicateFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventEnablingPredicateFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventEnablingPredicateFilter *self = (t_FieldEventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventEnablingPredicateFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventEnablingPredicateFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventEnablingPredicateFilter *self = (t_FieldEventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventEnablingPredicateFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventEnablingPredicateFilter), &PY_TYPE_DEF(FieldEventEnablingPredicateFilter), module, "FieldEventEnablingPredicateFilter", 0);
        }

        void t_FieldEventEnablingPredicateFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventEnablingPredicateFilter), "class_", make_descriptor(FieldEventEnablingPredicateFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventEnablingPredicateFilter), "wrapfn_", make_descriptor(t_FieldEventEnablingPredicateFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventEnablingPredicateFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventEnablingPredicateFilter::initializeClass, 1)))
            return NULL;
          return t_FieldEventEnablingPredicateFilter::wrap_Object(FieldEventEnablingPredicateFilter(((t_FieldEventEnablingPredicateFilter *) arg)->object.this$));
        }
        static PyObject *t_FieldEventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventEnablingPredicateFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_of_(t_FieldEventEnablingPredicateFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventEnablingPredicateFilter_init_(t_FieldEventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldEnablingPredicate a1((jobject) NULL);
          PyTypeObject **p1;
          FieldEventEnablingPredicateFilter object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::propagation::events::FieldEnablingPredicate::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEnablingPredicate::parameters_))
          {
            INT_CALL(object = FieldEventEnablingPredicateFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_g(t_FieldEventEnablingPredicateFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEventEnablingPredicateFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_getDetector(t_FieldEventEnablingPredicateFilter *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_init(t_FieldEventEnablingPredicateFilter *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldEventEnablingPredicateFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldEventEnablingPredicateFilter_get__parameters_(t_FieldEventEnablingPredicateFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_get__detector(t_FieldEventEnablingPredicateFilter *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathUtils.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/MathUtils$FieldSumAndResidual.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/util/MathUtils$SumAndResidual.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathUtils::class$ = NULL;
      jmethodID *MathUtils::mids$ = NULL;
      bool MathUtils::live$ = false;
      jdouble MathUtils::PI_SQUARED = (jdouble) 0;
      jdouble MathUtils::SEMI_PI = (jdouble) 0;
      jdouble MathUtils::TWO_PI = (jdouble) 0;

      jclass MathUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_checkDimension_3313c75e3e16c428] = env->getStaticMethodID(cls, "checkDimension", "(II)V");
          mids$[mid_checkFinite_ab69da052b88f50c] = env->getStaticMethodID(cls, "checkFinite", "([D)V");
          mids$[mid_checkFinite_8ba9fe7a847cecad] = env->getStaticMethodID(cls, "checkFinite", "(D)V");
          mids$[mid_checkNotNull_55f3c894852c27a3] = env->getStaticMethodID(cls, "checkNotNull", "(Ljava/lang/Object;)V");
          mids$[mid_checkNotNull_b40ae6e2feb49504] = env->getStaticMethodID(cls, "checkNotNull", "(Ljava/lang/Object;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_checkRangeInclusive_b5167f35b2521627] = env->getStaticMethodID(cls, "checkRangeInclusive", "(DDD)V");
          mids$[mid_checkRangeInclusive_84e3a5649e949acb] = env->getStaticMethodID(cls, "checkRangeInclusive", "(JJJ)V");
          mids$[mid_copySign_75b669519a90ffd0] = env->getStaticMethodID(cls, "copySign", "(BB)B");
          mids$[mid_copySign_92ecd94558bf0c68] = env->getStaticMethodID(cls, "copySign", "(II)I");
          mids$[mid_copySign_8f345e4204401ff5] = env->getStaticMethodID(cls, "copySign", "(JJ)J");
          mids$[mid_copySign_7ef7cc415580895c] = env->getStaticMethodID(cls, "copySign", "(SS)S");
          mids$[mid_equals_cd8da52a7e84190c] = env->getStaticMethodID(cls, "equals", "(DD)Z");
          mids$[mid_hash_f4eedf29a683816e] = env->getStaticMethodID(cls, "hash", "([D)I");
          mids$[mid_hash_2af4736545087009] = env->getStaticMethodID(cls, "hash", "(D)I");
          mids$[mid_max_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "max", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_min_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "min", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_normalizeAngle_99e3200dafc19573] = env->getStaticMethodID(cls, "normalizeAngle", "(DD)D");
          mids$[mid_normalizeAngle_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "normalizeAngle", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_reduce_f804f816b79164cb] = env->getStaticMethodID(cls, "reduce", "(DDD)D");
          mids$[mid_twoSum_4115efd6b05d8036] = env->getStaticMethodID(cls, "twoSum", "(DD)Lorg/hipparchus/util/MathUtils$SumAndResidual;");
          mids$[mid_twoSum_1d2a4451bfe8222b] = env->getStaticMethodID(cls, "twoSum", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/util/MathUtils$FieldSumAndResidual;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          PI_SQUARED = env->getStaticDoubleField(cls, "PI_SQUARED");
          SEMI_PI = env->getStaticDoubleField(cls, "SEMI_PI");
          TWO_PI = env->getStaticDoubleField(cls, "TWO_PI");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void MathUtils::checkDimension(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkDimension_3313c75e3e16c428], a0, a1);
      }

      void MathUtils::checkFinite(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkFinite_ab69da052b88f50c], a0.this$);
      }

      void MathUtils::checkFinite(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkFinite_8ba9fe7a847cecad], a0);
      }

      void MathUtils::checkNotNull(const ::java::lang::Object & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNotNull_55f3c894852c27a3], a0.this$);
      }

      void MathUtils::checkNotNull(const ::java::lang::Object & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNotNull_b40ae6e2feb49504], a0.this$, a1.this$, a2.this$);
      }

      void MathUtils::checkRangeInclusive(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRangeInclusive_b5167f35b2521627], a0, a1, a2);
      }

      void MathUtils::checkRangeInclusive(jlong a0, jlong a1, jlong a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRangeInclusive_84e3a5649e949acb], a0, a1, a2);
      }

      jbyte MathUtils::copySign(jbyte a0, jbyte a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticByteMethod(cls, mids$[mid_copySign_75b669519a90ffd0], a0, a1);
      }

      jint MathUtils::copySign(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_copySign_92ecd94558bf0c68], a0, a1);
      }

      jlong MathUtils::copySign(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_copySign_8f345e4204401ff5], a0, a1);
      }

      jshort MathUtils::copySign(jshort a0, jshort a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticShortMethod(cls, mids$[mid_copySign_7ef7cc415580895c], a0, a1);
      }

      jboolean MathUtils::equals(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_cd8da52a7e84190c], a0, a1);
      }

      jint MathUtils::hash(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_hash_f4eedf29a683816e], a0.this$);
      }

      jint MathUtils::hash(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_hash_2af4736545087009], a0);
      }

      ::org::hipparchus::CalculusFieldElement MathUtils::max$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_max_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement MathUtils::min$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_min_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      jdouble MathUtils::normalizeAngle(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_normalizeAngle_99e3200dafc19573], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement MathUtils::normalizeAngle(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_normalizeAngle_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      jdouble MathUtils::reduce(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_reduce_f804f816b79164cb], a0, a1, a2);
      }

      ::org::hipparchus::util::MathUtils$SumAndResidual MathUtils::twoSum(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::MathUtils$SumAndResidual(env->callStaticObjectMethod(cls, mids$[mid_twoSum_4115efd6b05d8036], a0, a1));
      }

      ::org::hipparchus::util::MathUtils$FieldSumAndResidual MathUtils::twoSum(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::MathUtils$FieldSumAndResidual(env->callStaticObjectMethod(cls, mids$[mid_twoSum_1d2a4451bfe8222b], a0.this$, a1.this$));
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
      static PyObject *t_MathUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils_checkDimension(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_checkFinite(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_checkNotNull(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_checkRangeInclusive(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_copySign(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_equals(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_hash(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_max(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_min(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_normalizeAngle(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_reduce(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_twoSum(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_MathUtils__methods_[] = {
        DECLARE_METHOD(t_MathUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkDimension, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkFinite, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkNotNull, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkRangeInclusive, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, copySign, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, equals, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, hash, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, max, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, min, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, normalizeAngle, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, reduce, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, twoSum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathUtils)[] = {
        { Py_tp_methods, t_MathUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathUtils, t_MathUtils, MathUtils);

      void t_MathUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(MathUtils), &PY_TYPE_DEF(MathUtils), module, "MathUtils", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "FieldSumAndResidual", make_descriptor(&PY_TYPE_DEF(MathUtils$FieldSumAndResidual)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "SumAndResidual", make_descriptor(&PY_TYPE_DEF(MathUtils$SumAndResidual)));
      }

      void t_MathUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "class_", make_descriptor(MathUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "wrapfn_", make_descriptor(t_MathUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(MathUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "PI_SQUARED", make_descriptor(MathUtils::PI_SQUARED));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "SEMI_PI", make_descriptor(MathUtils::SEMI_PI));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "TWO_PI", make_descriptor(MathUtils::TWO_PI));
      }

      static PyObject *t_MathUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathUtils::initializeClass, 1)))
          return NULL;
        return t_MathUtils::wrap_Object(MathUtils(((t_MathUtils *) arg)->object.this$));
      }
      static PyObject *t_MathUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathUtils_checkDimension(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::MathUtils::checkDimension(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkDimension", args);
        return NULL;
      }

      static PyObject *t_MathUtils_checkFinite(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkFinite(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkFinite(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkFinite", args);
        return NULL;
      }

      static PyObject *t_MathUtils_checkNotNull(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::Object a0((jobject) NULL);

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkNotNull(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            ::java::lang::Object a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);

            if (!parseArgs(args, "ok[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkNotNull(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkNotNull", args);
        return NULL;
      }

      static PyObject *t_MathUtils_checkRangeInclusive(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkRangeInclusive(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong a2;

            if (!parseArgs(args, "JJJ", &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkRangeInclusive(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkRangeInclusive", args);
        return NULL;
      }

      static PyObject *t_MathUtils_copySign(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jbyte a0;
            jbyte a1;
            jbyte result;

            if (!parseArgs(args, "BB", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jshort a0;
            jshort a1;
            jshort result;

            if (!parseArgs(args, "SS", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "copySign", args);
        return NULL;
      }

      static PyObject *t_MathUtils_equals(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::equals(a0, a1));
          Py_RETURN_BOOL(result);
        }

        return callSuper(type, "equals", args, 2);
      }

      static PyObject *t_MathUtils_hash(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::hash(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jdouble a0;
            jint result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::hash(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "hash", args);
        return NULL;
      }

      static PyObject *t_MathUtils_max(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::max$(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "max", args);
        return NULL;
      }

      static PyObject *t_MathUtils_min(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::min$(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "min", args);
        return NULL;
      }

      static PyObject *t_MathUtils_normalizeAngle(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::normalizeAngle(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::normalizeAngle(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "normalizeAngle", args);
        return NULL;
      }

      static PyObject *t_MathUtils_reduce(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::reduce(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "reduce", args);
        return NULL;
      }

      static PyObject *t_MathUtils_twoSum(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::util::MathUtils$SumAndResidual result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::twoSum(a0, a1));
              return ::org::hipparchus::util::t_MathUtils$SumAndResidual::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::util::MathUtils$FieldSumAndResidual result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::twoSum(a0, a1));
              return ::org::hipparchus::util::t_MathUtils$FieldSumAndResidual::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "twoSum", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldUnivariateMatrixFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldUnivariateMatrixFunction::class$ = NULL;
      jmethodID *FieldUnivariateMatrixFunction::mids$ = NULL;
      bool FieldUnivariateMatrixFunction::live$ = false;

      jclass FieldUnivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldUnivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldUnivariateMatrixFunction_304724a2801158af] = env->getMethodID(cls, "toCalculusFieldUnivariateMatrixFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldUnivariateMatrixFunction;");
          mids$[mid_value_c1fd585c814bcbf4] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldUnivariateMatrixFunction FieldUnivariateMatrixFunction::toCalculusFieldUnivariateMatrixFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldUnivariateMatrixFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldUnivariateMatrixFunction_304724a2801158af], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldUnivariateMatrixFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_c1fd585c814bcbf4], a0.this$));
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
      static PyObject *t_FieldUnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateMatrixFunction_toCalculusFieldUnivariateMatrixFunction(t_FieldUnivariateMatrixFunction *self, PyObject *arg);
      static PyObject *t_FieldUnivariateMatrixFunction_value(t_FieldUnivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_FieldUnivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, toCalculusFieldUnivariateMatrixFunction, METH_O),
        DECLARE_METHOD(t_FieldUnivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateMatrixFunction)[] = {
        { Py_tp_methods, t_FieldUnivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldUnivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldUnivariateMatrixFunction, t_FieldUnivariateMatrixFunction, FieldUnivariateMatrixFunction);

      void t_FieldUnivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldUnivariateMatrixFunction), &PY_TYPE_DEF(FieldUnivariateMatrixFunction), module, "FieldUnivariateMatrixFunction", 0);
      }

      void t_FieldUnivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateMatrixFunction), "class_", make_descriptor(FieldUnivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateMatrixFunction), "wrapfn_", make_descriptor(t_FieldUnivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldUnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldUnivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_FieldUnivariateMatrixFunction::wrap_Object(FieldUnivariateMatrixFunction(((t_FieldUnivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldUnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldUnivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldUnivariateMatrixFunction_toCalculusFieldUnivariateMatrixFunction(t_FieldUnivariateMatrixFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldUnivariateMatrixFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldUnivariateMatrixFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldUnivariateMatrixFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldUnivariateMatrixFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldUnivariateMatrixFunction_value(t_FieldUnivariateMatrixFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
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
#include "org/orekit/estimation/leastsquares/BatchLSEstimator.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/util/Map.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/estimation/leastsquares/BatchLSObserver.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *BatchLSEstimator::class$ = NULL;
        jmethodID *BatchLSEstimator::mids$ = NULL;
        bool BatchLSEstimator::live$ = false;

        jclass BatchLSEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/BatchLSEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4ea528b84c668043] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer;[Lorg/orekit/propagation/conversion/PropagatorBuilder;)V");
            mids$[mid_addMeasurement_1640bf51befb0c77] = env->getMethodID(cls, "addMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
            mids$[mid_estimate_17493e4ff0ba8a7f] = env->getMethodID(cls, "estimate", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvaluationsCount_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluationsCount", "()I");
            mids$[mid_getIterationsCount_55546ef6a647f39b] = env->getMethodID(cls, "getIterationsCount", "()I");
            mids$[mid_getLastEstimations_810bed48fafb0b9a] = env->getMethodID(cls, "getLastEstimations", "()Ljava/util/Map;");
            mids$[mid_getMeasurementsParametersDrivers_f4ab92625193d439] = env->getMethodID(cls, "getMeasurementsParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getOptimum_ae37d9c1ca8671a9] = env->getMethodID(cls, "getOptimum", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
            mids$[mid_getOrbitalParametersDrivers_f4ab92625193d439] = env->getMethodID(cls, "getOrbitalParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalCovariances_f5dd9d6021dc9dae] = env->getMethodID(cls, "getPhysicalCovariances", "(D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPropagatorParametersDrivers_f4ab92625193d439] = env->getMethodID(cls, "getPropagatorParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_setConvergenceChecker_faeab0ed0f5e2304] = env->getMethodID(cls, "setConvergenceChecker", "(Lorg/hipparchus/optim/ConvergenceChecker;)V");
            mids$[mid_setMaxEvaluations_44ed599e93e8a30c] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");
            mids$[mid_setMaxIterations_44ed599e93e8a30c] = env->getMethodID(cls, "setMaxIterations", "(I)V");
            mids$[mid_setObserver_656e84af1aeac1c9] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/leastsquares/BatchLSObserver;)V");
            mids$[mid_setParametersConvergenceThreshold_8ba9fe7a847cecad] = env->getMethodID(cls, "setParametersConvergenceThreshold", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BatchLSEstimator::BatchLSEstimator(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer & a0, const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ea528b84c668043, a0.this$, a1.this$)) {}

        void BatchLSEstimator::addMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMeasurement_1640bf51befb0c77], a0.this$);
        }

        JArray< ::org::orekit::propagation::Propagator > BatchLSEstimator::estimate() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_estimate_17493e4ff0ba8a7f]));
        }

        jint BatchLSEstimator::getEvaluationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluationsCount_55546ef6a647f39b]);
        }

        jint BatchLSEstimator::getIterationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterationsCount_55546ef6a647f39b]);
        }

        ::java::util::Map BatchLSEstimator::getLastEstimations() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getLastEstimations_810bed48fafb0b9a]));
        }

        ::org::orekit::utils::ParameterDriversList BatchLSEstimator::getMeasurementsParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getMeasurementsParametersDrivers_f4ab92625193d439], a0));
        }

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum BatchLSEstimator::getOptimum() const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_getOptimum_ae37d9c1ca8671a9]));
        }

        ::org::orekit::utils::ParameterDriversList BatchLSEstimator::getOrbitalParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_f4ab92625193d439], a0));
        }

        ::org::hipparchus::linear::RealMatrix BatchLSEstimator::getPhysicalCovariances(jdouble a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalCovariances_f5dd9d6021dc9dae], a0));
        }

        ::org::orekit::utils::ParameterDriversList BatchLSEstimator::getPropagatorParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagatorParametersDrivers_f4ab92625193d439], a0));
        }

        void BatchLSEstimator::setConvergenceChecker(const ::org::hipparchus::optim::ConvergenceChecker & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setConvergenceChecker_faeab0ed0f5e2304], a0.this$);
        }

        void BatchLSEstimator::setMaxEvaluations(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_44ed599e93e8a30c], a0);
        }

        void BatchLSEstimator::setMaxIterations(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxIterations_44ed599e93e8a30c], a0);
        }

        void BatchLSEstimator::setObserver(const ::org::orekit::estimation::leastsquares::BatchLSObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_656e84af1aeac1c9], a0.this$);
        }

        void BatchLSEstimator::setParametersConvergenceThreshold(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setParametersConvergenceThreshold_8ba9fe7a847cecad], a0);
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
        static PyObject *t_BatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BatchLSEstimator_init_(t_BatchLSEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BatchLSEstimator_addMeasurement(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_estimate(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getEvaluationsCount(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getIterationsCount(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getLastEstimations(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getMeasurementsParametersDrivers(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_getOptimum(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getOrbitalParametersDrivers(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_getPhysicalCovariances(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_getPropagatorParametersDrivers(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setConvergenceChecker(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setMaxEvaluations(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setMaxIterations(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setObserver(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setParametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg);
        static int t_BatchLSEstimator_set__convergenceChecker(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static PyObject *t_BatchLSEstimator_get__evaluationsCount(t_BatchLSEstimator *self, void *data);
        static PyObject *t_BatchLSEstimator_get__iterationsCount(t_BatchLSEstimator *self, void *data);
        static PyObject *t_BatchLSEstimator_get__lastEstimations(t_BatchLSEstimator *self, void *data);
        static int t_BatchLSEstimator_set__maxEvaluations(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static int t_BatchLSEstimator_set__maxIterations(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static int t_BatchLSEstimator_set__observer(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static PyObject *t_BatchLSEstimator_get__optimum(t_BatchLSEstimator *self, void *data);
        static int t_BatchLSEstimator_set__parametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_BatchLSEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_BatchLSEstimator, convergenceChecker),
          DECLARE_GET_FIELD(t_BatchLSEstimator, evaluationsCount),
          DECLARE_GET_FIELD(t_BatchLSEstimator, iterationsCount),
          DECLARE_GET_FIELD(t_BatchLSEstimator, lastEstimations),
          DECLARE_SET_FIELD(t_BatchLSEstimator, maxEvaluations),
          DECLARE_SET_FIELD(t_BatchLSEstimator, maxIterations),
          DECLARE_SET_FIELD(t_BatchLSEstimator, observer),
          DECLARE_GET_FIELD(t_BatchLSEstimator, optimum),
          DECLARE_SET_FIELD(t_BatchLSEstimator, parametersConvergenceThreshold),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BatchLSEstimator__methods_[] = {
          DECLARE_METHOD(t_BatchLSEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSEstimator, addMeasurement, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, estimate, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getEvaluationsCount, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getIterationsCount, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getLastEstimations, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getMeasurementsParametersDrivers, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, getOptimum, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getOrbitalParametersDrivers, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, getPhysicalCovariances, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, getPropagatorParametersDrivers, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setConvergenceChecker, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setMaxEvaluations, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setMaxIterations, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setObserver, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setParametersConvergenceThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BatchLSEstimator)[] = {
          { Py_tp_methods, t_BatchLSEstimator__methods_ },
          { Py_tp_init, (void *) t_BatchLSEstimator_init_ },
          { Py_tp_getset, t_BatchLSEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BatchLSEstimator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BatchLSEstimator, t_BatchLSEstimator, BatchLSEstimator);

        void t_BatchLSEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(BatchLSEstimator), &PY_TYPE_DEF(BatchLSEstimator), module, "BatchLSEstimator", 0);
        }

        void t_BatchLSEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSEstimator), "class_", make_descriptor(BatchLSEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSEstimator), "wrapfn_", make_descriptor(t_BatchLSEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BatchLSEstimator::initializeClass, 1)))
            return NULL;
          return t_BatchLSEstimator::wrap_Object(BatchLSEstimator(((t_BatchLSEstimator *) arg)->object.this$));
        }
        static PyObject *t_BatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BatchLSEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BatchLSEstimator_init_(t_BatchLSEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer a0((jobject) NULL);
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a1((jobject) NULL);
          BatchLSEstimator object((jobject) NULL);

          if (!parseArgs(args, "k[k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer::initializeClass, ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1))
          {
            INT_CALL(object = BatchLSEstimator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BatchLSEstimator_addMeasurement(t_BatchLSEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
          {
            OBJ_CALL(self->object.addMeasurement(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMeasurement", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_estimate(t_BatchLSEstimator *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimate());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_BatchLSEstimator_getEvaluationsCount(t_BatchLSEstimator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluationsCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BatchLSEstimator_getIterationsCount(t_BatchLSEstimator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterationsCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BatchLSEstimator_getLastEstimations(t_BatchLSEstimator *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getLastEstimations());
          return ::java::util::t_Map::wrap_Object(result);
        }

        static PyObject *t_BatchLSEstimator_getMeasurementsParametersDrivers(t_BatchLSEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getMeasurementsParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getMeasurementsParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_getOptimum(t_BatchLSEstimator *self)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);
          OBJ_CALL(result = self->object.getOptimum());
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
        }

        static PyObject *t_BatchLSEstimator_getOrbitalParametersDrivers(t_BatchLSEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getOrbitalParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getOrbitalParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_getPhysicalCovariances(t_BatchLSEstimator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getPhysicalCovariances(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPhysicalCovariances", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_getPropagatorParametersDrivers(t_BatchLSEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getPropagatorParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagatorParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setConvergenceChecker(t_BatchLSEstimator *self, PyObject *arg)
        {
          ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
          {
            OBJ_CALL(self->object.setConvergenceChecker(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setConvergenceChecker", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setMaxEvaluations(t_BatchLSEstimator *self, PyObject *arg)
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

        static PyObject *t_BatchLSEstimator_setMaxIterations(t_BatchLSEstimator *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setMaxIterations(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMaxIterations", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setObserver(t_BatchLSEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::leastsquares::BatchLSObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::leastsquares::BatchLSObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setParametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setParametersConvergenceThreshold(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setParametersConvergenceThreshold", arg);
          return NULL;
        }

        static int t_BatchLSEstimator_set__convergenceChecker(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &value))
            {
              INT_CALL(self->object.setConvergenceChecker(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "convergenceChecker", arg);
          return -1;
        }

        static PyObject *t_BatchLSEstimator_get__evaluationsCount(t_BatchLSEstimator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluationsCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BatchLSEstimator_get__iterationsCount(t_BatchLSEstimator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterationsCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BatchLSEstimator_get__lastEstimations(t_BatchLSEstimator *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getLastEstimations());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static int t_BatchLSEstimator_set__maxEvaluations(t_BatchLSEstimator *self, PyObject *arg, void *data)
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

        static int t_BatchLSEstimator_set__maxIterations(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setMaxIterations(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "maxIterations", arg);
          return -1;
        }

        static int t_BatchLSEstimator_set__observer(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::leastsquares::BatchLSObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::leastsquares::BatchLSObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }

        static PyObject *t_BatchLSEstimator_get__optimum(t_BatchLSEstimator *self, void *data)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum value((jobject) NULL);
          OBJ_CALL(value = self->object.getOptimum());
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(value);
        }

        static int t_BatchLSEstimator_set__parametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setParametersConvergenceThreshold(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "parametersConvergenceThreshold", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *IllegalArgumentException::class$ = NULL;
    jmethodID *IllegalArgumentException::mids$ = NULL;
    bool IllegalArgumentException::live$ = false;

    jclass IllegalArgumentException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/IllegalArgumentException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_c5d3549d4f245728] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_9d7a6ef9713b9df2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    IllegalArgumentException::IllegalArgumentException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    IllegalArgumentException::IllegalArgumentException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    IllegalArgumentException::IllegalArgumentException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_c5d3549d4f245728, a0.this$)) {}

    IllegalArgumentException::IllegalArgumentException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_9d7a6ef9713b9df2, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_IllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_IllegalArgumentException_init_(t_IllegalArgumentException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_IllegalArgumentException__methods_[] = {
      DECLARE_METHOD(t_IllegalArgumentException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IllegalArgumentException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(IllegalArgumentException)[] = {
      { Py_tp_methods, t_IllegalArgumentException__methods_ },
      { Py_tp_init, (void *) t_IllegalArgumentException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(IllegalArgumentException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(IllegalArgumentException, t_IllegalArgumentException, IllegalArgumentException);

    void t_IllegalArgumentException::install(PyObject *module)
    {
      installType(&PY_TYPE(IllegalArgumentException), &PY_TYPE_DEF(IllegalArgumentException), module, "IllegalArgumentException", 0);
    }

    void t_IllegalArgumentException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalArgumentException), "class_", make_descriptor(IllegalArgumentException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalArgumentException), "wrapfn_", make_descriptor(t_IllegalArgumentException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalArgumentException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_IllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, IllegalArgumentException::initializeClass, 1)))
        return NULL;
      return t_IllegalArgumentException::wrap_Object(IllegalArgumentException(((t_IllegalArgumentException *) arg)->object.this$));
    }
    static PyObject *t_IllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, IllegalArgumentException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_IllegalArgumentException_init_(t_IllegalArgumentException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          IllegalArgumentException object((jobject) NULL);

          INT_CALL(object = IllegalArgumentException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          IllegalArgumentException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = IllegalArgumentException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          IllegalArgumentException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = IllegalArgumentException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          IllegalArgumentException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = IllegalArgumentException(a0, a1));
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
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldODEStepEndHandler::class$ = NULL;
        jmethodID *FieldODEStepEndHandler::mids$ = NULL;
        bool FieldODEStepEndHandler::live$ = false;

        jclass FieldODEStepEndHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldODEStepEndHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init_55fdeef582303a99] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_resetState_209ef60d14a0b393] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/FieldODEState;");
            mids$[mid_stepEndOccurred_4f8991c4fe232e6e] = env->getMethodID(cls, "stepEndOccurred", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Z)Lorg/hipparchus/ode/events/Action;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldODEStepEndHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_55fdeef582303a99], a0.this$, a1.this$);
        }

        ::org::hipparchus::ode::FieldODEState FieldODEStepEndHandler::resetState(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::FieldODEState(env->callObjectMethod(this$, mids$[mid_resetState_209ef60d14a0b393], a0.this$));
        }

        ::org::hipparchus::ode::events::Action FieldODEStepEndHandler::stepEndOccurred(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, jboolean a1) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_stepEndOccurred_4f8991c4fe232e6e], a0.this$, a1));
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
        static PyObject *t_FieldODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepEndHandler_of_(t_FieldODEStepEndHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepEndHandler_init(t_FieldODEStepEndHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepEndHandler_resetState(t_FieldODEStepEndHandler *self, PyObject *arg);
        static PyObject *t_FieldODEStepEndHandler_stepEndOccurred(t_FieldODEStepEndHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepEndHandler_get__parameters_(t_FieldODEStepEndHandler *self, void *data);
        static PyGetSetDef t_FieldODEStepEndHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEStepEndHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEStepEndHandler__methods_[] = {
          DECLARE_METHOD(t_FieldODEStepEndHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStepEndHandler, resetState, METH_O),
          DECLARE_METHOD(t_FieldODEStepEndHandler, stepEndOccurred, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEStepEndHandler)[] = {
          { Py_tp_methods, t_FieldODEStepEndHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEStepEndHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEStepEndHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEStepEndHandler, t_FieldODEStepEndHandler, FieldODEStepEndHandler);
        PyObject *t_FieldODEStepEndHandler::wrap_Object(const FieldODEStepEndHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepEndHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepEndHandler *self = (t_FieldODEStepEndHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEStepEndHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepEndHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepEndHandler *self = (t_FieldODEStepEndHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEStepEndHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEStepEndHandler), &PY_TYPE_DEF(FieldODEStepEndHandler), module, "FieldODEStepEndHandler", 0);
        }

        void t_FieldODEStepEndHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepEndHandler), "class_", make_descriptor(FieldODEStepEndHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepEndHandler), "wrapfn_", make_descriptor(t_FieldODEStepEndHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepEndHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEStepEndHandler::initializeClass, 1)))
            return NULL;
          return t_FieldODEStepEndHandler::wrap_Object(FieldODEStepEndHandler(((t_FieldODEStepEndHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEStepEndHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEStepEndHandler_of_(t_FieldODEStepEndHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEStepEndHandler_init(t_FieldODEStepEndHandler *self, PyObject *args)
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

        static PyObject *t_FieldODEStepEndHandler_resetState(t_FieldODEStepEndHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.resetState(a0));
            return ::org::hipparchus::ode::t_FieldODEState::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "resetState", arg);
          return NULL;
        }

        static PyObject *t_FieldODEStepEndHandler_stepEndOccurred(t_FieldODEStepEndHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean a1;
          ::org::hipparchus::ode::events::Action result((jobject) NULL);

          if (!parseArgs(args, "KZ", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.stepEndOccurred(a0, a1));
            return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "stepEndOccurred", args);
          return NULL;
        }
        static PyObject *t_FieldODEStepEndHandler_get__parameters_(t_FieldODEStepEndHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmParser.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/tdm/Tdm.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmParser.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmParser::class$ = NULL;
            jmethodID *TdmParser::mids$ = NULL;
            bool TdmParser::live$ = false;

            jclass TdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_8e653df5aa37bdec] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/tdm/Tdm;");
                mids$[mid_finalizeData_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_5744c6bbf5e9d349] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/tdm/TdmHeader;");
                mids$[mid_inData_9ab94ac1dc23b105] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_reset_28163d47221b3cf7] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::files::ccsds::ndm::tdm::Tdm TdmParser::build() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::Tdm(env->callObjectMethod(this$, mids$[mid_build_8e653df5aa37bdec]));
            }

            jboolean TdmParser::finalizeData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeData_9ab94ac1dc23b105]);
            }

            jboolean TdmParser::finalizeHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_9ab94ac1dc23b105]);
            }

            jboolean TdmParser::finalizeMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_9ab94ac1dc23b105]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::TdmHeader TdmParser::getHeader() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::TdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_5744c6bbf5e9d349]));
            }

            jboolean TdmParser::inData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inData_9ab94ac1dc23b105]);
            }

            jboolean TdmParser::inHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inHeader_9ab94ac1dc23b105]);
            }

            jboolean TdmParser::inMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inMetadata_9ab94ac1dc23b105]);
            }

            jboolean TdmParser::prepareData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareData_9ab94ac1dc23b105]);
            }

            jboolean TdmParser::prepareHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareHeader_9ab94ac1dc23b105]);
            }

            jboolean TdmParser::prepareMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_9ab94ac1dc23b105]);
            }

            void TdmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_reset_28163d47221b3cf7], a0.this$);
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
            static PyObject *t_TdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmParser_of_(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_build(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_finalizeData(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_finalizeHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_finalizeMetadata(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_getHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_inData(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_inHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_inMetadata(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_prepareData(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_prepareHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_prepareMetadata(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_reset(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_get__header(t_TdmParser *self, void *data);
            static PyObject *t_TdmParser_get__parameters_(t_TdmParser *self, void *data);
            static PyGetSetDef t_TdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_TdmParser, header),
              DECLARE_GET_FIELD(t_TdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmParser__methods_[] = {
              DECLARE_METHOD(t_TdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, build, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, finalizeData, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, finalizeHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, finalizeMetadata, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, getHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, inData, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, inHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, inMetadata, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, prepareData, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, prepareHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, prepareMetadata, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, reset, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmParser)[] = {
              { Py_tp_methods, t_TdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(TdmParser, t_TdmParser, TdmParser);
            PyObject *t_TdmParser::wrap_Object(const TdmParser& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmParser *self = (t_TdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_TdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmParser *self = (t_TdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_TdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmParser), &PY_TYPE_DEF(TdmParser), module, "TdmParser", 0);
            }

            void t_TdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmParser), "class_", make_descriptor(TdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmParser), "wrapfn_", make_descriptor(t_TdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmParser::initializeClass, 1)))
                return NULL;
              return t_TdmParser::wrap_Object(TdmParser(((t_TdmParser *) arg)->object.this$));
            }
            static PyObject *t_TdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmParser_of_(t_TdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TdmParser_build(t_TdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::Tdm result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.build());
                return ::org::orekit::files::ccsds::ndm::tdm::t_Tdm::wrap_Object(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "build", args, 2);
            }

            static PyObject *t_TdmParser_finalizeData(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "finalizeData", args, 2);
            }

            static PyObject *t_TdmParser_finalizeHeader(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "finalizeHeader", args, 2);
            }

            static PyObject *t_TdmParser_finalizeMetadata(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "finalizeMetadata", args, 2);
            }

            static PyObject *t_TdmParser_getHeader(t_TdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmHeader result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::tdm::t_TdmHeader::wrap_Object(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "getHeader", args, 2);
            }

            static PyObject *t_TdmParser_inData(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "inData", args, 2);
            }

            static PyObject *t_TdmParser_inHeader(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "inHeader", args, 2);
            }

            static PyObject *t_TdmParser_inMetadata(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "inMetadata", args, 2);
            }

            static PyObject *t_TdmParser_prepareData(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "prepareData", args, 2);
            }

            static PyObject *t_TdmParser_prepareHeader(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "prepareHeader", args, 2);
            }

            static PyObject *t_TdmParser_prepareMetadata(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "prepareMetadata", args, 2);
            }

            static PyObject *t_TdmParser_reset(t_TdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
              {
                OBJ_CALL(self->object.reset(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "reset", args, 2);
            }
            static PyObject *t_TdmParser_get__parameters_(t_TdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_TdmParser_get__header(t_TdmParser *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmHeader value((jobject) NULL);
              OBJ_CALL(value = self->object.getHeader());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TdmHeader::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *PocMethodType::class$ = NULL;
          jmethodID *PocMethodType::mids$ = NULL;
          bool PocMethodType::live$ = false;
          PocMethodType *PocMethodType::AKELLAALFRIEND_2000 = NULL;
          PocMethodType *PocMethodType::ALFANO_2005 = NULL;
          PocMethodType *PocMethodType::ALFANO_MAX_PROBABILITY = NULL;
          PocMethodType *PocMethodType::ALFANO_PARAL_2007 = NULL;
          PocMethodType *PocMethodType::ALFANO_TUBES_2007 = NULL;
          PocMethodType *PocMethodType::ALFANO_VOXELS_2006 = NULL;
          PocMethodType *PocMethodType::ALFRIEND_1999 = NULL;
          PocMethodType *PocMethodType::CHAN_1997 = NULL;
          PocMethodType *PocMethodType::CHAN_2003 = NULL;
          PocMethodType *PocMethodType::FOSTER_1992 = NULL;
          PocMethodType *PocMethodType::MCKINLEY_2006 = NULL;
          PocMethodType *PocMethodType::PATERA_2001 = NULL;
          PocMethodType *PocMethodType::PATERA_2003 = NULL;
          PocMethodType *PocMethodType::PATERA_2005 = NULL;

          jclass PocMethodType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/PocMethodType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCCSDSName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCCSDSName", "()Ljava/lang/String;");
              mids$[mid_getMethodType_8397a286d982b383] = env->getMethodID(cls, "getMethodType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
              mids$[mid_valueOf_f1e8a83ff45730d8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/PocMethodType;");
              mids$[mid_values_427018704bdaaf43] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/PocMethodType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AKELLAALFRIEND_2000 = new PocMethodType(env->getStaticObjectField(cls, "AKELLAALFRIEND_2000", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_2005 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_2005", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_MAX_PROBABILITY = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_MAX_PROBABILITY", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_PARAL_2007 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_PARAL_2007", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_TUBES_2007 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_TUBES_2007", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_VOXELS_2006 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_VOXELS_2006", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFRIEND_1999 = new PocMethodType(env->getStaticObjectField(cls, "ALFRIEND_1999", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              CHAN_1997 = new PocMethodType(env->getStaticObjectField(cls, "CHAN_1997", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              CHAN_2003 = new PocMethodType(env->getStaticObjectField(cls, "CHAN_2003", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              FOSTER_1992 = new PocMethodType(env->getStaticObjectField(cls, "FOSTER_1992", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              MCKINLEY_2006 = new PocMethodType(env->getStaticObjectField(cls, "MCKINLEY_2006", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              PATERA_2001 = new PocMethodType(env->getStaticObjectField(cls, "PATERA_2001", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              PATERA_2003 = new PocMethodType(env->getStaticObjectField(cls, "PATERA_2003", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              PATERA_2005 = new PocMethodType(env->getStaticObjectField(cls, "PATERA_2005", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String PocMethodType::getCCSDSName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCCSDSName_1c1fa1e935d6cdcf]));
          }

          ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType PocMethodType::getMethodType() const
          {
            return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getMethodType_8397a286d982b383]));
          }

          PocMethodType PocMethodType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return PocMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f1e8a83ff45730d8], a0.this$));
          }

          JArray< PocMethodType > PocMethodType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< PocMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_427018704bdaaf43]));
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
          static PyObject *t_PocMethodType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodType_of_(t_PocMethodType *self, PyObject *args);
          static PyObject *t_PocMethodType_getCCSDSName(t_PocMethodType *self);
          static PyObject *t_PocMethodType_getMethodType(t_PocMethodType *self);
          static PyObject *t_PocMethodType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_PocMethodType_values(PyTypeObject *type);
          static PyObject *t_PocMethodType_get__cCSDSName(t_PocMethodType *self, void *data);
          static PyObject *t_PocMethodType_get__methodType(t_PocMethodType *self, void *data);
          static PyObject *t_PocMethodType_get__parameters_(t_PocMethodType *self, void *data);
          static PyGetSetDef t_PocMethodType__fields_[] = {
            DECLARE_GET_FIELD(t_PocMethodType, cCSDSName),
            DECLARE_GET_FIELD(t_PocMethodType, methodType),
            DECLARE_GET_FIELD(t_PocMethodType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PocMethodType__methods_[] = {
            DECLARE_METHOD(t_PocMethodType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodType, of_, METH_VARARGS),
            DECLARE_METHOD(t_PocMethodType, getCCSDSName, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodType, getMethodType, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_PocMethodType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PocMethodType)[] = {
            { Py_tp_methods, t_PocMethodType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PocMethodType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PocMethodType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(PocMethodType, t_PocMethodType, PocMethodType);
          PyObject *t_PocMethodType::wrap_Object(const PocMethodType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PocMethodType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PocMethodType *self = (t_PocMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PocMethodType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PocMethodType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PocMethodType *self = (t_PocMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PocMethodType::install(PyObject *module)
          {
            installType(&PY_TYPE(PocMethodType), &PY_TYPE_DEF(PocMethodType), module, "PocMethodType", 0);
          }

          void t_PocMethodType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "class_", make_descriptor(PocMethodType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "wrapfn_", make_descriptor(t_PocMethodType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "boxfn_", make_descriptor(boxObject));
            env->getClass(PocMethodType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "AKELLAALFRIEND_2000", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::AKELLAALFRIEND_2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_2005", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_2005)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_MAX_PROBABILITY", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_MAX_PROBABILITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_PARAL_2007", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_PARAL_2007)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_TUBES_2007", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_TUBES_2007)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_VOXELS_2006", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_VOXELS_2006)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFRIEND_1999", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFRIEND_1999)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "CHAN_1997", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::CHAN_1997)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "CHAN_2003", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::CHAN_2003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "FOSTER_1992", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::FOSTER_1992)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "MCKINLEY_2006", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::MCKINLEY_2006)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "PATERA_2001", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::PATERA_2001)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "PATERA_2003", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::PATERA_2003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "PATERA_2005", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::PATERA_2005)));
          }

          static PyObject *t_PocMethodType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PocMethodType::initializeClass, 1)))
              return NULL;
            return t_PocMethodType::wrap_Object(PocMethodType(((t_PocMethodType *) arg)->object.this$));
          }
          static PyObject *t_PocMethodType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PocMethodType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PocMethodType_of_(t_PocMethodType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_PocMethodType_getCCSDSName(t_PocMethodType *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCCSDSName());
            return j2p(result);
          }

          static PyObject *t_PocMethodType_getMethodType(t_PocMethodType *self)
          {
            ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);
            OBJ_CALL(result = self->object.getMethodType());
            return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
          }

          static PyObject *t_PocMethodType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            PocMethodType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::PocMethodType::valueOf(a0));
              return t_PocMethodType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_PocMethodType_values(PyTypeObject *type)
          {
            JArray< PocMethodType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::PocMethodType::values());
            return JArray<jobject>(result.this$).wrap(t_PocMethodType::wrap_jobject);
          }
          static PyObject *t_PocMethodType_get__parameters_(t_PocMethodType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PocMethodType_get__cCSDSName(t_PocMethodType *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCCSDSName());
            return j2p(value);
          }

          static PyObject *t_PocMethodType_get__methodType(t_PocMethodType *self, void *data)
          {
            ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
            OBJ_CALL(value = self->object.getMethodType());
            return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PropagatorConverter.h"
#include "java/util/List.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PropagatorConverter::class$ = NULL;
        jmethodID *PropagatorConverter::mids$ = NULL;
        bool PropagatorConverter::live$ = false;

        jclass PropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_convert_1085fbc3099561ad] = env->getMethodID(cls, "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_ed49a95e057deeb1] = env->getMethodID(cls, "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_8c138e9dd275b235] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_439cb7b3f99fe6c0] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const JArray< ::java::lang::String > & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_1085fbc3099561ad], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::java::util::List & a0, jboolean a1, const ::java::util::List & a2) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_ed49a95e057deeb1], a0.this$, a1, a2.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const JArray< ::java::lang::String > & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_8c138e9dd275b235], a0.this$, a1, a2, a3.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorConverter::convert(const ::org::orekit::propagation::Propagator & a0, jdouble a1, jint a2, const ::java::util::List & a3) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_convert_439cb7b3f99fe6c0], a0.this$, a1, a2, a3.this$));
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
        static PyObject *t_PropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PropagatorConverter_convert(t_PropagatorConverter *self, PyObject *args);

        static PyMethodDef t_PropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_PropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PropagatorConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PropagatorConverter, convert, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PropagatorConverter)[] = {
          { Py_tp_methods, t_PropagatorConverter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PropagatorConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PropagatorConverter, t_PropagatorConverter, PropagatorConverter);

        void t_PropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PropagatorConverter), &PY_TYPE_DEF(PropagatorConverter), module, "PropagatorConverter", 0);
        }

        void t_PropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorConverter), "class_", make_descriptor(PropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorConverter), "wrapfn_", make_descriptor(t_PropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_PropagatorConverter::wrap_Object(PropagatorConverter(((t_PropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_PropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PropagatorConverter_convert(t_PropagatorConverter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              JArray< ::java::lang::String > a2((jobject) NULL);
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "KZ[s", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "KZK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::Propagator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              JArray< ::java::lang::String > a3((jobject) NULL);
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "kDI[s", ::org::orekit::propagation::Propagator::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::Propagator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              ::java::util::List a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::Propagator result((jobject) NULL);

              if (!parseArgs(args, "kDIK", ::org::orekit::propagation::Propagator::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.convert(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "convert", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/ILRSHeader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *ILRSHeader::class$ = NULL;
        jmethodID *ILRSHeader::mids$ = NULL;
        bool ILRSHeader::live$ = false;

        jclass ILRSHeader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/ILRSHeader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getEndEpoch_c325492395d89b24] = env->getMethodID(cls, "getEndEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getFormat_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getFormat", "()Ljava/lang/String;");
            mids$[mid_getIlrsSatelliteId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getIlrsSatelliteId", "()Ljava/lang/String;");
            mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getNoradId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getNoradId", "()Ljava/lang/String;");
            mids$[mid_getProductionEpoch_357436921b6db81c] = env->getMethodID(cls, "getProductionEpoch", "()Lorg/orekit/time/DateComponents;");
            mids$[mid_getProductionHour_55546ef6a647f39b] = env->getMethodID(cls, "getProductionHour", "()I");
            mids$[mid_getSequenceNumber_55546ef6a647f39b] = env->getMethodID(cls, "getSequenceNumber", "()I");
            mids$[mid_getSic_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSic", "()Ljava/lang/String;");
            mids$[mid_getStartEpoch_c325492395d89b24] = env->getMethodID(cls, "getStartEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getTargetClass_55546ef6a647f39b] = env->getMethodID(cls, "getTargetClass", "()I");
            mids$[mid_getTargetLocation_55546ef6a647f39b] = env->getMethodID(cls, "getTargetLocation", "()I");
            mids$[mid_getVersion_55546ef6a647f39b] = env->getMethodID(cls, "getVersion", "()I");
            mids$[mid_setEndEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setEndEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setFormat_734b91ac30d5f9b4] = env->getMethodID(cls, "setFormat", "(Ljava/lang/String;)V");
            mids$[mid_setIlrsSatelliteId_734b91ac30d5f9b4] = env->getMethodID(cls, "setIlrsSatelliteId", "(Ljava/lang/String;)V");
            mids$[mid_setName_734b91ac30d5f9b4] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
            mids$[mid_setNoradId_734b91ac30d5f9b4] = env->getMethodID(cls, "setNoradId", "(Ljava/lang/String;)V");
            mids$[mid_setProductionEpoch_a97e9138404c69cd] = env->getMethodID(cls, "setProductionEpoch", "(Lorg/orekit/time/DateComponents;)V");
            mids$[mid_setProductionHour_44ed599e93e8a30c] = env->getMethodID(cls, "setProductionHour", "(I)V");
            mids$[mid_setSequenceNumber_44ed599e93e8a30c] = env->getMethodID(cls, "setSequenceNumber", "(I)V");
            mids$[mid_setSic_734b91ac30d5f9b4] = env->getMethodID(cls, "setSic", "(Ljava/lang/String;)V");
            mids$[mid_setStartEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setStartEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setTargetClass_44ed599e93e8a30c] = env->getMethodID(cls, "setTargetClass", "(I)V");
            mids$[mid_setTargetLocation_44ed599e93e8a30c] = env->getMethodID(cls, "setTargetLocation", "(I)V");
            mids$[mid_setVersion_44ed599e93e8a30c] = env->getMethodID(cls, "setVersion", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ILRSHeader::ILRSHeader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::orekit::time::AbsoluteDate ILRSHeader::getEndEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndEpoch_c325492395d89b24]));
        }

        ::java::lang::String ILRSHeader::getFormat() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormat_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String ILRSHeader::getIlrsSatelliteId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIlrsSatelliteId_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String ILRSHeader::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String ILRSHeader::getNoradId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNoradId_1c1fa1e935d6cdcf]));
        }

        ::org::orekit::time::DateComponents ILRSHeader::getProductionEpoch() const
        {
          return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getProductionEpoch_357436921b6db81c]));
        }

        jint ILRSHeader::getProductionHour() const
        {
          return env->callIntMethod(this$, mids$[mid_getProductionHour_55546ef6a647f39b]);
        }

        jint ILRSHeader::getSequenceNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getSequenceNumber_55546ef6a647f39b]);
        }

        ::java::lang::String ILRSHeader::getSic() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSic_1c1fa1e935d6cdcf]));
        }

        ::org::orekit::time::AbsoluteDate ILRSHeader::getStartEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartEpoch_c325492395d89b24]));
        }

        jint ILRSHeader::getTargetClass() const
        {
          return env->callIntMethod(this$, mids$[mid_getTargetClass_55546ef6a647f39b]);
        }

        jint ILRSHeader::getTargetLocation() const
        {
          return env->callIntMethod(this$, mids$[mid_getTargetLocation_55546ef6a647f39b]);
        }

        jint ILRSHeader::getVersion() const
        {
          return env->callIntMethod(this$, mids$[mid_getVersion_55546ef6a647f39b]);
        }

        void ILRSHeader::setEndEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEndEpoch_02135a6ef25adb4b], a0.this$);
        }

        void ILRSHeader::setFormat(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFormat_734b91ac30d5f9b4], a0.this$);
        }

        void ILRSHeader::setIlrsSatelliteId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIlrsSatelliteId_734b91ac30d5f9b4], a0.this$);
        }

        void ILRSHeader::setName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setName_734b91ac30d5f9b4], a0.this$);
        }

        void ILRSHeader::setNoradId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNoradId_734b91ac30d5f9b4], a0.this$);
        }

        void ILRSHeader::setProductionEpoch(const ::org::orekit::time::DateComponents & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProductionEpoch_a97e9138404c69cd], a0.this$);
        }

        void ILRSHeader::setProductionHour(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProductionHour_44ed599e93e8a30c], a0);
        }

        void ILRSHeader::setSequenceNumber(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSequenceNumber_44ed599e93e8a30c], a0);
        }

        void ILRSHeader::setSic(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSic_734b91ac30d5f9b4], a0.this$);
        }

        void ILRSHeader::setStartEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStartEpoch_02135a6ef25adb4b], a0.this$);
        }

        void ILRSHeader::setTargetClass(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTargetClass_44ed599e93e8a30c], a0);
        }

        void ILRSHeader::setTargetLocation(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTargetLocation_44ed599e93e8a30c], a0);
        }

        void ILRSHeader::setVersion(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setVersion_44ed599e93e8a30c], a0);
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
        static PyObject *t_ILRSHeader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ILRSHeader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ILRSHeader_init_(t_ILRSHeader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ILRSHeader_getEndEpoch(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getFormat(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getIlrsSatelliteId(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getName(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getNoradId(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getProductionEpoch(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getProductionHour(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getSequenceNumber(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getSic(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getStartEpoch(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getTargetClass(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getTargetLocation(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_getVersion(t_ILRSHeader *self);
        static PyObject *t_ILRSHeader_setEndEpoch(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setFormat(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setIlrsSatelliteId(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setName(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setNoradId(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setProductionEpoch(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setProductionHour(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setSequenceNumber(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setSic(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setStartEpoch(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setTargetClass(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setTargetLocation(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_setVersion(t_ILRSHeader *self, PyObject *arg);
        static PyObject *t_ILRSHeader_get__endEpoch(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__endEpoch(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__format(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__format(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__ilrsSatelliteId(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__ilrsSatelliteId(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__name(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__name(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__noradId(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__noradId(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__productionEpoch(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__productionEpoch(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__productionHour(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__productionHour(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__sequenceNumber(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__sequenceNumber(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__sic(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__sic(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__startEpoch(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__startEpoch(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__targetClass(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__targetClass(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__targetLocation(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__targetLocation(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyObject *t_ILRSHeader_get__version(t_ILRSHeader *self, void *data);
        static int t_ILRSHeader_set__version(t_ILRSHeader *self, PyObject *arg, void *data);
        static PyGetSetDef t_ILRSHeader__fields_[] = {
          DECLARE_GETSET_FIELD(t_ILRSHeader, endEpoch),
          DECLARE_GETSET_FIELD(t_ILRSHeader, format),
          DECLARE_GETSET_FIELD(t_ILRSHeader, ilrsSatelliteId),
          DECLARE_GETSET_FIELD(t_ILRSHeader, name),
          DECLARE_GETSET_FIELD(t_ILRSHeader, noradId),
          DECLARE_GETSET_FIELD(t_ILRSHeader, productionEpoch),
          DECLARE_GETSET_FIELD(t_ILRSHeader, productionHour),
          DECLARE_GETSET_FIELD(t_ILRSHeader, sequenceNumber),
          DECLARE_GETSET_FIELD(t_ILRSHeader, sic),
          DECLARE_GETSET_FIELD(t_ILRSHeader, startEpoch),
          DECLARE_GETSET_FIELD(t_ILRSHeader, targetClass),
          DECLARE_GETSET_FIELD(t_ILRSHeader, targetLocation),
          DECLARE_GETSET_FIELD(t_ILRSHeader, version),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ILRSHeader__methods_[] = {
          DECLARE_METHOD(t_ILRSHeader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ILRSHeader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ILRSHeader, getEndEpoch, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getFormat, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getIlrsSatelliteId, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getName, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getNoradId, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getProductionEpoch, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getProductionHour, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getSequenceNumber, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getSic, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getStartEpoch, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getTargetClass, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getTargetLocation, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, getVersion, METH_NOARGS),
          DECLARE_METHOD(t_ILRSHeader, setEndEpoch, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setFormat, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setIlrsSatelliteId, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setName, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setNoradId, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setProductionEpoch, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setProductionHour, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setSequenceNumber, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setSic, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setStartEpoch, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setTargetClass, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setTargetLocation, METH_O),
          DECLARE_METHOD(t_ILRSHeader, setVersion, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ILRSHeader)[] = {
          { Py_tp_methods, t_ILRSHeader__methods_ },
          { Py_tp_init, (void *) t_ILRSHeader_init_ },
          { Py_tp_getset, t_ILRSHeader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ILRSHeader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ILRSHeader, t_ILRSHeader, ILRSHeader);

        void t_ILRSHeader::install(PyObject *module)
        {
          installType(&PY_TYPE(ILRSHeader), &PY_TYPE_DEF(ILRSHeader), module, "ILRSHeader", 0);
        }

        void t_ILRSHeader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ILRSHeader), "class_", make_descriptor(ILRSHeader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ILRSHeader), "wrapfn_", make_descriptor(t_ILRSHeader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ILRSHeader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ILRSHeader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ILRSHeader::initializeClass, 1)))
            return NULL;
          return t_ILRSHeader::wrap_Object(ILRSHeader(((t_ILRSHeader *) arg)->object.this$));
        }
        static PyObject *t_ILRSHeader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ILRSHeader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ILRSHeader_init_(t_ILRSHeader *self, PyObject *args, PyObject *kwds)
        {
          ILRSHeader object((jobject) NULL);

          INT_CALL(object = ILRSHeader());
          self->object = object;

          return 0;
        }

        static PyObject *t_ILRSHeader_getEndEpoch(t_ILRSHeader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEndEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ILRSHeader_getFormat(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getFormat());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getIlrsSatelliteId(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIlrsSatelliteId());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getName(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getNoradId(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getNoradId());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getProductionEpoch(t_ILRSHeader *self)
        {
          ::org::orekit::time::DateComponents result((jobject) NULL);
          OBJ_CALL(result = self->object.getProductionEpoch());
          return ::org::orekit::time::t_DateComponents::wrap_Object(result);
        }

        static PyObject *t_ILRSHeader_getProductionHour(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getProductionHour());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getSequenceNumber(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSequenceNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getSic(t_ILRSHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSic());
          return j2p(result);
        }

        static PyObject *t_ILRSHeader_getStartEpoch(t_ILRSHeader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_ILRSHeader_getTargetClass(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTargetClass());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getTargetLocation(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTargetLocation());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_getVersion(t_ILRSHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getVersion());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ILRSHeader_setEndEpoch(t_ILRSHeader *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEndEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEndEpoch", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setFormat(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setFormat(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setFormat", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setIlrsSatelliteId(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setIlrsSatelliteId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIlrsSatelliteId", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setName(t_ILRSHeader *self, PyObject *arg)
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

        static PyObject *t_ILRSHeader_setNoradId(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setNoradId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNoradId", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setProductionEpoch(t_ILRSHeader *self, PyObject *arg)
        {
          ::org::orekit::time::DateComponents a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::DateComponents::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setProductionEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProductionEpoch", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setProductionHour(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setProductionHour(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProductionHour", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setSequenceNumber(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSequenceNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSequenceNumber", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setSic(t_ILRSHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSic(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSic", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setStartEpoch(t_ILRSHeader *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setStartEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStartEpoch", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setTargetClass(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setTargetClass(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTargetClass", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setTargetLocation(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setTargetLocation(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTargetLocation", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_setVersion(t_ILRSHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setVersion", arg);
          return NULL;
        }

        static PyObject *t_ILRSHeader_get__endEpoch(t_ILRSHeader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEndEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_ILRSHeader_set__endEpoch(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setEndEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "endEpoch", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__format(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getFormat());
          return j2p(value);
        }
        static int t_ILRSHeader_set__format(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setFormat(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "format", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__ilrsSatelliteId(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIlrsSatelliteId());
          return j2p(value);
        }
        static int t_ILRSHeader_set__ilrsSatelliteId(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setIlrsSatelliteId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ilrsSatelliteId", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__name(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
        static int t_ILRSHeader_set__name(t_ILRSHeader *self, PyObject *arg, void *data)
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

        static PyObject *t_ILRSHeader_get__noradId(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getNoradId());
          return j2p(value);
        }
        static int t_ILRSHeader_set__noradId(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setNoradId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "noradId", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__productionEpoch(t_ILRSHeader *self, void *data)
        {
          ::org::orekit::time::DateComponents value((jobject) NULL);
          OBJ_CALL(value = self->object.getProductionEpoch());
          return ::org::orekit::time::t_DateComponents::wrap_Object(value);
        }
        static int t_ILRSHeader_set__productionEpoch(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::DateComponents value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::DateComponents::initializeClass, &value))
            {
              INT_CALL(self->object.setProductionEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "productionEpoch", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__productionHour(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getProductionHour());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__productionHour(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setProductionHour(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "productionHour", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__sequenceNumber(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSequenceNumber());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__sequenceNumber(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSequenceNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "sequenceNumber", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__sic(t_ILRSHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSic());
          return j2p(value);
        }
        static int t_ILRSHeader_set__sic(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSic(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "sic", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__startEpoch(t_ILRSHeader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_ILRSHeader_set__startEpoch(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setStartEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "startEpoch", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__targetClass(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTargetClass());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__targetClass(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setTargetClass(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "targetClass", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__targetLocation(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTargetLocation());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__targetLocation(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setTargetLocation(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "targetLocation", arg);
          return -1;
        }

        static PyObject *t_ILRSHeader_get__version(t_ILRSHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getVersion());
          return PyLong_FromLong((long) value);
        }
        static int t_ILRSHeader_set__version(t_ILRSHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "version", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/InterSatellitesRangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *InterSatellitesRangeBuilder::class$ = NULL;
          jmethodID *InterSatellitesRangeBuilder::mids$ = NULL;
          bool InterSatellitesRangeBuilder::live$ = false;

          jclass InterSatellitesRangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/InterSatellitesRangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b13f98ff2015554e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;ZDD)V");
              mids$[mid_build_c527c6c0f51f3bfc] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/InterSatellitesRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesRangeBuilder::InterSatellitesRangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, const ::org::orekit::estimation::measurements::ObservableSatellite & a2, jboolean a3, jdouble a4, jdouble a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_b13f98ff2015554e, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

          ::org::orekit::estimation::measurements::InterSatellitesRange InterSatellitesRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::InterSatellitesRange(env->callObjectMethod(this$, mids$[mid_build_c527c6c0f51f3bfc], a0.this$, a1.this$));
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
          static PyObject *t_InterSatellitesRangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesRangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesRangeBuilder_of_(t_InterSatellitesRangeBuilder *self, PyObject *args);
          static int t_InterSatellitesRangeBuilder_init_(t_InterSatellitesRangeBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesRangeBuilder_build(t_InterSatellitesRangeBuilder *self, PyObject *args);
          static PyObject *t_InterSatellitesRangeBuilder_get__parameters_(t_InterSatellitesRangeBuilder *self, void *data);
          static PyGetSetDef t_InterSatellitesRangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesRangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesRangeBuilder__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_InterSatellitesRangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesRangeBuilder)[] = {
            { Py_tp_methods, t_InterSatellitesRangeBuilder__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesRangeBuilder_init_ },
            { Py_tp_getset, t_InterSatellitesRangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesRangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(InterSatellitesRangeBuilder, t_InterSatellitesRangeBuilder, InterSatellitesRangeBuilder);
          PyObject *t_InterSatellitesRangeBuilder::wrap_Object(const InterSatellitesRangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesRangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesRangeBuilder *self = (t_InterSatellitesRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesRangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesRangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesRangeBuilder *self = (t_InterSatellitesRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesRangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesRangeBuilder), &PY_TYPE_DEF(InterSatellitesRangeBuilder), module, "InterSatellitesRangeBuilder", 0);
          }

          void t_InterSatellitesRangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRangeBuilder), "class_", make_descriptor(InterSatellitesRangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRangeBuilder), "wrapfn_", make_descriptor(t_InterSatellitesRangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesRangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesRangeBuilder::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesRangeBuilder::wrap_Object(InterSatellitesRangeBuilder(((t_InterSatellitesRangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesRangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesRangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesRangeBuilder_of_(t_InterSatellitesRangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_InterSatellitesRangeBuilder_init_(t_InterSatellitesRangeBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a2((jobject) NULL);
            jboolean a3;
            jdouble a4;
            jdouble a5;
            InterSatellitesRangeBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkZDD", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = InterSatellitesRangeBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(InterSatellitesRange);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesRangeBuilder_build(t_InterSatellitesRangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::InterSatellitesRange result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_InterSatellitesRange::wrap_Object(result);
            }

            return callSuper(PY_TYPE(InterSatellitesRangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_InterSatellitesRangeBuilder_get__parameters_(t_InterSatellitesRangeBuilder *self, void *data)
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
#include "org/hipparchus/special/Erf.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *Erf::class$ = NULL;
      jmethodID *Erf::mids$ = NULL;
      bool Erf::live$ = false;

      jclass Erf::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/Erf");

          mids$ = new jmethodID[max_mid];
          mids$[mid_erf_04fd0666b613d2ab] = env->getStaticMethodID(cls, "erf", "(D)D");
          mids$[mid_erf_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "erf", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erf_99e3200dafc19573] = env->getStaticMethodID(cls, "erf", "(DD)D");
          mids$[mid_erf_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "erf", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erfInv_04fd0666b613d2ab] = env->getStaticMethodID(cls, "erfInv", "(D)D");
          mids$[mid_erfInv_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "erfInv", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erfc_04fd0666b613d2ab] = env->getStaticMethodID(cls, "erfc", "(D)D");
          mids$[mid_erfc_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "erfc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_erfcInv_04fd0666b613d2ab] = env->getStaticMethodID(cls, "erfcInv", "(D)D");
          mids$[mid_erfcInv_6e00dc5eb352fe51] = env->getStaticMethodID(cls, "erfcInv", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Erf::erf(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erf_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erf(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erf_6e00dc5eb352fe51], a0.this$));
      }

      jdouble Erf::erf(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erf_99e3200dafc19573], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erf(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erf_c6408fdce2cc6c1a], a0.this$, a1.this$));
      }

      jdouble Erf::erfInv(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erfInv_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erfInv(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erfInv_6e00dc5eb352fe51], a0.this$));
      }

      jdouble Erf::erfc(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erfc_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erfc(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erfc_6e00dc5eb352fe51], a0.this$));
      }

      jdouble Erf::erfcInv(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_erfcInv_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement Erf::erfcInv(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_erfcInv_6e00dc5eb352fe51], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace special {
      static PyObject *t_Erf_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Erf_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Erf_erf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Erf_erfInv(PyTypeObject *type, PyObject *args);
      static PyObject *t_Erf_erfc(PyTypeObject *type, PyObject *args);
      static PyObject *t_Erf_erfcInv(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Erf__methods_[] = {
        DECLARE_METHOD(t_Erf, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Erf, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Erf, erf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Erf, erfInv, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Erf, erfc, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Erf, erfcInv, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Erf)[] = {
        { Py_tp_methods, t_Erf__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Erf)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Erf, t_Erf, Erf);

      void t_Erf::install(PyObject *module)
      {
        installType(&PY_TYPE(Erf), &PY_TYPE_DEF(Erf), module, "Erf", 0);
      }

      void t_Erf::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Erf), "class_", make_descriptor(Erf::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Erf), "wrapfn_", make_descriptor(t_Erf::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Erf), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Erf_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Erf::initializeClass, 1)))
          return NULL;
        return t_Erf::wrap_Object(Erf(((t_Erf *) arg)->object.this$));
      }
      static PyObject *t_Erf_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Erf::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Erf_erf(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
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
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erf(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erf", args);
        return NULL;
      }

      static PyObject *t_Erf_erfInv(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfInv(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfInv(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erfInv", args);
        return NULL;
      }

      static PyObject *t_Erf_erfc(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfc(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfc(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erfc", args);
        return NULL;
      }

      static PyObject *t_Erf_erfcInv(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfcInv(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Erf::erfcInv(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "erfcInv", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/GlobalMappingFunctionModel.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
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
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_cae5d0c3721eff67] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
              mids$[mid_mappingFactors_6dcded9cb7dee3c2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_mappingFactors_6e118a7a5998051c] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalMappingFunctionModel::GlobalMappingFunctionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          GlobalMappingFunctionModel::GlobalMappingFunctionModel(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cae5d0c3721eff67, a0.this$)) {}

          JArray< jdouble > GlobalMappingFunctionModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6dcded9cb7dee3c2], a0, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > GlobalMappingFunctionModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6e118a7a5998051c], a0.this$, a1.this$, a2.this$));
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
#include "org/orekit/files/ccsds/section/KvnStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/section/KvnStructureKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *KvnStructureKey::class$ = NULL;
          jmethodID *KvnStructureKey::mids$ = NULL;
          bool KvnStructureKey::live$ = false;
          KvnStructureKey *KvnStructureKey::DATA = NULL;
          KvnStructureKey *KvnStructureKey::META = NULL;

          jclass KvnStructureKey::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/KvnStructureKey");

              mids$ = new jmethodID[max_mid];
              mids$[mid_process_c095c1ee2f4787f7] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)Z");
              mids$[mid_valueOf_e4fc3efa40952995] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/KvnStructureKey;");
              mids$[mid_values_7d8abb7c3fbe4d9c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/KvnStructureKey;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DATA = new KvnStructureKey(env->getStaticObjectField(cls, "DATA", "Lorg/orekit/files/ccsds/section/KvnStructureKey;"));
              META = new KvnStructureKey(env->getStaticObjectField(cls, "META", "Lorg/orekit/files/ccsds/section/KvnStructureKey;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean KvnStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_process_c095c1ee2f4787f7], a0.this$, a1.this$);
          }

          KvnStructureKey KvnStructureKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return KvnStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e4fc3efa40952995], a0.this$));
          }

          JArray< KvnStructureKey > KvnStructureKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< KvnStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_7d8abb7c3fbe4d9c]));
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
          static PyObject *t_KvnStructureKey_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KvnStructureKey_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KvnStructureKey_of_(t_KvnStructureKey *self, PyObject *args);
          static PyObject *t_KvnStructureKey_process(t_KvnStructureKey *self, PyObject *args);
          static PyObject *t_KvnStructureKey_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_KvnStructureKey_values(PyTypeObject *type);
          static PyObject *t_KvnStructureKey_get__parameters_(t_KvnStructureKey *self, void *data);
          static PyGetSetDef t_KvnStructureKey__fields_[] = {
            DECLARE_GET_FIELD(t_KvnStructureKey, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_KvnStructureKey__methods_[] = {
            DECLARE_METHOD(t_KvnStructureKey, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureKey, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureKey, of_, METH_VARARGS),
            DECLARE_METHOD(t_KvnStructureKey, process, METH_VARARGS),
            DECLARE_METHOD(t_KvnStructureKey, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_KvnStructureKey, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(KvnStructureKey)[] = {
            { Py_tp_methods, t_KvnStructureKey__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_KvnStructureKey__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(KvnStructureKey)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(KvnStructureKey, t_KvnStructureKey, KvnStructureKey);
          PyObject *t_KvnStructureKey::wrap_Object(const KvnStructureKey& object, PyTypeObject *p0)
          {
            PyObject *obj = t_KvnStructureKey::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_KvnStructureKey *self = (t_KvnStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_KvnStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_KvnStructureKey::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_KvnStructureKey *self = (t_KvnStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_KvnStructureKey::install(PyObject *module)
          {
            installType(&PY_TYPE(KvnStructureKey), &PY_TYPE_DEF(KvnStructureKey), module, "KvnStructureKey", 0);
          }

          void t_KvnStructureKey::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "class_", make_descriptor(KvnStructureKey::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "wrapfn_", make_descriptor(t_KvnStructureKey::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "boxfn_", make_descriptor(boxObject));
            env->getClass(KvnStructureKey::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "DATA", make_descriptor(t_KvnStructureKey::wrap_Object(*KvnStructureKey::DATA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KvnStructureKey), "META", make_descriptor(t_KvnStructureKey::wrap_Object(*KvnStructureKey::META)));
          }

          static PyObject *t_KvnStructureKey_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, KvnStructureKey::initializeClass, 1)))
              return NULL;
            return t_KvnStructureKey::wrap_Object(KvnStructureKey(((t_KvnStructureKey *) arg)->object.this$));
          }
          static PyObject *t_KvnStructureKey_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, KvnStructureKey::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_KvnStructureKey_of_(t_KvnStructureKey *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_KvnStructureKey_process(t_KvnStructureKey *self, PyObject *args)
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

          static PyObject *t_KvnStructureKey_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            KvnStructureKey result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::section::KvnStructureKey::valueOf(a0));
              return t_KvnStructureKey::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_KvnStructureKey_values(PyTypeObject *type)
          {
            JArray< KvnStructureKey > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::section::KvnStructureKey::values());
            return JArray<jobject>(result.this$).wrap(t_KvnStructureKey::wrap_jobject);
          }
          static PyObject *t_KvnStructureKey_get__parameters_(t_KvnStructureKey *self, void *data)
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
#include "org/hipparchus/analysis/function/Atan2.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Atan2::class$ = NULL;
        jmethodID *Atan2::mids$ = NULL;
        bool Atan2::live$ = false;

        jclass Atan2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Atan2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_99e3200dafc19573] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Atan2::Atan2() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Atan2::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_99e3200dafc19573], a0, a1);
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
        static PyObject *t_Atan2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Atan2_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Atan2_init_(t_Atan2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Atan2_value(t_Atan2 *self, PyObject *args);

        static PyMethodDef t_Atan2__methods_[] = {
          DECLARE_METHOD(t_Atan2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atan2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atan2, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Atan2)[] = {
          { Py_tp_methods, t_Atan2__methods_ },
          { Py_tp_init, (void *) t_Atan2_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Atan2)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Atan2, t_Atan2, Atan2);

        void t_Atan2::install(PyObject *module)
        {
          installType(&PY_TYPE(Atan2), &PY_TYPE_DEF(Atan2), module, "Atan2", 0);
        }

        void t_Atan2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan2), "class_", make_descriptor(Atan2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan2), "wrapfn_", make_descriptor(t_Atan2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan2), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Atan2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Atan2::initializeClass, 1)))
            return NULL;
          return t_Atan2::wrap_Object(Atan2(((t_Atan2 *) arg)->object.this$));
        }
        static PyObject *t_Atan2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Atan2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Atan2_init_(t_Atan2 *self, PyObject *args, PyObject *kwds)
        {
          Atan2 object((jobject) NULL);

          INT_CALL(object = Atan2());
          self->object = object;

          return 0;
        }

        static PyObject *t_Atan2_value(t_Atan2 *self, PyObject *args)
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
#include "org/orekit/rugged/refraction/ConstantRefractionLayer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        ::java::lang::Class *ConstantRefractionLayer::class$ = NULL;
        jmethodID *ConstantRefractionLayer::mids$ = NULL;
        bool ConstantRefractionLayer::live$ = false;

        jclass ConstantRefractionLayer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/refraction/ConstantRefractionLayer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getLowestAltitude_b74f83833fdad017] = env->getMethodID(cls, "getLowestAltitude", "()D");
            mids$[mid_getRefractiveIndex_b74f83833fdad017] = env->getMethodID(cls, "getRefractiveIndex", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantRefractionLayer::ConstantRefractionLayer(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        jdouble ConstantRefractionLayer::getLowestAltitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLowestAltitude_b74f83833fdad017]);
        }

        jdouble ConstantRefractionLayer::getRefractiveIndex() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRefractiveIndex_b74f83833fdad017]);
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
      namespace refraction {
        static PyObject *t_ConstantRefractionLayer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantRefractionLayer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantRefractionLayer_init_(t_ConstantRefractionLayer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantRefractionLayer_getLowestAltitude(t_ConstantRefractionLayer *self);
        static PyObject *t_ConstantRefractionLayer_getRefractiveIndex(t_ConstantRefractionLayer *self);
        static PyObject *t_ConstantRefractionLayer_get__lowestAltitude(t_ConstantRefractionLayer *self, void *data);
        static PyObject *t_ConstantRefractionLayer_get__refractiveIndex(t_ConstantRefractionLayer *self, void *data);
        static PyGetSetDef t_ConstantRefractionLayer__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantRefractionLayer, lowestAltitude),
          DECLARE_GET_FIELD(t_ConstantRefractionLayer, refractiveIndex),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantRefractionLayer__methods_[] = {
          DECLARE_METHOD(t_ConstantRefractionLayer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantRefractionLayer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantRefractionLayer, getLowestAltitude, METH_NOARGS),
          DECLARE_METHOD(t_ConstantRefractionLayer, getRefractiveIndex, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantRefractionLayer)[] = {
          { Py_tp_methods, t_ConstantRefractionLayer__methods_ },
          { Py_tp_init, (void *) t_ConstantRefractionLayer_init_ },
          { Py_tp_getset, t_ConstantRefractionLayer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantRefractionLayer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConstantRefractionLayer, t_ConstantRefractionLayer, ConstantRefractionLayer);

        void t_ConstantRefractionLayer::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantRefractionLayer), &PY_TYPE_DEF(ConstantRefractionLayer), module, "ConstantRefractionLayer", 0);
        }

        void t_ConstantRefractionLayer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRefractionLayer), "class_", make_descriptor(ConstantRefractionLayer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRefractionLayer), "wrapfn_", make_descriptor(t_ConstantRefractionLayer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRefractionLayer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantRefractionLayer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantRefractionLayer::initializeClass, 1)))
            return NULL;
          return t_ConstantRefractionLayer::wrap_Object(ConstantRefractionLayer(((t_ConstantRefractionLayer *) arg)->object.this$));
        }
        static PyObject *t_ConstantRefractionLayer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantRefractionLayer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantRefractionLayer_init_(t_ConstantRefractionLayer *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ConstantRefractionLayer object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = ConstantRefractionLayer(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConstantRefractionLayer_getLowestAltitude(t_ConstantRefractionLayer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLowestAltitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConstantRefractionLayer_getRefractiveIndex(t_ConstantRefractionLayer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRefractiveIndex());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConstantRefractionLayer_get__lowestAltitude(t_ConstantRefractionLayer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLowestAltitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRefractionLayer_get__refractiveIndex(t_ConstantRefractionLayer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRefractiveIndex());
          return PyFloat_FromDouble((double) value);
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
                mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserRangeAccuracy::UserRangeAccuracy(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

            jdouble UserRangeAccuracy::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_b74f83833fdad017]);
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
#include "org/orekit/propagation/conversion/KeplerianPropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/propagation/conversion/KeplerianPropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *KeplerianPropagatorBuilder::class$ = NULL;
        jmethodID *KeplerianPropagatorBuilder::mids$ = NULL;
        bool KeplerianPropagatorBuilder::live$ = false;

        jclass KeplerianPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/KeplerianPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ef1a70746091c362] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_19752425cc999d24] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_buildLeastSquaresModel_1a4dd1f247347a8f] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_708cc138373fff03] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_1a2bfd20e6fb9bd8] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/KeplerianPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KeplerianPropagatorBuilder::KeplerianPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_ef1a70746091c362, a0.this$, a1.this$, a2)) {}

        KeplerianPropagatorBuilder::KeplerianPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, const ::org::orekit::attitudes::AttitudeProvider & a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_19752425cc999d24, a0.this$, a1.this$, a2, a3.this$)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel KeplerianPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_1a4dd1f247347a8f], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator KeplerianPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_708cc138373fff03], a0.this$));
        }

        KeplerianPropagatorBuilder KeplerianPropagatorBuilder::copy() const
        {
          return KeplerianPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_1a2bfd20e6fb9bd8]));
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
        static PyObject *t_KeplerianPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KeplerianPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KeplerianPropagatorBuilder_init_(t_KeplerianPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KeplerianPropagatorBuilder_buildLeastSquaresModel(t_KeplerianPropagatorBuilder *self, PyObject *args);
        static PyObject *t_KeplerianPropagatorBuilder_buildPropagator(t_KeplerianPropagatorBuilder *self, PyObject *args);
        static PyObject *t_KeplerianPropagatorBuilder_copy(t_KeplerianPropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_KeplerianPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_KeplerianPropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KeplerianPropagatorBuilder)[] = {
          { Py_tp_methods, t_KeplerianPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_KeplerianPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KeplerianPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(KeplerianPropagatorBuilder, t_KeplerianPropagatorBuilder, KeplerianPropagatorBuilder);

        void t_KeplerianPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(KeplerianPropagatorBuilder), &PY_TYPE_DEF(KeplerianPropagatorBuilder), module, "KeplerianPropagatorBuilder", 0);
        }

        void t_KeplerianPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagatorBuilder), "class_", make_descriptor(KeplerianPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagatorBuilder), "wrapfn_", make_descriptor(t_KeplerianPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KeplerianPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KeplerianPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_KeplerianPropagatorBuilder::wrap_Object(KeplerianPropagatorBuilder(((t_KeplerianPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_KeplerianPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KeplerianPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KeplerianPropagatorBuilder_init_(t_KeplerianPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              KeplerianPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2))
              {
                INT_CALL(object = KeplerianPropagatorBuilder(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::orekit::attitudes::AttitudeProvider a3((jobject) NULL);
              KeplerianPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kKDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
              {
                INT_CALL(object = KeplerianPropagatorBuilder(a0, a1, a2, a3));
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

        static PyObject *t_KeplerianPropagatorBuilder_buildLeastSquaresModel(t_KeplerianPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(KeplerianPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_KeplerianPropagatorBuilder_buildPropagator(t_KeplerianPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::Propagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(KeplerianPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_KeplerianPropagatorBuilder_copy(t_KeplerianPropagatorBuilder *self, PyObject *args)
        {
          KeplerianPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_KeplerianPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(KeplerianPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {

          ::java::lang::Class *UnscentedKalmanFilter::class$ = NULL;
          jmethodID *UnscentedKalmanFilter::mids$ = NULL;
          bool UnscentedKalmanFilter::live$ = false;

          jclass UnscentedKalmanFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3e8061266b2d841f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/hipparchus/filtering/kalman/unscented/UnscentedProcess;Lorg/hipparchus/filtering/kalman/ProcessEstimate;Lorg/hipparchus/util/UnscentedTransformProvider;)V");
              mids$[mid_estimationStep_de0fd16eb0d97034] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
              mids$[mid_getCorrected_e37ac5ac73cc5311] = env->getMethodID(cls, "getCorrected", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
              mids$[mid_getPredicted_e37ac5ac73cc5311] = env->getMethodID(cls, "getPredicted", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
              mids$[mid_getUnscentedTransformProvider_1f9cf67cc583b093] = env->getMethodID(cls, "getUnscentedTransformProvider", "()Lorg/hipparchus/util/UnscentedTransformProvider;");
              mids$[mid_predictionAndCorrectionSteps_7ac28e2addcd7489] = env->getMethodID(cls, "predictionAndCorrectionSteps", "(Lorg/hipparchus/filtering/kalman/Measurement;[Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          UnscentedKalmanFilter::UnscentedKalmanFilter(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::hipparchus::filtering::kalman::unscented::UnscentedProcess & a1, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a2, const ::org::hipparchus::util::UnscentedTransformProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e8061266b2d841f, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_de0fd16eb0d97034], a0.this$));
          }

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::getCorrected() const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getCorrected_e37ac5ac73cc5311]));
          }

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::getPredicted() const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getPredicted_e37ac5ac73cc5311]));
          }

          ::org::hipparchus::util::UnscentedTransformProvider UnscentedKalmanFilter::getUnscentedTransformProvider() const
          {
            return ::org::hipparchus::util::UnscentedTransformProvider(env->callObjectMethod(this$, mids$[mid_getUnscentedTransformProvider_1f9cf67cc583b093]));
          }

          ::org::hipparchus::filtering::kalman::ProcessEstimate UnscentedKalmanFilter::predictionAndCorrectionSteps(const ::org::hipparchus::filtering::kalman::Measurement & a0, const JArray< ::org::hipparchus::linear::RealVector > & a1) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_predictionAndCorrectionSteps_7ac28e2addcd7489], a0.this$, a1.this$));
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
    namespace filtering {
      namespace kalman {
        namespace unscented {
          static PyObject *t_UnscentedKalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedKalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedKalmanFilter_of_(t_UnscentedKalmanFilter *self, PyObject *args);
          static int t_UnscentedKalmanFilter_init_(t_UnscentedKalmanFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_UnscentedKalmanFilter_estimationStep(t_UnscentedKalmanFilter *self, PyObject *arg);
          static PyObject *t_UnscentedKalmanFilter_getCorrected(t_UnscentedKalmanFilter *self);
          static PyObject *t_UnscentedKalmanFilter_getPredicted(t_UnscentedKalmanFilter *self);
          static PyObject *t_UnscentedKalmanFilter_getUnscentedTransformProvider(t_UnscentedKalmanFilter *self);
          static PyObject *t_UnscentedKalmanFilter_predictionAndCorrectionSteps(t_UnscentedKalmanFilter *self, PyObject *args);
          static PyObject *t_UnscentedKalmanFilter_get__corrected(t_UnscentedKalmanFilter *self, void *data);
          static PyObject *t_UnscentedKalmanFilter_get__predicted(t_UnscentedKalmanFilter *self, void *data);
          static PyObject *t_UnscentedKalmanFilter_get__unscentedTransformProvider(t_UnscentedKalmanFilter *self, void *data);
          static PyObject *t_UnscentedKalmanFilter_get__parameters_(t_UnscentedKalmanFilter *self, void *data);
          static PyGetSetDef t_UnscentedKalmanFilter__fields_[] = {
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, corrected),
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, predicted),
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, unscentedTransformProvider),
            DECLARE_GET_FIELD(t_UnscentedKalmanFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_UnscentedKalmanFilter__methods_[] = {
            DECLARE_METHOD(t_UnscentedKalmanFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, estimationStep, METH_O),
            DECLARE_METHOD(t_UnscentedKalmanFilter, getCorrected, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, getPredicted, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, getUnscentedTransformProvider, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedKalmanFilter, predictionAndCorrectionSteps, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanFilter)[] = {
            { Py_tp_methods, t_UnscentedKalmanFilter__methods_ },
            { Py_tp_init, (void *) t_UnscentedKalmanFilter_init_ },
            { Py_tp_getset, t_UnscentedKalmanFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnscentedKalmanFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(UnscentedKalmanFilter, t_UnscentedKalmanFilter, UnscentedKalmanFilter);
          PyObject *t_UnscentedKalmanFilter::wrap_Object(const UnscentedKalmanFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UnscentedKalmanFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UnscentedKalmanFilter *self = (t_UnscentedKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_UnscentedKalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UnscentedKalmanFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UnscentedKalmanFilter *self = (t_UnscentedKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_UnscentedKalmanFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(UnscentedKalmanFilter), &PY_TYPE_DEF(UnscentedKalmanFilter), module, "UnscentedKalmanFilter", 0);
          }

          void t_UnscentedKalmanFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanFilter), "class_", make_descriptor(UnscentedKalmanFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanFilter), "wrapfn_", make_descriptor(t_UnscentedKalmanFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnscentedKalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnscentedKalmanFilter::initializeClass, 1)))
              return NULL;
            return t_UnscentedKalmanFilter::wrap_Object(UnscentedKalmanFilter(((t_UnscentedKalmanFilter *) arg)->object.this$));
          }
          static PyObject *t_UnscentedKalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnscentedKalmanFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UnscentedKalmanFilter_of_(t_UnscentedKalmanFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_UnscentedKalmanFilter_init_(t_UnscentedKalmanFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::unscented::UnscentedProcess a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::filtering::kalman::ProcessEstimate a2((jobject) NULL);
            ::org::hipparchus::util::UnscentedTransformProvider a3((jobject) NULL);
            UnscentedKalmanFilter object((jobject) NULL);

            if (!parseArgs(args, "kKkk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::hipparchus::filtering::kalman::unscented::UnscentedProcess::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, ::org::hipparchus::util::UnscentedTransformProvider::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::unscented::t_UnscentedProcess::parameters_, &a2, &a3))
            {
              INT_CALL(object = UnscentedKalmanFilter(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_UnscentedKalmanFilter_estimationStep(t_UnscentedKalmanFilter *self, PyObject *arg)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.estimationStep(a0));
              return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "estimationStep", arg);
            return NULL;
          }

          static PyObject *t_UnscentedKalmanFilter_getCorrected(t_UnscentedKalmanFilter *self)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
            OBJ_CALL(result = self->object.getCorrected());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
          }

          static PyObject *t_UnscentedKalmanFilter_getPredicted(t_UnscentedKalmanFilter *self)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
            OBJ_CALL(result = self->object.getPredicted());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
          }

          static PyObject *t_UnscentedKalmanFilter_getUnscentedTransformProvider(t_UnscentedKalmanFilter *self)
          {
            ::org::hipparchus::util::UnscentedTransformProvider result((jobject) NULL);
            OBJ_CALL(result = self->object.getUnscentedTransformProvider());
            return ::org::hipparchus::util::t_UnscentedTransformProvider::wrap_Object(result);
          }

          static PyObject *t_UnscentedKalmanFilter_predictionAndCorrectionSteps(t_UnscentedKalmanFilter *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

            if (!parseArgs(args, "k[k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.predictionAndCorrectionSteps(a0, a1));
              return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "predictionAndCorrectionSteps", args);
            return NULL;
          }
          static PyObject *t_UnscentedKalmanFilter_get__parameters_(t_UnscentedKalmanFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_UnscentedKalmanFilter_get__corrected(t_UnscentedKalmanFilter *self, void *data)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
            OBJ_CALL(value = self->object.getCorrected());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
          }

          static PyObject *t_UnscentedKalmanFilter_get__predicted(t_UnscentedKalmanFilter *self, void *data)
          {
            ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
            OBJ_CALL(value = self->object.getPredicted());
            return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
          }

          static PyObject *t_UnscentedKalmanFilter_get__unscentedTransformProvider(t_UnscentedKalmanFilter *self, void *data)
          {
            ::org::hipparchus::util::UnscentedTransformProvider value((jobject) NULL);
            OBJ_CALL(value = self->object.getUnscentedTransformProvider());
            return ::org::hipparchus::util::t_UnscentedTransformProvider::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/ElevationExtremumDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/propagation/events/ElevationExtremumDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ElevationExtremumDetector::class$ = NULL;
        jmethodID *ElevationExtremumDetector::mids$ = NULL;
        bool ElevationExtremumDetector::live$ = false;

        jclass ElevationExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ElevationExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_153388b9c226b897] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_806761bd3bfad55b] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getElevation_a17ea857ce74d258] = env->getMethodID(cls, "getElevation", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getTopocentricFrame_c2b113ddceb69262] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_create_a1d2b66495255404] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ElevationExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ElevationExtremumDetector::ElevationExtremumDetector(const ::org::orekit::frames::TopocentricFrame & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_153388b9c226b897, a0.this$)) {}

        ElevationExtremumDetector::ElevationExtremumDetector(jdouble a0, jdouble a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_806761bd3bfad55b, a0, a1, a2.this$)) {}

        jdouble ElevationExtremumDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        jdouble ElevationExtremumDetector::getElevation(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::frames::TopocentricFrame ElevationExtremumDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_c2b113ddceb69262]));
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
        static PyObject *t_ElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationExtremumDetector_of_(t_ElevationExtremumDetector *self, PyObject *args);
        static int t_ElevationExtremumDetector_init_(t_ElevationExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ElevationExtremumDetector_g(t_ElevationExtremumDetector *self, PyObject *args);
        static PyObject *t_ElevationExtremumDetector_getElevation(t_ElevationExtremumDetector *self, PyObject *arg);
        static PyObject *t_ElevationExtremumDetector_getTopocentricFrame(t_ElevationExtremumDetector *self);
        static PyObject *t_ElevationExtremumDetector_get__topocentricFrame(t_ElevationExtremumDetector *self, void *data);
        static PyObject *t_ElevationExtremumDetector_get__parameters_(t_ElevationExtremumDetector *self, void *data);
        static PyGetSetDef t_ElevationExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ElevationExtremumDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_ElevationExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ElevationExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_ElevationExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ElevationExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ElevationExtremumDetector, getElevation, METH_O),
          DECLARE_METHOD(t_ElevationExtremumDetector, getTopocentricFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ElevationExtremumDetector)[] = {
          { Py_tp_methods, t_ElevationExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_ElevationExtremumDetector_init_ },
          { Py_tp_getset, t_ElevationExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ElevationExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ElevationExtremumDetector, t_ElevationExtremumDetector, ElevationExtremumDetector);
        PyObject *t_ElevationExtremumDetector::wrap_Object(const ElevationExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationExtremumDetector *self = (t_ElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ElevationExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationExtremumDetector *self = (t_ElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ElevationExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ElevationExtremumDetector), &PY_TYPE_DEF(ElevationExtremumDetector), module, "ElevationExtremumDetector", 0);
        }

        void t_ElevationExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationExtremumDetector), "class_", make_descriptor(ElevationExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationExtremumDetector), "wrapfn_", make_descriptor(t_ElevationExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ElevationExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_ElevationExtremumDetector::wrap_Object(ElevationExtremumDetector(((t_ElevationExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_ElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ElevationExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ElevationExtremumDetector_of_(t_ElevationExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ElevationExtremumDetector_init_(t_ElevationExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              ElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0))
              {
                INT_CALL(object = ElevationExtremumDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationExtremumDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              ElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ElevationExtremumDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationExtremumDetector);
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

        static PyObject *t_ElevationExtremumDetector_g(t_ElevationExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ElevationExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ElevationExtremumDetector_getElevation(t_ElevationExtremumDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getElevation(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", arg);
          return NULL;
        }

        static PyObject *t_ElevationExtremumDetector_getTopocentricFrame(t_ElevationExtremumDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }
        static PyObject *t_ElevationExtremumDetector_get__parameters_(t_ElevationExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ElevationExtremumDetector_get__topocentricFrame(t_ElevationExtremumDetector *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PVBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PVBuilder::class$ = NULL;
          jmethodID *PVBuilder::mids$ = NULL;
          bool PVBuilder::live$ = false;

          jclass PVBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PVBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_28838a84151921e1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_c861ca2d3226ec08] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/PV;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PVBuilder::PVBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, jdouble a1, jdouble a2, jdouble a3, const ::org::orekit::estimation::measurements::ObservableSatellite & a4) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_28838a84151921e1, a0.this$, a1, a2, a3, a4.this$)) {}

          ::org::orekit::estimation::measurements::PV PVBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::PV(env->callObjectMethod(this$, mids$[mid_build_c861ca2d3226ec08], a0.this$, a1.this$));
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
          static PyObject *t_PVBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PVBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PVBuilder_of_(t_PVBuilder *self, PyObject *args);
          static int t_PVBuilder_init_(t_PVBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PVBuilder_build(t_PVBuilder *self, PyObject *args);
          static PyObject *t_PVBuilder_get__parameters_(t_PVBuilder *self, void *data);
          static PyGetSetDef t_PVBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PVBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PVBuilder__methods_[] = {
            DECLARE_METHOD(t_PVBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PVBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PVBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PVBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PVBuilder)[] = {
            { Py_tp_methods, t_PVBuilder__methods_ },
            { Py_tp_init, (void *) t_PVBuilder_init_ },
            { Py_tp_getset, t_PVBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PVBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PVBuilder, t_PVBuilder, PVBuilder);
          PyObject *t_PVBuilder::wrap_Object(const PVBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PVBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PVBuilder *self = (t_PVBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PVBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PVBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PVBuilder *self = (t_PVBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PVBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PVBuilder), &PY_TYPE_DEF(PVBuilder), module, "PVBuilder", 0);
          }

          void t_PVBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PVBuilder), "class_", make_descriptor(PVBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PVBuilder), "wrapfn_", make_descriptor(t_PVBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PVBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PVBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PVBuilder::initializeClass, 1)))
              return NULL;
            return t_PVBuilder::wrap_Object(PVBuilder(((t_PVBuilder *) arg)->object.this$));
          }
          static PyObject *t_PVBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PVBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PVBuilder_of_(t_PVBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PVBuilder_init_(t_PVBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            ::org::orekit::estimation::measurements::ObservableSatellite a4((jobject) NULL);
            PVBuilder object((jobject) NULL);

            if (!parseArgs(args, "kDDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = PVBuilder(a0, a1, a2, a3, a4));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(PV);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PVBuilder_build(t_PVBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::PV result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_PV::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PVBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_PVBuilder_get__parameters_(t_PVBuilder *self, void *data)
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
#include "org/hipparchus/ode/NamedParameterJacobianProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *NamedParameterJacobianProvider::class$ = NULL;
      jmethodID *NamedParameterJacobianProvider::mids$ = NULL;
      bool NamedParameterJacobianProvider::live$ = false;

      jclass NamedParameterJacobianProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/NamedParameterJacobianProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeParameterJacobian_c668528785bd21ab] = env->getMethodID(cls, "computeParameterJacobian", "(D[D[DLjava/lang/String;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > NamedParameterJacobianProvider::computeParameterJacobian(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::java::lang::String & a3) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeParameterJacobian_c668528785bd21ab], a0, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_NamedParameterJacobianProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NamedParameterJacobianProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NamedParameterJacobianProvider_computeParameterJacobian(t_NamedParameterJacobianProvider *self, PyObject *args);

      static PyMethodDef t_NamedParameterJacobianProvider__methods_[] = {
        DECLARE_METHOD(t_NamedParameterJacobianProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NamedParameterJacobianProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NamedParameterJacobianProvider, computeParameterJacobian, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NamedParameterJacobianProvider)[] = {
        { Py_tp_methods, t_NamedParameterJacobianProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NamedParameterJacobianProvider)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::Parameterizable),
        NULL
      };

      DEFINE_TYPE(NamedParameterJacobianProvider, t_NamedParameterJacobianProvider, NamedParameterJacobianProvider);

      void t_NamedParameterJacobianProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(NamedParameterJacobianProvider), &PY_TYPE_DEF(NamedParameterJacobianProvider), module, "NamedParameterJacobianProvider", 0);
      }

      void t_NamedParameterJacobianProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NamedParameterJacobianProvider), "class_", make_descriptor(NamedParameterJacobianProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NamedParameterJacobianProvider), "wrapfn_", make_descriptor(t_NamedParameterJacobianProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NamedParameterJacobianProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NamedParameterJacobianProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NamedParameterJacobianProvider::initializeClass, 1)))
          return NULL;
        return t_NamedParameterJacobianProvider::wrap_Object(NamedParameterJacobianProvider(((t_NamedParameterJacobianProvider *) arg)->object.this$));
      }
      static PyObject *t_NamedParameterJacobianProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NamedParameterJacobianProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_NamedParameterJacobianProvider_computeParameterJacobian(t_NamedParameterJacobianProvider *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D[Ds", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeParameterJacobian(a0, a1, a2, a3));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeParameterJacobian", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *MeasurementDecorator::class$ = NULL;
        jmethodID *MeasurementDecorator::mids$ = NULL;
        bool MeasurementDecorator::live$ = false;

        jclass MeasurementDecorator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/MeasurementDecorator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7175a655de352e84] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getCovariance_f77d745f2128c391] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getObservedMeasurement_a902d8547365f415] = env->getMethodID(cls, "getObservedMeasurement", "()Lorg/orekit/estimation/measurements/ObservedMeasurement;");
            mids$[mid_getTime_b74f83833fdad017] = env->getMethodID(cls, "getTime", "()D");
            mids$[mid_getValue_3a10cc75bd070d84] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/linear/RealVector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MeasurementDecorator::MeasurementDecorator(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7175a655de352e84, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::linear::RealMatrix MeasurementDecorator::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_f77d745f2128c391]));
        }

        ::org::orekit::estimation::measurements::ObservedMeasurement MeasurementDecorator::getObservedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::ObservedMeasurement(env->callObjectMethod(this$, mids$[mid_getObservedMeasurement_a902d8547365f415]));
        }

        jdouble MeasurementDecorator::getTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTime_b74f83833fdad017]);
        }

        ::org::hipparchus::linear::RealVector MeasurementDecorator::getValue() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getValue_3a10cc75bd070d84]));
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
        static PyObject *t_MeasurementDecorator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MeasurementDecorator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MeasurementDecorator_init_(t_MeasurementDecorator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MeasurementDecorator_getCovariance(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_getObservedMeasurement(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_getTime(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_getValue(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_get__covariance(t_MeasurementDecorator *self, void *data);
        static PyObject *t_MeasurementDecorator_get__observedMeasurement(t_MeasurementDecorator *self, void *data);
        static PyObject *t_MeasurementDecorator_get__time(t_MeasurementDecorator *self, void *data);
        static PyObject *t_MeasurementDecorator_get__value(t_MeasurementDecorator *self, void *data);
        static PyGetSetDef t_MeasurementDecorator__fields_[] = {
          DECLARE_GET_FIELD(t_MeasurementDecorator, covariance),
          DECLARE_GET_FIELD(t_MeasurementDecorator, observedMeasurement),
          DECLARE_GET_FIELD(t_MeasurementDecorator, time),
          DECLARE_GET_FIELD(t_MeasurementDecorator, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MeasurementDecorator__methods_[] = {
          DECLARE_METHOD(t_MeasurementDecorator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MeasurementDecorator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MeasurementDecorator, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_MeasurementDecorator, getObservedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_MeasurementDecorator, getTime, METH_NOARGS),
          DECLARE_METHOD(t_MeasurementDecorator, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MeasurementDecorator)[] = {
          { Py_tp_methods, t_MeasurementDecorator__methods_ },
          { Py_tp_init, (void *) t_MeasurementDecorator_init_ },
          { Py_tp_getset, t_MeasurementDecorator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MeasurementDecorator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MeasurementDecorator, t_MeasurementDecorator, MeasurementDecorator);

        void t_MeasurementDecorator::install(PyObject *module)
        {
          installType(&PY_TYPE(MeasurementDecorator), &PY_TYPE_DEF(MeasurementDecorator), module, "MeasurementDecorator", 0);
        }

        void t_MeasurementDecorator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementDecorator), "class_", make_descriptor(MeasurementDecorator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementDecorator), "wrapfn_", make_descriptor(t_MeasurementDecorator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementDecorator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MeasurementDecorator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MeasurementDecorator::initializeClass, 1)))
            return NULL;
          return t_MeasurementDecorator::wrap_Object(MeasurementDecorator(((t_MeasurementDecorator *) arg)->object.this$));
        }
        static PyObject *t_MeasurementDecorator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MeasurementDecorator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MeasurementDecorator_init_(t_MeasurementDecorator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          MeasurementDecorator object((jobject) NULL);

          if (!parseArgs(args, "Kkk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1, &a2))
          {
            INT_CALL(object = MeasurementDecorator(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MeasurementDecorator_getCovariance(t_MeasurementDecorator *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_MeasurementDecorator_getObservedMeasurement(t_MeasurementDecorator *self)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedMeasurement());
          return ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(result);
        }

        static PyObject *t_MeasurementDecorator_getTime(t_MeasurementDecorator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MeasurementDecorator_getValue(t_MeasurementDecorator *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_MeasurementDecorator_get__covariance(t_MeasurementDecorator *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_MeasurementDecorator_get__observedMeasurement(t_MeasurementDecorator *self, void *data)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedMeasurement());
          return ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(value);
        }

        static PyObject *t_MeasurementDecorator_get__time(t_MeasurementDecorator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTime());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_MeasurementDecorator_get__value(t_MeasurementDecorator *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {

          ::java::lang::Class *UnscentedEvolution::class$ = NULL;
          jmethodID *UnscentedEvolution::mids$ = NULL;
          bool UnscentedEvolution::live$ = false;

          jclass UnscentedEvolution::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/unscented/UnscentedEvolution");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cfd2c29a5d5d287b] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_getCurrentStates_d80cfd4abb977b5c] = env->getMethodID(cls, "getCurrentStates", "()[Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getCurrentTime_b74f83833fdad017] = env->getMethodID(cls, "getCurrentTime", "()D");
              mids$[mid_getProcessNoiseMatrix_f77d745f2128c391] = env->getMethodID(cls, "getProcessNoiseMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          UnscentedEvolution::UnscentedEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::hipparchus::linear::RealMatrix & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cfd2c29a5d5d287b, a0, a1.this$, a2.this$)) {}

          JArray< ::org::hipparchus::linear::RealVector > UnscentedEvolution::getCurrentStates() const
          {
            return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getCurrentStates_d80cfd4abb977b5c]));
          }

          jdouble UnscentedEvolution::getCurrentTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCurrentTime_b74f83833fdad017]);
          }

          ::org::hipparchus::linear::RealMatrix UnscentedEvolution::getProcessNoiseMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_f77d745f2128c391]));
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
    namespace filtering {
      namespace kalman {
        namespace unscented {
          static PyObject *t_UnscentedEvolution_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnscentedEvolution_instance_(PyTypeObject *type, PyObject *arg);
          static int t_UnscentedEvolution_init_(t_UnscentedEvolution *self, PyObject *args, PyObject *kwds);
          static PyObject *t_UnscentedEvolution_getCurrentStates(t_UnscentedEvolution *self);
          static PyObject *t_UnscentedEvolution_getCurrentTime(t_UnscentedEvolution *self);
          static PyObject *t_UnscentedEvolution_getProcessNoiseMatrix(t_UnscentedEvolution *self);
          static PyObject *t_UnscentedEvolution_get__currentStates(t_UnscentedEvolution *self, void *data);
          static PyObject *t_UnscentedEvolution_get__currentTime(t_UnscentedEvolution *self, void *data);
          static PyObject *t_UnscentedEvolution_get__processNoiseMatrix(t_UnscentedEvolution *self, void *data);
          static PyGetSetDef t_UnscentedEvolution__fields_[] = {
            DECLARE_GET_FIELD(t_UnscentedEvolution, currentStates),
            DECLARE_GET_FIELD(t_UnscentedEvolution, currentTime),
            DECLARE_GET_FIELD(t_UnscentedEvolution, processNoiseMatrix),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_UnscentedEvolution__methods_[] = {
            DECLARE_METHOD(t_UnscentedEvolution, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedEvolution, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnscentedEvolution, getCurrentStates, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedEvolution, getCurrentTime, METH_NOARGS),
            DECLARE_METHOD(t_UnscentedEvolution, getProcessNoiseMatrix, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnscentedEvolution)[] = {
            { Py_tp_methods, t_UnscentedEvolution__methods_ },
            { Py_tp_init, (void *) t_UnscentedEvolution_init_ },
            { Py_tp_getset, t_UnscentedEvolution__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnscentedEvolution)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(UnscentedEvolution, t_UnscentedEvolution, UnscentedEvolution);

          void t_UnscentedEvolution::install(PyObject *module)
          {
            installType(&PY_TYPE(UnscentedEvolution), &PY_TYPE_DEF(UnscentedEvolution), module, "UnscentedEvolution", 0);
          }

          void t_UnscentedEvolution::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedEvolution), "class_", make_descriptor(UnscentedEvolution::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedEvolution), "wrapfn_", make_descriptor(t_UnscentedEvolution::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedEvolution), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnscentedEvolution_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnscentedEvolution::initializeClass, 1)))
              return NULL;
            return t_UnscentedEvolution::wrap_Object(UnscentedEvolution(((t_UnscentedEvolution *) arg)->object.this$));
          }
          static PyObject *t_UnscentedEvolution_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnscentedEvolution::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_UnscentedEvolution_init_(t_UnscentedEvolution *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
            UnscentedEvolution object((jobject) NULL);

            if (!parseArgs(args, "D[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = UnscentedEvolution(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_UnscentedEvolution_getCurrentStates(t_UnscentedEvolution *self)
          {
            JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);
            OBJ_CALL(result = self->object.getCurrentStates());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
          }

          static PyObject *t_UnscentedEvolution_getCurrentTime(t_UnscentedEvolution *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCurrentTime());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_UnscentedEvolution_getProcessNoiseMatrix(t_UnscentedEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_UnscentedEvolution_get__currentStates(t_UnscentedEvolution *self, void *data)
          {
            JArray< ::org::hipparchus::linear::RealVector > value((jobject) NULL);
            OBJ_CALL(value = self->object.getCurrentStates());
            return JArray<jobject>(value.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
          }

          static PyObject *t_UnscentedEvolution_get__currentTime(t_UnscentedEvolution *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCurrentTime());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_UnscentedEvolution_get__processNoiseMatrix(t_UnscentedEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PropagatorsParallelizer.h"
#include "java/util/List.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PropagatorsParallelizer::class$ = NULL;
      jmethodID *PropagatorsParallelizer::mids$ = NULL;
      bool PropagatorsParallelizer::live$ = false;

      jclass PropagatorsParallelizer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PropagatorsParallelizer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_abc744124d2b6749] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/propagation/sampling/MultiSatStepHandler;)V");
          mids$[mid_init$_26b8daacb4055ae8] = env->getMethodID(cls, "<init>", "(Ljava/util/List;DLorg/orekit/propagation/sampling/MultiSatFixedStepHandler;)V");
          mids$[mid_getPropagators_e62d3bb06d56d7e3] = env->getMethodID(cls, "getPropagators", "()Ljava/util/List;");
          mids$[mid_propagate_50850a0bb1306a34] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PropagatorsParallelizer::PropagatorsParallelizer(const ::java::util::List & a0, const ::org::orekit::propagation::sampling::MultiSatStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_abc744124d2b6749, a0.this$, a1.this$)) {}

      PropagatorsParallelizer::PropagatorsParallelizer(const ::java::util::List & a0, jdouble a1, const ::org::orekit::propagation::sampling::MultiSatFixedStepHandler & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_26b8daacb4055ae8, a0.this$, a1, a2.this$)) {}

      ::java::util::List PropagatorsParallelizer::getPropagators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPropagators_e62d3bb06d56d7e3]));
      }

      ::java::util::List PropagatorsParallelizer::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_propagate_50850a0bb1306a34], a0.this$, a1.this$));
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
      static PyObject *t_PropagatorsParallelizer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PropagatorsParallelizer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PropagatorsParallelizer_init_(t_PropagatorsParallelizer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PropagatorsParallelizer_getPropagators(t_PropagatorsParallelizer *self);
      static PyObject *t_PropagatorsParallelizer_propagate(t_PropagatorsParallelizer *self, PyObject *args);
      static PyObject *t_PropagatorsParallelizer_get__propagators(t_PropagatorsParallelizer *self, void *data);
      static PyGetSetDef t_PropagatorsParallelizer__fields_[] = {
        DECLARE_GET_FIELD(t_PropagatorsParallelizer, propagators),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PropagatorsParallelizer__methods_[] = {
        DECLARE_METHOD(t_PropagatorsParallelizer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagatorsParallelizer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagatorsParallelizer, getPropagators, METH_NOARGS),
        DECLARE_METHOD(t_PropagatorsParallelizer, propagate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PropagatorsParallelizer)[] = {
        { Py_tp_methods, t_PropagatorsParallelizer__methods_ },
        { Py_tp_init, (void *) t_PropagatorsParallelizer_init_ },
        { Py_tp_getset, t_PropagatorsParallelizer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PropagatorsParallelizer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PropagatorsParallelizer, t_PropagatorsParallelizer, PropagatorsParallelizer);

      void t_PropagatorsParallelizer::install(PyObject *module)
      {
        installType(&PY_TYPE(PropagatorsParallelizer), &PY_TYPE_DEF(PropagatorsParallelizer), module, "PropagatorsParallelizer", 0);
      }

      void t_PropagatorsParallelizer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorsParallelizer), "class_", make_descriptor(PropagatorsParallelizer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorsParallelizer), "wrapfn_", make_descriptor(t_PropagatorsParallelizer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorsParallelizer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PropagatorsParallelizer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PropagatorsParallelizer::initializeClass, 1)))
          return NULL;
        return t_PropagatorsParallelizer::wrap_Object(PropagatorsParallelizer(((t_PropagatorsParallelizer *) arg)->object.this$));
      }
      static PyObject *t_PropagatorsParallelizer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PropagatorsParallelizer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PropagatorsParallelizer_init_(t_PropagatorsParallelizer *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::sampling::MultiSatStepHandler a1((jobject) NULL);
            PropagatorsParallelizer object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::propagation::sampling::MultiSatStepHandler::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
            {
              INT_CALL(object = PropagatorsParallelizer(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::propagation::sampling::MultiSatFixedStepHandler a2((jobject) NULL);
            PropagatorsParallelizer object((jobject) NULL);

            if (!parseArgs(args, "KDk", ::java::util::List::initializeClass, ::org::orekit::propagation::sampling::MultiSatFixedStepHandler::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
            {
              INT_CALL(object = PropagatorsParallelizer(a0, a1, a2));
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

      static PyObject *t_PropagatorsParallelizer_getPropagators(t_PropagatorsParallelizer *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPropagators());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(Propagator));
      }

      static PyObject *t_PropagatorsParallelizer_propagate(t_PropagatorsParallelizer *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.propagate(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", args);
        return NULL;
      }

      static PyObject *t_PropagatorsParallelizer_get__propagators(t_PropagatorsParallelizer *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPropagators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/AbstractEphemerisMessage.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *AbstractEphemerisMessage::class$ = NULL;
            jmethodID *AbstractEphemerisMessage::mids$ = NULL;
            bool AbstractEphemerisMessage::live$ = false;

            jclass AbstractEphemerisMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/AbstractEphemerisMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getEpochToc_c325492395d89b24] = env->getMethodID(cls, "getEpochToc", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getHealth_b74f83833fdad017] = env->getMethodID(cls, "getHealth", "()D");
                mids$[mid_getPRN_55546ef6a647f39b] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getX_b74f83833fdad017] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_b74f83833fdad017] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_b74f83833fdad017] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_b74f83833fdad017] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_b74f83833fdad017] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_b74f83833fdad017] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_b74f83833fdad017] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_b74f83833fdad017] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_b74f83833fdad017] = env->getMethodID(cls, "getZDotDot", "()D");
                mids$[mid_setDate_02135a6ef25adb4b] = env->getMethodID(cls, "setDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setEpochToc_02135a6ef25adb4b] = env->getMethodID(cls, "setEpochToc", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setHealth_8ba9fe7a847cecad] = env->getMethodID(cls, "setHealth", "(D)V");
                mids$[mid_setPRN_44ed599e93e8a30c] = env->getMethodID(cls, "setPRN", "(I)V");
                mids$[mid_setX_8ba9fe7a847cecad] = env->getMethodID(cls, "setX", "(D)V");
                mids$[mid_setXDot_8ba9fe7a847cecad] = env->getMethodID(cls, "setXDot", "(D)V");
                mids$[mid_setXDotDot_8ba9fe7a847cecad] = env->getMethodID(cls, "setXDotDot", "(D)V");
                mids$[mid_setY_8ba9fe7a847cecad] = env->getMethodID(cls, "setY", "(D)V");
                mids$[mid_setYDot_8ba9fe7a847cecad] = env->getMethodID(cls, "setYDot", "(D)V");
                mids$[mid_setYDotDot_8ba9fe7a847cecad] = env->getMethodID(cls, "setYDotDot", "(D)V");
                mids$[mid_setZ_8ba9fe7a847cecad] = env->getMethodID(cls, "setZ", "(D)V");
                mids$[mid_setZDot_8ba9fe7a847cecad] = env->getMethodID(cls, "setZDot", "(D)V");
                mids$[mid_setZDotDot_8ba9fe7a847cecad] = env->getMethodID(cls, "setZDotDot", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractEphemerisMessage::AbstractEphemerisMessage() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            ::org::orekit::time::AbsoluteDate AbstractEphemerisMessage::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
            }

            ::org::orekit::time::AbsoluteDate AbstractEphemerisMessage::getEpochToc() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochToc_c325492395d89b24]));
            }

            jdouble AbstractEphemerisMessage::getHealth() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHealth_b74f83833fdad017]);
            }

            jint AbstractEphemerisMessage::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_55546ef6a647f39b]);
            }

            jdouble AbstractEphemerisMessage::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_b74f83833fdad017]);
            }

            jdouble AbstractEphemerisMessage::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_b74f83833fdad017]);
            }

            jdouble AbstractEphemerisMessage::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_b74f83833fdad017]);
            }

            jdouble AbstractEphemerisMessage::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_b74f83833fdad017]);
            }

            jdouble AbstractEphemerisMessage::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_b74f83833fdad017]);
            }

            jdouble AbstractEphemerisMessage::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_b74f83833fdad017]);
            }

            jdouble AbstractEphemerisMessage::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_b74f83833fdad017]);
            }

            jdouble AbstractEphemerisMessage::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_b74f83833fdad017]);
            }

            jdouble AbstractEphemerisMessage::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_b74f83833fdad017]);
            }

            void AbstractEphemerisMessage::setDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDate_02135a6ef25adb4b], a0.this$);
            }

            void AbstractEphemerisMessage::setEpochToc(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpochToc_02135a6ef25adb4b], a0.this$);
            }

            void AbstractEphemerisMessage::setHealth(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_8ba9fe7a847cecad], a0);
            }

            void AbstractEphemerisMessage::setPRN(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPRN_44ed599e93e8a30c], a0);
            }

            void AbstractEphemerisMessage::setX(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setX_8ba9fe7a847cecad], a0);
            }

            void AbstractEphemerisMessage::setXDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setXDot_8ba9fe7a847cecad], a0);
            }

            void AbstractEphemerisMessage::setXDotDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setXDotDot_8ba9fe7a847cecad], a0);
            }

            void AbstractEphemerisMessage::setY(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setY_8ba9fe7a847cecad], a0);
            }

            void AbstractEphemerisMessage::setYDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setYDot_8ba9fe7a847cecad], a0);
            }

            void AbstractEphemerisMessage::setYDotDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setYDotDot_8ba9fe7a847cecad], a0);
            }

            void AbstractEphemerisMessage::setZ(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZ_8ba9fe7a847cecad], a0);
            }

            void AbstractEphemerisMessage::setZDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZDot_8ba9fe7a847cecad], a0);
            }

            void AbstractEphemerisMessage::setZDotDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZDotDot_8ba9fe7a847cecad], a0);
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
            static PyObject *t_AbstractEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractEphemerisMessage_init_(t_AbstractEphemerisMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractEphemerisMessage_getDate(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getEpochToc(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getHealth(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getPRN(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getX(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getXDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getXDotDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getY(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getYDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getYDotDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getZ(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getZDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_getZDotDot(t_AbstractEphemerisMessage *self);
            static PyObject *t_AbstractEphemerisMessage_setDate(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setEpochToc(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setHealth(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setPRN(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setX(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setXDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setXDotDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setY(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setYDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setYDotDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setZ(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setZDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_setZDotDot(t_AbstractEphemerisMessage *self, PyObject *arg);
            static PyObject *t_AbstractEphemerisMessage_get__date(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__date(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__epochToc(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__epochToc(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__health(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__health(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__pRN(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__pRN(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__x(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__x(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__xDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__xDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__xDotDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__xDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__y(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__y(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__yDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__yDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__yDotDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__yDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__z(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__z(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__zDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__zDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractEphemerisMessage_get__zDotDot(t_AbstractEphemerisMessage *self, void *data);
            static int t_AbstractEphemerisMessage_set__zDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_AbstractEphemerisMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, date),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, epochToc),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, health),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, pRN),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, x),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, xDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, xDotDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, y),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, yDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, yDotDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, z),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, zDot),
              DECLARE_GETSET_FIELD(t_AbstractEphemerisMessage, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractEphemerisMessage__methods_[] = {
              DECLARE_METHOD(t_AbstractEphemerisMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getEpochToc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getX, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getY, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getZ, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, getZDotDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setDate, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setEpochToc, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setHealth, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setPRN, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setX, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setXDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setXDotDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setY, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setYDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setYDotDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setZ, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setZDot, METH_O),
              DECLARE_METHOD(t_AbstractEphemerisMessage, setZDotDot, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractEphemerisMessage)[] = {
              { Py_tp_methods, t_AbstractEphemerisMessage__methods_ },
              { Py_tp_init, (void *) t_AbstractEphemerisMessage_init_ },
              { Py_tp_getset, t_AbstractEphemerisMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractEphemerisMessage)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractEphemerisMessage, t_AbstractEphemerisMessage, AbstractEphemerisMessage);

            void t_AbstractEphemerisMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractEphemerisMessage), &PY_TYPE_DEF(AbstractEphemerisMessage), module, "AbstractEphemerisMessage", 0);
            }

            void t_AbstractEphemerisMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEphemerisMessage), "class_", make_descriptor(AbstractEphemerisMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEphemerisMessage), "wrapfn_", make_descriptor(t_AbstractEphemerisMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEphemerisMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractEphemerisMessage::initializeClass, 1)))
                return NULL;
              return t_AbstractEphemerisMessage::wrap_Object(AbstractEphemerisMessage(((t_AbstractEphemerisMessage *) arg)->object.this$));
            }
            static PyObject *t_AbstractEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractEphemerisMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractEphemerisMessage_init_(t_AbstractEphemerisMessage *self, PyObject *args, PyObject *kwds)
            {
              AbstractEphemerisMessage object((jobject) NULL);

              INT_CALL(object = AbstractEphemerisMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_AbstractEphemerisMessage_getDate(t_AbstractEphemerisMessage *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractEphemerisMessage_getEpochToc(t_AbstractEphemerisMessage *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractEphemerisMessage_getHealth(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHealth());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getPRN(t_AbstractEphemerisMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getX(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getXDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getXDotDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getY(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getYDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getYDotDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getZ(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getZDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_getZDotDot(t_AbstractEphemerisMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractEphemerisMessage_setDate(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDate", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setEpochToc(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setEpochToc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEpochToc", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setHealth(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setPRN(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setPRN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPRN", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setX(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setX(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setX", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setXDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setXDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setXDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setXDotDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setXDotDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setXDotDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setY(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setY(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setY", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setYDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setYDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setYDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setYDotDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setYDotDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setYDotDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setZ(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZ(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZ", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setZDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_setZDotDot(t_AbstractEphemerisMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZDotDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZDotDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractEphemerisMessage_get__date(t_AbstractEphemerisMessage *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractEphemerisMessage_set__date(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "date", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__epochToc(t_AbstractEphemerisMessage *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractEphemerisMessage_set__epochToc(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setEpochToc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "epochToc", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__health(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHealth());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__health(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__pRN(t_AbstractEphemerisMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }
            static int t_AbstractEphemerisMessage_set__pRN(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setPRN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "pRN", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__x(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__x(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setX(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "x", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__xDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__xDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setXDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "xDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__xDotDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__xDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setXDotDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "xDotDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__y(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__y(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setY(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "y", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__yDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__yDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setYDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "yDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__yDotDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__yDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setYDotDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "yDotDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__z(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__z(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZ(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "z", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__zDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__zDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "zDot", arg);
              return -1;
            }

            static PyObject *t_AbstractEphemerisMessage_get__zDotDot(t_AbstractEphemerisMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractEphemerisMessage_set__zDotDot(t_AbstractEphemerisMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZDotDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "zDotDot", arg);
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
#include "org/hipparchus/ode/MultistepFieldIntegrator.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *MultistepFieldIntegrator::class$ = NULL;
      jmethodID *MultistepFieldIntegrator::mids$ = NULL;
      bool MultistepFieldIntegrator::live$ = false;

      jclass MultistepFieldIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/MultistepFieldIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxGrowth_b74f83833fdad017] = env->getMethodID(cls, "getMaxGrowth", "()D");
          mids$[mid_getMinReduction_b74f83833fdad017] = env->getMethodID(cls, "getMinReduction", "()D");
          mids$[mid_getNSteps_55546ef6a647f39b] = env->getMethodID(cls, "getNSteps", "()I");
          mids$[mid_getSafety_b74f83833fdad017] = env->getMethodID(cls, "getSafety", "()D");
          mids$[mid_getStarterIntegrator_a6eac7a4d7009da9] = env->getMethodID(cls, "getStarterIntegrator", "()Lorg/hipparchus/ode/FieldODEIntegrator;");
          mids$[mid_setMaxGrowth_8ba9fe7a847cecad] = env->getMethodID(cls, "setMaxGrowth", "(D)V");
          mids$[mid_setMinReduction_8ba9fe7a847cecad] = env->getMethodID(cls, "setMinReduction", "(D)V");
          mids$[mid_setSafety_8ba9fe7a847cecad] = env->getMethodID(cls, "setSafety", "(D)V");
          mids$[mid_setStarterIntegrator_ee02dd8d3f4ebd40] = env->getMethodID(cls, "setStarterIntegrator", "(Lorg/hipparchus/ode/FieldODEIntegrator;)V");
          mids$[mid_initializeHighOrderDerivatives_3c657d6a3baa084a] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_computeStepGrowShrinkFactor_04fd0666b613d2ab] = env->getMethodID(cls, "computeStepGrowShrinkFactor", "(D)D");
          mids$[mid_rescale_f2b4bfa0af1007e8] = env->getMethodID(cls, "rescale", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_start_60f474da9139a328] = env->getMethodID(cls, "start", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultistepFieldIntegrator::getMaxGrowth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxGrowth_b74f83833fdad017]);
      }

      jdouble MultistepFieldIntegrator::getMinReduction() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinReduction_b74f83833fdad017]);
      }

      jint MultistepFieldIntegrator::getNSteps() const
      {
        return env->callIntMethod(this$, mids$[mid_getNSteps_55546ef6a647f39b]);
      }

      jdouble MultistepFieldIntegrator::getSafety() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSafety_b74f83833fdad017]);
      }

      ::org::hipparchus::ode::FieldODEIntegrator MultistepFieldIntegrator::getStarterIntegrator() const
      {
        return ::org::hipparchus::ode::FieldODEIntegrator(env->callObjectMethod(this$, mids$[mid_getStarterIntegrator_a6eac7a4d7009da9]));
      }

      void MultistepFieldIntegrator::setMaxGrowth(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxGrowth_8ba9fe7a847cecad], a0);
      }

      void MultistepFieldIntegrator::setMinReduction(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMinReduction_8ba9fe7a847cecad], a0);
      }

      void MultistepFieldIntegrator::setSafety(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSafety_8ba9fe7a847cecad], a0);
      }

      void MultistepFieldIntegrator::setStarterIntegrator(const ::org::hipparchus::ode::FieldODEIntegrator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStarterIntegrator_ee02dd8d3f4ebd40], a0.this$);
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
      static PyObject *t_MultistepFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_of_(t_MultistepFieldIntegrator *self, PyObject *args);
      static PyObject *t_MultistepFieldIntegrator_getMaxGrowth(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getMinReduction(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getNSteps(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getSafety(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getStarterIntegrator(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_setMaxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_setMinReduction(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_setSafety(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_setStarterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_get__maxGrowth(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__maxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__minReduction(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__minReduction(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__nSteps(t_MultistepFieldIntegrator *self, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__safety(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__safety(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__starterIntegrator(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__starterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__parameters_(t_MultistepFieldIntegrator *self, void *data);
      static PyGetSetDef t_MultistepFieldIntegrator__fields_[] = {
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, maxGrowth),
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, minReduction),
        DECLARE_GET_FIELD(t_MultistepFieldIntegrator, nSteps),
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, safety),
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, starterIntegrator),
        DECLARE_GET_FIELD(t_MultistepFieldIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultistepFieldIntegrator__methods_[] = {
        DECLARE_METHOD(t_MultistepFieldIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getMaxGrowth, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getMinReduction, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getNSteps, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getSafety, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getStarterIntegrator, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setMaxGrowth, METH_O),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setMinReduction, METH_O),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setSafety, METH_O),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setStarterIntegrator, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultistepFieldIntegrator)[] = {
        { Py_tp_methods, t_MultistepFieldIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultistepFieldIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultistepFieldIntegrator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeFieldIntegrator),
        NULL
      };

      DEFINE_TYPE(MultistepFieldIntegrator, t_MultistepFieldIntegrator, MultistepFieldIntegrator);
      PyObject *t_MultistepFieldIntegrator::wrap_Object(const MultistepFieldIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MultistepFieldIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MultistepFieldIntegrator *self = (t_MultistepFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MultistepFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MultistepFieldIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MultistepFieldIntegrator *self = (t_MultistepFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MultistepFieldIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(MultistepFieldIntegrator), &PY_TYPE_DEF(MultistepFieldIntegrator), module, "MultistepFieldIntegrator", 0);
      }

      void t_MultistepFieldIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepFieldIntegrator), "class_", make_descriptor(MultistepFieldIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepFieldIntegrator), "wrapfn_", make_descriptor(t_MultistepFieldIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepFieldIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultistepFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultistepFieldIntegrator::initializeClass, 1)))
          return NULL;
        return t_MultistepFieldIntegrator::wrap_Object(MultistepFieldIntegrator(((t_MultistepFieldIntegrator *) arg)->object.this$));
      }
      static PyObject *t_MultistepFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultistepFieldIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultistepFieldIntegrator_of_(t_MultistepFieldIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MultistepFieldIntegrator_getMaxGrowth(t_MultistepFieldIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxGrowth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getMinReduction(t_MultistepFieldIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinReduction());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getNSteps(t_MultistepFieldIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNSteps());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getSafety(t_MultistepFieldIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSafety());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getStarterIntegrator(t_MultistepFieldIntegrator *self)
      {
        ::org::hipparchus::ode::FieldODEIntegrator result((jobject) NULL);
        OBJ_CALL(result = self->object.getStarterIntegrator());
        return ::org::hipparchus::ode::t_FieldODEIntegrator::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_MultistepFieldIntegrator_setMaxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMaxGrowth(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxGrowth", arg);
        return NULL;
      }

      static PyObject *t_MultistepFieldIntegrator_setMinReduction(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMinReduction(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMinReduction", arg);
        return NULL;
      }

      static PyObject *t_MultistepFieldIntegrator_setSafety(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setSafety(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSafety", arg);
        return NULL;
      }

      static PyObject *t_MultistepFieldIntegrator_setStarterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::FieldODEIntegrator a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_))
        {
          OBJ_CALL(self->object.setStarterIntegrator(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setStarterIntegrator", arg);
        return NULL;
      }
      static PyObject *t_MultistepFieldIntegrator_get__parameters_(t_MultistepFieldIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_MultistepFieldIntegrator_get__maxGrowth(t_MultistepFieldIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxGrowth());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepFieldIntegrator_set__maxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMaxGrowth(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxGrowth", arg);
        return -1;
      }

      static PyObject *t_MultistepFieldIntegrator_get__minReduction(t_MultistepFieldIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinReduction());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepFieldIntegrator_set__minReduction(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMinReduction(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "minReduction", arg);
        return -1;
      }

      static PyObject *t_MultistepFieldIntegrator_get__nSteps(t_MultistepFieldIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNSteps());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultistepFieldIntegrator_get__safety(t_MultistepFieldIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSafety());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepFieldIntegrator_set__safety(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setSafety(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "safety", arg);
        return -1;
      }

      static PyObject *t_MultistepFieldIntegrator_get__starterIntegrator(t_MultistepFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::FieldODEIntegrator value((jobject) NULL);
        OBJ_CALL(value = self->object.getStarterIntegrator());
        return ::org::hipparchus::ode::t_FieldODEIntegrator::wrap_Object(value);
      }
      static int t_MultistepFieldIntegrator_set__starterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          ::org::hipparchus::ode::FieldODEIntegrator value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &value))
          {
            INT_CALL(self->object.setStarterIntegrator(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "starterIntegrator", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CartesianCovariance::class$ = NULL;
            jmethodID *CartesianCovariance::mids$ = NULL;
            bool CartesianCovariance::live$ = false;

            jclass CartesianCovariance::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CartesianCovariance");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_80d0ce2c6f944208] = env->getMethodID(cls, "<init>", "(Ljava/util/function/Supplier;)V");
                mids$[mid_getCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "getCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getEpoch_c325492395d89b24] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getReferenceFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_setCovarianceMatrixEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "setCovarianceMatrixEntry", "(IID)V");
                mids$[mid_setEpoch_02135a6ef25adb4b] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setReferenceFrame_4755133c5c4c59be] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CartesianCovariance::CartesianCovariance(const ::java::util::function::Supplier & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_80d0ce2c6f944208, a0.this$)) {}

            ::org::hipparchus::linear::RealMatrix CartesianCovariance::getCovarianceMatrix() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_f77d745f2128c391]));
            }

            ::org::orekit::time::AbsoluteDate CartesianCovariance::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_c325492395d89b24]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade CartesianCovariance::getReferenceFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_69d8be1b6b0a1a94]));
            }

            void CartesianCovariance::setCovarianceMatrixEntry(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixEntry_94fe8d9ffeb50676], a0, a1, a2);
            }

            void CartesianCovariance::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpoch_02135a6ef25adb4b], a0.this$);
            }

            void CartesianCovariance::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setReferenceFrame_4755133c5c4c59be], a0.this$);
            }

            void CartesianCovariance::validate(jdouble a0) const
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
            static PyObject *t_CartesianCovariance_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CartesianCovariance_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CartesianCovariance_init_(t_CartesianCovariance *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CartesianCovariance_getCovarianceMatrix(t_CartesianCovariance *self);
            static PyObject *t_CartesianCovariance_getEpoch(t_CartesianCovariance *self);
            static PyObject *t_CartesianCovariance_getReferenceFrame(t_CartesianCovariance *self);
            static PyObject *t_CartesianCovariance_setCovarianceMatrixEntry(t_CartesianCovariance *self, PyObject *args);
            static PyObject *t_CartesianCovariance_setEpoch(t_CartesianCovariance *self, PyObject *arg);
            static PyObject *t_CartesianCovariance_setReferenceFrame(t_CartesianCovariance *self, PyObject *arg);
            static PyObject *t_CartesianCovariance_validate(t_CartesianCovariance *self, PyObject *args);
            static PyObject *t_CartesianCovariance_get__covarianceMatrix(t_CartesianCovariance *self, void *data);
            static PyObject *t_CartesianCovariance_get__epoch(t_CartesianCovariance *self, void *data);
            static int t_CartesianCovariance_set__epoch(t_CartesianCovariance *self, PyObject *arg, void *data);
            static PyObject *t_CartesianCovariance_get__referenceFrame(t_CartesianCovariance *self, void *data);
            static int t_CartesianCovariance_set__referenceFrame(t_CartesianCovariance *self, PyObject *arg, void *data);
            static PyGetSetDef t_CartesianCovariance__fields_[] = {
              DECLARE_GET_FIELD(t_CartesianCovariance, covarianceMatrix),
              DECLARE_GETSET_FIELD(t_CartesianCovariance, epoch),
              DECLARE_GETSET_FIELD(t_CartesianCovariance, referenceFrame),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CartesianCovariance__methods_[] = {
              DECLARE_METHOD(t_CartesianCovariance, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovariance, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovariance, getCovarianceMatrix, METH_NOARGS),
              DECLARE_METHOD(t_CartesianCovariance, getEpoch, METH_NOARGS),
              DECLARE_METHOD(t_CartesianCovariance, getReferenceFrame, METH_NOARGS),
              DECLARE_METHOD(t_CartesianCovariance, setCovarianceMatrixEntry, METH_VARARGS),
              DECLARE_METHOD(t_CartesianCovariance, setEpoch, METH_O),
              DECLARE_METHOD(t_CartesianCovariance, setReferenceFrame, METH_O),
              DECLARE_METHOD(t_CartesianCovariance, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CartesianCovariance)[] = {
              { Py_tp_methods, t_CartesianCovariance__methods_ },
              { Py_tp_init, (void *) t_CartesianCovariance_init_ },
              { Py_tp_getset, t_CartesianCovariance__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CartesianCovariance)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(CartesianCovariance, t_CartesianCovariance, CartesianCovariance);

            void t_CartesianCovariance::install(PyObject *module)
            {
              installType(&PY_TYPE(CartesianCovariance), &PY_TYPE_DEF(CartesianCovariance), module, "CartesianCovariance", 0);
            }

            void t_CartesianCovariance::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovariance), "class_", make_descriptor(CartesianCovariance::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovariance), "wrapfn_", make_descriptor(t_CartesianCovariance::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovariance), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CartesianCovariance_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CartesianCovariance::initializeClass, 1)))
                return NULL;
              return t_CartesianCovariance::wrap_Object(CartesianCovariance(((t_CartesianCovariance *) arg)->object.this$));
            }
            static PyObject *t_CartesianCovariance_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CartesianCovariance::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CartesianCovariance_init_(t_CartesianCovariance *self, PyObject *args, PyObject *kwds)
            {
              ::java::util::function::Supplier a0((jobject) NULL);
              PyTypeObject **p0;
              CartesianCovariance object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::function::Supplier::initializeClass, &a0, &p0, ::java::util::function::t_Supplier::parameters_))
              {
                INT_CALL(object = CartesianCovariance(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CartesianCovariance_getCovarianceMatrix(t_CartesianCovariance *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_CartesianCovariance_getEpoch(t_CartesianCovariance *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CartesianCovariance_getReferenceFrame(t_CartesianCovariance *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_CartesianCovariance_setCovarianceMatrixEntry(t_CartesianCovariance *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "IID", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.setCovarianceMatrixEntry(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixEntry", args);
              return NULL;
            }

            static PyObject *t_CartesianCovariance_setEpoch(t_CartesianCovariance *self, PyObject *arg)
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

            static PyObject *t_CartesianCovariance_setReferenceFrame(t_CartesianCovariance *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setReferenceFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setReferenceFrame", arg);
              return NULL;
            }

            static PyObject *t_CartesianCovariance_validate(t_CartesianCovariance *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CartesianCovariance), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_CartesianCovariance_get__covarianceMatrix(t_CartesianCovariance *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovarianceMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }

            static PyObject *t_CartesianCovariance_get__epoch(t_CartesianCovariance *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CartesianCovariance_set__epoch(t_CartesianCovariance *self, PyObject *arg, void *data)
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

            static PyObject *t_CartesianCovariance_get__referenceFrame(t_CartesianCovariance *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getReferenceFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_CartesianCovariance_set__referenceFrame(t_CartesianCovariance *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setReferenceFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "referenceFrame", arg);
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
#include "org/orekit/forces/Panel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *Panel::class$ = NULL;
      jmethodID *Panel::mids$ = NULL;
      bool Panel::live$ = false;

      jclass Panel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/Panel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAbsorption_b74f83833fdad017] = env->getMethodID(cls, "getAbsorption", "()D");
          mids$[mid_getArea_b74f83833fdad017] = env->getMethodID(cls, "getArea", "()D");
          mids$[mid_getDrag_b74f83833fdad017] = env->getMethodID(cls, "getDrag", "()D");
          mids$[mid_getLiftRatio_b74f83833fdad017] = env->getMethodID(cls, "getLiftRatio", "()D");
          mids$[mid_getNormal_de3c04262e60a5b3] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_9019a5b32b11453a] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getReflection_b74f83833fdad017] = env->getMethodID(cls, "getReflection", "()D");
          mids$[mid_isDoubleSided_9ab94ac1dc23b105] = env->getMethodID(cls, "isDoubleSided", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Panel::getAbsorption() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAbsorption_b74f83833fdad017]);
      }

      jdouble Panel::getArea() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getArea_b74f83833fdad017]);
      }

      jdouble Panel::getDrag() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDrag_b74f83833fdad017]);
      }

      jdouble Panel::getLiftRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLiftRatio_b74f83833fdad017]);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Panel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_de3c04262e60a5b3], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Panel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_9019a5b32b11453a], a0.this$));
      }

      jdouble Panel::getReflection() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReflection_b74f83833fdad017]);
      }

      jboolean Panel::isDoubleSided() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isDoubleSided_9ab94ac1dc23b105]);
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
      static PyObject *t_Panel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Panel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Panel_getAbsorption(t_Panel *self);
      static PyObject *t_Panel_getArea(t_Panel *self);
      static PyObject *t_Panel_getDrag(t_Panel *self);
      static PyObject *t_Panel_getLiftRatio(t_Panel *self);
      static PyObject *t_Panel_getNormal(t_Panel *self, PyObject *args);
      static PyObject *t_Panel_getReflection(t_Panel *self);
      static PyObject *t_Panel_isDoubleSided(t_Panel *self);
      static PyObject *t_Panel_get__absorption(t_Panel *self, void *data);
      static PyObject *t_Panel_get__area(t_Panel *self, void *data);
      static PyObject *t_Panel_get__doubleSided(t_Panel *self, void *data);
      static PyObject *t_Panel_get__drag(t_Panel *self, void *data);
      static PyObject *t_Panel_get__liftRatio(t_Panel *self, void *data);
      static PyObject *t_Panel_get__reflection(t_Panel *self, void *data);
      static PyGetSetDef t_Panel__fields_[] = {
        DECLARE_GET_FIELD(t_Panel, absorption),
        DECLARE_GET_FIELD(t_Panel, area),
        DECLARE_GET_FIELD(t_Panel, doubleSided),
        DECLARE_GET_FIELD(t_Panel, drag),
        DECLARE_GET_FIELD(t_Panel, liftRatio),
        DECLARE_GET_FIELD(t_Panel, reflection),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Panel__methods_[] = {
        DECLARE_METHOD(t_Panel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Panel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Panel, getAbsorption, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getArea, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getDrag, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getLiftRatio, METH_NOARGS),
        DECLARE_METHOD(t_Panel, getNormal, METH_VARARGS),
        DECLARE_METHOD(t_Panel, getReflection, METH_NOARGS),
        DECLARE_METHOD(t_Panel, isDoubleSided, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Panel)[] = {
        { Py_tp_methods, t_Panel__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Panel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Panel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Panel, t_Panel, Panel);

      void t_Panel::install(PyObject *module)
      {
        installType(&PY_TYPE(Panel), &PY_TYPE_DEF(Panel), module, "Panel", 0);
      }

      void t_Panel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Panel), "class_", make_descriptor(Panel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Panel), "wrapfn_", make_descriptor(t_Panel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Panel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Panel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Panel::initializeClass, 1)))
          return NULL;
        return t_Panel::wrap_Object(Panel(((t_Panel *) arg)->object.this$));
      }
      static PyObject *t_Panel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Panel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Panel_getAbsorption(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAbsorption());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getArea(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getArea());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getDrag(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDrag());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getLiftRatio(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLiftRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_getNormal(t_Panel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNormal", args);
        return NULL;
      }

      static PyObject *t_Panel_getReflection(t_Panel *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReflection());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Panel_isDoubleSided(t_Panel *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isDoubleSided());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Panel_get__absorption(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAbsorption());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__area(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getArea());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__doubleSided(t_Panel *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isDoubleSided());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Panel_get__drag(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDrag());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__liftRatio(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLiftRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Panel_get__reflection(t_Panel *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReflection());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
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
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getFrequencyNumber_55546ef6a647f39b] = env->getMethodID(cls, "getFrequencyNumber", "()I");
                mids$[mid_getGammaN_b74f83833fdad017] = env->getMethodID(cls, "getGammaN", "()D");
                mids$[mid_getGroupDelayDifference_b74f83833fdad017] = env->getMethodID(cls, "getGroupDelayDifference", "()D");
                mids$[mid_getHealthFlags_55546ef6a647f39b] = env->getMethodID(cls, "getHealthFlags", "()I");
                mids$[mid_getPropagator_225bbb183dcbf70d] = env->getMethodID(cls, "getPropagator", "(D)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
                mids$[mid_getPropagator_542c04c0314b4776] = env->getMethodID(cls, "getPropagator", "(DLorg/orekit/data/DataContext;)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
                mids$[mid_getPropagator_2a89d49045963791] = env->getMethodID(cls, "getPropagator", "(DLorg/orekit/data/DataContext;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;D)Lorg/orekit/propagation/numerical/GLONASSNumericalPropagator;");
                mids$[mid_getStatusFlags_55546ef6a647f39b] = env->getMethodID(cls, "getStatusFlags", "()I");
                mids$[mid_getTN_b74f83833fdad017] = env->getMethodID(cls, "getTN", "()D");
                mids$[mid_getTime_b74f83833fdad017] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getURA_b74f83833fdad017] = env->getMethodID(cls, "getURA", "()D");
                mids$[mid_setFrequencyNumber_8ba9fe7a847cecad] = env->getMethodID(cls, "setFrequencyNumber", "(D)V");
                mids$[mid_setGammaN_8ba9fe7a847cecad] = env->getMethodID(cls, "setGammaN", "(D)V");
                mids$[mid_setGroupDelayDifference_8ba9fe7a847cecad] = env->getMethodID(cls, "setGroupDelayDifference", "(D)V");
                mids$[mid_setHealthFlags_8ba9fe7a847cecad] = env->getMethodID(cls, "setHealthFlags", "(D)V");
                mids$[mid_setStatusFlags_8ba9fe7a847cecad] = env->getMethodID(cls, "setStatusFlags", "(D)V");
                mids$[mid_setTauN_8ba9fe7a847cecad] = env->getMethodID(cls, "setTauN", "(D)V");
                mids$[mid_setTime_8ba9fe7a847cecad] = env->getMethodID(cls, "setTime", "(D)V");
                mids$[mid_setURA_8ba9fe7a847cecad] = env->getMethodID(cls, "setURA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GLONASSNavigationMessage::GLONASSNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            jint GLONASSNavigationMessage::getFrequencyNumber() const
            {
              return env->callIntMethod(this$, mids$[mid_getFrequencyNumber_55546ef6a647f39b]);
            }

            jdouble GLONASSNavigationMessage::getGammaN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGammaN_b74f83833fdad017]);
            }

            jdouble GLONASSNavigationMessage::getGroupDelayDifference() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGroupDelayDifference_b74f83833fdad017]);
            }

            jint GLONASSNavigationMessage::getHealthFlags() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealthFlags_55546ef6a647f39b]);
            }

            ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNavigationMessage::getPropagator(jdouble a0) const
            {
              return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_225bbb183dcbf70d], a0));
            }

            ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNavigationMessage::getPropagator(jdouble a0, const ::org::orekit::data::DataContext & a1) const
            {
              return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_542c04c0314b4776], a0, a1.this$));
            }

            ::org::orekit::propagation::numerical::GLONASSNumericalPropagator GLONASSNavigationMessage::getPropagator(jdouble a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::orekit::frames::Frame & a3, jdouble a4) const
            {
              return ::org::orekit::propagation::numerical::GLONASSNumericalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_2a89d49045963791], a0, a1.this$, a2.this$, a3.this$, a4));
            }

            jint GLONASSNavigationMessage::getStatusFlags() const
            {
              return env->callIntMethod(this$, mids$[mid_getStatusFlags_55546ef6a647f39b]);
            }

            jdouble GLONASSNavigationMessage::getTN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTN_b74f83833fdad017]);
            }

            jdouble GLONASSNavigationMessage::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_b74f83833fdad017]);
            }

            jdouble GLONASSNavigationMessage::getURA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getURA_b74f83833fdad017]);
            }

            void GLONASSNavigationMessage::setFrequencyNumber(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrequencyNumber_8ba9fe7a847cecad], a0);
            }

            void GLONASSNavigationMessage::setGammaN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setGammaN_8ba9fe7a847cecad], a0);
            }

            void GLONASSNavigationMessage::setGroupDelayDifference(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setGroupDelayDifference_8ba9fe7a847cecad], a0);
            }

            void GLONASSNavigationMessage::setHealthFlags(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealthFlags_8ba9fe7a847cecad], a0);
            }

            void GLONASSNavigationMessage::setStatusFlags(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStatusFlags_8ba9fe7a847cecad], a0);
            }

            void GLONASSNavigationMessage::setTauN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTauN_8ba9fe7a847cecad], a0);
            }

            void GLONASSNavigationMessage::setTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTime_8ba9fe7a847cecad], a0);
            }

            void GLONASSNavigationMessage::setURA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_8ba9fe7a847cecad], a0);
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
#include "org/hipparchus/random/Well44497a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well44497a::class$ = NULL;
      jmethodID *Well44497a::mids$ = NULL;
      bool Well44497a::live$ = false;

      jclass Well44497a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well44497a");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_86a2769cb881d388] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3d7dd2314a0dd456] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_55546ef6a647f39b] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well44497a::Well44497a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      Well44497a::Well44497a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_86a2769cb881d388, a0.this$)) {}

      Well44497a::Well44497a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      Well44497a::Well44497a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3d7dd2314a0dd456, a0)) {}

      jint Well44497a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_55546ef6a647f39b]);
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
      static PyObject *t_Well44497a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well44497a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well44497a_init_(t_Well44497a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well44497a_nextInt(t_Well44497a *self, PyObject *args);

      static PyMethodDef t_Well44497a__methods_[] = {
        DECLARE_METHOD(t_Well44497a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well44497a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well44497a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well44497a)[] = {
        { Py_tp_methods, t_Well44497a__methods_ },
        { Py_tp_init, (void *) t_Well44497a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well44497a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well44497a, t_Well44497a, Well44497a);

      void t_Well44497a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well44497a), &PY_TYPE_DEF(Well44497a), module, "Well44497a", 0);
      }

      void t_Well44497a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497a), "class_", make_descriptor(Well44497a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497a), "wrapfn_", make_descriptor(t_Well44497a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well44497a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well44497a::initializeClass, 1)))
          return NULL;
        return t_Well44497a::wrap_Object(Well44497a(((t_Well44497a *) arg)->object.this$));
      }
      static PyObject *t_Well44497a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well44497a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well44497a_init_(t_Well44497a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well44497a object((jobject) NULL);

            INT_CALL(object = Well44497a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well44497a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well44497a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well44497a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well44497a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well44497a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well44497a(a0));
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

      static PyObject *t_Well44497a_nextInt(t_Well44497a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well44497a), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *MeasurementType::class$ = NULL;
      jmethodID *MeasurementType::mids$ = NULL;
      bool MeasurementType::live$ = false;
      MeasurementType *MeasurementType::CARRIER_PHASE = NULL;
      MeasurementType *MeasurementType::COMBINED_RANGE_PHASE = NULL;
      MeasurementType *MeasurementType::DOPPLER = NULL;
      MeasurementType *MeasurementType::PSEUDO_RANGE = NULL;
      MeasurementType *MeasurementType::SIGNAL_STRENGTH = NULL;

      jclass MeasurementType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/MeasurementType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_0b2563d63aef9622] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/MeasurementType;");
          mids$[mid_values_954cb2d0a1dfac84] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/MeasurementType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CARRIER_PHASE = new MeasurementType(env->getStaticObjectField(cls, "CARRIER_PHASE", "Lorg/orekit/gnss/MeasurementType;"));
          COMBINED_RANGE_PHASE = new MeasurementType(env->getStaticObjectField(cls, "COMBINED_RANGE_PHASE", "Lorg/orekit/gnss/MeasurementType;"));
          DOPPLER = new MeasurementType(env->getStaticObjectField(cls, "DOPPLER", "Lorg/orekit/gnss/MeasurementType;"));
          PSEUDO_RANGE = new MeasurementType(env->getStaticObjectField(cls, "PSEUDO_RANGE", "Lorg/orekit/gnss/MeasurementType;"));
          SIGNAL_STRENGTH = new MeasurementType(env->getStaticObjectField(cls, "SIGNAL_STRENGTH", "Lorg/orekit/gnss/MeasurementType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MeasurementType MeasurementType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return MeasurementType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0b2563d63aef9622], a0.this$));
      }

      JArray< MeasurementType > MeasurementType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< MeasurementType >(env->callStaticObjectMethod(cls, mids$[mid_values_954cb2d0a1dfac84]));
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
      static PyObject *t_MeasurementType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MeasurementType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MeasurementType_of_(t_MeasurementType *self, PyObject *args);
      static PyObject *t_MeasurementType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_MeasurementType_values(PyTypeObject *type);
      static PyObject *t_MeasurementType_get__parameters_(t_MeasurementType *self, void *data);
      static PyGetSetDef t_MeasurementType__fields_[] = {
        DECLARE_GET_FIELD(t_MeasurementType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MeasurementType__methods_[] = {
        DECLARE_METHOD(t_MeasurementType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MeasurementType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MeasurementType, of_, METH_VARARGS),
        DECLARE_METHOD(t_MeasurementType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MeasurementType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MeasurementType)[] = {
        { Py_tp_methods, t_MeasurementType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MeasurementType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MeasurementType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(MeasurementType, t_MeasurementType, MeasurementType);
      PyObject *t_MeasurementType::wrap_Object(const MeasurementType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MeasurementType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MeasurementType *self = (t_MeasurementType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MeasurementType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MeasurementType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MeasurementType *self = (t_MeasurementType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MeasurementType::install(PyObject *module)
      {
        installType(&PY_TYPE(MeasurementType), &PY_TYPE_DEF(MeasurementType), module, "MeasurementType", 0);
      }

      void t_MeasurementType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "class_", make_descriptor(MeasurementType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "wrapfn_", make_descriptor(t_MeasurementType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "boxfn_", make_descriptor(boxObject));
        env->getClass(MeasurementType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "CARRIER_PHASE", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::CARRIER_PHASE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "COMBINED_RANGE_PHASE", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::COMBINED_RANGE_PHASE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "DOPPLER", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::DOPPLER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "PSEUDO_RANGE", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::PSEUDO_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementType), "SIGNAL_STRENGTH", make_descriptor(t_MeasurementType::wrap_Object(*MeasurementType::SIGNAL_STRENGTH)));
      }

      static PyObject *t_MeasurementType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MeasurementType::initializeClass, 1)))
          return NULL;
        return t_MeasurementType::wrap_Object(MeasurementType(((t_MeasurementType *) arg)->object.this$));
      }
      static PyObject *t_MeasurementType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MeasurementType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MeasurementType_of_(t_MeasurementType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MeasurementType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        MeasurementType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::MeasurementType::valueOf(a0));
          return t_MeasurementType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_MeasurementType_values(PyTypeObject *type)
      {
        JArray< MeasurementType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::MeasurementType::values());
        return JArray<jobject>(result.this$).wrap(t_MeasurementType::wrap_jobject);
      }
      static PyObject *t_MeasurementType_get__parameters_(t_MeasurementType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
